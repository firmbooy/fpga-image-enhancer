/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * customFetchLoggedData.c
 *
 * Code generation for function 'customFetchLoggedData'
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
static emlrtRSInfo s_emlrtRSI = { 1,   /* lineNo */
  "customFetchLoggedData",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\coder\\float2fixed\\custom_logger\\customFetchLoggedData.p"/* pathName */
};

/* Function Definitions */
void customFetchLoggedData(const emlrtStack *sp, emxArray_struct0_T *data,
  emxArray_struct1_T *dataInfo, char_T dataExprIdMapping[97], real_T
  *numLoggedExpr)
{
  static const char_T cv0[97] = { 'l', 'a', 'p', 'l', 'a', 'c', 'e', ',', 'F',
    ':', '\\', 'm', 'a', 't', 'l', 'a', 'b', '_', 'w', 'o', 'r', 'k', 's', 'p',
    'a', 'c', 'e', '\\', 'f', 'p', 'g', 'a', '-', 'i', 'm', 'a', 'g', 'e', '-',
    'e', 'n', 'h', 'a', 'n', 'c', 'e', 'r', '\\', 'l', 'a', 'p', 'l', 'a', 'c',
    'e', '.', 'm', '$', '$', 'i', 'n', 'p', 'u', 't', 's', '$', '$', '$', '$',
    'o', 'u', 't', 'p', 'u', 't', 's', '$', '$', '<', '>', 's', 'h', 'a', 'r',
    'p', 'e', 'n', 'e', 'd', '_', 'i', 'm', 'a', 'g', 'e', ',', '2' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  memcpy(&dataExprIdMapping[0], &cv0[0], 97U * sizeof(char_T));
  st.site = &s_emlrtRSI;
  b_custom_mex_logger(&st, data, dataInfo);
  *numLoggedExpr = (real_T)dataInfo->size[1] - 1.0;
}

/* End of code generation (customFetchLoggedData.c) */
