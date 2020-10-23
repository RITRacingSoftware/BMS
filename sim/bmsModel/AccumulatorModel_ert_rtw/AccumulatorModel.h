/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AccumulatorModel.h
 *
 * Code generated for Simulink model 'AccumulatorModel'.
 *
 * Model version                  : 1.54
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Sat Oct 17 03:10:18 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AccumulatorModel_h_
#define RTW_HEADER_AccumulatorModel_h_
#include <string.h>
#include <math.h>
#ifndef AccumulatorModel_COMMON_INCLUDES_
# define AccumulatorModel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "AccumulatorModel_afee0aca_1_gateway.h"
#endif                                 /* AccumulatorModel_COMMON_INCLUDES_ */

/* Model Code Variants */
#include "math.h"
#include "rt_matrixlib.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T INPUT_6_1_1[4];               /* '<S30>/INPUT_6_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S30>/INPUT_1_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S30>/INPUT_2_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S30>/INPUT_3_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S30>/INPUT_4_1_1' */
  real_T INPUT_5_1_1[4];               /* '<S30>/INPUT_5_1_1' */
  real_T STATE_1[500];                 /* '<S30>/STATE_1' */
  real_T OUTPUT_1_0[6];                /* '<S30>/OUTPUT_1_0' */
  real_T INPUT_6_1_1_Discrete[2];      /* '<S30>/INPUT_6_1_1' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S30>/INPUT_1_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S30>/INPUT_2_1_1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S30>/INPUT_3_1_1' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S30>/INPUT_4_1_1' */
  real_T INPUT_5_1_1_Discrete[2];      /* '<S30>/INPUT_5_1_1' */
  real_T dv[524];
  real_T dv1[524];
  real_T OUTPUT_1_1;                   /* '<S30>/OUTPUT_1_1' */
  real_T STATE_1_Discrete;             /* '<S30>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S30>/OUTPUT_1_0' */
  real_T OUTPUT_1_1_Discrete;          /* '<S30>/OUTPUT_1_1' */
  void* STATE_1_Simulator;             /* '<S30>/STATE_1' */
  void* STATE_1_SimData;               /* '<S30>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S30>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S30>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S30>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S30>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S30>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S30>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S30>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S30>/OUTPUT_1_0' */
  void* OUTPUT_1_1_Simulator;          /* '<S30>/OUTPUT_1_1' */
  void* OUTPUT_1_1_SimData;            /* '<S30>/OUTPUT_1_1' */
  void* OUTPUT_1_1_DiagMgr;            /* '<S30>/OUTPUT_1_1' */
  void* OUTPUT_1_1_ZcLogger;           /* '<S30>/OUTPUT_1_1' */
  void* OUTPUT_1_1_TsIndex;            /* '<S30>/OUTPUT_1_1' */
  int_T STATE_1_Modes[175];            /* '<S30>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S30>/OUTPUT_1_0' */
  int_T OUTPUT_1_1_Modes;              /* '<S30>/OUTPUT_1_1' */
  int32_T STATE_1_MASS_MATRIX_PR;      /* '<S30>/STATE_1' */
  boolean_T STATE_1_FirstOutput;       /* '<S30>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S30>/OUTPUT_1_0' */
  boolean_T OUTPUT_1_1_FirstOutput;    /* '<S30>/OUTPUT_1_1' */
} DW;

/* Continuous states (default storage) */
typedef struct {
  real_T AccumulatorModelCellsCell1Bat1t[325];/* '<S30>/STATE_1' */
} X;

/* State derivatives (default storage) */
typedef struct {
  real_T AccumulatorModelCellsCell1Bat1t[325];/* '<S30>/STATE_1' */
} XDot;

/* State disabled  */
typedef struct {
  boolean_T AccumulatorModelCellsCell1Bat1t[325];/* '<S30>/STATE_1' */
} XDis;

/* Mass Matrix (global) */
typedef struct {
  int_T ir[90];
  int_T jc[326];
  real_T pr[90];
} MassMatrix;

#ifndef ODE14X_INTG
#define ODE14X_INTG

/* ODE14X Integration Data */
typedef struct {
  real_T *x0;
  real_T *f0;
  real_T *x1start;
  real_T *f1;
  real_T *Delta;
  real_T *E;
  real_T *fac;
  real_T *DFDX;
  real_T *W;
  int_T *pivots;
  real_T *xtmp;
  real_T *ztmp;
  real_T *M;
  real_T *M1;
  real_T *Edot;
  real_T *xdot;
  real_T *fminusMxdot;
  boolean_T isFirstStep;
} ODE14X_IntgData;

#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T DischargeIn[5];               /* '<Root>/DischargeIn' */
  real_T LoadCont;                     /* '<Root>/LoadCont' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T CurrentOut;                   /* '<Root>/CurrentOut' */
  real_T VoltageOut[5];                /* '<Root>/Voltage Out' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  int_T massMatrixType;
  int_T massMatrixNzMax;
  int_T *massMatrixIr;
  int_T *massMatrixJc;
  real_T *massMatrixPr;
  real_T odeX0[325];
  real_T odeF0[325];
  real_T odeX1START[325];
  real_T odeF1[325];
  real_T odeDELTA[325];
  real_T odeE[4*325];
  real_T odeFAC[325];
  real_T odeDFDX[325*325];
  real_T odeW[325*325];
  int_T odePIVOTS[325];
  real_T odeXTMP[325];
  real_T odeZTMP[325];
  real_T odeMASSMATRIX_M[90];
  real_T odeMASSMATRIX_M1[90];
  real_T odeEDOT[4*325];
  real_T odeXDOT[325];
  real_T odeFMXDOT[325];
  ODE14X_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Continuous states (default storage) */
extern X rtX;

/* global MassMatrix */
extern MassMatrix rtMassMatrix;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void AccumulatorModel_initialize(void);
extern void AccumulatorModel_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<Root>/Scope2' : Unused code path elimination
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
 * '<Root>' : 'AccumulatorModel'
 * '<S1>'   : 'AccumulatorModel/Cells'
 * '<S2>'   : 'AccumulatorModel/Load'
 * '<S3>'   : 'AccumulatorModel/PS-Simulink Converter'
 * '<S4>'   : 'AccumulatorModel/PS-Simulink Converter1'
 * '<S5>'   : 'AccumulatorModel/Simulink-PS Converter'
 * '<S6>'   : 'AccumulatorModel/Solver Configuration'
 * '<S7>'   : 'AccumulatorModel/Cells/PS-S1'
 * '<S8>'   : 'AccumulatorModel/Cells/PS-S2'
 * '<S9>'   : 'AccumulatorModel/Cells/PS-S3'
 * '<S10>'  : 'AccumulatorModel/Cells/PS-S4'
 * '<S11>'  : 'AccumulatorModel/Cells/PS-S5'
 * '<S12>'  : 'AccumulatorModel/Cells/S-PS1'
 * '<S13>'  : 'AccumulatorModel/Cells/S-PS2'
 * '<S14>'  : 'AccumulatorModel/Cells/S-PS3'
 * '<S15>'  : 'AccumulatorModel/Cells/S-PS4'
 * '<S16>'  : 'AccumulatorModel/Cells/S-PS5'
 * '<S17>'  : 'AccumulatorModel/Cells/PS-S1/EVAL_KEY'
 * '<S18>'  : 'AccumulatorModel/Cells/PS-S2/EVAL_KEY'
 * '<S19>'  : 'AccumulatorModel/Cells/PS-S3/EVAL_KEY'
 * '<S20>'  : 'AccumulatorModel/Cells/PS-S4/EVAL_KEY'
 * '<S21>'  : 'AccumulatorModel/Cells/PS-S5/EVAL_KEY'
 * '<S22>'  : 'AccumulatorModel/Cells/S-PS1/EVAL_KEY'
 * '<S23>'  : 'AccumulatorModel/Cells/S-PS2/EVAL_KEY'
 * '<S24>'  : 'AccumulatorModel/Cells/S-PS3/EVAL_KEY'
 * '<S25>'  : 'AccumulatorModel/Cells/S-PS4/EVAL_KEY'
 * '<S26>'  : 'AccumulatorModel/Cells/S-PS5/EVAL_KEY'
 * '<S27>'  : 'AccumulatorModel/PS-Simulink Converter/EVAL_KEY'
 * '<S28>'  : 'AccumulatorModel/PS-Simulink Converter1/EVAL_KEY'
 * '<S29>'  : 'AccumulatorModel/Simulink-PS Converter/EVAL_KEY'
 * '<S30>'  : 'AccumulatorModel/Solver Configuration/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_AccumulatorModel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
