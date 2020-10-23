/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LogicalAccumulatorModel.h
 *
 * Code generated for Simulink model 'LogicalAccumulatorModel'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Wed Oct 21 00:11:49 2020
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
#ifndef LogicalAccumulatorModel_COMMON_INCLUDES_
# define LogicalAccumulatorModel_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                            /* LogicalAccumulatorModel_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Macros for accessing real-time model data structure */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T Amphoursintegration_DSTATE;   /* '<S1>/Amp hours integration' */
} DW;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T VoltageOut;                   /* '<Root>/VoltageOut' */
} ExtY;

/* Block signals and states (default storage) */
extern DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void LogicalAccumulatorModel_initialize(void);
extern void LogicalAccumulatorModel_step(void);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S1>/Scope' : Unused code path elimination
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
 * '<S1>'   : 'LogicalAccumulatorModel/Subsystem'
 */
#endif                               /* RTW_HEADER_LogicalAccumulatorModel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
