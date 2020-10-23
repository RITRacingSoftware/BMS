/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LogicalAccumulatorModel.c
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

#include "LogicalAccumulatorModel.h"

/* Block signals and states (default storage) */
DW rtDW;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void LogicalAccumulatorModel_step(void)
{
  /* Outport: '<Root>/VoltageOut' incorporates:
   *  DiscreteIntegrator: '<S1>/Amp hours integration'
   *  Polyval: '<S1>/Polynomial'
   */
  rtY.VoltageOut = ((-0.000294 * rtDW.Amphoursintegration_DSTATE + 0.00827) *
                    rtDW.Amphoursintegration_DSTATE + -0.0926) *
    rtDW.Amphoursintegration_DSTATE + 4.2;

  /* Update for DiscreteIntegrator: '<S1>/Amp hours integration' */
  rtDW.Amphoursintegration_DSTATE += 2.833333333333333E-6;
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
