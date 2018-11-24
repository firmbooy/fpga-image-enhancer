/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * assertValidSizeArg.c
 *
 * Code generation for function 'assertValidSizeArg'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "laplace.h"
#include "logStmts.h"
#include "assertValidSizeArg.h"

/* Variable Definitions */
static emlrtRTEInfo i_emlrtRTEI = { 55,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

/* Function Definitions */
void assertValidSizeArg(const emlrtStack *sp, uint32_T varargin_2)
{
  if (varargin_2 > 2147483647U) {
    emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI,
      "Coder:MATLAB:NonIntegerInput", "Coder:MATLAB:NonIntegerInput", 4, 12,
      MIN_int32_T, 12, MAX_int32_T);
  }
}

/* End of code generation (assertValidSizeArg.c) */
