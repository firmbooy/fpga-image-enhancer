/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * logStmts.c
 *
 * Code generation for function 'logStmts'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "laplace.h"
#include "logStmts.h"
#include "custom_mex_logger.h"

/* Variable Definitions */
static emlrtRSInfo o_emlrtRSI = { 1,   /* lineNo */
  "logStmts",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\coder\\float2fixed\\custom_logger\\logStmts.p"/* pathName */
};

/* Function Definitions */
void logStmts(laplace_float_mexStackData *SD, const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  memset(&SD->u2.f3.uv1[0], 0, 368200U * sizeof(uint8_T));
  st.site = &o_emlrtRSI;
  custom_mex_logger(SD, &st, 0U, SD->u2.f3.uv1);
}

/* End of code generation (logStmts.c) */
