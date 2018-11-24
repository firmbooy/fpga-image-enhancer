/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * laplace_float_mex_mexutil.c
 *
 * Code generation for function 'laplace_float_mex_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "laplace.h"
#include "logStmts.h"
#include "laplace_float_mex_mexutil.h"

/* Function Definitions */
void emlrtInitVarDataTables(emlrtLocationLoggingDataType dataTables[5])
{
  int32_T i;
  for (i = 0; i < 5; i++) {
    dataTables[i].SimMin = rtInf;
    dataTables[i].SimMax = rtMinusInf;
    dataTables[i].OverflowWraps = 0;
    dataTables[i].Saturations = 0;
    dataTables[i].IsAlwaysInteger = true;
    dataTables[i].HistogramTable = (emlrtLocationLoggingHistogramType *)NULL;
  }
}

const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m6;
  y = NULL;
  m6 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m6);
  return y;
}

/* End of code generation (laplace_float_mex_mexutil.c) */
