/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LogicalAccumulatorModel.c
 *
 * Code generated for Simulink model 'LogicalAccumulatorModel'.
 *
 * Model version                  : 1.55
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Wed Oct 28 03:34:48 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "LogicalAccumulatorModel.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void LogicalAccumulatorModel_step(void)
{
  real_T rtb_Product[90];
  real_T rtb_Amphoursintegration_pc;
  real_T rtb_SecondsConv;
  real_T rtb_Subtract_cri;
  real_T rtb_Subtract_im;
  real_T rtb_Subtract_pt;
  real_T rtb_Subtract_b;
  real_T rtb_Subtract_lul;
  real_T rtb_Subtract_d;
  real_T rtb_Subtract_o;
  real_T rtb_Subtract_nj;
  real_T rtb_Subtract_ci;
  real_T rtb_Subtract_jh;
  real_T rtb_Subtract_ob;
  real_T rtb_Subtract_j;
  real_T rtb_Subtract_em;
  real_T rtb_Subtract_prv;
  real_T rtb_Subtract_mwa;
  real_T rtb_Subtract_fc;
  real_T rtb_Subtract_isf;
  real_T rtb_Subtract_i;
  real_T rtb_Subtract_l;
  real_T rtb_Subtract_l4;
  real_T rtb_Subtract_a;
  real_T rtb_Subtract_g;
  real_T rtb_Subtract_pl;
  real_T rtb_Subtract_hw;
  real_T rtb_Subtract_a5;
  real_T rtb_Subtract_klw;
  real_T rtb_Subtract_l0;
  real_T rtb_Subtract_is;
  real_T rtb_Subtract_k;
  real_T rtb_Subtract_p;
  real_T rtb_Subtract_o0;
  real_T rtb_Subtract_f1;
  real_T rtb_Subtract_h;
  real_T rtb_Subtract_ee;
  real_T rtb_Subtract_m;
  real_T rtb_Subtract_kw;
  real_T rtb_Subtract_hpb;
  real_T rtb_Subtract_d5;
  real_T rtb_Subtract_ar2;
  real_T rtb_Subtract_ke;
  real_T rtb_Subtract_bp;
  real_T rtb_Subtract_dc;
  real_T rtb_Subtract_jo;
  real_T rtb_Subtract_f4;
  real_T rtb_Subtract_pmv;
  real_T rtb_Subtract_fw;
  real_T rtb_Subtract_hb;
  real_T rtb_Subtract_px;
  real_T rtb_Subtract_pw;
  real_T rtb_Subtract_fp;
  real_T rtb_Subtract_ae;
  real_T rtb_Subtract_ay;
  real_T rtb_Subtract_oa;
  real_T rtb_Subtract_c;
  real_T rtb_Subtract_gd;
  real_T rtb_Subtract_ny;
  real_T rtb_Subtract_hx;
  real_T rtb_Subtract_jq;
  real_T rtb_Subtract_czq;
  real_T rtb_Subtract_fg;
  real_T rtb_Subtract_li;
  real_T rtb_Subtract_gvo;
  real_T rtb_Subtract_eh;
  real_T rtb_Subtract_k5;
  real_T rtb_Subtract_n;
  real_T rtb_Subtract_ie;
  real_T rtb_Subtract_dq;
  real_T rtb_Subtract_kh;
  real_T rtb_Subtract_e;
  real_T rtb_Subtract_bh;
  real_T rtb_Subtract_dve;
  real_T rtb_Subtract_jk;
  real_T rtb_Subtract_jt;
  real_T rtb_Subtract_kk;
  real_T rtb_Subtract_my;
  real_T rtb_Subtract_cx;
  real_T rtb_Subtract_e2;
  real_T rtb_Subtract_nr;
  real_T rtb_Subtract_aq;
  real_T rtb_Subtract_cad;
  real_T rtb_Subtract_lz;
  real_T rtb_Subtract_ov;
  real_T rtb_Subtract_eb;
  real_T rtb_Subtract_p3;
  real_T rtb_Subtract_aw;
  real_T rtb_Subtract_pp;
  real_T rtb_Subtract_iq;
  real_T rtb_Subtract_b0;
  real_T rtb_Subtract_hwl;
  real_T rtb_Polynomial;
  real_T rtb_Polynomial_pb;
  real_T rtb_Polynomial_i5c;
  real_T rtb_Polynomial_i3;
  real_T rtb_Polynomial_l;
  real_T rtb_Polynomial_fo;
  real_T rtb_Polynomial_g5;
  real_T rtb_Polynomial_g3;
  real_T rtb_Polynomial_h;
  real_T rtb_Polynomial_oy;
  real_T rtb_Polynomial_l0;
  real_T rtb_Polynomial_cm;
  real_T rtb_Polynomial_ls;
  real_T rtb_Polynomial_c;
  real_T rtb_Polynomial_poo;
  real_T rtb_Polynomial_l1;
  real_T rtb_Polynomial_a;
  real_T rtb_Polynomial_jm;
  real_T rtb_Polynomial_b;
  real_T rtb_Polynomial_e2;
  real_T rtb_Polynomial_ine;
  real_T rtb_Polynomial_o;
  real_T rtb_Polynomial_e;
  real_T rtb_Polynomial_ai;
  real_T rtb_Polynomial_n0;
  real_T rtb_Polynomial_f;
  real_T rtb_Polynomial_bw;
  real_T rtb_Polynomial_g;
  real_T rtb_Polynomial_i4;
  real_T rtb_Polynomial_ct;
  real_T rtb_Polynomial_bq;
  real_T rtb_Polynomial_n;
  real_T rtb_Polynomial_ba;
  real_T rtb_Polynomial_i;
  real_T rtb_Polynomial_by;
  real_T rtb_Polynomial_pt;
  real_T rtb_Polynomial_ad;
  real_T rtb_Polynomial_hb;
  real_T rtb_Polynomial_ap;
  real_T rtb_Polynomial_ogu;
  real_T rtb_Polynomial_er;
  real_T rtb_Polynomial_ll;
  real_T rtb_Polynomial_fl;
  real_T rtb_Polynomial_ie;
  real_T rtb_Polynomial_p;
  real_T rtb_Polynomial_if;
  real_T rtb_Polynomial_p1;
  real_T rtb_Polynomial_m;
  real_T rtb_Polynomial_jr;
  real_T rtb_Polynomial_nt;
  real_T rtb_Polynomial_pn;
  real_T rtb_Polynomial_aio;
  real_T rtb_Polynomial_hl;
  real_T rtb_Polynomial_av;
  real_T rtb_Polynomial_fn;
  real_T rtb_Polynomial_hd;
  real_T rtb_Polynomial_gj;
  real_T rtb_Polynomial_ib;
  real_T rtb_Polynomial_p4;
  real_T rtb_Polynomial_db;
  real_T rtb_Polynomial_dh;
  real_T rtb_Polynomial_i3k;
  real_T rtb_Polynomial_c2;
  real_T rtb_Polynomial_oi;
  real_T rtb_Polynomial_i1;
  real_T rtb_Polynomial_fpp;
  real_T rtb_Polynomial_d;
  real_T rtb_Polynomial_fx;
  real_T rtb_Polynomial_a1;
  real_T rtb_Polynomial_hs;
  real_T rtb_Polynomial_hr;
  real_T rtb_Polynomial_df;
  real_T rtb_Polynomial_b0b;
  real_T rtb_Polynomial_nd;
  real_T rtb_Polynomial_go;
  real_T rtb_Polynomial_jb;
  real_T rtb_Polynomial_ox;
  real_T rtb_Polynomial_mv;
  real_T rtb_Polynomial_aq;
  real_T rtb_Polynomial_de;
  real_T rtb_Polynomial_ml;
  real_T rtb_Polynomial_j;
  real_T rtb_Polynomial_o0;
  real_T rtb_Polynomial_oco;
  real_T rtb_Polynomial_ny;
  real_T rtb_Polynomial_oh;
  real_T rtb_Polynomial_ic;
  real_T rtb_Polynomial_gw;
  real_T rtb_Polynomial_gq;
  real_T rtb_Add1;
  real_T rtb_Add1_lh;
  real_T rtb_Add1_le;
  real_T rtb_Add1_oj;
  real_T rtb_Add1_ea;
  real_T rtb_Add1_dy;
  real_T rtb_Add1_gl;
  real_T rtb_Add1_egy;
  real_T rtb_Add1_c;
  real_T rtb_Add1_ke;
  real_T rtb_Add1_i;
  real_T rtb_Add1_l;
  real_T rtb_Add1_cq;
  real_T rtb_Add1_e4;
  real_T rtb_Add1_h;
  real_T rtb_Add1_os;
  real_T rtb_Add1_g;
  real_T rtb_Add1_gz;
  real_T rtb_Add1_dw;
  real_T rtb_Add1_b0;
  real_T rtb_Add1_n;
  real_T rtb_Add1_j3;
  real_T rtb_Add1_e;
  real_T rtb_Add1_du;
  real_T rtb_Add1_brl;
  real_T rtb_Add1_f;
  real_T rtb_Add1_cz;
  real_T rtb_Add1_m;
  real_T rtb_Add1_p;
  real_T rtb_Add1_jy;
  real_T rtb_Add1_da;
  real_T rtb_Add1_mu;
  real_T rtb_Add1_o;
  real_T rtb_Add1_on;
  real_T rtb_Add1_fz;
  real_T rtb_Add1_b;
  real_T rtb_Add1_ca;
  real_T rtb_Add1_m0;
  real_T rtb_Add1_bl;
  real_T rtb_Add1_cu;
  real_T rtb_Add1_g4;
  real_T rtb_Add1_eq;
  real_T rtb_Add1_nn;
  real_T rtb_Add1_d;
  real_T rtb_Add1_ix;
  real_T rtb_Add1_gv;
  real_T rtb_Add1_ha;
  real_T rtb_Add1_oe;
  real_T rtb_Add1_h1;
  real_T rtb_Add1_nj;
  real_T rtb_Add1_pc;
  real_T rtb_Add1_a;
  real_T rtb_Add1_m4;
  real_T rtb_Add1_fxv;
  real_T rtb_Add1_en;
  real_T rtb_Add1_a4;
  real_T rtb_Add1_j;
  real_T rtb_Add1_l0;
  real_T rtb_Add1_e3;
  real_T rtb_Add1_be;
  real_T rtb_Add1_ec;
  real_T rtb_Add1_bnx;
  real_T rtb_Add1_av;
  real_T rtb_Add1_gd;
  real_T rtb_Add1_pl;
  real_T rtb_Add1_m2;
  real_T rtb_Add1_k;
  real_T rtb_Add1_dxo;
  real_T rtb_Add1_m5;
  real_T rtb_Add1_pdt;
  real_T rtb_Add1_bhu;
  real_T rtb_Add1_ko;
  real_T rtb_Add1_af;
  real_T rtb_Add1_iv;
  real_T rtb_Add1_ah;
  real_T rtb_Add1_hw;
  real_T rtb_Add1_c2;
  real_T rtb_Add1_cm;
  real_T rtb_Add1_o4;
  real_T rtb_Add1_l4;
  real_T rtb_Add1_jz;
  real_T rtb_Add1_je1;
  real_T rtb_Add1_bj;
  real_T rtb_Add1_j0;
  real_T rtb_Add1_lj;
  real_T rtb_Add1_hk;
  real_T rtb_Add1_lm;
  real_T rtb_Add1_gk;
  real_T rtb_Add1_l2;
  real_T rtb_Add1_iu1;
  int32_T i;

  /* Product: '<Root>/Product' incorporates:
   *  Inport: '<Root>/LoadIn'
   */
  for (i = 0; i < 90; i++) {
    rtb_Product[i] = rtU.LoadIn;
  }

  /* End of Product: '<Root>/Product' */

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/BalanceCurrent'
   *  Constant: '<S2>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[0] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S2>/Switch' */

  /* Sum: '<S2>/Total load current draw' */
  rtb_Amphoursintegration_pc = rtb_Product[0] + rtb_Add1_iu1;

  /* Product: '<S2>/SecondsConv' incorporates:
   *  Constant: '<S2>/HoursToSecondsConv'
   */
  rtb_SecondsConv = rtb_Amphoursintegration_pc * 0.00027777777777777778;

  /* Abs: '<S2>/Abs' */
  rtb_Amphoursintegration_pc = fabs(rtb_Amphoursintegration_pc);

  /* Polyval: '<S2>/Polynomial' incorporates:
   *  Constant: '<S2>/SOCOffset'
   *  DiscreteIntegrator: '<S2>/Amp hours integration'
   *  Sum: '<S2>/Add1'
   */
  rtb_Polynomial = (((rtDW.Amphoursintegration_DSTATE + 0.64) * -0.000294 +
                     0.00827) * (rtDW.Amphoursintegration_DSTATE + 0.64) +
                    -0.0926) * (rtDW.Amphoursintegration_DSTATE + 0.64) + 4.2;

  /* Sum: '<S2>/Subtract' incorporates:
   *  Constant: '<S2>/InternalResistance'
   *  Product: '<S2>/IRVoltageDrop'
   */
  rtb_Amphoursintegration_pc = rtb_Polynomial - 0.0018 *
    rtb_Amphoursintegration_pc;

  /* Polyval: '<S13>/Polynomial' incorporates:
   *  Constant: '<S13>/SOCOffset'
   *  DiscreteIntegrator: '<S13>/Amp hours integration'
   *  Sum: '<S13>/Add1'
   */
  rtb_Add1 = (((rtDW.Amphoursintegration_DSTATE_o + 0.96) * -0.000294 + 0.00827)
              * (rtDW.Amphoursintegration_DSTATE_o + 0.96) + -0.0926) *
    (rtDW.Amphoursintegration_DSTATE_o + 0.96) + 4.2;

  /* Polyval: '<S24>/Polynomial' incorporates:
   *  Constant: '<S24>/SOCOffset'
   *  DiscreteIntegrator: '<S24>/Amp hours integration'
   *  Sum: '<S24>/Add1'
   */
  rtb_Polynomial_pb = (((rtDW.Amphoursintegration_DSTATE_i + 0.44) * -0.000294 +
                        0.00827) * (rtDW.Amphoursintegration_DSTATE_i + 0.44) +
                       -0.0926) * (rtDW.Amphoursintegration_DSTATE_i + 0.44) +
    4.2;

  /* Polyval: '<S35>/Polynomial' incorporates:
   *  Constant: '<S35>/SOCOffset'
   *  DiscreteIntegrator: '<S35>/Amp hours integration'
   *  Sum: '<S35>/Add1'
   */
  rtb_Polynomial_i5c = (((rtDW.Amphoursintegration_DSTATE_i1 + 0.06) * -0.000294
    + 0.00827) * (rtDW.Amphoursintegration_DSTATE_i1 + 0.06) + -0.0926) *
    (rtDW.Amphoursintegration_DSTATE_i1 + 0.06) + 4.2;

  /* Polyval: '<S46>/Polynomial' incorporates:
   *  Constant: '<S46>/SOCOffset'
   *  DiscreteIntegrator: '<S46>/Amp hours integration'
   *  Sum: '<S46>/Add1'
   */
  rtb_Polynomial_i3 = (((rtDW.Amphoursintegration_DSTATE_d + 0.87) * -0.000294 +
                        0.00827) * (rtDW.Amphoursintegration_DSTATE_d + 0.87) +
                       -0.0926) * (rtDW.Amphoursintegration_DSTATE_d + 0.87) +
    4.2;

  /* Polyval: '<S57>/Polynomial' incorporates:
   *  Constant: '<S57>/SOCOffset'
   *  DiscreteIntegrator: '<S57>/Amp hours integration'
   *  Sum: '<S57>/Add1'
   */
  rtb_Polynomial_l = (((rtDW.Amphoursintegration_DSTATE_op + 0.63) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_op + 0.63) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_op + 0.63) +
    4.2;

  /* Polyval: '<S68>/Polynomial' incorporates:
   *  Constant: '<S68>/SOCOffset'
   *  DiscreteIntegrator: '<S68>/Amp hours integration'
   *  Sum: '<S68>/Add1'
   */
  rtb_Polynomial_fo = (((rtDW.Amphoursintegration_DSTATE_e + 0.35) * -0.000294 +
                        0.00827) * (rtDW.Amphoursintegration_DSTATE_e + 0.35) +
                       -0.0926) * (rtDW.Amphoursintegration_DSTATE_e + 0.35) +
    4.2;

  /* Polyval: '<S79>/Polynomial' incorporates:
   *  Constant: '<S79>/SOCOffset'
   *  DiscreteIntegrator: '<S79>/Amp hours integration'
   *  Sum: '<S79>/Add1'
   */
  rtb_Polynomial_g5 = (((rtDW.Amphoursintegration_DSTATE_l + 1.0) * -0.000294 +
                        0.00827) * (rtDW.Amphoursintegration_DSTATE_l + 1.0) +
                       -0.0926) * (rtDW.Amphoursintegration_DSTATE_l + 1.0) +
    4.2;

  /* Polyval: '<S90>/Polynomial' incorporates:
   *  Constant: '<S90>/SOCOffset'
   *  DiscreteIntegrator: '<S90>/Amp hours integration'
   *  Sum: '<S90>/Add1'
   */
  rtb_Polynomial_g3 = (((rtDW.Amphoursintegration_DSTATE_iv + 0.22) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_iv + 0.22)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_iv + 0.22)
    + 4.2;

  /* Polyval: '<S3>/Polynomial' incorporates:
   *  Constant: '<S3>/SOCOffset'
   *  DiscreteIntegrator: '<S3>/Amp hours integration'
   *  Sum: '<S3>/Add1'
   */
  rtb_Polynomial_h = (((rtDW.Amphoursintegration_DSTATE_c + 0.65) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_c + 0.65) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_c + 0.65) +
    4.2;

  /* Polyval: '<S4>/Polynomial' incorporates:
   *  Constant: '<S4>/SOCOffset'
   *  DiscreteIntegrator: '<S4>/Amp hours integration'
   *  Sum: '<S4>/Add1'
   */
  rtb_Polynomial_oy = (((rtDW.Amphoursintegration_DSTATE_ly + 0.61) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ly + 0.61)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ly + 0.61)
    + 4.2;

  /* Polyval: '<S5>/Polynomial' incorporates:
   *  Constant: '<S5>/SOCOffset'
   *  DiscreteIntegrator: '<S5>/Amp hours integration'
   *  Sum: '<S5>/Add1'
   */
  rtb_Polynomial_l0 = (((rtDW.Amphoursintegration_DSTATE_ov + 0.39) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ov + 0.39)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ov + 0.39)
    + 4.2;

  /* Polyval: '<S6>/Polynomial' incorporates:
   *  Constant: '<S6>/SOCOffset'
   *  DiscreteIntegrator: '<S6>/Amp hours integration'
   *  Sum: '<S6>/Add1'
   */
  rtb_Polynomial_cm = (((rtDW.Amphoursintegration_DSTATE_on + 0.14) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_on + 0.14)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_on + 0.14)
    + 4.2;

  /* Polyval: '<S7>/Polynomial' incorporates:
   *  Constant: '<S7>/SOCOffset'
   *  DiscreteIntegrator: '<S7>/Amp hours integration'
   *  Sum: '<S7>/Add1'
   */
  rtb_Polynomial_ls = (((rtDW.Amphoursintegration_DSTATE_lk + 0.02) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_lk + 0.02)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_lk + 0.02)
    + 4.2;

  /* Polyval: '<S8>/Polynomial' incorporates:
   *  Constant: '<S8>/SOCOffset'
   *  DiscreteIntegrator: '<S8>/Amp hours integration'
   *  Sum: '<S8>/Add1'
   */
  rtb_Polynomial_c = (((rtDW.Amphoursintegration_DSTATE_b + 0.42) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_b + 0.42) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_b + 0.42) +
    4.2;

  /* Polyval: '<S9>/Polynomial' incorporates:
   *  Constant: '<S9>/SOCOffset'
   *  DiscreteIntegrator: '<S9>/Amp hours integration'
   *  Sum: '<S9>/Add1'
   */
  rtb_Polynomial_poo = (((rtDW.Amphoursintegration_DSTATE_f + 0.18) * -0.000294
    + 0.00827) * (rtDW.Amphoursintegration_DSTATE_f + 0.18) + -0.0926) *
    (rtDW.Amphoursintegration_DSTATE_f + 0.18) + 4.2;

  /* Polyval: '<S10>/Polynomial' incorporates:
   *  Constant: '<S10>/SOCOffset'
   *  DiscreteIntegrator: '<S10>/Amp hours integration'
   *  Sum: '<S10>/Add1'
   */
  rtb_Polynomial_l1 = (((rtDW.Amphoursintegration_DSTATE_g + 0.73) * -0.000294 +
                        0.00827) * (rtDW.Amphoursintegration_DSTATE_g + 0.73) +
                       -0.0926) * (rtDW.Amphoursintegration_DSTATE_g + 0.73) +
    4.2;

  /* Polyval: '<S11>/Polynomial' incorporates:
   *  Constant: '<S11>/SOCOffset'
   *  DiscreteIntegrator: '<S11>/Amp hours integration'
   *  Sum: '<S11>/Add1'
   */
  rtb_Polynomial_a = (((rtDW.Amphoursintegration_DSTATE_ih + 0.37) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_ih + 0.37) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_ih + 0.37) +
    4.2;

  /* Polyval: '<S12>/Polynomial' incorporates:
   *  Constant: '<S12>/SOCOffset'
   *  DiscreteIntegrator: '<S12>/Amp hours integration'
   *  Sum: '<S12>/Add1'
   */
  rtb_Polynomial_jm = (((rtDW.Amphoursintegration_DSTATE_oo + 0.84) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_oo + 0.84)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_oo + 0.84)
    + 4.2;

  /* Polyval: '<S14>/Polynomial' incorporates:
   *  Constant: '<S14>/SOCOffset'
   *  DiscreteIntegrator: '<S14>/Amp hours integration'
   *  Sum: '<S14>/Add1'
   */
  rtb_Polynomial_b = (((rtDW.Amphoursintegration_DSTATE_et + 0.74) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_et + 0.74) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_et + 0.74) +
    4.2;

  /* Polyval: '<S15>/Polynomial' incorporates:
   *  Constant: '<S15>/SOCOffset'
   *  DiscreteIntegrator: '<S15>/Amp hours integration'
   *  Sum: '<S15>/Add1'
   */
  rtb_Polynomial_e2 = (((rtDW.Amphoursintegration_DSTATE_a + 0.57) * -0.000294 +
                        0.00827) * (rtDW.Amphoursintegration_DSTATE_a + 0.57) +
                       -0.0926) * (rtDW.Amphoursintegration_DSTATE_a + 0.57) +
    4.2;

  /* Polyval: '<S16>/Polynomial' incorporates:
   *  Constant: '<S16>/SOCOffset'
   *  DiscreteIntegrator: '<S16>/Amp hours integration'
   *  Sum: '<S16>/Add1'
   */
  rtb_Polynomial_ine = (((rtDW.Amphoursintegration_DSTATE_n + 0.17) * -0.000294
    + 0.00827) * (rtDW.Amphoursintegration_DSTATE_n + 0.17) + -0.0926) *
    (rtDW.Amphoursintegration_DSTATE_n + 0.17) + 4.2;

  /* Polyval: '<S17>/Polynomial' incorporates:
   *  Constant: '<S17>/SOCOffset'
   *  DiscreteIntegrator: '<S17>/Amp hours integration'
   *  Sum: '<S17>/Add1'
   */
  rtb_Polynomial_o = (((rtDW.Amphoursintegration_DSTATE_h + 0.96) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_h + 0.96) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_h + 0.96) +
    4.2;

  /* Polyval: '<S18>/Polynomial' incorporates:
   *  Constant: '<S18>/SOCOffset'
   *  DiscreteIntegrator: '<S18>/Amp hours integration'
   *  Sum: '<S18>/Add1'
   */
  rtb_Polynomial_e = (((rtDW.Amphoursintegration_DSTATE_en + 0.26) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_en + 0.26) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_en + 0.26) +
    4.2;

  /* Polyval: '<S19>/Polynomial' incorporates:
   *  Constant: '<S19>/SOCOffset'
   *  DiscreteIntegrator: '<S19>/Amp hours integration'
   *  Sum: '<S19>/Add1'
   */
  rtb_Polynomial_ai = (((rtDW.Amphoursintegration_DSTATE_lh + 0.93) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_lh + 0.93)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_lh + 0.93)
    + 4.2;

  /* Polyval: '<S20>/Polynomial' incorporates:
   *  Constant: '<S20>/SOCOffset'
   *  DiscreteIntegrator: '<S20>/Amp hours integration'
   *  Sum: '<S20>/Add1'
   */
  rtb_Polynomial_n0 = (((rtDW.Amphoursintegration_DSTATE_j + 0.22) * -0.000294 +
                        0.00827) * (rtDW.Amphoursintegration_DSTATE_j + 0.22) +
                       -0.0926) * (rtDW.Amphoursintegration_DSTATE_j + 0.22) +
    4.2;

  /* Polyval: '<S21>/Polynomial' incorporates:
   *  Constant: '<S21>/SOCOffset'
   *  DiscreteIntegrator: '<S21>/Amp hours integration'
   *  Sum: '<S21>/Add1'
   */
  rtb_Polynomial_f = (((rtDW.Amphoursintegration_DSTATE_m + 0.37) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_m + 0.37) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_m + 0.37) +
    4.2;

  /* Polyval: '<S22>/Polynomial' incorporates:
   *  Constant: '<S22>/SOCOffset'
   *  DiscreteIntegrator: '<S22>/Amp hours integration'
   *  Sum: '<S22>/Add1'
   */
  rtb_Polynomial_bw = (((rtDW.Amphoursintegration_DSTATE_mw + 0.08) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_mw + 0.08)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_mw + 0.08)
    + 4.2;

  /* Polyval: '<S23>/Polynomial' incorporates:
   *  Constant: '<S23>/SOCOffset'
   *  DiscreteIntegrator: '<S23>/Amp hours integration'
   *  Sum: '<S23>/Add1'
   */
  rtb_Polynomial_g = (((rtDW.Amphoursintegration_DSTATE_k + 0.64) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_k + 0.64) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_k + 0.64) +
    4.2;

  /* Polyval: '<S25>/Polynomial' incorporates:
   *  Constant: '<S25>/SOCOffset'
   *  DiscreteIntegrator: '<S25>/Amp hours integration'
   *  Sum: '<S25>/Add1'
   */
  rtb_Polynomial_i4 = (((rtDW.Amphoursintegration_DSTATE_ed + 0.18) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ed + 0.18)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ed + 0.18)
    + 4.2;

  /* Polyval: '<S26>/Polynomial' incorporates:
   *  Constant: '<S26>/SOCOffset'
   *  DiscreteIntegrator: '<S26>/Amp hours integration'
   *  Sum: '<S26>/Add1'
   */
  rtb_Polynomial_ct = (((rtDW.Amphoursintegration_DSTATE_lb + 0.04) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_lb + 0.04)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_lb + 0.04)
    + 4.2;

  /* Polyval: '<S27>/Polynomial' incorporates:
   *  Constant: '<S27>/SOCOffset'
   *  DiscreteIntegrator: '<S27>/Amp hours integration'
   *  Sum: '<S27>/Add1'
   */
  rtb_Polynomial_bq = (((rtDW.Amphoursintegration_DSTATE_a0 + 0.73) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_a0 + 0.73)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_a0 + 0.73)
    + 4.2;

  /* Polyval: '<S28>/Polynomial' incorporates:
   *  Constant: '<S28>/SOCOffset'
   *  DiscreteIntegrator: '<S28>/Amp hours integration'
   *  Sum: '<S28>/Add1'
   */
  rtb_Polynomial_n = (((rtDW.Amphoursintegration_DSTATE_cl + 0.35) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_cl + 0.35) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_cl + 0.35) +
    4.2;

  /* Polyval: '<S29>/Polynomial' incorporates:
   *  Constant: '<S29>/SOCOffset'
   *  DiscreteIntegrator: '<S29>/Amp hours integration'
   *  Sum: '<S29>/Add1'
   */
  rtb_Polynomial_ba = (((rtDW.Amphoursintegration_DSTATE_og + 0.66) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_og + 0.66)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_og + 0.66)
    + 4.2;

  /* Polyval: '<S30>/Polynomial' incorporates:
   *  Constant: '<S30>/SOCOffset'
   *  DiscreteIntegrator: '<S30>/Amp hours integration'
   *  Sum: '<S30>/Add1'
   */
  rtb_Polynomial_i = (((rtDW.Amphoursintegration_DSTATE_n2 + 0.38) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_n2 + 0.38) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_n2 + 0.38) +
    4.2;

  /* Polyval: '<S31>/Polynomial' incorporates:
   *  Constant: '<S31>/SOCOffset'
   *  DiscreteIntegrator: '<S31>/Amp hours integration'
   *  Sum: '<S31>/Add1'
   */
  rtb_Polynomial_by = (((rtDW.Amphoursintegration_DSTATE_mt + 0.63) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_mt + 0.63)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_mt + 0.63)
    + 4.2;

  /* Polyval: '<S32>/Polynomial' incorporates:
   *  Constant: '<S32>/SOCOffset'
   *  DiscreteIntegrator: '<S32>/Amp hours integration'
   *  Sum: '<S32>/Add1'
   */
  rtb_Polynomial_pt = (((rtDW.Amphoursintegration_DSTATE_cx + 0.02) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_cx + 0.02)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_cx + 0.02)
    + 4.2;

  /* Polyval: '<S33>/Polynomial' incorporates:
   *  Constant: '<S33>/SOCOffset'
   *  DiscreteIntegrator: '<S33>/Amp hours integration'
   *  Sum: '<S33>/Add1'
   */
  rtb_Polynomial_ad = (((rtDW.Amphoursintegration_DSTATE_oy + 0.91) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_oy + 0.91)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_oy + 0.91)
    + 4.2;

  /* Polyval: '<S34>/Polynomial' incorporates:
   *  Constant: '<S34>/SOCOffset'
   *  DiscreteIntegrator: '<S34>/Amp hours integration'
   *  Sum: '<S34>/Add1'
   */
  rtb_Polynomial_hb = (((rtDW.Amphoursintegration_DSTATE_p + 0.8) * -0.000294 +
                        0.00827) * (rtDW.Amphoursintegration_DSTATE_p + 0.8) +
                       -0.0926) * (rtDW.Amphoursintegration_DSTATE_p + 0.8) +
    4.2;

  /* Polyval: '<S36>/Polynomial' incorporates:
   *  Constant: '<S36>/SOCOffset'
   *  DiscreteIntegrator: '<S36>/Amp hours integration'
   *  Sum: '<S36>/Add1'
   */
  rtb_Polynomial_ap = (((rtDW.Amphoursintegration_DSTATE_b2 + 0.75) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_b2 + 0.75)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_b2 + 0.75)
    + 4.2;

  /* Polyval: '<S37>/Polynomial' incorporates:
   *  Constant: '<S37>/SOCOffset'
   *  DiscreteIntegrator: '<S37>/Amp hours integration'
   *  Sum: '<S37>/Add1'
   */
  rtb_Polynomial_ogu = (((rtDW.Amphoursintegration_DSTATE_ah + 0.82) * -0.000294
    + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ah + 0.82) + -0.0926) *
    (rtDW.Amphoursintegration_DSTATE_ah + 0.82) + 4.2;

  /* Polyval: '<S38>/Polynomial' incorporates:
   *  Constant: '<S38>/SOCOffset'
   *  DiscreteIntegrator: '<S38>/Amp hours integration'
   *  Sum: '<S38>/Add1'
   */
  rtb_Polynomial_er = (((rtDW.Amphoursintegration_DSTATE_nx + 0.38) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_nx + 0.38)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_nx + 0.38)
    + 4.2;

  /* Polyval: '<S39>/Polynomial' incorporates:
   *  Constant: '<S39>/SOCOffset'
   *  DiscreteIntegrator: '<S39>/Amp hours integration'
   *  Sum: '<S39>/Add1'
   */
  rtb_Polynomial_ll = (((rtDW.Amphoursintegration_DSTATE_il + 0.62) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_il + 0.62)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_il + 0.62)
    + 4.2;

  /* Polyval: '<S40>/Polynomial' incorporates:
   *  Constant: '<S40>/SOCOffset'
   *  DiscreteIntegrator: '<S40>/Amp hours integration'
   *  Sum: '<S40>/Add1'
   */
  rtb_Polynomial_fl = (((rtDW.Amphoursintegration_DSTATE_ea + 0.58) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ea + 0.58)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ea + 0.58)
    + 4.2;

  /* Polyval: '<S41>/Polynomial' incorporates:
   *  Constant: '<S41>/SOCOffset'
   *  DiscreteIntegrator: '<S41>/Amp hours integration'
   *  Sum: '<S41>/Add1'
   */
  rtb_Polynomial_ie = (((rtDW.Amphoursintegration_DSTATE_ce + 0.53) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ce + 0.53)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ce + 0.53)
    + 4.2;

  /* Polyval: '<S42>/Polynomial' incorporates:
   *  Constant: '<S42>/SOCOffset'
   *  DiscreteIntegrator: '<S42>/Amp hours integration'
   *  Sum: '<S42>/Add1'
   */
  rtb_Polynomial_p = (((rtDW.Amphoursintegration_DSTATE_or + 0.27) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_or + 0.27) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_or + 0.27) +
    4.2;

  /* Polyval: '<S43>/Polynomial' incorporates:
   *  Constant: '<S43>/SOCOffset'
   *  DiscreteIntegrator: '<S43>/Amp hours integration'
   *  Sum: '<S43>/Add1'
   */
  rtb_Polynomial_if = (((rtDW.Amphoursintegration_DSTATE_gy + 0.25) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_gy + 0.25)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_gy + 0.25)
    + 4.2;

  /* Polyval: '<S44>/Polynomial' incorporates:
   *  Constant: '<S44>/SOCOffset'
   *  DiscreteIntegrator: '<S44>/Amp hours integration'
   *  Sum: '<S44>/Add1'
   */
  rtb_Polynomial_p1 = (((rtDW.Amphoursintegration_DSTATE_de + 0.45) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_de + 0.45)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_de + 0.45)
    + 4.2;

  /* Polyval: '<S45>/Polynomial' incorporates:
   *  Constant: '<S45>/SOCOffset'
   *  DiscreteIntegrator: '<S45>/Amp hours integration'
   *  Sum: '<S45>/Add1'
   */
  rtb_Polynomial_m = (((rtDW.Amphoursintegration_DSTATE_i0 + 0.22) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_i0 + 0.22) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_i0 + 0.22) +
    4.2;

  /* Polyval: '<S47>/Polynomial' incorporates:
   *  Constant: '<S47>/SOCOffset'
   *  DiscreteIntegrator: '<S47>/Amp hours integration'
   *  Sum: '<S47>/Add1'
   */
  rtb_Polynomial_jr = (((rtDW.Amphoursintegration_DSTATE_bl + 0.81) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_bl + 0.81)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_bl + 0.81)
    + 4.2;

  /* Polyval: '<S48>/Polynomial' incorporates:
   *  Constant: '<S48>/SOCOffset'
   *  DiscreteIntegrator: '<S48>/Amp hours integration'
   *  Sum: '<S48>/Add1'
   */
  rtb_Polynomial_nt = (((rtDW.Amphoursintegration_DSTATE_c5 + 0.99) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_c5 + 0.99)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_c5 + 0.99)
    + 4.2;

  /* Polyval: '<S49>/Polynomial' incorporates:
   *  Constant: '<S49>/SOCOffset'
   *  DiscreteIntegrator: '<S49>/Amp hours integration'
   *  Sum: '<S49>/Add1'
   */
  rtb_Polynomial_pn = (((rtDW.Amphoursintegration_DSTATE_fx + 0.03) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_fx + 0.03)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_fx + 0.03)
    + 4.2;

  /* Polyval: '<S50>/Polynomial' incorporates:
   *  Constant: '<S50>/SOCOffset'
   *  DiscreteIntegrator: '<S50>/Amp hours integration'
   *  Sum: '<S50>/Add1'
   */
  rtb_Polynomial_aio = (((rtDW.Amphoursintegration_DSTATE_px + 0.54) * -0.000294
    + 0.00827) * (rtDW.Amphoursintegration_DSTATE_px + 0.54) + -0.0926) *
    (rtDW.Amphoursintegration_DSTATE_px + 0.54) + 4.2;

  /* Polyval: '<S51>/Polynomial' incorporates:
   *  Constant: '<S51>/SOCOffset'
   *  DiscreteIntegrator: '<S51>/Amp hours integration'
   *  Sum: '<S51>/Add1'
   */
  rtb_Polynomial_hl = (((rtDW.Amphoursintegration_DSTATE_a1 + 0.08) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_a1 + 0.08)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_a1 + 0.08)
    + 4.2;

  /* Polyval: '<S52>/Polynomial' incorporates:
   *  Constant: '<S52>/SOCOffset'
   *  DiscreteIntegrator: '<S52>/Amp hours integration'
   *  Sum: '<S52>/Add1'
   */
  rtb_Polynomial_av = (((rtDW.Amphoursintegration_DSTATE_ms + 0.81) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ms + 0.81)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ms + 0.81)
    + 4.2;

  /* Polyval: '<S53>/Polynomial' incorporates:
   *  Constant: '<S53>/SOCOffset'
   *  DiscreteIntegrator: '<S53>/Amp hours integration'
   *  Sum: '<S53>/Add1'
   */
  rtb_Polynomial_fn = (((rtDW.Amphoursintegration_DSTATE_da + 0.99) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_da + 0.99)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_da + 0.99)
    + 4.2;

  /* Polyval: '<S54>/Polynomial' incorporates:
   *  Constant: '<S54>/SOCOffset'
   *  DiscreteIntegrator: '<S54>/Amp hours integration'
   *  Sum: '<S54>/Add1'
   */
  rtb_Polynomial_hd = (((rtDW.Amphoursintegration_DSTATE_km + 0.06) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_km + 0.06)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_km + 0.06)
    + 4.2;

  /* Polyval: '<S55>/Polynomial' incorporates:
   *  Constant: '<S55>/SOCOffset'
   *  DiscreteIntegrator: '<S55>/Amp hours integration'
   *  Sum: '<S55>/Add1'
   */
  rtb_Polynomial_gj = (((rtDW.Amphoursintegration_DSTATE_dc + 0.94) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_dc + 0.94)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_dc + 0.94)
    + 4.2;

  /* Polyval: '<S56>/Polynomial' incorporates:
   *  Constant: '<S56>/SOCOffset'
   *  DiscreteIntegrator: '<S56>/Amp hours integration'
   *  Sum: '<S56>/Add1'
   */
  rtb_Polynomial_ib = (((rtDW.Amphoursintegration_DSTATE_oj + 0.01) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_oj + 0.01)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_oj + 0.01)
    + 4.2;

  /* Polyval: '<S58>/Polynomial' incorporates:
   *  Constant: '<S58>/SOCOffset'
   *  DiscreteIntegrator: '<S58>/Amp hours integration'
   *  Sum: '<S58>/Add1'
   */
  rtb_Polynomial_p4 = (((rtDW.Amphoursintegration_DSTATE_dcp + 0.69) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_dcp + 0.69)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_dcp + 0.69)
    + 4.2;

  /* Polyval: '<S59>/Polynomial' incorporates:
   *  Constant: '<S59>/SOCOffset'
   *  DiscreteIntegrator: '<S59>/Amp hours integration'
   *  Sum: '<S59>/Add1'
   */
  rtb_Polynomial_db = (((rtDW.Amphoursintegration_DSTATE_gyj + 0.79) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_gyj + 0.79)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_gyj + 0.79)
    + 4.2;

  /* Polyval: '<S60>/Polynomial' incorporates:
   *  Constant: '<S60>/SOCOffset'
   *  DiscreteIntegrator: '<S60>/Amp hours integration'
   *  Sum: '<S60>/Add1'
   */
  rtb_Polynomial_dh = (((rtDW.Amphoursintegration_DSTATE_ck + 0.53) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ck + 0.53)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ck + 0.53)
    + 4.2;

  /* Polyval: '<S61>/Polynomial' incorporates:
   *  Constant: '<S61>/SOCOffset'
   *  DiscreteIntegrator: '<S61>/Amp hours integration'
   *  Sum: '<S61>/Add1'
   */
  rtb_Polynomial_i3k = (((rtDW.Amphoursintegration_DSTATE_ab + 0.89) * -0.000294
    + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ab + 0.89) + -0.0926) *
    (rtDW.Amphoursintegration_DSTATE_ab + 0.89) + 4.2;

  /* Polyval: '<S62>/Polynomial' incorporates:
   *  Constant: '<S62>/SOCOffset'
   *  DiscreteIntegrator: '<S62>/Amp hours integration'
   *  Sum: '<S62>/Add1'
   */
  rtb_Polynomial_c2 = (((rtDW.Amphoursintegration_DSTATE_jm + 0.9) * -0.000294 +
                        0.00827) * (rtDW.Amphoursintegration_DSTATE_jm + 0.9) +
                       -0.0926) * (rtDW.Amphoursintegration_DSTATE_jm + 0.9) +
    4.2;

  /* Polyval: '<S63>/Polynomial' incorporates:
   *  Constant: '<S63>/SOCOffset'
   *  DiscreteIntegrator: '<S63>/Amp hours integration'
   *  Sum: '<S63>/Add1'
   */
  rtb_Polynomial_oi = (((rtDW.Amphoursintegration_DSTATE_ac + 0.63) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ac + 0.63)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ac + 0.63)
    + 4.2;

  /* Polyval: '<S64>/Polynomial' incorporates:
   *  Constant: '<S64>/SOCOffset'
   *  DiscreteIntegrator: '<S64>/Amp hours integration'
   *  Sum: '<S64>/Add1'
   */
  rtb_Polynomial_i1 = (((rtDW.Amphoursintegration_DSTATE_di + 0.13) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_di + 0.13)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_di + 0.13)
    + 4.2;

  /* Polyval: '<S65>/Polynomial' incorporates:
   *  Constant: '<S65>/SOCOffset'
   *  DiscreteIntegrator: '<S65>/Amp hours integration'
   *  Sum: '<S65>/Add1'
   */
  rtb_Polynomial_fpp = (((rtDW.Amphoursintegration_DSTATE_o1 + 0.21) * -0.000294
    + 0.00827) * (rtDW.Amphoursintegration_DSTATE_o1 + 0.21) + -0.0926) *
    (rtDW.Amphoursintegration_DSTATE_o1 + 0.21) + 4.2;

  /* Polyval: '<S66>/Polynomial' incorporates:
   *  Constant: '<S66>/SOCOffset'
   *  DiscreteIntegrator: '<S66>/Amp hours integration'
   *  Sum: '<S66>/Add1'
   */
  rtb_Polynomial_d = (((rtDW.Amphoursintegration_DSTATE_h4 + 0.18) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_h4 + 0.18) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_h4 + 0.18) +
    4.2;

  /* Polyval: '<S67>/Polynomial' incorporates:
   *  Constant: '<S67>/SOCOffset'
   *  DiscreteIntegrator: '<S67>/Amp hours integration'
   *  Sum: '<S67>/Add1'
   */
  rtb_Polynomial_fx = (((rtDW.Amphoursintegration_DSTATE_ho + 0.04) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ho + 0.04)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ho + 0.04)
    + 4.2;

  /* Polyval: '<S69>/Polynomial' incorporates:
   *  Constant: '<S69>/SOCOffset'
   *  DiscreteIntegrator: '<S69>/Amp hours integration'
   *  Sum: '<S69>/Add1'
   */
  rtb_Polynomial_a1 = (((rtDW.Amphoursintegration_DSTATE_m2 + 0.1) * -0.000294 +
                        0.00827) * (rtDW.Amphoursintegration_DSTATE_m2 + 0.1) +
                       -0.0926) * (rtDW.Amphoursintegration_DSTATE_m2 + 0.1) +
    4.2;

  /* Polyval: '<S70>/Polynomial' incorporates:
   *  Constant: '<S70>/SOCOffset'
   *  DiscreteIntegrator: '<S70>/Amp hours integration'
   *  Sum: '<S70>/Add1'
   */
  rtb_Polynomial_hs = (((rtDW.Amphoursintegration_DSTATE_fj + 0.62) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_fj + 0.62)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_fj + 0.62)
    + 4.2;

  /* Polyval: '<S71>/Polynomial' incorporates:
   *  Constant: '<S71>/SOCOffset'
   *  DiscreteIntegrator: '<S71>/Amp hours integration'
   *  Sum: '<S71>/Add1'
   */
  rtb_Polynomial_hr = (((rtDW.Amphoursintegration_DSTATE_dej + 0.94) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_dej + 0.94)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_dej + 0.94)
    + 4.2;

  /* Polyval: '<S72>/Polynomial' incorporates:
   *  Constant: '<S72>/SOCOffset'
   *  DiscreteIntegrator: '<S72>/Amp hours integration'
   *  Sum: '<S72>/Add1'
   */
  rtb_Polynomial_df = (((rtDW.Amphoursintegration_DSTATE_kc + 0.35) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_kc + 0.35)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_kc + 0.35)
    + 4.2;

  /* Polyval: '<S73>/Polynomial' incorporates:
   *  Constant: '<S73>/SOCOffset'
   *  DiscreteIntegrator: '<S73>/Amp hours integration'
   *  Sum: '<S73>/Add1'
   */
  rtb_Polynomial_b0b = (((rtDW.Amphoursintegration_DSTATE_l5 + 0.41) * -0.000294
    + 0.00827) * (rtDW.Amphoursintegration_DSTATE_l5 + 0.41) + -0.0926) *
    (rtDW.Amphoursintegration_DSTATE_l5 + 0.41) + 4.2;

  /* Polyval: '<S74>/Polynomial' incorporates:
   *  Constant: '<S74>/SOCOffset'
   *  DiscreteIntegrator: '<S74>/Amp hours integration'
   *  Sum: '<S74>/Add1'
   */
  rtb_Polynomial_nd = (((rtDW.Amphoursintegration_DSTATE_c1 + 0.99) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_c1 + 0.99)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_c1 + 0.99)
    + 4.2;

  /* Polyval: '<S75>/Polynomial' incorporates:
   *  Constant: '<S75>/SOCOffset'
   *  DiscreteIntegrator: '<S75>/Amp hours integration'
   *  Sum: '<S75>/Add1'
   */
  rtb_Polynomial_go = (((rtDW.Amphoursintegration_DSTATE_kj + 0.95) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_kj + 0.95)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_kj + 0.95)
    + 4.2;

  /* Polyval: '<S76>/Polynomial' incorporates:
   *  Constant: '<S76>/SOCOffset'
   *  DiscreteIntegrator: '<S76>/Amp hours integration'
   *  Sum: '<S76>/Add1'
   */
  rtb_Polynomial_jb = (((rtDW.Amphoursintegration_DSTATE_jw + 0.68) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_jw + 0.68)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_jw + 0.68)
    + 4.2;

  /* Polyval: '<S77>/Polynomial' incorporates:
   *  Constant: '<S77>/SOCOffset'
   *  DiscreteIntegrator: '<S77>/Amp hours integration'
   *  Sum: '<S77>/Add1'
   */
  rtb_Polynomial_ox = (((rtDW.Amphoursintegration_DSTATE_e1 + 0.99) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_e1 + 0.99)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_e1 + 0.99)
    + 4.2;

  /* Polyval: '<S78>/Polynomial' incorporates:
   *  Constant: '<S78>/SOCOffset'
   *  DiscreteIntegrator: '<S78>/Amp hours integration'
   *  Sum: '<S78>/Add1'
   */
  rtb_Polynomial_mv = (((rtDW.Amphoursintegration_DSTATE_nm + 0.77) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_nm + 0.77)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_nm + 0.77)
    + 4.2;

  /* Polyval: '<S80>/Polynomial' incorporates:
   *  Constant: '<S80>/SOCOffset'
   *  DiscreteIntegrator: '<S80>/Amp hours integration'
   *  Sum: '<S80>/Add1'
   */
  rtb_Polynomial_aq = (((rtDW.Amphoursintegration_DSTATE_ks + 0.34) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ks + 0.34)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ks + 0.34)
    + 4.2;

  /* Polyval: '<S81>/Polynomial' incorporates:
   *  Constant: '<S81>/SOCOffset'
   *  DiscreteIntegrator: '<S81>/Amp hours integration'
   *  Sum: '<S81>/Add1'
   */
  rtb_Polynomial_de = (((rtDW.Amphoursintegration_DSTATE_ab0 + 0.66) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ab0 + 0.66)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ab0 + 0.66)
    + 4.2;

  /* Polyval: '<S82>/Polynomial' incorporates:
   *  Constant: '<S82>/SOCOffset'
   *  DiscreteIntegrator: '<S82>/Amp hours integration'
   *  Sum: '<S82>/Add1'
   */
  rtb_Polynomial_ml = (((rtDW.Amphoursintegration_DSTATE_f5 + 0.24) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_f5 + 0.24)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_f5 + 0.24)
    + 4.2;

  /* Polyval: '<S83>/Polynomial' incorporates:
   *  Constant: '<S83>/SOCOffset'
   *  DiscreteIntegrator: '<S83>/Amp hours integration'
   *  Sum: '<S83>/Add1'
   */
  rtb_Polynomial_j = (((rtDW.Amphoursintegration_DSTATE_kf + 0.29) * -0.000294 +
                       0.00827) * (rtDW.Amphoursintegration_DSTATE_kf + 0.29) +
                      -0.0926) * (rtDW.Amphoursintegration_DSTATE_kf + 0.29) +
    4.2;

  /* Polyval: '<S84>/Polynomial' incorporates:
   *  Constant: '<S84>/SOCOffset'
   *  DiscreteIntegrator: '<S84>/Amp hours integration'
   *  Sum: '<S84>/Add1'
   */
  rtb_Polynomial_o0 = (((rtDW.Amphoursintegration_DSTATE_k1 + 0.68) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_k1 + 0.68)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_k1 + 0.68)
    + 4.2;

  /* Polyval: '<S85>/Polynomial' incorporates:
   *  Constant: '<S85>/SOCOffset'
   *  DiscreteIntegrator: '<S85>/Amp hours integration'
   *  Sum: '<S85>/Add1'
   */
  rtb_Polynomial_oco = (((rtDW.Amphoursintegration_DSTATE_au + 0.53) * -0.000294
    + 0.00827) * (rtDW.Amphoursintegration_DSTATE_au + 0.53) + -0.0926) *
    (rtDW.Amphoursintegration_DSTATE_au + 0.53) + 4.2;

  /* Polyval: '<S86>/Polynomial' incorporates:
   *  Constant: '<S86>/SOCOffset'
   *  DiscreteIntegrator: '<S86>/Amp hours integration'
   *  Sum: '<S86>/Add1'
   */
  rtb_Polynomial_ny = (((rtDW.Amphoursintegration_DSTATE_no + 0.41) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_no + 0.41)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_no + 0.41)
    + 4.2;

  /* Polyval: '<S87>/Polynomial' incorporates:
   *  Constant: '<S87>/SOCOffset'
   *  DiscreteIntegrator: '<S87>/Amp hours integration'
   *  Sum: '<S87>/Add1'
   */
  rtb_Polynomial_oh = (((rtDW.Amphoursintegration_DSTATE_ig + 0.6) * -0.000294 +
                        0.00827) * (rtDW.Amphoursintegration_DSTATE_ig + 0.6) +
                       -0.0926) * (rtDW.Amphoursintegration_DSTATE_ig + 0.6) +
    4.2;

  /* Polyval: '<S88>/Polynomial' incorporates:
   *  Constant: '<S88>/SOCOffset'
   *  DiscreteIntegrator: '<S88>/Amp hours integration'
   *  Sum: '<S88>/Add1'
   */
  rtb_Polynomial_ic = (((rtDW.Amphoursintegration_DSTATE_ba + 0.75) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ba + 0.75)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ba + 0.75)
    + 4.2;

  /* Polyval: '<S89>/Polynomial' incorporates:
   *  Constant: '<S89>/SOCOffset'
   *  DiscreteIntegrator: '<S89>/Amp hours integration'
   *  Sum: '<S89>/Add1'
   */
  rtb_Polynomial_gw = (((rtDW.Amphoursintegration_DSTATE_ny + 0.58) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_ny + 0.58)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_ny + 0.58)
    + 4.2;

  /* Polyval: '<S91>/Polynomial' incorporates:
   *  Constant: '<S91>/SOCOffset'
   *  DiscreteIntegrator: '<S91>/Amp hours integration'
   *  Sum: '<S91>/Add1'
   */
  rtb_Polynomial_gq = (((rtDW.Amphoursintegration_DSTATE_oi + 0.55) * -0.000294
                        + 0.00827) * (rtDW.Amphoursintegration_DSTATE_oi + 0.55)
                       + -0.0926) * (rtDW.Amphoursintegration_DSTATE_oi + 0.55)
    + 4.2;

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/BalanceCurrent'
   *  Constant: '<S13>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[1] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S13>/Switch' */

  /* Sum: '<S13>/Total load current draw' */
  rtb_Add1_lh = rtb_Product[1] + rtb_Add1_iu1;

  /* Sum: '<S13>/Subtract' incorporates:
   *  Abs: '<S13>/Abs'
   *  Constant: '<S13>/InternalResistance'
   *  Product: '<S13>/IRVoltageDrop'
   */
  rtb_Subtract_cri = rtb_Add1 - 0.0018 * fabs(rtb_Add1_lh);

  /* Switch: '<S24>/Switch' incorporates:
   *  Constant: '<S24>/BalanceCurrent'
   *  Constant: '<S24>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[2] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S24>/Switch' */

  /* Sum: '<S24>/Total load current draw' */
  rtb_Add1_le = rtb_Product[2] + rtb_Add1_iu1;

  /* Sum: '<S24>/Subtract' incorporates:
   *  Abs: '<S24>/Abs'
   *  Constant: '<S24>/InternalResistance'
   *  Product: '<S24>/IRVoltageDrop'
   */
  rtb_Subtract_im = rtb_Polynomial_pb - 0.0018 * fabs(rtb_Add1_le);

  /* Switch: '<S35>/Switch' incorporates:
   *  Constant: '<S35>/BalanceCurrent'
   *  Constant: '<S35>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[3] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S35>/Switch' */

  /* Sum: '<S35>/Total load current draw' */
  rtb_Add1_oj = rtb_Product[3] + rtb_Add1_iu1;

  /* Sum: '<S35>/Subtract' incorporates:
   *  Abs: '<S35>/Abs'
   *  Constant: '<S35>/InternalResistance'
   *  Product: '<S35>/IRVoltageDrop'
   */
  rtb_Subtract_pt = rtb_Polynomial_i5c - 0.0018 * fabs(rtb_Add1_oj);

  /* Switch: '<S46>/Switch' incorporates:
   *  Constant: '<S46>/BalanceCurrent'
   *  Constant: '<S46>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[4] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S46>/Switch' */

  /* Sum: '<S46>/Total load current draw' */
  rtb_Add1_ea = rtb_Product[4] + rtb_Add1_iu1;

  /* Sum: '<S46>/Subtract' incorporates:
   *  Abs: '<S46>/Abs'
   *  Constant: '<S46>/InternalResistance'
   *  Product: '<S46>/IRVoltageDrop'
   */
  rtb_Subtract_b = rtb_Polynomial_i3 - 0.0018 * fabs(rtb_Add1_ea);

  /* Switch: '<S57>/Switch' incorporates:
   *  Constant: '<S57>/BalanceCurrent'
   *  Constant: '<S57>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[5] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S57>/Switch' */

  /* Sum: '<S57>/Total load current draw' */
  rtb_Add1_dy = rtb_Product[5] + rtb_Add1_iu1;

  /* Sum: '<S57>/Subtract' incorporates:
   *  Abs: '<S57>/Abs'
   *  Constant: '<S57>/InternalResistance'
   *  Product: '<S57>/IRVoltageDrop'
   */
  rtb_Subtract_lul = rtb_Polynomial_l - 0.0018 * fabs(rtb_Add1_dy);

  /* Switch: '<S68>/Switch' incorporates:
   *  Constant: '<S68>/BalanceCurrent'
   *  Constant: '<S68>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[6] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S68>/Switch' */

  /* Sum: '<S68>/Total load current draw' */
  rtb_Add1_gl = rtb_Product[6] + rtb_Add1_iu1;

  /* Sum: '<S68>/Subtract' incorporates:
   *  Abs: '<S68>/Abs'
   *  Constant: '<S68>/InternalResistance'
   *  Product: '<S68>/IRVoltageDrop'
   */
  rtb_Subtract_d = rtb_Polynomial_fo - 0.0018 * fabs(rtb_Add1_gl);

  /* Switch: '<S79>/Switch' incorporates:
   *  Constant: '<S79>/BalanceCurrent'
   *  Constant: '<S79>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[7] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S79>/Switch' */

  /* Sum: '<S79>/Total load current draw' */
  rtb_Add1_egy = rtb_Product[7] + rtb_Add1_iu1;

  /* Sum: '<S79>/Subtract' incorporates:
   *  Abs: '<S79>/Abs'
   *  Constant: '<S79>/InternalResistance'
   *  Product: '<S79>/IRVoltageDrop'
   */
  rtb_Subtract_o = rtb_Polynomial_g5 - 0.0018 * fabs(rtb_Add1_egy);

  /* Switch: '<S90>/Switch' incorporates:
   *  Constant: '<S90>/BalanceCurrent'
   *  Constant: '<S90>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[8] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S90>/Switch' */

  /* Sum: '<S90>/Total load current draw' */
  rtb_Add1_c = rtb_Product[8] + rtb_Add1_iu1;

  /* Sum: '<S90>/Subtract' incorporates:
   *  Abs: '<S90>/Abs'
   *  Constant: '<S90>/InternalResistance'
   *  Product: '<S90>/IRVoltageDrop'
   */
  rtb_Subtract_nj = rtb_Polynomial_g3 - 0.0018 * fabs(rtb_Add1_c);

  /* Switch: '<S3>/Switch' incorporates:
   *  Constant: '<S3>/BalanceCurrent'
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[9] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S3>/Switch' */

  /* Sum: '<S3>/Total load current draw' */
  rtb_Add1_ke = rtb_Product[9] + rtb_Add1_iu1;

  /* Sum: '<S3>/Subtract' incorporates:
   *  Abs: '<S3>/Abs'
   *  Constant: '<S3>/InternalResistance'
   *  Product: '<S3>/IRVoltageDrop'
   */
  rtb_Subtract_ci = rtb_Polynomial_h - 0.0018 * fabs(rtb_Add1_ke);

  /* Switch: '<S4>/Switch' incorporates:
   *  Constant: '<S4>/BalanceCurrent'
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[10] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S4>/Switch' */

  /* Sum: '<S4>/Total load current draw' */
  rtb_Add1_i = rtb_Product[10] + rtb_Add1_iu1;

  /* Sum: '<S4>/Subtract' incorporates:
   *  Abs: '<S4>/Abs'
   *  Constant: '<S4>/InternalResistance'
   *  Product: '<S4>/IRVoltageDrop'
   */
  rtb_Subtract_jh = rtb_Polynomial_oy - 0.0018 * fabs(rtb_Add1_i);

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/BalanceCurrent'
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[11] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S5>/Switch' */

  /* Sum: '<S5>/Total load current draw' */
  rtb_Add1_l = rtb_Product[11] + rtb_Add1_iu1;

  /* Sum: '<S5>/Subtract' incorporates:
   *  Abs: '<S5>/Abs'
   *  Constant: '<S5>/InternalResistance'
   *  Product: '<S5>/IRVoltageDrop'
   */
  rtb_Subtract_ob = rtb_Polynomial_l0 - 0.0018 * fabs(rtb_Add1_l);

  /* Switch: '<S6>/Switch' incorporates:
   *  Constant: '<S6>/BalanceCurrent'
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[12] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S6>/Switch' */

  /* Sum: '<S6>/Total load current draw' */
  rtb_Add1_cq = rtb_Product[12] + rtb_Add1_iu1;

  /* Sum: '<S6>/Subtract' incorporates:
   *  Abs: '<S6>/Abs'
   *  Constant: '<S6>/InternalResistance'
   *  Product: '<S6>/IRVoltageDrop'
   */
  rtb_Subtract_j = rtb_Polynomial_cm - 0.0018 * fabs(rtb_Add1_cq);

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S7>/BalanceCurrent'
   *  Constant: '<S7>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[13] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S7>/Switch' */

  /* Sum: '<S7>/Total load current draw' */
  rtb_Add1_e4 = rtb_Product[13] + rtb_Add1_iu1;

  /* Sum: '<S7>/Subtract' incorporates:
   *  Abs: '<S7>/Abs'
   *  Constant: '<S7>/InternalResistance'
   *  Product: '<S7>/IRVoltageDrop'
   */
  rtb_Subtract_em = rtb_Polynomial_ls - 0.0018 * fabs(rtb_Add1_e4);

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/BalanceCurrent'
   *  Constant: '<S8>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[14] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S8>/Switch' */

  /* Sum: '<S8>/Total load current draw' */
  rtb_Add1_h = rtb_Product[14] + rtb_Add1_iu1;

  /* Sum: '<S8>/Subtract' incorporates:
   *  Abs: '<S8>/Abs'
   *  Constant: '<S8>/InternalResistance'
   *  Product: '<S8>/IRVoltageDrop'
   */
  rtb_Subtract_prv = rtb_Polynomial_c - 0.0018 * fabs(rtb_Add1_h);

  /* Switch: '<S9>/Switch' incorporates:
   *  Constant: '<S9>/BalanceCurrent'
   *  Constant: '<S9>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[15] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S9>/Switch' */

  /* Sum: '<S9>/Total load current draw' */
  rtb_Add1_os = rtb_Product[15] + rtb_Add1_iu1;

  /* Sum: '<S9>/Subtract' incorporates:
   *  Abs: '<S9>/Abs'
   *  Constant: '<S9>/InternalResistance'
   *  Product: '<S9>/IRVoltageDrop'
   */
  rtb_Subtract_mwa = rtb_Polynomial_poo - 0.0018 * fabs(rtb_Add1_os);

  /* Switch: '<S10>/Switch' incorporates:
   *  Constant: '<S10>/BalanceCurrent'
   *  Constant: '<S10>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[16] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S10>/Switch' */

  /* Sum: '<S10>/Total load current draw' */
  rtb_Add1_g = rtb_Product[16] + rtb_Add1_iu1;

  /* Sum: '<S10>/Subtract' incorporates:
   *  Abs: '<S10>/Abs'
   *  Constant: '<S10>/InternalResistance'
   *  Product: '<S10>/IRVoltageDrop'
   */
  rtb_Subtract_fc = rtb_Polynomial_l1 - 0.0018 * fabs(rtb_Add1_g);

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/BalanceCurrent'
   *  Constant: '<S11>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[17] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Sum: '<S11>/Total load current draw' */
  rtb_Add1_gz = rtb_Product[17] + rtb_Add1_iu1;

  /* Sum: '<S11>/Subtract' incorporates:
   *  Abs: '<S11>/Abs'
   *  Constant: '<S11>/InternalResistance'
   *  Product: '<S11>/IRVoltageDrop'
   */
  rtb_Subtract_isf = rtb_Polynomial_a - 0.0018 * fabs(rtb_Add1_gz);

  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/BalanceCurrent'
   *  Constant: '<S12>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[18] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S12>/Switch' */

  /* Sum: '<S12>/Total load current draw' */
  rtb_Add1_dw = rtb_Product[18] + rtb_Add1_iu1;

  /* Sum: '<S12>/Subtract' incorporates:
   *  Abs: '<S12>/Abs'
   *  Constant: '<S12>/InternalResistance'
   *  Product: '<S12>/IRVoltageDrop'
   */
  rtb_Subtract_i = rtb_Polynomial_jm - 0.0018 * fabs(rtb_Add1_dw);

  /* Switch: '<S14>/Switch' incorporates:
   *  Constant: '<S14>/BalanceCurrent'
   *  Constant: '<S14>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[19] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S14>/Switch' */

  /* Sum: '<S14>/Total load current draw' */
  rtb_Add1_b0 = rtb_Product[19] + rtb_Add1_iu1;

  /* Sum: '<S14>/Subtract' incorporates:
   *  Abs: '<S14>/Abs'
   *  Constant: '<S14>/InternalResistance'
   *  Product: '<S14>/IRVoltageDrop'
   */
  rtb_Subtract_l = rtb_Polynomial_b - 0.0018 * fabs(rtb_Add1_b0);

  /* Switch: '<S15>/Switch' incorporates:
   *  Constant: '<S15>/BalanceCurrent'
   *  Constant: '<S15>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[20] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S15>/Switch' */

  /* Sum: '<S15>/Total load current draw' */
  rtb_Add1_n = rtb_Product[20] + rtb_Add1_iu1;

  /* Sum: '<S15>/Subtract' incorporates:
   *  Abs: '<S15>/Abs'
   *  Constant: '<S15>/InternalResistance'
   *  Product: '<S15>/IRVoltageDrop'
   */
  rtb_Subtract_l4 = rtb_Polynomial_e2 - 0.0018 * fabs(rtb_Add1_n);

  /* Switch: '<S16>/Switch' incorporates:
   *  Constant: '<S16>/BalanceCurrent'
   *  Constant: '<S16>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[21] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S16>/Switch' */

  /* Sum: '<S16>/Total load current draw' */
  rtb_Add1_j3 = rtb_Product[21] + rtb_Add1_iu1;

  /* Sum: '<S16>/Subtract' incorporates:
   *  Abs: '<S16>/Abs'
   *  Constant: '<S16>/InternalResistance'
   *  Product: '<S16>/IRVoltageDrop'
   */
  rtb_Subtract_a = rtb_Polynomial_ine - 0.0018 * fabs(rtb_Add1_j3);

  /* Switch: '<S17>/Switch' incorporates:
   *  Constant: '<S17>/BalanceCurrent'
   *  Constant: '<S17>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[22] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S17>/Switch' */

  /* Sum: '<S17>/Total load current draw' */
  rtb_Add1_e = rtb_Product[22] + rtb_Add1_iu1;

  /* Sum: '<S17>/Subtract' incorporates:
   *  Abs: '<S17>/Abs'
   *  Constant: '<S17>/InternalResistance'
   *  Product: '<S17>/IRVoltageDrop'
   */
  rtb_Subtract_g = rtb_Polynomial_o - 0.0018 * fabs(rtb_Add1_e);

  /* Switch: '<S18>/Switch' incorporates:
   *  Constant: '<S18>/BalanceCurrent'
   *  Constant: '<S18>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[23] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S18>/Switch' */

  /* Sum: '<S18>/Total load current draw' */
  rtb_Add1_du = rtb_Product[23] + rtb_Add1_iu1;

  /* Sum: '<S18>/Subtract' incorporates:
   *  Abs: '<S18>/Abs'
   *  Constant: '<S18>/InternalResistance'
   *  Product: '<S18>/IRVoltageDrop'
   */
  rtb_Subtract_pl = rtb_Polynomial_e - 0.0018 * fabs(rtb_Add1_du);

  /* Switch: '<S19>/Switch' incorporates:
   *  Constant: '<S19>/BalanceCurrent'
   *  Constant: '<S19>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[24] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S19>/Switch' */

  /* Sum: '<S19>/Total load current draw' */
  rtb_Add1_brl = rtb_Product[24] + rtb_Add1_iu1;

  /* Sum: '<S19>/Subtract' incorporates:
   *  Abs: '<S19>/Abs'
   *  Constant: '<S19>/InternalResistance'
   *  Product: '<S19>/IRVoltageDrop'
   */
  rtb_Subtract_hw = rtb_Polynomial_ai - 0.0018 * fabs(rtb_Add1_brl);

  /* Switch: '<S20>/Switch' incorporates:
   *  Constant: '<S20>/BalanceCurrent'
   *  Constant: '<S20>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[25] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S20>/Switch' */

  /* Sum: '<S20>/Total load current draw' */
  rtb_Add1_f = rtb_Product[25] + rtb_Add1_iu1;

  /* Sum: '<S20>/Subtract' incorporates:
   *  Abs: '<S20>/Abs'
   *  Constant: '<S20>/InternalResistance'
   *  Product: '<S20>/IRVoltageDrop'
   */
  rtb_Subtract_a5 = rtb_Polynomial_n0 - 0.0018 * fabs(rtb_Add1_f);

  /* Switch: '<S21>/Switch' incorporates:
   *  Constant: '<S21>/BalanceCurrent'
   *  Constant: '<S21>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[26] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S21>/Switch' */

  /* Sum: '<S21>/Total load current draw' */
  rtb_Add1_cz = rtb_Product[26] + rtb_Add1_iu1;

  /* Sum: '<S21>/Subtract' incorporates:
   *  Abs: '<S21>/Abs'
   *  Constant: '<S21>/InternalResistance'
   *  Product: '<S21>/IRVoltageDrop'
   */
  rtb_Subtract_klw = rtb_Polynomial_f - 0.0018 * fabs(rtb_Add1_cz);

  /* Switch: '<S22>/Switch' incorporates:
   *  Constant: '<S22>/BalanceCurrent'
   *  Constant: '<S22>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[27] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S22>/Switch' */

  /* Sum: '<S22>/Total load current draw' */
  rtb_Add1_m = rtb_Product[27] + rtb_Add1_iu1;

  /* Sum: '<S22>/Subtract' incorporates:
   *  Abs: '<S22>/Abs'
   *  Constant: '<S22>/InternalResistance'
   *  Product: '<S22>/IRVoltageDrop'
   */
  rtb_Subtract_l0 = rtb_Polynomial_bw - 0.0018 * fabs(rtb_Add1_m);

  /* Switch: '<S23>/Switch' incorporates:
   *  Constant: '<S23>/BalanceCurrent'
   *  Constant: '<S23>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[28] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S23>/Switch' */

  /* Sum: '<S23>/Total load current draw' */
  rtb_Add1_p = rtb_Product[28] + rtb_Add1_iu1;

  /* Sum: '<S23>/Subtract' incorporates:
   *  Abs: '<S23>/Abs'
   *  Constant: '<S23>/InternalResistance'
   *  Product: '<S23>/IRVoltageDrop'
   */
  rtb_Subtract_is = rtb_Polynomial_g - 0.0018 * fabs(rtb_Add1_p);

  /* Switch: '<S25>/Switch' incorporates:
   *  Constant: '<S25>/BalanceCurrent'
   *  Constant: '<S25>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[29] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S25>/Switch' */

  /* Sum: '<S25>/Total load current draw' */
  rtb_Add1_jy = rtb_Product[29] + rtb_Add1_iu1;

  /* Sum: '<S25>/Subtract' incorporates:
   *  Abs: '<S25>/Abs'
   *  Constant: '<S25>/InternalResistance'
   *  Product: '<S25>/IRVoltageDrop'
   */
  rtb_Subtract_k = rtb_Polynomial_i4 - 0.0018 * fabs(rtb_Add1_jy);

  /* Switch: '<S26>/Switch' incorporates:
   *  Constant: '<S26>/BalanceCurrent'
   *  Constant: '<S26>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[30] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S26>/Switch' */

  /* Sum: '<S26>/Total load current draw' */
  rtb_Add1_da = rtb_Product[30] + rtb_Add1_iu1;

  /* Sum: '<S26>/Subtract' incorporates:
   *  Abs: '<S26>/Abs'
   *  Constant: '<S26>/InternalResistance'
   *  Product: '<S26>/IRVoltageDrop'
   */
  rtb_Subtract_p = rtb_Polynomial_ct - 0.0018 * fabs(rtb_Add1_da);

  /* Switch: '<S27>/Switch' incorporates:
   *  Constant: '<S27>/BalanceCurrent'
   *  Constant: '<S27>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[31] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S27>/Switch' */

  /* Sum: '<S27>/Total load current draw' */
  rtb_Add1_mu = rtb_Product[31] + rtb_Add1_iu1;

  /* Sum: '<S27>/Subtract' incorporates:
   *  Abs: '<S27>/Abs'
   *  Constant: '<S27>/InternalResistance'
   *  Product: '<S27>/IRVoltageDrop'
   */
  rtb_Subtract_o0 = rtb_Polynomial_bq - 0.0018 * fabs(rtb_Add1_mu);

  /* Switch: '<S28>/Switch' incorporates:
   *  Constant: '<S28>/BalanceCurrent'
   *  Constant: '<S28>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[32] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S28>/Switch' */

  /* Sum: '<S28>/Total load current draw' */
  rtb_Add1_o = rtb_Product[32] + rtb_Add1_iu1;

  /* Sum: '<S28>/Subtract' incorporates:
   *  Abs: '<S28>/Abs'
   *  Constant: '<S28>/InternalResistance'
   *  Product: '<S28>/IRVoltageDrop'
   */
  rtb_Subtract_f1 = rtb_Polynomial_n - 0.0018 * fabs(rtb_Add1_o);

  /* Switch: '<S29>/Switch' incorporates:
   *  Constant: '<S29>/BalanceCurrent'
   *  Constant: '<S29>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[33] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S29>/Switch' */

  /* Sum: '<S29>/Total load current draw' */
  rtb_Add1_on = rtb_Product[33] + rtb_Add1_iu1;

  /* Sum: '<S29>/Subtract' incorporates:
   *  Abs: '<S29>/Abs'
   *  Constant: '<S29>/InternalResistance'
   *  Product: '<S29>/IRVoltageDrop'
   */
  rtb_Subtract_h = rtb_Polynomial_ba - 0.0018 * fabs(rtb_Add1_on);

  /* Switch: '<S30>/Switch' incorporates:
   *  Constant: '<S30>/BalanceCurrent'
   *  Constant: '<S30>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[34] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S30>/Switch' */

  /* Sum: '<S30>/Total load current draw' */
  rtb_Add1_fz = rtb_Product[34] + rtb_Add1_iu1;

  /* Sum: '<S30>/Subtract' incorporates:
   *  Abs: '<S30>/Abs'
   *  Constant: '<S30>/InternalResistance'
   *  Product: '<S30>/IRVoltageDrop'
   */
  rtb_Subtract_ee = rtb_Polynomial_i - 0.0018 * fabs(rtb_Add1_fz);

  /* Switch: '<S31>/Switch' incorporates:
   *  Constant: '<S31>/BalanceCurrent'
   *  Constant: '<S31>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[35] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S31>/Switch' */

  /* Sum: '<S31>/Total load current draw' */
  rtb_Add1_b = rtb_Product[35] + rtb_Add1_iu1;

  /* Sum: '<S31>/Subtract' incorporates:
   *  Abs: '<S31>/Abs'
   *  Constant: '<S31>/InternalResistance'
   *  Product: '<S31>/IRVoltageDrop'
   */
  rtb_Subtract_m = rtb_Polynomial_by - 0.0018 * fabs(rtb_Add1_b);

  /* Switch: '<S32>/Switch' incorporates:
   *  Constant: '<S32>/BalanceCurrent'
   *  Constant: '<S32>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[36] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S32>/Switch' */

  /* Sum: '<S32>/Total load current draw' */
  rtb_Add1_ca = rtb_Product[36] + rtb_Add1_iu1;

  /* Sum: '<S32>/Subtract' incorporates:
   *  Abs: '<S32>/Abs'
   *  Constant: '<S32>/InternalResistance'
   *  Product: '<S32>/IRVoltageDrop'
   */
  rtb_Subtract_kw = rtb_Polynomial_pt - 0.0018 * fabs(rtb_Add1_ca);

  /* Switch: '<S33>/Switch' incorporates:
   *  Constant: '<S33>/BalanceCurrent'
   *  Constant: '<S33>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[37] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S33>/Switch' */

  /* Sum: '<S33>/Total load current draw' */
  rtb_Add1_m0 = rtb_Product[37] + rtb_Add1_iu1;

  /* Sum: '<S33>/Subtract' incorporates:
   *  Abs: '<S33>/Abs'
   *  Constant: '<S33>/InternalResistance'
   *  Product: '<S33>/IRVoltageDrop'
   */
  rtb_Subtract_hpb = rtb_Polynomial_ad - 0.0018 * fabs(rtb_Add1_m0);

  /* Switch: '<S34>/Switch' incorporates:
   *  Constant: '<S34>/BalanceCurrent'
   *  Constant: '<S34>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[38] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S34>/Switch' */

  /* Sum: '<S34>/Total load current draw' */
  rtb_Add1_bl = rtb_Product[38] + rtb_Add1_iu1;

  /* Sum: '<S34>/Subtract' incorporates:
   *  Abs: '<S34>/Abs'
   *  Constant: '<S34>/InternalResistance'
   *  Product: '<S34>/IRVoltageDrop'
   */
  rtb_Subtract_d5 = rtb_Polynomial_hb - 0.0018 * fabs(rtb_Add1_bl);

  /* Switch: '<S36>/Switch' incorporates:
   *  Constant: '<S36>/BalanceCurrent'
   *  Constant: '<S36>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[39] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S36>/Switch' */

  /* Sum: '<S36>/Total load current draw' */
  rtb_Add1_cu = rtb_Product[39] + rtb_Add1_iu1;

  /* Sum: '<S36>/Subtract' incorporates:
   *  Abs: '<S36>/Abs'
   *  Constant: '<S36>/InternalResistance'
   *  Product: '<S36>/IRVoltageDrop'
   */
  rtb_Subtract_ar2 = rtb_Polynomial_ap - 0.0018 * fabs(rtb_Add1_cu);

  /* Switch: '<S37>/Switch' incorporates:
   *  Constant: '<S37>/BalanceCurrent'
   *  Constant: '<S37>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[40] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S37>/Switch' */

  /* Sum: '<S37>/Total load current draw' */
  rtb_Add1_g4 = rtb_Product[40] + rtb_Add1_iu1;

  /* Sum: '<S37>/Subtract' incorporates:
   *  Abs: '<S37>/Abs'
   *  Constant: '<S37>/InternalResistance'
   *  Product: '<S37>/IRVoltageDrop'
   */
  rtb_Subtract_ke = rtb_Polynomial_ogu - 0.0018 * fabs(rtb_Add1_g4);

  /* Switch: '<S38>/Switch' incorporates:
   *  Constant: '<S38>/BalanceCurrent'
   *  Constant: '<S38>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[41] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S38>/Switch' */

  /* Sum: '<S38>/Total load current draw' */
  rtb_Add1_eq = rtb_Product[41] + rtb_Add1_iu1;

  /* Sum: '<S38>/Subtract' incorporates:
   *  Abs: '<S38>/Abs'
   *  Constant: '<S38>/InternalResistance'
   *  Product: '<S38>/IRVoltageDrop'
   */
  rtb_Subtract_bp = rtb_Polynomial_er - 0.0018 * fabs(rtb_Add1_eq);

  /* Switch: '<S39>/Switch' incorporates:
   *  Constant: '<S39>/BalanceCurrent'
   *  Constant: '<S39>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[42] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S39>/Switch' */

  /* Sum: '<S39>/Total load current draw' */
  rtb_Add1_nn = rtb_Product[42] + rtb_Add1_iu1;

  /* Sum: '<S39>/Subtract' incorporates:
   *  Abs: '<S39>/Abs'
   *  Constant: '<S39>/InternalResistance'
   *  Product: '<S39>/IRVoltageDrop'
   */
  rtb_Subtract_dc = rtb_Polynomial_ll - 0.0018 * fabs(rtb_Add1_nn);

  /* Switch: '<S40>/Switch' incorporates:
   *  Constant: '<S40>/BalanceCurrent'
   *  Constant: '<S40>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[43] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S40>/Switch' */

  /* Sum: '<S40>/Total load current draw' */
  rtb_Add1_d = rtb_Product[43] + rtb_Add1_iu1;

  /* Sum: '<S40>/Subtract' incorporates:
   *  Abs: '<S40>/Abs'
   *  Constant: '<S40>/InternalResistance'
   *  Product: '<S40>/IRVoltageDrop'
   */
  rtb_Subtract_jo = rtb_Polynomial_fl - 0.0018 * fabs(rtb_Add1_d);

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S41>/BalanceCurrent'
   *  Constant: '<S41>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[44] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S41>/Switch' */

  /* Sum: '<S41>/Total load current draw' */
  rtb_Add1_ix = rtb_Product[44] + rtb_Add1_iu1;

  /* Sum: '<S41>/Subtract' incorporates:
   *  Abs: '<S41>/Abs'
   *  Constant: '<S41>/InternalResistance'
   *  Product: '<S41>/IRVoltageDrop'
   */
  rtb_Subtract_f4 = rtb_Polynomial_ie - 0.0018 * fabs(rtb_Add1_ix);

  /* Switch: '<S42>/Switch' incorporates:
   *  Constant: '<S42>/BalanceCurrent'
   *  Constant: '<S42>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[45] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S42>/Switch' */

  /* Sum: '<S42>/Total load current draw' */
  rtb_Add1_gv = rtb_Product[45] + rtb_Add1_iu1;

  /* Sum: '<S42>/Subtract' incorporates:
   *  Abs: '<S42>/Abs'
   *  Constant: '<S42>/InternalResistance'
   *  Product: '<S42>/IRVoltageDrop'
   */
  rtb_Subtract_pmv = rtb_Polynomial_p - 0.0018 * fabs(rtb_Add1_gv);

  /* Switch: '<S43>/Switch' incorporates:
   *  Constant: '<S43>/BalanceCurrent'
   *  Constant: '<S43>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[46] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S43>/Switch' */

  /* Sum: '<S43>/Total load current draw' */
  rtb_Add1_ha = rtb_Product[46] + rtb_Add1_iu1;

  /* Sum: '<S43>/Subtract' incorporates:
   *  Abs: '<S43>/Abs'
   *  Constant: '<S43>/InternalResistance'
   *  Product: '<S43>/IRVoltageDrop'
   */
  rtb_Subtract_fw = rtb_Polynomial_if - 0.0018 * fabs(rtb_Add1_ha);

  /* Switch: '<S44>/Switch' incorporates:
   *  Constant: '<S44>/BalanceCurrent'
   *  Constant: '<S44>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[47] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S44>/Switch' */

  /* Sum: '<S44>/Total load current draw' */
  rtb_Add1_oe = rtb_Product[47] + rtb_Add1_iu1;

  /* Sum: '<S44>/Subtract' incorporates:
   *  Abs: '<S44>/Abs'
   *  Constant: '<S44>/InternalResistance'
   *  Product: '<S44>/IRVoltageDrop'
   */
  rtb_Subtract_hb = rtb_Polynomial_p1 - 0.0018 * fabs(rtb_Add1_oe);

  /* Switch: '<S45>/Switch' incorporates:
   *  Constant: '<S45>/BalanceCurrent'
   *  Constant: '<S45>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[48] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S45>/Switch' */

  /* Sum: '<S45>/Total load current draw' */
  rtb_Add1_h1 = rtb_Product[48] + rtb_Add1_iu1;

  /* Sum: '<S45>/Subtract' incorporates:
   *  Abs: '<S45>/Abs'
   *  Constant: '<S45>/InternalResistance'
   *  Product: '<S45>/IRVoltageDrop'
   */
  rtb_Subtract_px = rtb_Polynomial_m - 0.0018 * fabs(rtb_Add1_h1);

  /* Switch: '<S47>/Switch' incorporates:
   *  Constant: '<S47>/BalanceCurrent'
   *  Constant: '<S47>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[49] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S47>/Switch' */

  /* Sum: '<S47>/Total load current draw' */
  rtb_Add1_nj = rtb_Product[49] + rtb_Add1_iu1;

  /* Sum: '<S47>/Subtract' incorporates:
   *  Abs: '<S47>/Abs'
   *  Constant: '<S47>/InternalResistance'
   *  Product: '<S47>/IRVoltageDrop'
   */
  rtb_Subtract_pw = rtb_Polynomial_jr - 0.0018 * fabs(rtb_Add1_nj);

  /* Switch: '<S48>/Switch' incorporates:
   *  Constant: '<S48>/BalanceCurrent'
   *  Constant: '<S48>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[50] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S48>/Switch' */

  /* Sum: '<S48>/Total load current draw' */
  rtb_Add1_pc = rtb_Product[50] + rtb_Add1_iu1;

  /* Sum: '<S48>/Subtract' incorporates:
   *  Abs: '<S48>/Abs'
   *  Constant: '<S48>/InternalResistance'
   *  Product: '<S48>/IRVoltageDrop'
   */
  rtb_Subtract_fp = rtb_Polynomial_nt - 0.0018 * fabs(rtb_Add1_pc);

  /* Switch: '<S49>/Switch' incorporates:
   *  Constant: '<S49>/BalanceCurrent'
   *  Constant: '<S49>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[51] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S49>/Switch' */

  /* Sum: '<S49>/Total load current draw' */
  rtb_Add1_a = rtb_Product[51] + rtb_Add1_iu1;

  /* Sum: '<S49>/Subtract' incorporates:
   *  Abs: '<S49>/Abs'
   *  Constant: '<S49>/InternalResistance'
   *  Product: '<S49>/IRVoltageDrop'
   */
  rtb_Subtract_ae = rtb_Polynomial_pn - 0.0018 * fabs(rtb_Add1_a);

  /* Switch: '<S50>/Switch' incorporates:
   *  Constant: '<S50>/BalanceCurrent'
   *  Constant: '<S50>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[52] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S50>/Switch' */

  /* Sum: '<S50>/Total load current draw' */
  rtb_Add1_m4 = rtb_Product[52] + rtb_Add1_iu1;

  /* Sum: '<S50>/Subtract' incorporates:
   *  Abs: '<S50>/Abs'
   *  Constant: '<S50>/InternalResistance'
   *  Product: '<S50>/IRVoltageDrop'
   */
  rtb_Subtract_ay = rtb_Polynomial_aio - 0.0018 * fabs(rtb_Add1_m4);

  /* Switch: '<S51>/Switch' incorporates:
   *  Constant: '<S51>/BalanceCurrent'
   *  Constant: '<S51>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[53] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S51>/Switch' */

  /* Sum: '<S51>/Total load current draw' */
  rtb_Add1_fxv = rtb_Product[53] + rtb_Add1_iu1;

  /* Sum: '<S51>/Subtract' incorporates:
   *  Abs: '<S51>/Abs'
   *  Constant: '<S51>/InternalResistance'
   *  Product: '<S51>/IRVoltageDrop'
   */
  rtb_Subtract_oa = rtb_Polynomial_hl - 0.0018 * fabs(rtb_Add1_fxv);

  /* Switch: '<S52>/Switch' incorporates:
   *  Constant: '<S52>/BalanceCurrent'
   *  Constant: '<S52>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[54] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S52>/Switch' */

  /* Sum: '<S52>/Total load current draw' */
  rtb_Add1_en = rtb_Product[54] + rtb_Add1_iu1;

  /* Sum: '<S52>/Subtract' incorporates:
   *  Abs: '<S52>/Abs'
   *  Constant: '<S52>/InternalResistance'
   *  Product: '<S52>/IRVoltageDrop'
   */
  rtb_Subtract_c = rtb_Polynomial_av - 0.0018 * fabs(rtb_Add1_en);

  /* Switch: '<S53>/Switch' incorporates:
   *  Constant: '<S53>/BalanceCurrent'
   *  Constant: '<S53>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[55] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S53>/Switch' */

  /* Sum: '<S53>/Total load current draw' */
  rtb_Add1_a4 = rtb_Product[55] + rtb_Add1_iu1;

  /* Sum: '<S53>/Subtract' incorporates:
   *  Abs: '<S53>/Abs'
   *  Constant: '<S53>/InternalResistance'
   *  Product: '<S53>/IRVoltageDrop'
   */
  rtb_Subtract_gd = rtb_Polynomial_fn - 0.0018 * fabs(rtb_Add1_a4);

  /* Switch: '<S54>/Switch' incorporates:
   *  Constant: '<S54>/BalanceCurrent'
   *  Constant: '<S54>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[56] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S54>/Switch' */

  /* Sum: '<S54>/Total load current draw' */
  rtb_Add1_j = rtb_Product[56] + rtb_Add1_iu1;

  /* Sum: '<S54>/Subtract' incorporates:
   *  Abs: '<S54>/Abs'
   *  Constant: '<S54>/InternalResistance'
   *  Product: '<S54>/IRVoltageDrop'
   */
  rtb_Subtract_ny = rtb_Polynomial_hd - 0.0018 * fabs(rtb_Add1_j);

  /* Switch: '<S55>/Switch' incorporates:
   *  Constant: '<S55>/BalanceCurrent'
   *  Constant: '<S55>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[57] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S55>/Switch' */

  /* Sum: '<S55>/Total load current draw' */
  rtb_Add1_l0 = rtb_Product[57] + rtb_Add1_iu1;

  /* Sum: '<S55>/Subtract' incorporates:
   *  Abs: '<S55>/Abs'
   *  Constant: '<S55>/InternalResistance'
   *  Product: '<S55>/IRVoltageDrop'
   */
  rtb_Subtract_hx = rtb_Polynomial_gj - 0.0018 * fabs(rtb_Add1_l0);

  /* Switch: '<S56>/Switch' incorporates:
   *  Constant: '<S56>/BalanceCurrent'
   *  Constant: '<S56>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[58] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S56>/Switch' */

  /* Sum: '<S56>/Total load current draw' */
  rtb_Add1_e3 = rtb_Product[58] + rtb_Add1_iu1;

  /* Sum: '<S56>/Subtract' incorporates:
   *  Abs: '<S56>/Abs'
   *  Constant: '<S56>/InternalResistance'
   *  Product: '<S56>/IRVoltageDrop'
   */
  rtb_Subtract_jq = rtb_Polynomial_ib - 0.0018 * fabs(rtb_Add1_e3);

  /* Switch: '<S58>/Switch' incorporates:
   *  Constant: '<S58>/BalanceCurrent'
   *  Constant: '<S58>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[59] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S58>/Switch' */

  /* Sum: '<S58>/Total load current draw' */
  rtb_Add1_be = rtb_Product[59] + rtb_Add1_iu1;

  /* Sum: '<S58>/Subtract' incorporates:
   *  Abs: '<S58>/Abs'
   *  Constant: '<S58>/InternalResistance'
   *  Product: '<S58>/IRVoltageDrop'
   */
  rtb_Subtract_czq = rtb_Polynomial_p4 - 0.0018 * fabs(rtb_Add1_be);

  /* Switch: '<S59>/Switch' incorporates:
   *  Constant: '<S59>/BalanceCurrent'
   *  Constant: '<S59>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[60] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S59>/Switch' */

  /* Sum: '<S59>/Total load current draw' */
  rtb_Add1_ec = rtb_Product[60] + rtb_Add1_iu1;

  /* Sum: '<S59>/Subtract' incorporates:
   *  Abs: '<S59>/Abs'
   *  Constant: '<S59>/InternalResistance'
   *  Product: '<S59>/IRVoltageDrop'
   */
  rtb_Subtract_fg = rtb_Polynomial_db - 0.0018 * fabs(rtb_Add1_ec);

  /* Switch: '<S60>/Switch' incorporates:
   *  Constant: '<S60>/BalanceCurrent'
   *  Constant: '<S60>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[61] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S60>/Switch' */

  /* Sum: '<S60>/Total load current draw' */
  rtb_Add1_bnx = rtb_Product[61] + rtb_Add1_iu1;

  /* Sum: '<S60>/Subtract' incorporates:
   *  Abs: '<S60>/Abs'
   *  Constant: '<S60>/InternalResistance'
   *  Product: '<S60>/IRVoltageDrop'
   */
  rtb_Subtract_li = rtb_Polynomial_dh - 0.0018 * fabs(rtb_Add1_bnx);

  /* Switch: '<S61>/Switch' incorporates:
   *  Constant: '<S61>/BalanceCurrent'
   *  Constant: '<S61>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[62] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S61>/Switch' */

  /* Sum: '<S61>/Total load current draw' */
  rtb_Add1_av = rtb_Product[62] + rtb_Add1_iu1;

  /* Sum: '<S61>/Subtract' incorporates:
   *  Abs: '<S61>/Abs'
   *  Constant: '<S61>/InternalResistance'
   *  Product: '<S61>/IRVoltageDrop'
   */
  rtb_Subtract_gvo = rtb_Polynomial_i3k - 0.0018 * fabs(rtb_Add1_av);

  /* Switch: '<S62>/Switch' incorporates:
   *  Constant: '<S62>/BalanceCurrent'
   *  Constant: '<S62>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[63] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S62>/Switch' */

  /* Sum: '<S62>/Total load current draw' */
  rtb_Add1_gd = rtb_Product[63] + rtb_Add1_iu1;

  /* Sum: '<S62>/Subtract' incorporates:
   *  Abs: '<S62>/Abs'
   *  Constant: '<S62>/InternalResistance'
   *  Product: '<S62>/IRVoltageDrop'
   */
  rtb_Subtract_eh = rtb_Polynomial_c2 - 0.0018 * fabs(rtb_Add1_gd);

  /* Switch: '<S63>/Switch' incorporates:
   *  Constant: '<S63>/BalanceCurrent'
   *  Constant: '<S63>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[64] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S63>/Switch' */

  /* Sum: '<S63>/Total load current draw' */
  rtb_Add1_pl = rtb_Product[64] + rtb_Add1_iu1;

  /* Sum: '<S63>/Subtract' incorporates:
   *  Abs: '<S63>/Abs'
   *  Constant: '<S63>/InternalResistance'
   *  Product: '<S63>/IRVoltageDrop'
   */
  rtb_Subtract_k5 = rtb_Polynomial_oi - 0.0018 * fabs(rtb_Add1_pl);

  /* Switch: '<S64>/Switch' incorporates:
   *  Constant: '<S64>/BalanceCurrent'
   *  Constant: '<S64>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[65] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S64>/Switch' */

  /* Sum: '<S64>/Total load current draw' */
  rtb_Add1_m2 = rtb_Product[65] + rtb_Add1_iu1;

  /* Sum: '<S64>/Subtract' incorporates:
   *  Abs: '<S64>/Abs'
   *  Constant: '<S64>/InternalResistance'
   *  Product: '<S64>/IRVoltageDrop'
   */
  rtb_Subtract_n = rtb_Polynomial_i1 - 0.0018 * fabs(rtb_Add1_m2);

  /* Switch: '<S65>/Switch' incorporates:
   *  Constant: '<S65>/BalanceCurrent'
   *  Constant: '<S65>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[66] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S65>/Switch' */

  /* Sum: '<S65>/Total load current draw' */
  rtb_Add1_k = rtb_Product[66] + rtb_Add1_iu1;

  /* Sum: '<S65>/Subtract' incorporates:
   *  Abs: '<S65>/Abs'
   *  Constant: '<S65>/InternalResistance'
   *  Product: '<S65>/IRVoltageDrop'
   */
  rtb_Subtract_ie = rtb_Polynomial_fpp - 0.0018 * fabs(rtb_Add1_k);

  /* Switch: '<S66>/Switch' incorporates:
   *  Constant: '<S66>/BalanceCurrent'
   *  Constant: '<S66>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[67] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S66>/Switch' */

  /* Sum: '<S66>/Total load current draw' */
  rtb_Add1_dxo = rtb_Product[67] + rtb_Add1_iu1;

  /* Sum: '<S66>/Subtract' incorporates:
   *  Abs: '<S66>/Abs'
   *  Constant: '<S66>/InternalResistance'
   *  Product: '<S66>/IRVoltageDrop'
   */
  rtb_Subtract_dq = rtb_Polynomial_d - 0.0018 * fabs(rtb_Add1_dxo);

  /* Switch: '<S67>/Switch' incorporates:
   *  Constant: '<S67>/BalanceCurrent'
   *  Constant: '<S67>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[68] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S67>/Switch' */

  /* Sum: '<S67>/Total load current draw' */
  rtb_Add1_m5 = rtb_Product[68] + rtb_Add1_iu1;

  /* Sum: '<S67>/Subtract' incorporates:
   *  Abs: '<S67>/Abs'
   *  Constant: '<S67>/InternalResistance'
   *  Product: '<S67>/IRVoltageDrop'
   */
  rtb_Subtract_kh = rtb_Polynomial_fx - 0.0018 * fabs(rtb_Add1_m5);

  /* Switch: '<S69>/Switch' incorporates:
   *  Constant: '<S69>/BalanceCurrent'
   *  Constant: '<S69>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[69] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S69>/Switch' */

  /* Sum: '<S69>/Total load current draw' */
  rtb_Add1_pdt = rtb_Product[69] + rtb_Add1_iu1;

  /* Sum: '<S69>/Subtract' incorporates:
   *  Abs: '<S69>/Abs'
   *  Constant: '<S69>/InternalResistance'
   *  Product: '<S69>/IRVoltageDrop'
   */
  rtb_Subtract_e = rtb_Polynomial_a1 - 0.0018 * fabs(rtb_Add1_pdt);

  /* Switch: '<S70>/Switch' incorporates:
   *  Constant: '<S70>/BalanceCurrent'
   *  Constant: '<S70>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[70] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S70>/Switch' */

  /* Sum: '<S70>/Total load current draw' */
  rtb_Add1_bhu = rtb_Product[70] + rtb_Add1_iu1;

  /* Sum: '<S70>/Subtract' incorporates:
   *  Abs: '<S70>/Abs'
   *  Constant: '<S70>/InternalResistance'
   *  Product: '<S70>/IRVoltageDrop'
   */
  rtb_Subtract_bh = rtb_Polynomial_hs - 0.0018 * fabs(rtb_Add1_bhu);

  /* Switch: '<S71>/Switch' incorporates:
   *  Constant: '<S71>/BalanceCurrent'
   *  Constant: '<S71>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[71] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S71>/Switch' */

  /* Sum: '<S71>/Total load current draw' */
  rtb_Add1_ko = rtb_Product[71] + rtb_Add1_iu1;

  /* Sum: '<S71>/Subtract' incorporates:
   *  Abs: '<S71>/Abs'
   *  Constant: '<S71>/InternalResistance'
   *  Product: '<S71>/IRVoltageDrop'
   */
  rtb_Subtract_dve = rtb_Polynomial_hr - 0.0018 * fabs(rtb_Add1_ko);

  /* Switch: '<S72>/Switch' incorporates:
   *  Constant: '<S72>/BalanceCurrent'
   *  Constant: '<S72>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[72] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S72>/Switch' */

  /* Sum: '<S72>/Total load current draw' */
  rtb_Add1_af = rtb_Product[72] + rtb_Add1_iu1;

  /* Sum: '<S72>/Subtract' incorporates:
   *  Abs: '<S72>/Abs'
   *  Constant: '<S72>/InternalResistance'
   *  Product: '<S72>/IRVoltageDrop'
   */
  rtb_Subtract_jk = rtb_Polynomial_df - 0.0018 * fabs(rtb_Add1_af);

  /* Switch: '<S73>/Switch' incorporates:
   *  Constant: '<S73>/BalanceCurrent'
   *  Constant: '<S73>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[73] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S73>/Switch' */

  /* Sum: '<S73>/Total load current draw' */
  rtb_Add1_iv = rtb_Product[73] + rtb_Add1_iu1;

  /* Sum: '<S73>/Subtract' incorporates:
   *  Abs: '<S73>/Abs'
   *  Constant: '<S73>/InternalResistance'
   *  Product: '<S73>/IRVoltageDrop'
   */
  rtb_Subtract_jt = rtb_Polynomial_b0b - 0.0018 * fabs(rtb_Add1_iv);

  /* Switch: '<S74>/Switch' incorporates:
   *  Constant: '<S74>/BalanceCurrent'
   *  Constant: '<S74>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[74] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S74>/Switch' */

  /* Sum: '<S74>/Total load current draw' */
  rtb_Add1_ah = rtb_Product[74] + rtb_Add1_iu1;

  /* Sum: '<S74>/Subtract' incorporates:
   *  Abs: '<S74>/Abs'
   *  Constant: '<S74>/InternalResistance'
   *  Product: '<S74>/IRVoltageDrop'
   */
  rtb_Subtract_kk = rtb_Polynomial_nd - 0.0018 * fabs(rtb_Add1_ah);

  /* Switch: '<S75>/Switch' incorporates:
   *  Constant: '<S75>/BalanceCurrent'
   *  Constant: '<S75>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[75] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S75>/Switch' */

  /* Sum: '<S75>/Total load current draw' */
  rtb_Add1_hw = rtb_Product[75] + rtb_Add1_iu1;

  /* Sum: '<S75>/Subtract' incorporates:
   *  Abs: '<S75>/Abs'
   *  Constant: '<S75>/InternalResistance'
   *  Product: '<S75>/IRVoltageDrop'
   */
  rtb_Subtract_my = rtb_Polynomial_go - 0.0018 * fabs(rtb_Add1_hw);

  /* Switch: '<S76>/Switch' incorporates:
   *  Constant: '<S76>/BalanceCurrent'
   *  Constant: '<S76>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[76] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S76>/Switch' */

  /* Sum: '<S76>/Total load current draw' */
  rtb_Add1_c2 = rtb_Product[76] + rtb_Add1_iu1;

  /* Sum: '<S76>/Subtract' incorporates:
   *  Abs: '<S76>/Abs'
   *  Constant: '<S76>/InternalResistance'
   *  Product: '<S76>/IRVoltageDrop'
   */
  rtb_Subtract_cx = rtb_Polynomial_jb - 0.0018 * fabs(rtb_Add1_c2);

  /* Switch: '<S77>/Switch' incorporates:
   *  Constant: '<S77>/BalanceCurrent'
   *  Constant: '<S77>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[77] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S77>/Switch' */

  /* Sum: '<S77>/Total load current draw' */
  rtb_Add1_cm = rtb_Product[77] + rtb_Add1_iu1;

  /* Sum: '<S77>/Subtract' incorporates:
   *  Abs: '<S77>/Abs'
   *  Constant: '<S77>/InternalResistance'
   *  Product: '<S77>/IRVoltageDrop'
   */
  rtb_Subtract_e2 = rtb_Polynomial_ox - 0.0018 * fabs(rtb_Add1_cm);

  /* Switch: '<S78>/Switch' incorporates:
   *  Constant: '<S78>/BalanceCurrent'
   *  Constant: '<S78>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[78] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S78>/Switch' */

  /* Sum: '<S78>/Total load current draw' */
  rtb_Add1_o4 = rtb_Product[78] + rtb_Add1_iu1;

  /* Sum: '<S78>/Subtract' incorporates:
   *  Abs: '<S78>/Abs'
   *  Constant: '<S78>/InternalResistance'
   *  Product: '<S78>/IRVoltageDrop'
   */
  rtb_Subtract_nr = rtb_Polynomial_mv - 0.0018 * fabs(rtb_Add1_o4);

  /* Switch: '<S80>/Switch' incorporates:
   *  Constant: '<S80>/BalanceCurrent'
   *  Constant: '<S80>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[79] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S80>/Switch' */

  /* Sum: '<S80>/Total load current draw' */
  rtb_Add1_l4 = rtb_Product[79] + rtb_Add1_iu1;

  /* Sum: '<S80>/Subtract' incorporates:
   *  Abs: '<S80>/Abs'
   *  Constant: '<S80>/InternalResistance'
   *  Product: '<S80>/IRVoltageDrop'
   */
  rtb_Subtract_aq = rtb_Polynomial_aq - 0.0018 * fabs(rtb_Add1_l4);

  /* Switch: '<S81>/Switch' incorporates:
   *  Constant: '<S81>/BalanceCurrent'
   *  Constant: '<S81>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[80] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S81>/Switch' */

  /* Sum: '<S81>/Total load current draw' */
  rtb_Add1_jz = rtb_Product[80] + rtb_Add1_iu1;

  /* Sum: '<S81>/Subtract' incorporates:
   *  Abs: '<S81>/Abs'
   *  Constant: '<S81>/InternalResistance'
   *  Product: '<S81>/IRVoltageDrop'
   */
  rtb_Subtract_cad = rtb_Polynomial_de - 0.0018 * fabs(rtb_Add1_jz);

  /* Switch: '<S82>/Switch' incorporates:
   *  Constant: '<S82>/BalanceCurrent'
   *  Constant: '<S82>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[81] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S82>/Switch' */

  /* Sum: '<S82>/Total load current draw' */
  rtb_Add1_je1 = rtb_Product[81] + rtb_Add1_iu1;

  /* Sum: '<S82>/Subtract' incorporates:
   *  Abs: '<S82>/Abs'
   *  Constant: '<S82>/InternalResistance'
   *  Product: '<S82>/IRVoltageDrop'
   */
  rtb_Subtract_lz = rtb_Polynomial_ml - 0.0018 * fabs(rtb_Add1_je1);

  /* Switch: '<S83>/Switch' incorporates:
   *  Constant: '<S83>/BalanceCurrent'
   *  Constant: '<S83>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[82] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S83>/Switch' */

  /* Sum: '<S83>/Total load current draw' */
  rtb_Add1_bj = rtb_Product[82] + rtb_Add1_iu1;

  /* Sum: '<S83>/Subtract' incorporates:
   *  Abs: '<S83>/Abs'
   *  Constant: '<S83>/InternalResistance'
   *  Product: '<S83>/IRVoltageDrop'
   */
  rtb_Subtract_ov = rtb_Polynomial_j - 0.0018 * fabs(rtb_Add1_bj);

  /* Switch: '<S84>/Switch' incorporates:
   *  Constant: '<S84>/BalanceCurrent'
   *  Constant: '<S84>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[83] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S84>/Switch' */

  /* Sum: '<S84>/Total load current draw' */
  rtb_Add1_j0 = rtb_Product[83] + rtb_Add1_iu1;

  /* Sum: '<S84>/Subtract' incorporates:
   *  Abs: '<S84>/Abs'
   *  Constant: '<S84>/InternalResistance'
   *  Product: '<S84>/IRVoltageDrop'
   */
  rtb_Subtract_eb = rtb_Polynomial_o0 - 0.0018 * fabs(rtb_Add1_j0);

  /* Switch: '<S85>/Switch' incorporates:
   *  Constant: '<S85>/BalanceCurrent'
   *  Constant: '<S85>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[84] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S85>/Switch' */

  /* Sum: '<S85>/Total load current draw' */
  rtb_Add1_lj = rtb_Product[84] + rtb_Add1_iu1;

  /* Sum: '<S85>/Subtract' incorporates:
   *  Abs: '<S85>/Abs'
   *  Constant: '<S85>/InternalResistance'
   *  Product: '<S85>/IRVoltageDrop'
   */
  rtb_Subtract_p3 = rtb_Polynomial_oco - 0.0018 * fabs(rtb_Add1_lj);

  /* Switch: '<S86>/Switch' incorporates:
   *  Constant: '<S86>/BalanceCurrent'
   *  Constant: '<S86>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[85] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S86>/Switch' */

  /* Sum: '<S86>/Total load current draw' */
  rtb_Add1_hk = rtb_Product[85] + rtb_Add1_iu1;

  /* Sum: '<S86>/Subtract' incorporates:
   *  Abs: '<S86>/Abs'
   *  Constant: '<S86>/InternalResistance'
   *  Product: '<S86>/IRVoltageDrop'
   */
  rtb_Subtract_aw = rtb_Polynomial_ny - 0.0018 * fabs(rtb_Add1_hk);

  /* Switch: '<S87>/Switch' incorporates:
   *  Constant: '<S87>/BalanceCurrent'
   *  Constant: '<S87>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[86] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S87>/Switch' */

  /* Sum: '<S87>/Total load current draw' */
  rtb_Add1_lm = rtb_Product[86] + rtb_Add1_iu1;

  /* Sum: '<S87>/Subtract' incorporates:
   *  Abs: '<S87>/Abs'
   *  Constant: '<S87>/InternalResistance'
   *  Product: '<S87>/IRVoltageDrop'
   */
  rtb_Subtract_pp = rtb_Polynomial_oh - 0.0018 * fabs(rtb_Add1_lm);

  /* Switch: '<S88>/Switch' incorporates:
   *  Constant: '<S88>/BalanceCurrent'
   *  Constant: '<S88>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[87] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S88>/Switch' */

  /* Sum: '<S88>/Total load current draw' */
  rtb_Add1_gk = rtb_Product[87] + rtb_Add1_iu1;

  /* Sum: '<S88>/Subtract' incorporates:
   *  Abs: '<S88>/Abs'
   *  Constant: '<S88>/InternalResistance'
   *  Product: '<S88>/IRVoltageDrop'
   */
  rtb_Subtract_iq = rtb_Polynomial_ic - 0.0018 * fabs(rtb_Add1_gk);

  /* Switch: '<S89>/Switch' incorporates:
   *  Constant: '<S89>/BalanceCurrent'
   *  Constant: '<S89>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[88] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S89>/Switch' */

  /* Sum: '<S89>/Total load current draw' */
  rtb_Add1_l2 = rtb_Product[88] + rtb_Add1_iu1;

  /* Sum: '<S89>/Subtract' incorporates:
   *  Abs: '<S89>/Abs'
   *  Constant: '<S89>/InternalResistance'
   *  Product: '<S89>/IRVoltageDrop'
   */
  rtb_Subtract_b0 = rtb_Polynomial_gw - 0.0018 * fabs(rtb_Add1_l2);

  /* Switch: '<S91>/Switch' incorporates:
   *  Constant: '<S91>/BalanceCurrent'
   *  Constant: '<S91>/Constant'
   *  Inport: '<Root>/DischargeSig'
   */
  if (rtU.DischargeSig[89] != 0.0) {
    rtb_Add1_iu1 = 0.0;
  } else {
    rtb_Add1_iu1 = 0.2;
  }

  /* End of Switch: '<S91>/Switch' */

  /* Sum: '<S91>/Total load current draw' */
  rtb_Add1_iu1 += rtb_Product[89];

  /* Sum: '<S91>/Subtract' incorporates:
   *  Abs: '<S91>/Abs'
   *  Constant: '<S91>/InternalResistance'
   *  Product: '<S91>/IRVoltageDrop'
   */
  rtb_Subtract_hwl = rtb_Polynomial_gq - 0.0018 * fabs(rtb_Add1_iu1);

  /* Outport: '<Root>/VoltageOut' */
  rtY.VoltageOut[0] = rtb_Amphoursintegration_pc;
  rtY.VoltageOut[1] = rtb_Subtract_cri;
  rtY.VoltageOut[2] = rtb_Subtract_im;
  rtY.VoltageOut[3] = rtb_Subtract_pt;
  rtY.VoltageOut[4] = rtb_Subtract_b;
  rtY.VoltageOut[5] = rtb_Subtract_lul;
  rtY.VoltageOut[6] = rtb_Subtract_d;
  rtY.VoltageOut[7] = rtb_Subtract_o;
  rtY.VoltageOut[8] = rtb_Subtract_nj;
  rtY.VoltageOut[9] = rtb_Subtract_ci;
  rtY.VoltageOut[10] = rtb_Subtract_jh;
  rtY.VoltageOut[11] = rtb_Subtract_ob;
  rtY.VoltageOut[12] = rtb_Subtract_j;
  rtY.VoltageOut[13] = rtb_Subtract_em;
  rtY.VoltageOut[14] = rtb_Subtract_prv;
  rtY.VoltageOut[15] = rtb_Subtract_mwa;
  rtY.VoltageOut[16] = rtb_Subtract_fc;
  rtY.VoltageOut[17] = rtb_Subtract_isf;
  rtY.VoltageOut[18] = rtb_Subtract_i;
  rtY.VoltageOut[19] = rtb_Subtract_l;
  rtY.VoltageOut[20] = rtb_Subtract_l4;
  rtY.VoltageOut[21] = rtb_Subtract_a;
  rtY.VoltageOut[22] = rtb_Subtract_g;
  rtY.VoltageOut[23] = rtb_Subtract_pl;
  rtY.VoltageOut[24] = rtb_Subtract_hw;
  rtY.VoltageOut[25] = rtb_Subtract_a5;
  rtY.VoltageOut[26] = rtb_Subtract_klw;
  rtY.VoltageOut[27] = rtb_Subtract_l0;
  rtY.VoltageOut[28] = rtb_Subtract_is;
  rtY.VoltageOut[29] = rtb_Subtract_k;
  rtY.VoltageOut[30] = rtb_Subtract_p;
  rtY.VoltageOut[31] = rtb_Subtract_o0;
  rtY.VoltageOut[32] = rtb_Subtract_f1;
  rtY.VoltageOut[33] = rtb_Subtract_h;
  rtY.VoltageOut[34] = rtb_Subtract_ee;
  rtY.VoltageOut[35] = rtb_Subtract_m;
  rtY.VoltageOut[36] = rtb_Subtract_kw;
  rtY.VoltageOut[37] = rtb_Subtract_hpb;
  rtY.VoltageOut[38] = rtb_Subtract_d5;
  rtY.VoltageOut[39] = rtb_Subtract_ar2;
  rtY.VoltageOut[40] = rtb_Subtract_ke;
  rtY.VoltageOut[41] = rtb_Subtract_bp;
  rtY.VoltageOut[42] = rtb_Subtract_dc;
  rtY.VoltageOut[43] = rtb_Subtract_jo;
  rtY.VoltageOut[44] = rtb_Subtract_f4;
  rtY.VoltageOut[45] = rtb_Subtract_pmv;
  rtY.VoltageOut[46] = rtb_Subtract_fw;
  rtY.VoltageOut[47] = rtb_Subtract_hb;
  rtY.VoltageOut[48] = rtb_Subtract_px;
  rtY.VoltageOut[49] = rtb_Subtract_pw;
  rtY.VoltageOut[50] = rtb_Subtract_fp;
  rtY.VoltageOut[51] = rtb_Subtract_ae;
  rtY.VoltageOut[52] = rtb_Subtract_ay;
  rtY.VoltageOut[53] = rtb_Subtract_oa;
  rtY.VoltageOut[54] = rtb_Subtract_c;
  rtY.VoltageOut[55] = rtb_Subtract_gd;
  rtY.VoltageOut[56] = rtb_Subtract_ny;
  rtY.VoltageOut[57] = rtb_Subtract_hx;
  rtY.VoltageOut[58] = rtb_Subtract_jq;
  rtY.VoltageOut[59] = rtb_Subtract_czq;
  rtY.VoltageOut[60] = rtb_Subtract_fg;
  rtY.VoltageOut[61] = rtb_Subtract_li;
  rtY.VoltageOut[62] = rtb_Subtract_gvo;
  rtY.VoltageOut[63] = rtb_Subtract_eh;
  rtY.VoltageOut[64] = rtb_Subtract_k5;
  rtY.VoltageOut[65] = rtb_Subtract_n;
  rtY.VoltageOut[66] = rtb_Subtract_ie;
  rtY.VoltageOut[67] = rtb_Subtract_dq;
  rtY.VoltageOut[68] = rtb_Subtract_kh;
  rtY.VoltageOut[69] = rtb_Subtract_e;
  rtY.VoltageOut[70] = rtb_Subtract_bh;
  rtY.VoltageOut[71] = rtb_Subtract_dve;
  rtY.VoltageOut[72] = rtb_Subtract_jk;
  rtY.VoltageOut[73] = rtb_Subtract_jt;
  rtY.VoltageOut[74] = rtb_Subtract_kk;
  rtY.VoltageOut[75] = rtb_Subtract_my;
  rtY.VoltageOut[76] = rtb_Subtract_cx;
  rtY.VoltageOut[77] = rtb_Subtract_e2;
  rtY.VoltageOut[78] = rtb_Subtract_nr;
  rtY.VoltageOut[79] = rtb_Subtract_aq;
  rtY.VoltageOut[80] = rtb_Subtract_cad;
  rtY.VoltageOut[81] = rtb_Subtract_lz;
  rtY.VoltageOut[82] = rtb_Subtract_ov;
  rtY.VoltageOut[83] = rtb_Subtract_eb;
  rtY.VoltageOut[84] = rtb_Subtract_p3;
  rtY.VoltageOut[85] = rtb_Subtract_aw;
  rtY.VoltageOut[86] = rtb_Subtract_pp;
  rtY.VoltageOut[87] = rtb_Subtract_iq;
  rtY.VoltageOut[88] = rtb_Subtract_b0;
  rtY.VoltageOut[89] = rtb_Subtract_hwl;

  /* Stop: '<S91>/Stop Simulation' incorporates:
   *  Constant: '<S270>/Constant'
   *  RelationalOperator: '<S270>/Compare'
   */
  if (rtb_Subtract_hwl <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S91>/Stop Simulation' */

  /* Outport: '<Root>/TotalOut' incorporates:
   *  Sum: '<S10>/Add'
   *  Sum: '<S11>/Add'
   *  Sum: '<S12>/Add'
   *  Sum: '<S13>/Add'
   *  Sum: '<S14>/Add'
   *  Sum: '<S15>/Add'
   *  Sum: '<S16>/Add'
   *  Sum: '<S17>/Add'
   *  Sum: '<S18>/Add'
   *  Sum: '<S19>/Add'
   *  Sum: '<S20>/Add'
   *  Sum: '<S21>/Add'
   *  Sum: '<S22>/Add'
   *  Sum: '<S23>/Add'
   *  Sum: '<S24>/Add'
   *  Sum: '<S25>/Add'
   *  Sum: '<S26>/Add'
   *  Sum: '<S27>/Add'
   *  Sum: '<S28>/Add'
   *  Sum: '<S29>/Add'
   *  Sum: '<S2>/Add'
   *  Sum: '<S30>/Add'
   *  Sum: '<S31>/Add'
   *  Sum: '<S32>/Add'
   *  Sum: '<S33>/Add'
   *  Sum: '<S34>/Add'
   *  Sum: '<S35>/Add'
   *  Sum: '<S36>/Add'
   *  Sum: '<S37>/Add'
   *  Sum: '<S38>/Add'
   *  Sum: '<S39>/Add'
   *  Sum: '<S3>/Add'
   *  Sum: '<S40>/Add'
   *  Sum: '<S41>/Add'
   *  Sum: '<S42>/Add'
   *  Sum: '<S43>/Add'
   *  Sum: '<S44>/Add'
   *  Sum: '<S45>/Add'
   *  Sum: '<S46>/Add'
   *  Sum: '<S47>/Add'
   *  Sum: '<S48>/Add'
   *  Sum: '<S49>/Add'
   *  Sum: '<S4>/Add'
   *  Sum: '<S50>/Add'
   *  Sum: '<S51>/Add'
   *  Sum: '<S52>/Add'
   *  Sum: '<S53>/Add'
   *  Sum: '<S54>/Add'
   *  Sum: '<S55>/Add'
   *  Sum: '<S56>/Add'
   *  Sum: '<S57>/Add'
   *  Sum: '<S58>/Add'
   *  Sum: '<S59>/Add'
   *  Sum: '<S5>/Add'
   *  Sum: '<S60>/Add'
   *  Sum: '<S61>/Add'
   *  Sum: '<S62>/Add'
   *  Sum: '<S63>/Add'
   *  Sum: '<S64>/Add'
   *  Sum: '<S65>/Add'
   *  Sum: '<S66>/Add'
   *  Sum: '<S67>/Add'
   *  Sum: '<S68>/Add'
   *  Sum: '<S69>/Add'
   *  Sum: '<S6>/Add'
   *  Sum: '<S70>/Add'
   *  Sum: '<S71>/Add'
   *  Sum: '<S72>/Add'
   *  Sum: '<S73>/Add'
   *  Sum: '<S74>/Add'
   *  Sum: '<S75>/Add'
   *  Sum: '<S76>/Add'
   *  Sum: '<S77>/Add'
   *  Sum: '<S78>/Add'
   *  Sum: '<S79>/Add'
   *  Sum: '<S7>/Add'
   *  Sum: '<S80>/Add'
   *  Sum: '<S81>/Add'
   *  Sum: '<S82>/Add'
   *  Sum: '<S83>/Add'
   *  Sum: '<S84>/Add'
   *  Sum: '<S85>/Add'
   *  Sum: '<S86>/Add'
   *  Sum: '<S87>/Add'
   *  Sum: '<S88>/Add'
   *  Sum: '<S89>/Add'
   *  Sum: '<S8>/Add'
   *  Sum: '<S90>/Add'
   *  Sum: '<S91>/Add'
   *  Sum: '<S9>/Add'
   */
  rtY.TotalOut =
    (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((
    (((((((((((rtb_Subtract_cri + rtb_Amphoursintegration_pc) + rtb_Subtract_im)
    + rtb_Subtract_pt) + rtb_Subtract_b) + rtb_Subtract_lul) + rtb_Subtract_d) +
    rtb_Subtract_o) + rtb_Subtract_nj) + rtb_Subtract_ci) + rtb_Subtract_jh) +
    rtb_Subtract_ob) + rtb_Subtract_j) + rtb_Subtract_em) + rtb_Subtract_prv) +
    rtb_Subtract_mwa) + rtb_Subtract_fc) + rtb_Subtract_isf) + rtb_Subtract_i) +
    rtb_Subtract_l) + rtb_Subtract_l4) + rtb_Subtract_a) + rtb_Subtract_g) +
    rtb_Subtract_pl) + rtb_Subtract_hw) + rtb_Subtract_a5) + rtb_Subtract_klw) +
    rtb_Subtract_l0) + rtb_Subtract_is) + rtb_Subtract_k) + rtb_Subtract_p) +
    rtb_Subtract_o0) + rtb_Subtract_f1) + rtb_Subtract_h) + rtb_Subtract_ee) +
    rtb_Subtract_m) + rtb_Subtract_kw) + rtb_Subtract_hpb) + rtb_Subtract_d5) +
    rtb_Subtract_ar2) + rtb_Subtract_ke) + rtb_Subtract_bp) + rtb_Subtract_dc) +
    rtb_Subtract_jo) + rtb_Subtract_f4) + rtb_Subtract_pmv) + rtb_Subtract_fw) +
    rtb_Subtract_hb) + rtb_Subtract_px) + rtb_Subtract_pw) + rtb_Subtract_fp) +
    rtb_Subtract_ae) + rtb_Subtract_ay) + rtb_Subtract_oa) + rtb_Subtract_c) +
    rtb_Subtract_gd) + rtb_Subtract_ny) + rtb_Subtract_hx) + rtb_Subtract_jq) +
    rtb_Subtract_czq) + rtb_Subtract_fg) + rtb_Subtract_li) + rtb_Subtract_gvo)
    + rtb_Subtract_eh) + rtb_Subtract_k5) + rtb_Subtract_n) + rtb_Subtract_ie) +
    rtb_Subtract_dq) + rtb_Subtract_kh) + rtb_Subtract_e) + rtb_Subtract_bh) +
                      rtb_Subtract_dve) + rtb_Subtract_jk) + rtb_Subtract_jt) +
                   rtb_Subtract_kk) + rtb_Subtract_my) + rtb_Subtract_cx) +
                rtb_Subtract_e2) + rtb_Subtract_nr) + rtb_Subtract_aq) +
             rtb_Subtract_cad) + rtb_Subtract_lz) + rtb_Subtract_ov) +
          rtb_Subtract_eb) + rtb_Subtract_p3) + rtb_Subtract_aw) +
       rtb_Subtract_pp) + rtb_Subtract_iq) + rtb_Subtract_b0) + rtb_Subtract_hwl;

  /* Stop: '<S91>/Stop Simulation1' incorporates:
   *  Constant: '<S271>/Constant'
   *  RelationalOperator: '<S271>/Compare'
   */
  if (rtb_Polynomial_gq > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S91>/Stop Simulation1' */

  /* Stop: '<S89>/Stop Simulation' incorporates:
   *  Constant: '<S266>/Constant'
   *  RelationalOperator: '<S266>/Compare'
   */
  if (rtb_Subtract_b0 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S89>/Stop Simulation' */

  /* Stop: '<S89>/Stop Simulation1' incorporates:
   *  Constant: '<S267>/Constant'
   *  RelationalOperator: '<S267>/Compare'
   */
  if (rtb_Polynomial_gw > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S89>/Stop Simulation1' */

  /* Stop: '<S88>/Stop Simulation' incorporates:
   *  Constant: '<S264>/Constant'
   *  RelationalOperator: '<S264>/Compare'
   */
  if (rtb_Subtract_iq <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S88>/Stop Simulation' */

  /* Stop: '<S88>/Stop Simulation1' incorporates:
   *  Constant: '<S265>/Constant'
   *  RelationalOperator: '<S265>/Compare'
   */
  if (rtb_Polynomial_ic > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S88>/Stop Simulation1' */

  /* Stop: '<S87>/Stop Simulation' incorporates:
   *  Constant: '<S262>/Constant'
   *  RelationalOperator: '<S262>/Compare'
   */
  if (rtb_Subtract_pp <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S87>/Stop Simulation' */

  /* Stop: '<S87>/Stop Simulation1' incorporates:
   *  Constant: '<S263>/Constant'
   *  RelationalOperator: '<S263>/Compare'
   */
  if (rtb_Polynomial_oh > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S87>/Stop Simulation1' */

  /* Stop: '<S86>/Stop Simulation' incorporates:
   *  Constant: '<S260>/Constant'
   *  RelationalOperator: '<S260>/Compare'
   */
  if (rtb_Subtract_aw <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S86>/Stop Simulation' */

  /* Stop: '<S86>/Stop Simulation1' incorporates:
   *  Constant: '<S261>/Constant'
   *  RelationalOperator: '<S261>/Compare'
   */
  if (rtb_Polynomial_ny > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S86>/Stop Simulation1' */

  /* Stop: '<S85>/Stop Simulation' incorporates:
   *  Constant: '<S258>/Constant'
   *  RelationalOperator: '<S258>/Compare'
   */
  if (rtb_Subtract_p3 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S85>/Stop Simulation' */

  /* Stop: '<S85>/Stop Simulation1' incorporates:
   *  Constant: '<S259>/Constant'
   *  RelationalOperator: '<S259>/Compare'
   */
  if (rtb_Polynomial_oco > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S85>/Stop Simulation1' */

  /* Stop: '<S84>/Stop Simulation' incorporates:
   *  Constant: '<S256>/Constant'
   *  RelationalOperator: '<S256>/Compare'
   */
  if (rtb_Subtract_eb <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S84>/Stop Simulation' */

  /* Stop: '<S84>/Stop Simulation1' incorporates:
   *  Constant: '<S257>/Constant'
   *  RelationalOperator: '<S257>/Compare'
   */
  if (rtb_Polynomial_o0 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S84>/Stop Simulation1' */

  /* Stop: '<S83>/Stop Simulation' incorporates:
   *  Constant: '<S254>/Constant'
   *  RelationalOperator: '<S254>/Compare'
   */
  if (rtb_Subtract_ov <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S83>/Stop Simulation' */

  /* Stop: '<S83>/Stop Simulation1' incorporates:
   *  Constant: '<S255>/Constant'
   *  RelationalOperator: '<S255>/Compare'
   */
  if (rtb_Polynomial_j > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S83>/Stop Simulation1' */

  /* Stop: '<S82>/Stop Simulation' incorporates:
   *  Constant: '<S252>/Constant'
   *  RelationalOperator: '<S252>/Compare'
   */
  if (rtb_Subtract_lz <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S82>/Stop Simulation' */

  /* Stop: '<S82>/Stop Simulation1' incorporates:
   *  Constant: '<S253>/Constant'
   *  RelationalOperator: '<S253>/Compare'
   */
  if (rtb_Polynomial_ml > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S82>/Stop Simulation1' */

  /* Stop: '<S81>/Stop Simulation' incorporates:
   *  Constant: '<S250>/Constant'
   *  RelationalOperator: '<S250>/Compare'
   */
  if (rtb_Subtract_cad <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S81>/Stop Simulation' */

  /* Stop: '<S81>/Stop Simulation1' incorporates:
   *  Constant: '<S251>/Constant'
   *  RelationalOperator: '<S251>/Compare'
   */
  if (rtb_Polynomial_de > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S81>/Stop Simulation1' */

  /* Stop: '<S80>/Stop Simulation' incorporates:
   *  Constant: '<S248>/Constant'
   *  RelationalOperator: '<S248>/Compare'
   */
  if (rtb_Subtract_aq <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S80>/Stop Simulation' */

  /* Stop: '<S80>/Stop Simulation1' incorporates:
   *  Constant: '<S249>/Constant'
   *  RelationalOperator: '<S249>/Compare'
   */
  if (rtb_Polynomial_aq > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S80>/Stop Simulation1' */

  /* Stop: '<S78>/Stop Simulation' incorporates:
   *  Constant: '<S244>/Constant'
   *  RelationalOperator: '<S244>/Compare'
   */
  if (rtb_Subtract_nr <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S78>/Stop Simulation' */

  /* Stop: '<S78>/Stop Simulation1' incorporates:
   *  Constant: '<S245>/Constant'
   *  RelationalOperator: '<S245>/Compare'
   */
  if (rtb_Polynomial_mv > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S78>/Stop Simulation1' */

  /* Stop: '<S77>/Stop Simulation' incorporates:
   *  Constant: '<S242>/Constant'
   *  RelationalOperator: '<S242>/Compare'
   */
  if (rtb_Subtract_e2 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S77>/Stop Simulation' */

  /* Stop: '<S77>/Stop Simulation1' incorporates:
   *  Constant: '<S243>/Constant'
   *  RelationalOperator: '<S243>/Compare'
   */
  if (rtb_Polynomial_ox > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S77>/Stop Simulation1' */

  /* Stop: '<S76>/Stop Simulation' incorporates:
   *  Constant: '<S240>/Constant'
   *  RelationalOperator: '<S240>/Compare'
   */
  if (rtb_Subtract_cx <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S76>/Stop Simulation' */

  /* Stop: '<S76>/Stop Simulation1' incorporates:
   *  Constant: '<S241>/Constant'
   *  RelationalOperator: '<S241>/Compare'
   */
  if (rtb_Polynomial_jb > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S76>/Stop Simulation1' */

  /* Stop: '<S75>/Stop Simulation' incorporates:
   *  Constant: '<S238>/Constant'
   *  RelationalOperator: '<S238>/Compare'
   */
  if (rtb_Subtract_my <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S75>/Stop Simulation' */

  /* Stop: '<S75>/Stop Simulation1' incorporates:
   *  Constant: '<S239>/Constant'
   *  RelationalOperator: '<S239>/Compare'
   */
  if (rtb_Polynomial_go > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S75>/Stop Simulation1' */

  /* Stop: '<S74>/Stop Simulation' incorporates:
   *  Constant: '<S236>/Constant'
   *  RelationalOperator: '<S236>/Compare'
   */
  if (rtb_Subtract_kk <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S74>/Stop Simulation' */

  /* Stop: '<S74>/Stop Simulation1' incorporates:
   *  Constant: '<S237>/Constant'
   *  RelationalOperator: '<S237>/Compare'
   */
  if (rtb_Polynomial_nd > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S74>/Stop Simulation1' */

  /* Stop: '<S73>/Stop Simulation' incorporates:
   *  Constant: '<S234>/Constant'
   *  RelationalOperator: '<S234>/Compare'
   */
  if (rtb_Subtract_jt <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S73>/Stop Simulation' */

  /* Stop: '<S73>/Stop Simulation1' incorporates:
   *  Constant: '<S235>/Constant'
   *  RelationalOperator: '<S235>/Compare'
   */
  if (rtb_Polynomial_b0b > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S73>/Stop Simulation1' */

  /* Stop: '<S72>/Stop Simulation' incorporates:
   *  Constant: '<S232>/Constant'
   *  RelationalOperator: '<S232>/Compare'
   */
  if (rtb_Subtract_jk <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S72>/Stop Simulation' */

  /* Stop: '<S72>/Stop Simulation1' incorporates:
   *  Constant: '<S233>/Constant'
   *  RelationalOperator: '<S233>/Compare'
   */
  if (rtb_Polynomial_df > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S72>/Stop Simulation1' */

  /* Stop: '<S71>/Stop Simulation' incorporates:
   *  Constant: '<S230>/Constant'
   *  RelationalOperator: '<S230>/Compare'
   */
  if (rtb_Subtract_dve <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S71>/Stop Simulation' */

  /* Stop: '<S71>/Stop Simulation1' incorporates:
   *  Constant: '<S231>/Constant'
   *  RelationalOperator: '<S231>/Compare'
   */
  if (rtb_Polynomial_hr > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S71>/Stop Simulation1' */

  /* Stop: '<S70>/Stop Simulation' incorporates:
   *  Constant: '<S228>/Constant'
   *  RelationalOperator: '<S228>/Compare'
   */
  if (rtb_Subtract_bh <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S70>/Stop Simulation' */

  /* Stop: '<S70>/Stop Simulation1' incorporates:
   *  Constant: '<S229>/Constant'
   *  RelationalOperator: '<S229>/Compare'
   */
  if (rtb_Polynomial_hs > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S70>/Stop Simulation1' */

  /* Stop: '<S69>/Stop Simulation' incorporates:
   *  Constant: '<S226>/Constant'
   *  RelationalOperator: '<S226>/Compare'
   */
  if (rtb_Subtract_e <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S69>/Stop Simulation' */

  /* Stop: '<S69>/Stop Simulation1' incorporates:
   *  Constant: '<S227>/Constant'
   *  RelationalOperator: '<S227>/Compare'
   */
  if (rtb_Polynomial_a1 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S69>/Stop Simulation1' */

  /* Stop: '<S67>/Stop Simulation' incorporates:
   *  Constant: '<S222>/Constant'
   *  RelationalOperator: '<S222>/Compare'
   */
  if (rtb_Subtract_kh <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S67>/Stop Simulation' */

  /* Stop: '<S67>/Stop Simulation1' incorporates:
   *  Constant: '<S223>/Constant'
   *  RelationalOperator: '<S223>/Compare'
   */
  if (rtb_Polynomial_fx > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S67>/Stop Simulation1' */

  /* Stop: '<S66>/Stop Simulation' incorporates:
   *  Constant: '<S220>/Constant'
   *  RelationalOperator: '<S220>/Compare'
   */
  if (rtb_Subtract_dq <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S66>/Stop Simulation' */

  /* Stop: '<S66>/Stop Simulation1' incorporates:
   *  Constant: '<S221>/Constant'
   *  RelationalOperator: '<S221>/Compare'
   */
  if (rtb_Polynomial_d > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S66>/Stop Simulation1' */

  /* Stop: '<S65>/Stop Simulation' incorporates:
   *  Constant: '<S218>/Constant'
   *  RelationalOperator: '<S218>/Compare'
   */
  if (rtb_Subtract_ie <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S65>/Stop Simulation' */

  /* Stop: '<S65>/Stop Simulation1' incorporates:
   *  Constant: '<S219>/Constant'
   *  RelationalOperator: '<S219>/Compare'
   */
  if (rtb_Polynomial_fpp > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S65>/Stop Simulation1' */

  /* Stop: '<S64>/Stop Simulation' incorporates:
   *  Constant: '<S216>/Constant'
   *  RelationalOperator: '<S216>/Compare'
   */
  if (rtb_Subtract_n <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S64>/Stop Simulation' */

  /* Stop: '<S64>/Stop Simulation1' incorporates:
   *  Constant: '<S217>/Constant'
   *  RelationalOperator: '<S217>/Compare'
   */
  if (rtb_Polynomial_i1 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S64>/Stop Simulation1' */

  /* Stop: '<S63>/Stop Simulation' incorporates:
   *  Constant: '<S214>/Constant'
   *  RelationalOperator: '<S214>/Compare'
   */
  if (rtb_Subtract_k5 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S63>/Stop Simulation' */

  /* Stop: '<S63>/Stop Simulation1' incorporates:
   *  Constant: '<S215>/Constant'
   *  RelationalOperator: '<S215>/Compare'
   */
  if (rtb_Polynomial_oi > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S63>/Stop Simulation1' */

  /* Stop: '<S62>/Stop Simulation' incorporates:
   *  Constant: '<S212>/Constant'
   *  RelationalOperator: '<S212>/Compare'
   */
  if (rtb_Subtract_eh <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S62>/Stop Simulation' */

  /* Stop: '<S62>/Stop Simulation1' incorporates:
   *  Constant: '<S213>/Constant'
   *  RelationalOperator: '<S213>/Compare'
   */
  if (rtb_Polynomial_c2 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S62>/Stop Simulation1' */

  /* Stop: '<S61>/Stop Simulation' incorporates:
   *  Constant: '<S210>/Constant'
   *  RelationalOperator: '<S210>/Compare'
   */
  if (rtb_Subtract_gvo <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S61>/Stop Simulation' */

  /* Stop: '<S61>/Stop Simulation1' incorporates:
   *  Constant: '<S211>/Constant'
   *  RelationalOperator: '<S211>/Compare'
   */
  if (rtb_Polynomial_i3k > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S61>/Stop Simulation1' */

  /* Stop: '<S60>/Stop Simulation' incorporates:
   *  Constant: '<S208>/Constant'
   *  RelationalOperator: '<S208>/Compare'
   */
  if (rtb_Subtract_li <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S60>/Stop Simulation' */

  /* Stop: '<S60>/Stop Simulation1' incorporates:
   *  Constant: '<S209>/Constant'
   *  RelationalOperator: '<S209>/Compare'
   */
  if (rtb_Polynomial_dh > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S60>/Stop Simulation1' */

  /* Stop: '<S59>/Stop Simulation' incorporates:
   *  Constant: '<S206>/Constant'
   *  RelationalOperator: '<S206>/Compare'
   */
  if (rtb_Subtract_fg <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S59>/Stop Simulation' */

  /* Stop: '<S59>/Stop Simulation1' incorporates:
   *  Constant: '<S207>/Constant'
   *  RelationalOperator: '<S207>/Compare'
   */
  if (rtb_Polynomial_db > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S59>/Stop Simulation1' */

  /* Stop: '<S58>/Stop Simulation' incorporates:
   *  Constant: '<S204>/Constant'
   *  RelationalOperator: '<S204>/Compare'
   */
  if (rtb_Subtract_czq <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S58>/Stop Simulation' */

  /* Stop: '<S58>/Stop Simulation1' incorporates:
   *  Constant: '<S205>/Constant'
   *  RelationalOperator: '<S205>/Compare'
   */
  if (rtb_Polynomial_p4 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S58>/Stop Simulation1' */

  /* Stop: '<S56>/Stop Simulation' incorporates:
   *  Constant: '<S200>/Constant'
   *  RelationalOperator: '<S200>/Compare'
   */
  if (rtb_Subtract_jq <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S56>/Stop Simulation' */

  /* Stop: '<S56>/Stop Simulation1' incorporates:
   *  Constant: '<S201>/Constant'
   *  RelationalOperator: '<S201>/Compare'
   */
  if (rtb_Polynomial_ib > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S56>/Stop Simulation1' */

  /* Stop: '<S55>/Stop Simulation' incorporates:
   *  Constant: '<S198>/Constant'
   *  RelationalOperator: '<S198>/Compare'
   */
  if (rtb_Subtract_hx <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S55>/Stop Simulation' */

  /* Stop: '<S55>/Stop Simulation1' incorporates:
   *  Constant: '<S199>/Constant'
   *  RelationalOperator: '<S199>/Compare'
   */
  if (rtb_Polynomial_gj > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S55>/Stop Simulation1' */

  /* Stop: '<S54>/Stop Simulation' incorporates:
   *  Constant: '<S196>/Constant'
   *  RelationalOperator: '<S196>/Compare'
   */
  if (rtb_Subtract_ny <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S54>/Stop Simulation' */

  /* Stop: '<S54>/Stop Simulation1' incorporates:
   *  Constant: '<S197>/Constant'
   *  RelationalOperator: '<S197>/Compare'
   */
  if (rtb_Polynomial_hd > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S54>/Stop Simulation1' */

  /* Stop: '<S53>/Stop Simulation' incorporates:
   *  Constant: '<S194>/Constant'
   *  RelationalOperator: '<S194>/Compare'
   */
  if (rtb_Subtract_gd <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S53>/Stop Simulation' */

  /* Stop: '<S53>/Stop Simulation1' incorporates:
   *  Constant: '<S195>/Constant'
   *  RelationalOperator: '<S195>/Compare'
   */
  if (rtb_Polynomial_fn > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S53>/Stop Simulation1' */

  /* Stop: '<S52>/Stop Simulation' incorporates:
   *  Constant: '<S192>/Constant'
   *  RelationalOperator: '<S192>/Compare'
   */
  if (rtb_Subtract_c <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S52>/Stop Simulation' */

  /* Stop: '<S52>/Stop Simulation1' incorporates:
   *  Constant: '<S193>/Constant'
   *  RelationalOperator: '<S193>/Compare'
   */
  if (rtb_Polynomial_av > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S52>/Stop Simulation1' */

  /* Stop: '<S51>/Stop Simulation' incorporates:
   *  Constant: '<S190>/Constant'
   *  RelationalOperator: '<S190>/Compare'
   */
  if (rtb_Subtract_oa <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S51>/Stop Simulation' */

  /* Stop: '<S51>/Stop Simulation1' incorporates:
   *  Constant: '<S191>/Constant'
   *  RelationalOperator: '<S191>/Compare'
   */
  if (rtb_Polynomial_hl > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S51>/Stop Simulation1' */

  /* Stop: '<S50>/Stop Simulation' incorporates:
   *  Constant: '<S188>/Constant'
   *  RelationalOperator: '<S188>/Compare'
   */
  if (rtb_Subtract_ay <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S50>/Stop Simulation' */

  /* Stop: '<S50>/Stop Simulation1' incorporates:
   *  Constant: '<S189>/Constant'
   *  RelationalOperator: '<S189>/Compare'
   */
  if (rtb_Polynomial_aio > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S50>/Stop Simulation1' */

  /* Stop: '<S49>/Stop Simulation' incorporates:
   *  Constant: '<S186>/Constant'
   *  RelationalOperator: '<S186>/Compare'
   */
  if (rtb_Subtract_ae <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S49>/Stop Simulation' */

  /* Stop: '<S49>/Stop Simulation1' incorporates:
   *  Constant: '<S187>/Constant'
   *  RelationalOperator: '<S187>/Compare'
   */
  if (rtb_Polynomial_pn > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S49>/Stop Simulation1' */

  /* Stop: '<S48>/Stop Simulation' incorporates:
   *  Constant: '<S184>/Constant'
   *  RelationalOperator: '<S184>/Compare'
   */
  if (rtb_Subtract_fp <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S48>/Stop Simulation' */

  /* Stop: '<S48>/Stop Simulation1' incorporates:
   *  Constant: '<S185>/Constant'
   *  RelationalOperator: '<S185>/Compare'
   */
  if (rtb_Polynomial_nt > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S48>/Stop Simulation1' */

  /* Stop: '<S47>/Stop Simulation' incorporates:
   *  Constant: '<S182>/Constant'
   *  RelationalOperator: '<S182>/Compare'
   */
  if (rtb_Subtract_pw <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S47>/Stop Simulation' */

  /* Stop: '<S47>/Stop Simulation1' incorporates:
   *  Constant: '<S183>/Constant'
   *  RelationalOperator: '<S183>/Compare'
   */
  if (rtb_Polynomial_jr > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S47>/Stop Simulation1' */

  /* Stop: '<S45>/Stop Simulation' incorporates:
   *  Constant: '<S178>/Constant'
   *  RelationalOperator: '<S178>/Compare'
   */
  if (rtb_Subtract_px <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S45>/Stop Simulation' */

  /* Stop: '<S45>/Stop Simulation1' incorporates:
   *  Constant: '<S179>/Constant'
   *  RelationalOperator: '<S179>/Compare'
   */
  if (rtb_Polynomial_m > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S45>/Stop Simulation1' */

  /* Stop: '<S44>/Stop Simulation' incorporates:
   *  Constant: '<S176>/Constant'
   *  RelationalOperator: '<S176>/Compare'
   */
  if (rtb_Subtract_hb <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S44>/Stop Simulation' */

  /* Stop: '<S44>/Stop Simulation1' incorporates:
   *  Constant: '<S177>/Constant'
   *  RelationalOperator: '<S177>/Compare'
   */
  if (rtb_Polynomial_p1 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S44>/Stop Simulation1' */

  /* Stop: '<S43>/Stop Simulation' incorporates:
   *  Constant: '<S174>/Constant'
   *  RelationalOperator: '<S174>/Compare'
   */
  if (rtb_Subtract_fw <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S43>/Stop Simulation' */

  /* Stop: '<S43>/Stop Simulation1' incorporates:
   *  Constant: '<S175>/Constant'
   *  RelationalOperator: '<S175>/Compare'
   */
  if (rtb_Polynomial_if > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S43>/Stop Simulation1' */

  /* Stop: '<S42>/Stop Simulation' incorporates:
   *  Constant: '<S172>/Constant'
   *  RelationalOperator: '<S172>/Compare'
   */
  if (rtb_Subtract_pmv <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S42>/Stop Simulation' */

  /* Stop: '<S42>/Stop Simulation1' incorporates:
   *  Constant: '<S173>/Constant'
   *  RelationalOperator: '<S173>/Compare'
   */
  if (rtb_Polynomial_p > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S42>/Stop Simulation1' */

  /* Stop: '<S41>/Stop Simulation' incorporates:
   *  Constant: '<S170>/Constant'
   *  RelationalOperator: '<S170>/Compare'
   */
  if (rtb_Subtract_f4 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S41>/Stop Simulation' */

  /* Stop: '<S41>/Stop Simulation1' incorporates:
   *  Constant: '<S171>/Constant'
   *  RelationalOperator: '<S171>/Compare'
   */
  if (rtb_Polynomial_ie > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S41>/Stop Simulation1' */

  /* Stop: '<S40>/Stop Simulation' incorporates:
   *  Constant: '<S168>/Constant'
   *  RelationalOperator: '<S168>/Compare'
   */
  if (rtb_Subtract_jo <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S40>/Stop Simulation' */

  /* Stop: '<S40>/Stop Simulation1' incorporates:
   *  Constant: '<S169>/Constant'
   *  RelationalOperator: '<S169>/Compare'
   */
  if (rtb_Polynomial_fl > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S40>/Stop Simulation1' */

  /* Stop: '<S39>/Stop Simulation' incorporates:
   *  Constant: '<S166>/Constant'
   *  RelationalOperator: '<S166>/Compare'
   */
  if (rtb_Subtract_dc <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S39>/Stop Simulation' */

  /* Stop: '<S39>/Stop Simulation1' incorporates:
   *  Constant: '<S167>/Constant'
   *  RelationalOperator: '<S167>/Compare'
   */
  if (rtb_Polynomial_ll > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S39>/Stop Simulation1' */

  /* Stop: '<S38>/Stop Simulation' incorporates:
   *  Constant: '<S164>/Constant'
   *  RelationalOperator: '<S164>/Compare'
   */
  if (rtb_Subtract_bp <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S38>/Stop Simulation' */

  /* Stop: '<S38>/Stop Simulation1' incorporates:
   *  Constant: '<S165>/Constant'
   *  RelationalOperator: '<S165>/Compare'
   */
  if (rtb_Polynomial_er > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S38>/Stop Simulation1' */

  /* Stop: '<S37>/Stop Simulation' incorporates:
   *  Constant: '<S162>/Constant'
   *  RelationalOperator: '<S162>/Compare'
   */
  if (rtb_Subtract_ke <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S37>/Stop Simulation' */

  /* Stop: '<S37>/Stop Simulation1' incorporates:
   *  Constant: '<S163>/Constant'
   *  RelationalOperator: '<S163>/Compare'
   */
  if (rtb_Polynomial_ogu > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S37>/Stop Simulation1' */

  /* Stop: '<S36>/Stop Simulation' incorporates:
   *  Constant: '<S160>/Constant'
   *  RelationalOperator: '<S160>/Compare'
   */
  if (rtb_Subtract_ar2 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S36>/Stop Simulation' */

  /* Stop: '<S36>/Stop Simulation1' incorporates:
   *  Constant: '<S161>/Constant'
   *  RelationalOperator: '<S161>/Compare'
   */
  if (rtb_Polynomial_ap > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S36>/Stop Simulation1' */

  /* Stop: '<S34>/Stop Simulation' incorporates:
   *  Constant: '<S156>/Constant'
   *  RelationalOperator: '<S156>/Compare'
   */
  if (rtb_Subtract_d5 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S34>/Stop Simulation' */

  /* Stop: '<S34>/Stop Simulation1' incorporates:
   *  Constant: '<S157>/Constant'
   *  RelationalOperator: '<S157>/Compare'
   */
  if (rtb_Polynomial_hb > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S34>/Stop Simulation1' */

  /* Stop: '<S33>/Stop Simulation' incorporates:
   *  Constant: '<S154>/Constant'
   *  RelationalOperator: '<S154>/Compare'
   */
  if (rtb_Subtract_hpb <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S33>/Stop Simulation' */

  /* Stop: '<S33>/Stop Simulation1' incorporates:
   *  Constant: '<S155>/Constant'
   *  RelationalOperator: '<S155>/Compare'
   */
  if (rtb_Polynomial_ad > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S33>/Stop Simulation1' */

  /* Stop: '<S32>/Stop Simulation' incorporates:
   *  Constant: '<S152>/Constant'
   *  RelationalOperator: '<S152>/Compare'
   */
  if (rtb_Subtract_kw <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S32>/Stop Simulation' */

  /* Stop: '<S32>/Stop Simulation1' incorporates:
   *  Constant: '<S153>/Constant'
   *  RelationalOperator: '<S153>/Compare'
   */
  if (rtb_Polynomial_pt > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S32>/Stop Simulation1' */

  /* Stop: '<S31>/Stop Simulation' incorporates:
   *  Constant: '<S150>/Constant'
   *  RelationalOperator: '<S150>/Compare'
   */
  if (rtb_Subtract_m <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S31>/Stop Simulation' */

  /* Stop: '<S31>/Stop Simulation1' incorporates:
   *  Constant: '<S151>/Constant'
   *  RelationalOperator: '<S151>/Compare'
   */
  if (rtb_Polynomial_by > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S31>/Stop Simulation1' */

  /* Stop: '<S30>/Stop Simulation' incorporates:
   *  Constant: '<S148>/Constant'
   *  RelationalOperator: '<S148>/Compare'
   */
  if (rtb_Subtract_ee <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S30>/Stop Simulation' */

  /* Stop: '<S30>/Stop Simulation1' incorporates:
   *  Constant: '<S149>/Constant'
   *  RelationalOperator: '<S149>/Compare'
   */
  if (rtb_Polynomial_i > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S30>/Stop Simulation1' */

  /* Stop: '<S29>/Stop Simulation' incorporates:
   *  Constant: '<S146>/Constant'
   *  RelationalOperator: '<S146>/Compare'
   */
  if (rtb_Subtract_h <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S29>/Stop Simulation' */

  /* Stop: '<S29>/Stop Simulation1' incorporates:
   *  Constant: '<S147>/Constant'
   *  RelationalOperator: '<S147>/Compare'
   */
  if (rtb_Polynomial_ba > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S29>/Stop Simulation1' */

  /* Stop: '<S28>/Stop Simulation' incorporates:
   *  Constant: '<S144>/Constant'
   *  RelationalOperator: '<S144>/Compare'
   */
  if (rtb_Subtract_f1 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S28>/Stop Simulation' */

  /* Stop: '<S28>/Stop Simulation1' incorporates:
   *  Constant: '<S145>/Constant'
   *  RelationalOperator: '<S145>/Compare'
   */
  if (rtb_Polynomial_n > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S28>/Stop Simulation1' */

  /* Stop: '<S27>/Stop Simulation' incorporates:
   *  Constant: '<S142>/Constant'
   *  RelationalOperator: '<S142>/Compare'
   */
  if (rtb_Subtract_o0 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S27>/Stop Simulation' */

  /* Stop: '<S27>/Stop Simulation1' incorporates:
   *  Constant: '<S143>/Constant'
   *  RelationalOperator: '<S143>/Compare'
   */
  if (rtb_Polynomial_bq > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S27>/Stop Simulation1' */

  /* Stop: '<S26>/Stop Simulation' incorporates:
   *  Constant: '<S140>/Constant'
   *  RelationalOperator: '<S140>/Compare'
   */
  if (rtb_Subtract_p <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S26>/Stop Simulation' */

  /* Stop: '<S26>/Stop Simulation1' incorporates:
   *  Constant: '<S141>/Constant'
   *  RelationalOperator: '<S141>/Compare'
   */
  if (rtb_Polynomial_ct > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S26>/Stop Simulation1' */

  /* Stop: '<S25>/Stop Simulation' incorporates:
   *  Constant: '<S138>/Constant'
   *  RelationalOperator: '<S138>/Compare'
   */
  if (rtb_Subtract_k <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S25>/Stop Simulation' */

  /* Stop: '<S25>/Stop Simulation1' incorporates:
   *  Constant: '<S139>/Constant'
   *  RelationalOperator: '<S139>/Compare'
   */
  if (rtb_Polynomial_i4 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S25>/Stop Simulation1' */

  /* Stop: '<S23>/Stop Simulation' incorporates:
   *  Constant: '<S134>/Constant'
   *  RelationalOperator: '<S134>/Compare'
   */
  if (rtb_Subtract_is <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S23>/Stop Simulation' */

  /* Stop: '<S23>/Stop Simulation1' incorporates:
   *  Constant: '<S135>/Constant'
   *  RelationalOperator: '<S135>/Compare'
   */
  if (rtb_Polynomial_g > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S23>/Stop Simulation1' */

  /* Stop: '<S22>/Stop Simulation' incorporates:
   *  Constant: '<S132>/Constant'
   *  RelationalOperator: '<S132>/Compare'
   */
  if (rtb_Subtract_l0 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S22>/Stop Simulation' */

  /* Stop: '<S22>/Stop Simulation1' incorporates:
   *  Constant: '<S133>/Constant'
   *  RelationalOperator: '<S133>/Compare'
   */
  if (rtb_Polynomial_bw > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S22>/Stop Simulation1' */

  /* Stop: '<S21>/Stop Simulation' incorporates:
   *  Constant: '<S130>/Constant'
   *  RelationalOperator: '<S130>/Compare'
   */
  if (rtb_Subtract_klw <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S21>/Stop Simulation' */

  /* Stop: '<S21>/Stop Simulation1' incorporates:
   *  Constant: '<S131>/Constant'
   *  RelationalOperator: '<S131>/Compare'
   */
  if (rtb_Polynomial_f > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S21>/Stop Simulation1' */

  /* Stop: '<S20>/Stop Simulation' incorporates:
   *  Constant: '<S128>/Constant'
   *  RelationalOperator: '<S128>/Compare'
   */
  if (rtb_Subtract_a5 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S20>/Stop Simulation' */

  /* Stop: '<S20>/Stop Simulation1' incorporates:
   *  Constant: '<S129>/Constant'
   *  RelationalOperator: '<S129>/Compare'
   */
  if (rtb_Polynomial_n0 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S20>/Stop Simulation1' */

  /* Stop: '<S19>/Stop Simulation' incorporates:
   *  Constant: '<S126>/Constant'
   *  RelationalOperator: '<S126>/Compare'
   */
  if (rtb_Subtract_hw <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S19>/Stop Simulation' */

  /* Stop: '<S19>/Stop Simulation1' incorporates:
   *  Constant: '<S127>/Constant'
   *  RelationalOperator: '<S127>/Compare'
   */
  if (rtb_Polynomial_ai > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S19>/Stop Simulation1' */

  /* Stop: '<S18>/Stop Simulation' incorporates:
   *  Constant: '<S124>/Constant'
   *  RelationalOperator: '<S124>/Compare'
   */
  if (rtb_Subtract_pl <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S18>/Stop Simulation' */

  /* Stop: '<S18>/Stop Simulation1' incorporates:
   *  Constant: '<S125>/Constant'
   *  RelationalOperator: '<S125>/Compare'
   */
  if (rtb_Polynomial_e > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S18>/Stop Simulation1' */

  /* Stop: '<S17>/Stop Simulation' incorporates:
   *  Constant: '<S122>/Constant'
   *  RelationalOperator: '<S122>/Compare'
   */
  if (rtb_Subtract_g <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S17>/Stop Simulation' */

  /* Stop: '<S17>/Stop Simulation1' incorporates:
   *  Constant: '<S123>/Constant'
   *  RelationalOperator: '<S123>/Compare'
   */
  if (rtb_Polynomial_o > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S17>/Stop Simulation1' */

  /* Stop: '<S16>/Stop Simulation' incorporates:
   *  Constant: '<S120>/Constant'
   *  RelationalOperator: '<S120>/Compare'
   */
  if (rtb_Subtract_a <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S16>/Stop Simulation' */

  /* Stop: '<S16>/Stop Simulation1' incorporates:
   *  Constant: '<S121>/Constant'
   *  RelationalOperator: '<S121>/Compare'
   */
  if (rtb_Polynomial_ine > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S16>/Stop Simulation1' */

  /* Stop: '<S15>/Stop Simulation' incorporates:
   *  Constant: '<S118>/Constant'
   *  RelationalOperator: '<S118>/Compare'
   */
  if (rtb_Subtract_l4 <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S15>/Stop Simulation' */

  /* Stop: '<S15>/Stop Simulation1' incorporates:
   *  Constant: '<S119>/Constant'
   *  RelationalOperator: '<S119>/Compare'
   */
  if (rtb_Polynomial_e2 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S15>/Stop Simulation1' */

  /* Stop: '<S14>/Stop Simulation' incorporates:
   *  Constant: '<S116>/Constant'
   *  RelationalOperator: '<S116>/Compare'
   */
  if (rtb_Subtract_l <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S14>/Stop Simulation' */

  /* Stop: '<S14>/Stop Simulation1' incorporates:
   *  Constant: '<S117>/Constant'
   *  RelationalOperator: '<S117>/Compare'
   */
  if (rtb_Polynomial_b > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S14>/Stop Simulation1' */

  /* Stop: '<S12>/Stop Simulation' incorporates:
   *  Constant: '<S112>/Constant'
   *  RelationalOperator: '<S112>/Compare'
   */
  if (rtb_Subtract_i <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S12>/Stop Simulation' */

  /* Stop: '<S12>/Stop Simulation1' incorporates:
   *  Constant: '<S113>/Constant'
   *  RelationalOperator: '<S113>/Compare'
   */
  if (rtb_Polynomial_jm > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S12>/Stop Simulation1' */

  /* Stop: '<S11>/Stop Simulation' incorporates:
   *  Constant: '<S110>/Constant'
   *  RelationalOperator: '<S110>/Compare'
   */
  if (rtb_Subtract_isf <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S11>/Stop Simulation' */

  /* Stop: '<S11>/Stop Simulation1' incorporates:
   *  Constant: '<S111>/Constant'
   *  RelationalOperator: '<S111>/Compare'
   */
  if (rtb_Polynomial_a > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S11>/Stop Simulation1' */

  /* Stop: '<S10>/Stop Simulation' incorporates:
   *  Constant: '<S108>/Constant'
   *  RelationalOperator: '<S108>/Compare'
   */
  if (rtb_Subtract_fc <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S10>/Stop Simulation' */

  /* Stop: '<S10>/Stop Simulation1' incorporates:
   *  Constant: '<S109>/Constant'
   *  RelationalOperator: '<S109>/Compare'
   */
  if (rtb_Polynomial_l1 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S10>/Stop Simulation1' */

  /* Stop: '<S9>/Stop Simulation' incorporates:
   *  Constant: '<S106>/Constant'
   *  RelationalOperator: '<S106>/Compare'
   */
  if (rtb_Subtract_mwa <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S9>/Stop Simulation' */

  /* Stop: '<S9>/Stop Simulation1' incorporates:
   *  Constant: '<S107>/Constant'
   *  RelationalOperator: '<S107>/Compare'
   */
  if (rtb_Polynomial_poo > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S9>/Stop Simulation1' */

  /* Stop: '<S8>/Stop Simulation' incorporates:
   *  Constant: '<S104>/Constant'
   *  RelationalOperator: '<S104>/Compare'
   */
  if (rtb_Subtract_prv <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S8>/Stop Simulation' */

  /* Stop: '<S8>/Stop Simulation1' incorporates:
   *  Constant: '<S105>/Constant'
   *  RelationalOperator: '<S105>/Compare'
   */
  if (rtb_Polynomial_c > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S8>/Stop Simulation1' */

  /* Stop: '<S7>/Stop Simulation' incorporates:
   *  Constant: '<S102>/Constant'
   *  RelationalOperator: '<S102>/Compare'
   */
  if (rtb_Subtract_em <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S7>/Stop Simulation' */

  /* Stop: '<S7>/Stop Simulation1' incorporates:
   *  Constant: '<S103>/Constant'
   *  RelationalOperator: '<S103>/Compare'
   */
  if (rtb_Polynomial_ls > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S7>/Stop Simulation1' */

  /* Stop: '<S6>/Stop Simulation' incorporates:
   *  Constant: '<S100>/Constant'
   *  RelationalOperator: '<S100>/Compare'
   */
  if (rtb_Subtract_j <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S6>/Stop Simulation' */

  /* Stop: '<S6>/Stop Simulation1' incorporates:
   *  Constant: '<S101>/Constant'
   *  RelationalOperator: '<S101>/Compare'
   */
  if (rtb_Polynomial_cm > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S6>/Stop Simulation1' */

  /* Stop: '<S5>/Stop Simulation' incorporates:
   *  Constant: '<S98>/Constant'
   *  RelationalOperator: '<S98>/Compare'
   */
  if (rtb_Subtract_ob <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S5>/Stop Simulation' */

  /* Stop: '<S5>/Stop Simulation1' incorporates:
   *  Constant: '<S99>/Constant'
   *  RelationalOperator: '<S99>/Compare'
   */
  if (rtb_Polynomial_l0 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S5>/Stop Simulation1' */

  /* Stop: '<S4>/Stop Simulation' incorporates:
   *  Constant: '<S96>/Constant'
   *  RelationalOperator: '<S96>/Compare'
   */
  if (rtb_Subtract_jh <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S4>/Stop Simulation' */

  /* Stop: '<S4>/Stop Simulation1' incorporates:
   *  Constant: '<S97>/Constant'
   *  RelationalOperator: '<S97>/Compare'
   */
  if (rtb_Polynomial_oy > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S4>/Stop Simulation1' */

  /* Stop: '<S3>/Stop Simulation' incorporates:
   *  Constant: '<S94>/Constant'
   *  RelationalOperator: '<S94>/Compare'
   */
  if (rtb_Subtract_ci <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S3>/Stop Simulation' */

  /* Stop: '<S3>/Stop Simulation1' incorporates:
   *  Constant: '<S95>/Constant'
   *  RelationalOperator: '<S95>/Compare'
   */
  if (rtb_Polynomial_h > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S3>/Stop Simulation1' */

  /* Stop: '<S90>/Stop Simulation' incorporates:
   *  Constant: '<S268>/Constant'
   *  RelationalOperator: '<S268>/Compare'
   */
  if (rtb_Subtract_nj <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S90>/Stop Simulation' */

  /* Stop: '<S90>/Stop Simulation1' incorporates:
   *  Constant: '<S269>/Constant'
   *  RelationalOperator: '<S269>/Compare'
   */
  if (rtb_Polynomial_g3 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S90>/Stop Simulation1' */

  /* Stop: '<S79>/Stop Simulation' incorporates:
   *  Constant: '<S246>/Constant'
   *  RelationalOperator: '<S246>/Compare'
   */
  if (rtb_Subtract_o <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S79>/Stop Simulation' */

  /* Stop: '<S79>/Stop Simulation1' incorporates:
   *  Constant: '<S247>/Constant'
   *  RelationalOperator: '<S247>/Compare'
   */
  if (rtb_Polynomial_g5 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S79>/Stop Simulation1' */

  /* Stop: '<S68>/Stop Simulation' incorporates:
   *  Constant: '<S224>/Constant'
   *  RelationalOperator: '<S224>/Compare'
   */
  if (rtb_Subtract_d <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S68>/Stop Simulation' */

  /* Stop: '<S68>/Stop Simulation1' incorporates:
   *  Constant: '<S225>/Constant'
   *  RelationalOperator: '<S225>/Compare'
   */
  if (rtb_Polynomial_fo > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S68>/Stop Simulation1' */

  /* Stop: '<S57>/Stop Simulation' incorporates:
   *  Constant: '<S202>/Constant'
   *  RelationalOperator: '<S202>/Compare'
   */
  if (rtb_Subtract_lul <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S57>/Stop Simulation' */

  /* Stop: '<S57>/Stop Simulation1' incorporates:
   *  Constant: '<S203>/Constant'
   *  RelationalOperator: '<S203>/Compare'
   */
  if (rtb_Polynomial_l > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S57>/Stop Simulation1' */

  /* Stop: '<S46>/Stop Simulation' incorporates:
   *  Constant: '<S180>/Constant'
   *  RelationalOperator: '<S180>/Compare'
   */
  if (rtb_Subtract_b <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S46>/Stop Simulation' */

  /* Stop: '<S46>/Stop Simulation1' incorporates:
   *  Constant: '<S181>/Constant'
   *  RelationalOperator: '<S181>/Compare'
   */
  if (rtb_Polynomial_i3 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S46>/Stop Simulation1' */

  /* Stop: '<S35>/Stop Simulation' incorporates:
   *  Constant: '<S158>/Constant'
   *  RelationalOperator: '<S158>/Compare'
   */
  if (rtb_Subtract_pt <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S35>/Stop Simulation' */

  /* Stop: '<S35>/Stop Simulation1' incorporates:
   *  Constant: '<S159>/Constant'
   *  RelationalOperator: '<S159>/Compare'
   */
  if (rtb_Polynomial_i5c > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S35>/Stop Simulation1' */

  /* Stop: '<S24>/Stop Simulation' incorporates:
   *  Constant: '<S136>/Constant'
   *  RelationalOperator: '<S136>/Compare'
   */
  if (rtb_Subtract_im <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S24>/Stop Simulation' */

  /* Stop: '<S24>/Stop Simulation1' incorporates:
   *  Constant: '<S137>/Constant'
   *  RelationalOperator: '<S137>/Compare'
   */
  if (rtb_Polynomial_pb > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S24>/Stop Simulation1' */

  /* Stop: '<S13>/Stop Simulation' incorporates:
   *  Constant: '<S114>/Constant'
   *  RelationalOperator: '<S114>/Compare'
   */
  if (rtb_Subtract_cri <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S13>/Stop Simulation' */

  /* Stop: '<S13>/Stop Simulation1' incorporates:
   *  Constant: '<S115>/Constant'
   *  RelationalOperator: '<S115>/Compare'
   */
  if (rtb_Add1 > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S13>/Stop Simulation1' */

  /* Stop: '<S2>/Stop Simulation' incorporates:
   *  Constant: '<S92>/Constant'
   *  RelationalOperator: '<S92>/Compare'
   */
  if (rtb_Amphoursintegration_pc <= 3.0) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S2>/Stop Simulation' */

  /* Stop: '<S2>/Stop Simulation1' incorporates:
   *  Constant: '<S93>/Constant'
   *  RelationalOperator: '<S93>/Compare'
   */
  if (rtb_Polynomial > 4.21) {
    rtmSetStopRequested(rtM, 1);
  }

  /* End of Stop: '<S2>/Stop Simulation1' */

  /* Update for DiscreteIntegrator: '<S2>/Amp hours integration' */
  rtDW.Amphoursintegration_DSTATE += 0.001 * rtb_SecondsConv;

  /* Update for DiscreteIntegrator: '<S13>/Amp hours integration' incorporates:
   *  Constant: '<S13>/HoursToSecondsConv'
   *  Product: '<S13>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_o += rtb_Add1_lh * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S24>/Amp hours integration' incorporates:
   *  Constant: '<S24>/HoursToSecondsConv'
   *  Product: '<S24>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_i += rtb_Add1_le * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S35>/Amp hours integration' incorporates:
   *  Constant: '<S35>/HoursToSecondsConv'
   *  Product: '<S35>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_i1 += rtb_Add1_oj * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S46>/Amp hours integration' incorporates:
   *  Constant: '<S46>/HoursToSecondsConv'
   *  Product: '<S46>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_d += rtb_Add1_ea * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S57>/Amp hours integration' incorporates:
   *  Constant: '<S57>/HoursToSecondsConv'
   *  Product: '<S57>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_op += rtb_Add1_dy * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S68>/Amp hours integration' incorporates:
   *  Constant: '<S68>/HoursToSecondsConv'
   *  Product: '<S68>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_e += rtb_Add1_gl * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S79>/Amp hours integration' incorporates:
   *  Constant: '<S79>/HoursToSecondsConv'
   *  Product: '<S79>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_l += rtb_Add1_egy * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S90>/Amp hours integration' incorporates:
   *  Constant: '<S90>/HoursToSecondsConv'
   *  Product: '<S90>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_iv += rtb_Add1_c * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S3>/Amp hours integration' incorporates:
   *  Constant: '<S3>/HoursToSecondsConv'
   *  Product: '<S3>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_c += rtb_Add1_ke * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S4>/Amp hours integration' incorporates:
   *  Constant: '<S4>/HoursToSecondsConv'
   *  Product: '<S4>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ly += rtb_Add1_i * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S5>/Amp hours integration' incorporates:
   *  Constant: '<S5>/HoursToSecondsConv'
   *  Product: '<S5>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ov += rtb_Add1_l * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S6>/Amp hours integration' incorporates:
   *  Constant: '<S6>/HoursToSecondsConv'
   *  Product: '<S6>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_on += rtb_Add1_cq * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S7>/Amp hours integration' incorporates:
   *  Constant: '<S7>/HoursToSecondsConv'
   *  Product: '<S7>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_lk += rtb_Add1_e4 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S8>/Amp hours integration' incorporates:
   *  Constant: '<S8>/HoursToSecondsConv'
   *  Product: '<S8>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_b += rtb_Add1_h * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S9>/Amp hours integration' incorporates:
   *  Constant: '<S9>/HoursToSecondsConv'
   *  Product: '<S9>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_f += rtb_Add1_os * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S10>/Amp hours integration' incorporates:
   *  Constant: '<S10>/HoursToSecondsConv'
   *  Product: '<S10>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_g += rtb_Add1_g * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S11>/Amp hours integration' incorporates:
   *  Constant: '<S11>/HoursToSecondsConv'
   *  Product: '<S11>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ih += rtb_Add1_gz * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S12>/Amp hours integration' incorporates:
   *  Constant: '<S12>/HoursToSecondsConv'
   *  Product: '<S12>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_oo += rtb_Add1_dw * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S14>/Amp hours integration' incorporates:
   *  Constant: '<S14>/HoursToSecondsConv'
   *  Product: '<S14>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_et += rtb_Add1_b0 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S15>/Amp hours integration' incorporates:
   *  Constant: '<S15>/HoursToSecondsConv'
   *  Product: '<S15>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_a += rtb_Add1_n * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S16>/Amp hours integration' incorporates:
   *  Constant: '<S16>/HoursToSecondsConv'
   *  Product: '<S16>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_n += rtb_Add1_j3 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S17>/Amp hours integration' incorporates:
   *  Constant: '<S17>/HoursToSecondsConv'
   *  Product: '<S17>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_h += rtb_Add1_e * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S18>/Amp hours integration' incorporates:
   *  Constant: '<S18>/HoursToSecondsConv'
   *  Product: '<S18>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_en += rtb_Add1_du * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S19>/Amp hours integration' incorporates:
   *  Constant: '<S19>/HoursToSecondsConv'
   *  Product: '<S19>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_lh += rtb_Add1_brl * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S20>/Amp hours integration' incorporates:
   *  Constant: '<S20>/HoursToSecondsConv'
   *  Product: '<S20>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_j += rtb_Add1_f * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S21>/Amp hours integration' incorporates:
   *  Constant: '<S21>/HoursToSecondsConv'
   *  Product: '<S21>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_m += rtb_Add1_cz * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S22>/Amp hours integration' incorporates:
   *  Constant: '<S22>/HoursToSecondsConv'
   *  Product: '<S22>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_mw += rtb_Add1_m * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S23>/Amp hours integration' incorporates:
   *  Constant: '<S23>/HoursToSecondsConv'
   *  Product: '<S23>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_k += rtb_Add1_p * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S25>/Amp hours integration' incorporates:
   *  Constant: '<S25>/HoursToSecondsConv'
   *  Product: '<S25>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ed += rtb_Add1_jy * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S26>/Amp hours integration' incorporates:
   *  Constant: '<S26>/HoursToSecondsConv'
   *  Product: '<S26>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_lb += rtb_Add1_da * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S27>/Amp hours integration' incorporates:
   *  Constant: '<S27>/HoursToSecondsConv'
   *  Product: '<S27>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_a0 += rtb_Add1_mu * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S28>/Amp hours integration' incorporates:
   *  Constant: '<S28>/HoursToSecondsConv'
   *  Product: '<S28>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_cl += rtb_Add1_o * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S29>/Amp hours integration' incorporates:
   *  Constant: '<S29>/HoursToSecondsConv'
   *  Product: '<S29>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_og += rtb_Add1_on * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S30>/Amp hours integration' incorporates:
   *  Constant: '<S30>/HoursToSecondsConv'
   *  Product: '<S30>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_n2 += rtb_Add1_fz * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S31>/Amp hours integration' incorporates:
   *  Constant: '<S31>/HoursToSecondsConv'
   *  Product: '<S31>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_mt += rtb_Add1_b * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S32>/Amp hours integration' incorporates:
   *  Constant: '<S32>/HoursToSecondsConv'
   *  Product: '<S32>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_cx += rtb_Add1_ca * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S33>/Amp hours integration' incorporates:
   *  Constant: '<S33>/HoursToSecondsConv'
   *  Product: '<S33>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_oy += rtb_Add1_m0 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S34>/Amp hours integration' incorporates:
   *  Constant: '<S34>/HoursToSecondsConv'
   *  Product: '<S34>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_p += rtb_Add1_bl * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S36>/Amp hours integration' incorporates:
   *  Constant: '<S36>/HoursToSecondsConv'
   *  Product: '<S36>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_b2 += rtb_Add1_cu * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S37>/Amp hours integration' incorporates:
   *  Constant: '<S37>/HoursToSecondsConv'
   *  Product: '<S37>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ah += rtb_Add1_g4 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S38>/Amp hours integration' incorporates:
   *  Constant: '<S38>/HoursToSecondsConv'
   *  Product: '<S38>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_nx += rtb_Add1_eq * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S39>/Amp hours integration' incorporates:
   *  Constant: '<S39>/HoursToSecondsConv'
   *  Product: '<S39>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_il += rtb_Add1_nn * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S40>/Amp hours integration' incorporates:
   *  Constant: '<S40>/HoursToSecondsConv'
   *  Product: '<S40>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ea += rtb_Add1_d * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S41>/Amp hours integration' incorporates:
   *  Constant: '<S41>/HoursToSecondsConv'
   *  Product: '<S41>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ce += rtb_Add1_ix * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S42>/Amp hours integration' incorporates:
   *  Constant: '<S42>/HoursToSecondsConv'
   *  Product: '<S42>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_or += rtb_Add1_gv * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S43>/Amp hours integration' incorporates:
   *  Constant: '<S43>/HoursToSecondsConv'
   *  Product: '<S43>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_gy += rtb_Add1_ha * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S44>/Amp hours integration' incorporates:
   *  Constant: '<S44>/HoursToSecondsConv'
   *  Product: '<S44>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_de += rtb_Add1_oe * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S45>/Amp hours integration' incorporates:
   *  Constant: '<S45>/HoursToSecondsConv'
   *  Product: '<S45>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_i0 += rtb_Add1_h1 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S47>/Amp hours integration' incorporates:
   *  Constant: '<S47>/HoursToSecondsConv'
   *  Product: '<S47>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_bl += rtb_Add1_nj * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S48>/Amp hours integration' incorporates:
   *  Constant: '<S48>/HoursToSecondsConv'
   *  Product: '<S48>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_c5 += rtb_Add1_pc * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S49>/Amp hours integration' incorporates:
   *  Constant: '<S49>/HoursToSecondsConv'
   *  Product: '<S49>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_fx += rtb_Add1_a * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S50>/Amp hours integration' incorporates:
   *  Constant: '<S50>/HoursToSecondsConv'
   *  Product: '<S50>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_px += rtb_Add1_m4 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S51>/Amp hours integration' incorporates:
   *  Constant: '<S51>/HoursToSecondsConv'
   *  Product: '<S51>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_a1 += rtb_Add1_fxv * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S52>/Amp hours integration' incorporates:
   *  Constant: '<S52>/HoursToSecondsConv'
   *  Product: '<S52>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ms += rtb_Add1_en * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S53>/Amp hours integration' incorporates:
   *  Constant: '<S53>/HoursToSecondsConv'
   *  Product: '<S53>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_da += rtb_Add1_a4 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S54>/Amp hours integration' incorporates:
   *  Constant: '<S54>/HoursToSecondsConv'
   *  Product: '<S54>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_km += rtb_Add1_j * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S55>/Amp hours integration' incorporates:
   *  Constant: '<S55>/HoursToSecondsConv'
   *  Product: '<S55>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_dc += rtb_Add1_l0 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S56>/Amp hours integration' incorporates:
   *  Constant: '<S56>/HoursToSecondsConv'
   *  Product: '<S56>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_oj += rtb_Add1_e3 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S58>/Amp hours integration' incorporates:
   *  Constant: '<S58>/HoursToSecondsConv'
   *  Product: '<S58>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_dcp += rtb_Add1_be * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S59>/Amp hours integration' incorporates:
   *  Constant: '<S59>/HoursToSecondsConv'
   *  Product: '<S59>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_gyj += rtb_Add1_ec * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S60>/Amp hours integration' incorporates:
   *  Constant: '<S60>/HoursToSecondsConv'
   *  Product: '<S60>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ck += rtb_Add1_bnx * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S61>/Amp hours integration' incorporates:
   *  Constant: '<S61>/HoursToSecondsConv'
   *  Product: '<S61>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ab += rtb_Add1_av * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S62>/Amp hours integration' incorporates:
   *  Constant: '<S62>/HoursToSecondsConv'
   *  Product: '<S62>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_jm += rtb_Add1_gd * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S63>/Amp hours integration' incorporates:
   *  Constant: '<S63>/HoursToSecondsConv'
   *  Product: '<S63>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ac += rtb_Add1_pl * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S64>/Amp hours integration' incorporates:
   *  Constant: '<S64>/HoursToSecondsConv'
   *  Product: '<S64>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_di += rtb_Add1_m2 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S65>/Amp hours integration' incorporates:
   *  Constant: '<S65>/HoursToSecondsConv'
   *  Product: '<S65>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_o1 += rtb_Add1_k * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S66>/Amp hours integration' incorporates:
   *  Constant: '<S66>/HoursToSecondsConv'
   *  Product: '<S66>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_h4 += rtb_Add1_dxo * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S67>/Amp hours integration' incorporates:
   *  Constant: '<S67>/HoursToSecondsConv'
   *  Product: '<S67>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ho += rtb_Add1_m5 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S69>/Amp hours integration' incorporates:
   *  Constant: '<S69>/HoursToSecondsConv'
   *  Product: '<S69>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_m2 += rtb_Add1_pdt * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S70>/Amp hours integration' incorporates:
   *  Constant: '<S70>/HoursToSecondsConv'
   *  Product: '<S70>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_fj += rtb_Add1_bhu * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S71>/Amp hours integration' incorporates:
   *  Constant: '<S71>/HoursToSecondsConv'
   *  Product: '<S71>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_dej += rtb_Add1_ko * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S72>/Amp hours integration' incorporates:
   *  Constant: '<S72>/HoursToSecondsConv'
   *  Product: '<S72>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_kc += rtb_Add1_af * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S73>/Amp hours integration' incorporates:
   *  Constant: '<S73>/HoursToSecondsConv'
   *  Product: '<S73>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_l5 += rtb_Add1_iv * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S74>/Amp hours integration' incorporates:
   *  Constant: '<S74>/HoursToSecondsConv'
   *  Product: '<S74>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_c1 += rtb_Add1_ah * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S75>/Amp hours integration' incorporates:
   *  Constant: '<S75>/HoursToSecondsConv'
   *  Product: '<S75>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_kj += rtb_Add1_hw * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S76>/Amp hours integration' incorporates:
   *  Constant: '<S76>/HoursToSecondsConv'
   *  Product: '<S76>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_jw += rtb_Add1_c2 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S77>/Amp hours integration' incorporates:
   *  Constant: '<S77>/HoursToSecondsConv'
   *  Product: '<S77>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_e1 += rtb_Add1_cm * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S78>/Amp hours integration' incorporates:
   *  Constant: '<S78>/HoursToSecondsConv'
   *  Product: '<S78>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_nm += rtb_Add1_o4 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S80>/Amp hours integration' incorporates:
   *  Constant: '<S80>/HoursToSecondsConv'
   *  Product: '<S80>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ks += rtb_Add1_l4 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S81>/Amp hours integration' incorporates:
   *  Constant: '<S81>/HoursToSecondsConv'
   *  Product: '<S81>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ab0 += rtb_Add1_jz * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S82>/Amp hours integration' incorporates:
   *  Constant: '<S82>/HoursToSecondsConv'
   *  Product: '<S82>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_f5 += rtb_Add1_je1 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S83>/Amp hours integration' incorporates:
   *  Constant: '<S83>/HoursToSecondsConv'
   *  Product: '<S83>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_kf += rtb_Add1_bj * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S84>/Amp hours integration' incorporates:
   *  Constant: '<S84>/HoursToSecondsConv'
   *  Product: '<S84>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_k1 += rtb_Add1_j0 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S85>/Amp hours integration' incorporates:
   *  Constant: '<S85>/HoursToSecondsConv'
   *  Product: '<S85>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_au += rtb_Add1_lj * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S86>/Amp hours integration' incorporates:
   *  Constant: '<S86>/HoursToSecondsConv'
   *  Product: '<S86>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_no += rtb_Add1_hk * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S87>/Amp hours integration' incorporates:
   *  Constant: '<S87>/HoursToSecondsConv'
   *  Product: '<S87>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ig += rtb_Add1_lm * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S88>/Amp hours integration' incorporates:
   *  Constant: '<S88>/HoursToSecondsConv'
   *  Product: '<S88>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ba += rtb_Add1_gk * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S89>/Amp hours integration' incorporates:
   *  Constant: '<S89>/HoursToSecondsConv'
   *  Product: '<S89>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_ny += rtb_Add1_l2 * 0.00027777777777777778 *
    0.001;

  /* Update for DiscreteIntegrator: '<S91>/Amp hours integration' incorporates:
   *  Constant: '<S91>/HoursToSecondsConv'
   *  Product: '<S91>/SecondsConv'
   */
  rtDW.Amphoursintegration_DSTATE_oi += rtb_Add1_iu1 * 0.00027777777777777778 *
    0.001;
}

/* Model initialize function */
void LogicalAccumulatorModel_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
