/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LogicalAccumulatorModel.h
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

#ifndef RTW_HEADER_LogicalAccumulatorModel_h_
#define RTW_HEADER_LogicalAccumulatorModel_h_
#include <math.h>
#ifndef LogicalAccumulatorModel_COMMON_INCLUDES_
# define LogicalAccumulatorModel_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                            /* LogicalAccumulatorModel_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T Amphoursintegration_DSTATE;   /* '<S2>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_o; /* '<S13>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_i; /* '<S24>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_i1;/* '<S35>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_d; /* '<S46>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_op;/* '<S57>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_e; /* '<S68>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_l; /* '<S79>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_iv;/* '<S90>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_c; /* '<S3>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ly;/* '<S4>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ov;/* '<S5>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_on;/* '<S6>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_lk;/* '<S7>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_b; /* '<S8>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_f; /* '<S9>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_g; /* '<S10>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ih;/* '<S11>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_oo;/* '<S12>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_et;/* '<S14>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_a; /* '<S15>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_n; /* '<S16>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_h; /* '<S17>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_en;/* '<S18>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_lh;/* '<S19>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_j; /* '<S20>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_m; /* '<S21>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_mw;/* '<S22>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_k; /* '<S23>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ed;/* '<S25>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_lb;/* '<S26>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_a0;/* '<S27>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_cl;/* '<S28>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_og;/* '<S29>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_n2;/* '<S30>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_mt;/* '<S31>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_cx;/* '<S32>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_oy;/* '<S33>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_p; /* '<S34>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_b2;/* '<S36>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ah;/* '<S37>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_nx;/* '<S38>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_il;/* '<S39>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ea;/* '<S40>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ce;/* '<S41>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_or;/* '<S42>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_gy;/* '<S43>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_de;/* '<S44>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_i0;/* '<S45>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_bl;/* '<S47>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_c5;/* '<S48>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_fx;/* '<S49>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_px;/* '<S50>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_a1;/* '<S51>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ms;/* '<S52>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_da;/* '<S53>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_km;/* '<S54>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_dc;/* '<S55>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_oj;/* '<S56>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_dcp;/* '<S58>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_gyj;/* '<S59>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ck;/* '<S60>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ab;/* '<S61>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_jm;/* '<S62>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ac;/* '<S63>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_di;/* '<S64>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_o1;/* '<S65>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_h4;/* '<S66>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ho;/* '<S67>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_m2;/* '<S69>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_fj;/* '<S70>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_dej;/* '<S71>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_kc;/* '<S72>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_l5;/* '<S73>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_c1;/* '<S74>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_kj;/* '<S75>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_jw;/* '<S76>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_e1;/* '<S77>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_nm;/* '<S78>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ks;/* '<S80>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ab0;/* '<S81>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_f5;/* '<S82>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_kf;/* '<S83>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_k1;/* '<S84>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_au;/* '<S85>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_no;/* '<S86>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ig;/* '<S87>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ba;/* '<S88>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_ny;/* '<S89>/Amp hours integration' */
  real_T Amphoursintegration_DSTATE_oi;/* '<S91>/Amp hours integration' */
} DW;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T DischargeSig[90];             /* '<Root>/DischargeSig' */
  real_T LoadIn;                       /* '<Root>/LoadIn' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T VoltageOut[90];               /* '<Root>/VoltageOut' */
  real_T TotalOut;                     /* '<Root>/TotalOut' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void LogicalAccumulatorModel_initialize(void);
extern void LogicalAccumulatorModel_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Pulse Generator' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'LogicalAccumulatorModel'
 * '<S1>'   : 'LogicalAccumulatorModel/Cells'
 * '<S2>'   : 'LogicalAccumulatorModel/Cells/Cell1'
 * '<S3>'   : 'LogicalAccumulatorModel/Cells/Cell10'
 * '<S4>'   : 'LogicalAccumulatorModel/Cells/Cell11'
 * '<S5>'   : 'LogicalAccumulatorModel/Cells/Cell12'
 * '<S6>'   : 'LogicalAccumulatorModel/Cells/Cell13'
 * '<S7>'   : 'LogicalAccumulatorModel/Cells/Cell14'
 * '<S8>'   : 'LogicalAccumulatorModel/Cells/Cell15'
 * '<S9>'   : 'LogicalAccumulatorModel/Cells/Cell16'
 * '<S10>'  : 'LogicalAccumulatorModel/Cells/Cell17'
 * '<S11>'  : 'LogicalAccumulatorModel/Cells/Cell18'
 * '<S12>'  : 'LogicalAccumulatorModel/Cells/Cell19'
 * '<S13>'  : 'LogicalAccumulatorModel/Cells/Cell2'
 * '<S14>'  : 'LogicalAccumulatorModel/Cells/Cell20'
 * '<S15>'  : 'LogicalAccumulatorModel/Cells/Cell21'
 * '<S16>'  : 'LogicalAccumulatorModel/Cells/Cell22'
 * '<S17>'  : 'LogicalAccumulatorModel/Cells/Cell23'
 * '<S18>'  : 'LogicalAccumulatorModel/Cells/Cell24'
 * '<S19>'  : 'LogicalAccumulatorModel/Cells/Cell25'
 * '<S20>'  : 'LogicalAccumulatorModel/Cells/Cell26'
 * '<S21>'  : 'LogicalAccumulatorModel/Cells/Cell27'
 * '<S22>'  : 'LogicalAccumulatorModel/Cells/Cell28'
 * '<S23>'  : 'LogicalAccumulatorModel/Cells/Cell29'
 * '<S24>'  : 'LogicalAccumulatorModel/Cells/Cell3'
 * '<S25>'  : 'LogicalAccumulatorModel/Cells/Cell30'
 * '<S26>'  : 'LogicalAccumulatorModel/Cells/Cell31'
 * '<S27>'  : 'LogicalAccumulatorModel/Cells/Cell32'
 * '<S28>'  : 'LogicalAccumulatorModel/Cells/Cell33'
 * '<S29>'  : 'LogicalAccumulatorModel/Cells/Cell34'
 * '<S30>'  : 'LogicalAccumulatorModel/Cells/Cell35'
 * '<S31>'  : 'LogicalAccumulatorModel/Cells/Cell36'
 * '<S32>'  : 'LogicalAccumulatorModel/Cells/Cell37'
 * '<S33>'  : 'LogicalAccumulatorModel/Cells/Cell38'
 * '<S34>'  : 'LogicalAccumulatorModel/Cells/Cell39'
 * '<S35>'  : 'LogicalAccumulatorModel/Cells/Cell4'
 * '<S36>'  : 'LogicalAccumulatorModel/Cells/Cell40'
 * '<S37>'  : 'LogicalAccumulatorModel/Cells/Cell41'
 * '<S38>'  : 'LogicalAccumulatorModel/Cells/Cell42'
 * '<S39>'  : 'LogicalAccumulatorModel/Cells/Cell43'
 * '<S40>'  : 'LogicalAccumulatorModel/Cells/Cell44'
 * '<S41>'  : 'LogicalAccumulatorModel/Cells/Cell45'
 * '<S42>'  : 'LogicalAccumulatorModel/Cells/Cell46'
 * '<S43>'  : 'LogicalAccumulatorModel/Cells/Cell47'
 * '<S44>'  : 'LogicalAccumulatorModel/Cells/Cell48'
 * '<S45>'  : 'LogicalAccumulatorModel/Cells/Cell49'
 * '<S46>'  : 'LogicalAccumulatorModel/Cells/Cell5'
 * '<S47>'  : 'LogicalAccumulatorModel/Cells/Cell50'
 * '<S48>'  : 'LogicalAccumulatorModel/Cells/Cell51'
 * '<S49>'  : 'LogicalAccumulatorModel/Cells/Cell52'
 * '<S50>'  : 'LogicalAccumulatorModel/Cells/Cell53'
 * '<S51>'  : 'LogicalAccumulatorModel/Cells/Cell54'
 * '<S52>'  : 'LogicalAccumulatorModel/Cells/Cell55'
 * '<S53>'  : 'LogicalAccumulatorModel/Cells/Cell56'
 * '<S54>'  : 'LogicalAccumulatorModel/Cells/Cell57'
 * '<S55>'  : 'LogicalAccumulatorModel/Cells/Cell58'
 * '<S56>'  : 'LogicalAccumulatorModel/Cells/Cell59'
 * '<S57>'  : 'LogicalAccumulatorModel/Cells/Cell6'
 * '<S58>'  : 'LogicalAccumulatorModel/Cells/Cell60'
 * '<S59>'  : 'LogicalAccumulatorModel/Cells/Cell61'
 * '<S60>'  : 'LogicalAccumulatorModel/Cells/Cell62'
 * '<S61>'  : 'LogicalAccumulatorModel/Cells/Cell63'
 * '<S62>'  : 'LogicalAccumulatorModel/Cells/Cell64'
 * '<S63>'  : 'LogicalAccumulatorModel/Cells/Cell65'
 * '<S64>'  : 'LogicalAccumulatorModel/Cells/Cell66'
 * '<S65>'  : 'LogicalAccumulatorModel/Cells/Cell67'
 * '<S66>'  : 'LogicalAccumulatorModel/Cells/Cell68'
 * '<S67>'  : 'LogicalAccumulatorModel/Cells/Cell69'
 * '<S68>'  : 'LogicalAccumulatorModel/Cells/Cell7'
 * '<S69>'  : 'LogicalAccumulatorModel/Cells/Cell70'
 * '<S70>'  : 'LogicalAccumulatorModel/Cells/Cell71'
 * '<S71>'  : 'LogicalAccumulatorModel/Cells/Cell72'
 * '<S72>'  : 'LogicalAccumulatorModel/Cells/Cell73'
 * '<S73>'  : 'LogicalAccumulatorModel/Cells/Cell74'
 * '<S74>'  : 'LogicalAccumulatorModel/Cells/Cell75'
 * '<S75>'  : 'LogicalAccumulatorModel/Cells/Cell76'
 * '<S76>'  : 'LogicalAccumulatorModel/Cells/Cell77'
 * '<S77>'  : 'LogicalAccumulatorModel/Cells/Cell78'
 * '<S78>'  : 'LogicalAccumulatorModel/Cells/Cell79'
 * '<S79>'  : 'LogicalAccumulatorModel/Cells/Cell8'
 * '<S80>'  : 'LogicalAccumulatorModel/Cells/Cell80'
 * '<S81>'  : 'LogicalAccumulatorModel/Cells/Cell81'
 * '<S82>'  : 'LogicalAccumulatorModel/Cells/Cell82'
 * '<S83>'  : 'LogicalAccumulatorModel/Cells/Cell83'
 * '<S84>'  : 'LogicalAccumulatorModel/Cells/Cell84'
 * '<S85>'  : 'LogicalAccumulatorModel/Cells/Cell85'
 * '<S86>'  : 'LogicalAccumulatorModel/Cells/Cell86'
 * '<S87>'  : 'LogicalAccumulatorModel/Cells/Cell87'
 * '<S88>'  : 'LogicalAccumulatorModel/Cells/Cell88'
 * '<S89>'  : 'LogicalAccumulatorModel/Cells/Cell89'
 * '<S90>'  : 'LogicalAccumulatorModel/Cells/Cell9'
 * '<S91>'  : 'LogicalAccumulatorModel/Cells/Cell90'
 * '<S92>'  : 'LogicalAccumulatorModel/Cells/Cell1/MinVoltage'
 * '<S93>'  : 'LogicalAccumulatorModel/Cells/Cell1/MinVoltage1'
 * '<S94>'  : 'LogicalAccumulatorModel/Cells/Cell10/MinVoltage'
 * '<S95>'  : 'LogicalAccumulatorModel/Cells/Cell10/MinVoltage1'
 * '<S96>'  : 'LogicalAccumulatorModel/Cells/Cell11/MinVoltage'
 * '<S97>'  : 'LogicalAccumulatorModel/Cells/Cell11/MinVoltage1'
 * '<S98>'  : 'LogicalAccumulatorModel/Cells/Cell12/MinVoltage'
 * '<S99>'  : 'LogicalAccumulatorModel/Cells/Cell12/MinVoltage1'
 * '<S100>' : 'LogicalAccumulatorModel/Cells/Cell13/MinVoltage'
 * '<S101>' : 'LogicalAccumulatorModel/Cells/Cell13/MinVoltage1'
 * '<S102>' : 'LogicalAccumulatorModel/Cells/Cell14/MinVoltage'
 * '<S103>' : 'LogicalAccumulatorModel/Cells/Cell14/MinVoltage1'
 * '<S104>' : 'LogicalAccumulatorModel/Cells/Cell15/MinVoltage'
 * '<S105>' : 'LogicalAccumulatorModel/Cells/Cell15/MinVoltage1'
 * '<S106>' : 'LogicalAccumulatorModel/Cells/Cell16/MinVoltage'
 * '<S107>' : 'LogicalAccumulatorModel/Cells/Cell16/MinVoltage1'
 * '<S108>' : 'LogicalAccumulatorModel/Cells/Cell17/MinVoltage'
 * '<S109>' : 'LogicalAccumulatorModel/Cells/Cell17/MinVoltage1'
 * '<S110>' : 'LogicalAccumulatorModel/Cells/Cell18/MinVoltage'
 * '<S111>' : 'LogicalAccumulatorModel/Cells/Cell18/MinVoltage1'
 * '<S112>' : 'LogicalAccumulatorModel/Cells/Cell19/MinVoltage'
 * '<S113>' : 'LogicalAccumulatorModel/Cells/Cell19/MinVoltage1'
 * '<S114>' : 'LogicalAccumulatorModel/Cells/Cell2/MinVoltage'
 * '<S115>' : 'LogicalAccumulatorModel/Cells/Cell2/MinVoltage1'
 * '<S116>' : 'LogicalAccumulatorModel/Cells/Cell20/MinVoltage'
 * '<S117>' : 'LogicalAccumulatorModel/Cells/Cell20/MinVoltage1'
 * '<S118>' : 'LogicalAccumulatorModel/Cells/Cell21/MinVoltage'
 * '<S119>' : 'LogicalAccumulatorModel/Cells/Cell21/MinVoltage1'
 * '<S120>' : 'LogicalAccumulatorModel/Cells/Cell22/MinVoltage'
 * '<S121>' : 'LogicalAccumulatorModel/Cells/Cell22/MinVoltage1'
 * '<S122>' : 'LogicalAccumulatorModel/Cells/Cell23/MinVoltage'
 * '<S123>' : 'LogicalAccumulatorModel/Cells/Cell23/MinVoltage1'
 * '<S124>' : 'LogicalAccumulatorModel/Cells/Cell24/MinVoltage'
 * '<S125>' : 'LogicalAccumulatorModel/Cells/Cell24/MinVoltage1'
 * '<S126>' : 'LogicalAccumulatorModel/Cells/Cell25/MinVoltage'
 * '<S127>' : 'LogicalAccumulatorModel/Cells/Cell25/MinVoltage1'
 * '<S128>' : 'LogicalAccumulatorModel/Cells/Cell26/MinVoltage'
 * '<S129>' : 'LogicalAccumulatorModel/Cells/Cell26/MinVoltage1'
 * '<S130>' : 'LogicalAccumulatorModel/Cells/Cell27/MinVoltage'
 * '<S131>' : 'LogicalAccumulatorModel/Cells/Cell27/MinVoltage1'
 * '<S132>' : 'LogicalAccumulatorModel/Cells/Cell28/MinVoltage'
 * '<S133>' : 'LogicalAccumulatorModel/Cells/Cell28/MinVoltage1'
 * '<S134>' : 'LogicalAccumulatorModel/Cells/Cell29/MinVoltage'
 * '<S135>' : 'LogicalAccumulatorModel/Cells/Cell29/MinVoltage1'
 * '<S136>' : 'LogicalAccumulatorModel/Cells/Cell3/MinVoltage'
 * '<S137>' : 'LogicalAccumulatorModel/Cells/Cell3/MinVoltage1'
 * '<S138>' : 'LogicalAccumulatorModel/Cells/Cell30/MinVoltage'
 * '<S139>' : 'LogicalAccumulatorModel/Cells/Cell30/MinVoltage1'
 * '<S140>' : 'LogicalAccumulatorModel/Cells/Cell31/MinVoltage'
 * '<S141>' : 'LogicalAccumulatorModel/Cells/Cell31/MinVoltage1'
 * '<S142>' : 'LogicalAccumulatorModel/Cells/Cell32/MinVoltage'
 * '<S143>' : 'LogicalAccumulatorModel/Cells/Cell32/MinVoltage1'
 * '<S144>' : 'LogicalAccumulatorModel/Cells/Cell33/MinVoltage'
 * '<S145>' : 'LogicalAccumulatorModel/Cells/Cell33/MinVoltage1'
 * '<S146>' : 'LogicalAccumulatorModel/Cells/Cell34/MinVoltage'
 * '<S147>' : 'LogicalAccumulatorModel/Cells/Cell34/MinVoltage1'
 * '<S148>' : 'LogicalAccumulatorModel/Cells/Cell35/MinVoltage'
 * '<S149>' : 'LogicalAccumulatorModel/Cells/Cell35/MinVoltage1'
 * '<S150>' : 'LogicalAccumulatorModel/Cells/Cell36/MinVoltage'
 * '<S151>' : 'LogicalAccumulatorModel/Cells/Cell36/MinVoltage1'
 * '<S152>' : 'LogicalAccumulatorModel/Cells/Cell37/MinVoltage'
 * '<S153>' : 'LogicalAccumulatorModel/Cells/Cell37/MinVoltage1'
 * '<S154>' : 'LogicalAccumulatorModel/Cells/Cell38/MinVoltage'
 * '<S155>' : 'LogicalAccumulatorModel/Cells/Cell38/MinVoltage1'
 * '<S156>' : 'LogicalAccumulatorModel/Cells/Cell39/MinVoltage'
 * '<S157>' : 'LogicalAccumulatorModel/Cells/Cell39/MinVoltage1'
 * '<S158>' : 'LogicalAccumulatorModel/Cells/Cell4/MinVoltage'
 * '<S159>' : 'LogicalAccumulatorModel/Cells/Cell4/MinVoltage1'
 * '<S160>' : 'LogicalAccumulatorModel/Cells/Cell40/MinVoltage'
 * '<S161>' : 'LogicalAccumulatorModel/Cells/Cell40/MinVoltage1'
 * '<S162>' : 'LogicalAccumulatorModel/Cells/Cell41/MinVoltage'
 * '<S163>' : 'LogicalAccumulatorModel/Cells/Cell41/MinVoltage1'
 * '<S164>' : 'LogicalAccumulatorModel/Cells/Cell42/MinVoltage'
 * '<S165>' : 'LogicalAccumulatorModel/Cells/Cell42/MinVoltage1'
 * '<S166>' : 'LogicalAccumulatorModel/Cells/Cell43/MinVoltage'
 * '<S167>' : 'LogicalAccumulatorModel/Cells/Cell43/MinVoltage1'
 * '<S168>' : 'LogicalAccumulatorModel/Cells/Cell44/MinVoltage'
 * '<S169>' : 'LogicalAccumulatorModel/Cells/Cell44/MinVoltage1'
 * '<S170>' : 'LogicalAccumulatorModel/Cells/Cell45/MinVoltage'
 * '<S171>' : 'LogicalAccumulatorModel/Cells/Cell45/MinVoltage1'
 * '<S172>' : 'LogicalAccumulatorModel/Cells/Cell46/MinVoltage'
 * '<S173>' : 'LogicalAccumulatorModel/Cells/Cell46/MinVoltage1'
 * '<S174>' : 'LogicalAccumulatorModel/Cells/Cell47/MinVoltage'
 * '<S175>' : 'LogicalAccumulatorModel/Cells/Cell47/MinVoltage1'
 * '<S176>' : 'LogicalAccumulatorModel/Cells/Cell48/MinVoltage'
 * '<S177>' : 'LogicalAccumulatorModel/Cells/Cell48/MinVoltage1'
 * '<S178>' : 'LogicalAccumulatorModel/Cells/Cell49/MinVoltage'
 * '<S179>' : 'LogicalAccumulatorModel/Cells/Cell49/MinVoltage1'
 * '<S180>' : 'LogicalAccumulatorModel/Cells/Cell5/MinVoltage'
 * '<S181>' : 'LogicalAccumulatorModel/Cells/Cell5/MinVoltage1'
 * '<S182>' : 'LogicalAccumulatorModel/Cells/Cell50/MinVoltage'
 * '<S183>' : 'LogicalAccumulatorModel/Cells/Cell50/MinVoltage1'
 * '<S184>' : 'LogicalAccumulatorModel/Cells/Cell51/MinVoltage'
 * '<S185>' : 'LogicalAccumulatorModel/Cells/Cell51/MinVoltage1'
 * '<S186>' : 'LogicalAccumulatorModel/Cells/Cell52/MinVoltage'
 * '<S187>' : 'LogicalAccumulatorModel/Cells/Cell52/MinVoltage1'
 * '<S188>' : 'LogicalAccumulatorModel/Cells/Cell53/MinVoltage'
 * '<S189>' : 'LogicalAccumulatorModel/Cells/Cell53/MinVoltage1'
 * '<S190>' : 'LogicalAccumulatorModel/Cells/Cell54/MinVoltage'
 * '<S191>' : 'LogicalAccumulatorModel/Cells/Cell54/MinVoltage1'
 * '<S192>' : 'LogicalAccumulatorModel/Cells/Cell55/MinVoltage'
 * '<S193>' : 'LogicalAccumulatorModel/Cells/Cell55/MinVoltage1'
 * '<S194>' : 'LogicalAccumulatorModel/Cells/Cell56/MinVoltage'
 * '<S195>' : 'LogicalAccumulatorModel/Cells/Cell56/MinVoltage1'
 * '<S196>' : 'LogicalAccumulatorModel/Cells/Cell57/MinVoltage'
 * '<S197>' : 'LogicalAccumulatorModel/Cells/Cell57/MinVoltage1'
 * '<S198>' : 'LogicalAccumulatorModel/Cells/Cell58/MinVoltage'
 * '<S199>' : 'LogicalAccumulatorModel/Cells/Cell58/MinVoltage1'
 * '<S200>' : 'LogicalAccumulatorModel/Cells/Cell59/MinVoltage'
 * '<S201>' : 'LogicalAccumulatorModel/Cells/Cell59/MinVoltage1'
 * '<S202>' : 'LogicalAccumulatorModel/Cells/Cell6/MinVoltage'
 * '<S203>' : 'LogicalAccumulatorModel/Cells/Cell6/MinVoltage1'
 * '<S204>' : 'LogicalAccumulatorModel/Cells/Cell60/MinVoltage'
 * '<S205>' : 'LogicalAccumulatorModel/Cells/Cell60/MinVoltage1'
 * '<S206>' : 'LogicalAccumulatorModel/Cells/Cell61/MinVoltage'
 * '<S207>' : 'LogicalAccumulatorModel/Cells/Cell61/MinVoltage1'
 * '<S208>' : 'LogicalAccumulatorModel/Cells/Cell62/MinVoltage'
 * '<S209>' : 'LogicalAccumulatorModel/Cells/Cell62/MinVoltage1'
 * '<S210>' : 'LogicalAccumulatorModel/Cells/Cell63/MinVoltage'
 * '<S211>' : 'LogicalAccumulatorModel/Cells/Cell63/MinVoltage1'
 * '<S212>' : 'LogicalAccumulatorModel/Cells/Cell64/MinVoltage'
 * '<S213>' : 'LogicalAccumulatorModel/Cells/Cell64/MinVoltage1'
 * '<S214>' : 'LogicalAccumulatorModel/Cells/Cell65/MinVoltage'
 * '<S215>' : 'LogicalAccumulatorModel/Cells/Cell65/MinVoltage1'
 * '<S216>' : 'LogicalAccumulatorModel/Cells/Cell66/MinVoltage'
 * '<S217>' : 'LogicalAccumulatorModel/Cells/Cell66/MinVoltage1'
 * '<S218>' : 'LogicalAccumulatorModel/Cells/Cell67/MinVoltage'
 * '<S219>' : 'LogicalAccumulatorModel/Cells/Cell67/MinVoltage1'
 * '<S220>' : 'LogicalAccumulatorModel/Cells/Cell68/MinVoltage'
 * '<S221>' : 'LogicalAccumulatorModel/Cells/Cell68/MinVoltage1'
 * '<S222>' : 'LogicalAccumulatorModel/Cells/Cell69/MinVoltage'
 * '<S223>' : 'LogicalAccumulatorModel/Cells/Cell69/MinVoltage1'
 * '<S224>' : 'LogicalAccumulatorModel/Cells/Cell7/MinVoltage'
 * '<S225>' : 'LogicalAccumulatorModel/Cells/Cell7/MinVoltage1'
 * '<S226>' : 'LogicalAccumulatorModel/Cells/Cell70/MinVoltage'
 * '<S227>' : 'LogicalAccumulatorModel/Cells/Cell70/MinVoltage1'
 * '<S228>' : 'LogicalAccumulatorModel/Cells/Cell71/MinVoltage'
 * '<S229>' : 'LogicalAccumulatorModel/Cells/Cell71/MinVoltage1'
 * '<S230>' : 'LogicalAccumulatorModel/Cells/Cell72/MinVoltage'
 * '<S231>' : 'LogicalAccumulatorModel/Cells/Cell72/MinVoltage1'
 * '<S232>' : 'LogicalAccumulatorModel/Cells/Cell73/MinVoltage'
 * '<S233>' : 'LogicalAccumulatorModel/Cells/Cell73/MinVoltage1'
 * '<S234>' : 'LogicalAccumulatorModel/Cells/Cell74/MinVoltage'
 * '<S235>' : 'LogicalAccumulatorModel/Cells/Cell74/MinVoltage1'
 * '<S236>' : 'LogicalAccumulatorModel/Cells/Cell75/MinVoltage'
 * '<S237>' : 'LogicalAccumulatorModel/Cells/Cell75/MinVoltage1'
 * '<S238>' : 'LogicalAccumulatorModel/Cells/Cell76/MinVoltage'
 * '<S239>' : 'LogicalAccumulatorModel/Cells/Cell76/MinVoltage1'
 * '<S240>' : 'LogicalAccumulatorModel/Cells/Cell77/MinVoltage'
 * '<S241>' : 'LogicalAccumulatorModel/Cells/Cell77/MinVoltage1'
 * '<S242>' : 'LogicalAccumulatorModel/Cells/Cell78/MinVoltage'
 * '<S243>' : 'LogicalAccumulatorModel/Cells/Cell78/MinVoltage1'
 * '<S244>' : 'LogicalAccumulatorModel/Cells/Cell79/MinVoltage'
 * '<S245>' : 'LogicalAccumulatorModel/Cells/Cell79/MinVoltage1'
 * '<S246>' : 'LogicalAccumulatorModel/Cells/Cell8/MinVoltage'
 * '<S247>' : 'LogicalAccumulatorModel/Cells/Cell8/MinVoltage1'
 * '<S248>' : 'LogicalAccumulatorModel/Cells/Cell80/MinVoltage'
 * '<S249>' : 'LogicalAccumulatorModel/Cells/Cell80/MinVoltage1'
 * '<S250>' : 'LogicalAccumulatorModel/Cells/Cell81/MinVoltage'
 * '<S251>' : 'LogicalAccumulatorModel/Cells/Cell81/MinVoltage1'
 * '<S252>' : 'LogicalAccumulatorModel/Cells/Cell82/MinVoltage'
 * '<S253>' : 'LogicalAccumulatorModel/Cells/Cell82/MinVoltage1'
 * '<S254>' : 'LogicalAccumulatorModel/Cells/Cell83/MinVoltage'
 * '<S255>' : 'LogicalAccumulatorModel/Cells/Cell83/MinVoltage1'
 * '<S256>' : 'LogicalAccumulatorModel/Cells/Cell84/MinVoltage'
 * '<S257>' : 'LogicalAccumulatorModel/Cells/Cell84/MinVoltage1'
 * '<S258>' : 'LogicalAccumulatorModel/Cells/Cell85/MinVoltage'
 * '<S259>' : 'LogicalAccumulatorModel/Cells/Cell85/MinVoltage1'
 * '<S260>' : 'LogicalAccumulatorModel/Cells/Cell86/MinVoltage'
 * '<S261>' : 'LogicalAccumulatorModel/Cells/Cell86/MinVoltage1'
 * '<S262>' : 'LogicalAccumulatorModel/Cells/Cell87/MinVoltage'
 * '<S263>' : 'LogicalAccumulatorModel/Cells/Cell87/MinVoltage1'
 * '<S264>' : 'LogicalAccumulatorModel/Cells/Cell88/MinVoltage'
 * '<S265>' : 'LogicalAccumulatorModel/Cells/Cell88/MinVoltage1'
 * '<S266>' : 'LogicalAccumulatorModel/Cells/Cell89/MinVoltage'
 * '<S267>' : 'LogicalAccumulatorModel/Cells/Cell89/MinVoltage1'
 * '<S268>' : 'LogicalAccumulatorModel/Cells/Cell9/MinVoltage'
 * '<S269>' : 'LogicalAccumulatorModel/Cells/Cell9/MinVoltage1'
 * '<S270>' : 'LogicalAccumulatorModel/Cells/Cell90/MinVoltage'
 * '<S271>' : 'LogicalAccumulatorModel/Cells/Cell90/MinVoltage1'
 */
#endif                               /* RTW_HEADER_LogicalAccumulatorModel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
