/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_laplace_float_mex_mex.c
 *
 * Code generation for function '_coder_laplace_float_mex_mex'
 *
 */

/* Include files */
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "laplace.h"
#include "logStmts.h"
#include "_coder_laplace_float_mex_mex.h"
#include "laplace_float_mex_terminate.h"
#include "_coder_laplace_float_mex_api.h"
#include "laplace_float_mex_initialize.h"
#include "laplace_float_mex_data.h"

/* Variable Definitions */
static const char * emlrtEntryPoints[4] = { "laplace", "logStmts",
  "customFetchLoggedData", "forcePushIntoCloud" };

/* Function Declarations */
static void c_customFetchLoggedData_mexFunc(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs);
static void forcePushIntoCloud_mexFunction(int32_T nlhs, int32_T nrhs);
static void laplace_mexFunction(laplace_float_mexStackData *SD, int32_T nlhs,
  mxArray *plhs[1], int32_T nrhs);
static void logStmts_mexFunction(laplace_float_mexStackData *SD, int32_T nlhs,
  int32_T nrhs);

/* Function Definitions */
static void c_customFetchLoggedData_mexFunc(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs)
{
  const mxArray *outputs[4];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        21, "customFetchLoggedData");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 21,
                        "customFetchLoggedData");
  }

  /* Call the function. */
  customFetchLoggedData_api(nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

static void forcePushIntoCloud_mexFunction(int32_T nlhs, int32_T nrhs)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        18, "forcePushIntoCloud");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 18,
                        "forcePushIntoCloud");
  }

  /* Call the function. */
  forcePushIntoCloud_api(nlhs);
}

static void laplace_mexFunction(laplace_float_mexStackData *SD, int32_T nlhs,
  mxArray *plhs[1], int32_T nrhs)
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4, 7,
                        "laplace");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 7,
                        "laplace");
  }

  /* Call the function. */
  laplace_api(SD, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

static void logStmts_mexFunction(laplace_float_mexStackData *SD, int32_T nlhs,
  int32_T nrhs)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4, 8,
                        "logStmts");
  }

  if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 8,
                        "logStmts");
  }

  /* Call the function. */
  logStmts_api(SD, nlhs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  laplace_float_mexStackData *c_laplace_float_mexStackDataGlo = NULL;
  c_laplace_float_mexStackDataGlo = (laplace_float_mexStackData *)emlrtMxCalloc
    (1, 1U * sizeof(laplace_float_mexStackData));
  mexAtExit(laplace_float_mex_atexit);

  /* Module initialization. */
  laplace_float_mex_initialize();
  st.tls = emlrtRootTLSGlobal;

  /* Dispatch the entry-point. */
  switch (emlrtGetEntryPointIndexR2016a(&st, nrhs, prhs, emlrtEntryPoints, 4)) {
   case 0:
    laplace_mexFunction(c_laplace_float_mexStackDataGlo, nlhs, plhs, nrhs - 1);
    break;

   case 1:
    logStmts_mexFunction(c_laplace_float_mexStackDataGlo, nlhs, nrhs - 1);
    break;

   case 2:
    c_customFetchLoggedData_mexFunc(nlhs, plhs, nrhs - 1);
    break;

   case 3:
    forcePushIntoCloud_mexFunction(nlhs, nrhs - 1);
    break;
  }

  /* Module termination. */
  laplace_float_mex_terminate();
  emlrtMxFree(c_laplace_float_mexStackDataGlo);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_laplace_float_mex_mex.c) */
