/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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

#include <stddef.h>
#include <stdio.h>              /* This ert_main.c example uses printf/fflush */
#include "LogicalAccumulatorModel.h"   /* Model's header file */
#include "rtwtypes.h"
#include "BmsSimHandle.h"
#include <time.h>
#include <unistd.h>

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(void);
void rt_OneStep(void)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  LogicalAccumulatorModel_step();
  // Set current to 60 
  rtU.LoadIn = 60;
  BmsSim_set_current(60);

  for(int i = 0; i< 90; i++){

    BmsSim_set_cell_info(i, rtY.VoltageOut[i], rtU.DischargeSig[i]);
  }
  //call tick
  BmsSim_tick();
  //get output from bms and put in model
  // test by print voltages

  for(int i = 0; i< 90; i++){

    rtU.DischargeSig[i] = BmsSim_read_drain_state(i);
  }

  printf("Voltage= %lf\t", rtY.TotalOut);

  

  /* Get model outputs here */

  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustrates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  printf("About to initialize model.");
  fflush(stdout); 
  /* Initialize model */
  LogicalAccumulatorModel_initialize();

  BmsSim_init();
  BmsSim_start();
  //begin logging
  char filename[11] = "./file.blf";
  BmsSim_begin_logging(filename);

  
  fflush(stdout);
  printf("Initialized model \n");
  fflush(stdout);

  /* Simulating the step behavior (in non real-time) to
   *  simulate model behavior at stop time.
   
  while ((((void*) 0) == (NULL)) && !rtmGetStopRequested(rtM)) {
    rt_OneStep();
  }
  */

  time_t endwait;
  time_t start = time(NULL);
  time_t seconds = 10;
  endwait = start + seconds;

  printf("loop time is : %s", ctime(&start));
  printf("end loop time is : %s", ctime(&endwait));

  while (start < endwait)
  {
    printf("loop time is : %s", ctime(&start));
    if(rtmGetStopRequested(rtM)){
      break;
    }
    sleep(1);
    start = time(NULL);
    //printf("loop time is : %s", ctime(&start));
    //printf("\nwhile");
    rt_OneStep();
  }
  printf("\nend while\n");
  //stop logging???

  BmsSim_stop();
  /* Disable rt_OneStep() here */
  return 0;

}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
