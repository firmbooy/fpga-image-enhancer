/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * laplace_float_mex_initialize.c
 *
 * Code generation for function 'laplace_float_mex_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "laplace.h"
#include "logStmts.h"
#include "laplace_float_mex_initialize.h"
#include "custom_mex_logger.h"
#include "_coder_laplace_float_mex_mex.h"
#include "laplace_float_mex_data.h"

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

/* Function Declarations */
static void laplace_float_mex_once(const emlrtStack *sp);

/* Function Definitions */
static void laplace_float_mex_once(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = NULL;
  pInit_not_empty_init();
  st.site = NULL;
  pBufferLen_not_empty_init();

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "F:\\matlab_workspace\\fpga-image-enhancer\\laplace.m", 0U, 1U,
                  1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "laplace", 0, -1, 225);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 37, -1, 220);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
  st.site = NULL;
  indexMapper_init(&st);
  st.site = NULL;
  buffers_init(&st);
  st.site = NULL;
  customCoderEnableLog_init(&st);
}

void laplace_float_mex_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    laplace_float_mex_once(&st);
  }
}

/* End of code generation (laplace_float_mex_initialize.c) */
