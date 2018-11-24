/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_laplace_float_mex_api.c
 *
 * Code generation for function '_coder_laplace_float_mex_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "laplace.h"
#include "logStmts.h"
#include "_coder_laplace_float_mex_api.h"
#include "laplace_float_mex_emxutil.h"
#include "warning.h"
#include "laplace_float_mex_mexutil.h"
#include "laplace_float_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo d_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_laplace_float_mex_api",      /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const uint8_T u[368200]);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct0_T *u);
static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct1_T *u);
static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [97]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const uint8_T u[368200])
{
  const mxArray *y;
  const mxArray *m7;
  static const int32_T iv6[2] = { 0, 0 };

  static const int32_T iv7[2] = { 526, 700 };

  y = NULL;
  m7 = emlrtCreateNumericArray(2, iv6, mxUINT8_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m7, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m7, iv7, 2);
  emlrtAssign(&y, m7);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct0_T *u)
{
  const mxArray *y;
  int32_T iv8[2];
  static const char * sv0[7] = { "Class", "Dims", "Varsize", "NumericType",
    "Fimath", "Data", "DataSize" };

  int32_T i;
  int32_T b_j1;
  emxArray_uint8_T *b_u;
  int32_T u_size[2];
  int32_T b_u_size[2];
  int32_T i5;
  const mxArray *b_y;
  char_T u_data[5];
  const mxArray *m8;
  const mxArray *m9;
  real_T *pData;
  const mxArray *m10;
  int32_T c_u_size[2];
  const mxArray *m11;
  const mxArray *m12;
  int32_T loop_ub;
  const mxArray *m13;
  uint8_T *b_pData;
  const mxArray *m14;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  y = NULL;
  iv8[0] = u->size[0];
  iv8[1] = u->size[1];
  emlrtAssign(&y, emlrtCreateStructArray(2, iv8, 7, sv0));
  emlrtCreateField(y, "Class");
  emlrtCreateField(y, "Dims");
  emlrtCreateField(y, "Varsize");
  emlrtCreateField(y, "NumericType");
  emlrtCreateField(y, "Fimath");
  emlrtCreateField(y, "Data");
  emlrtCreateField(y, "DataSize");
  i = 0;
  b_j1 = 0;
  emxInit_uint8_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, true);
  if (0 < u->size[1U]) {
    u_size[0] = 1;
    u_size[1] = 5;
    b_u_size[0] = 1;
    b_u_size[1] = 2;
  }

  while (b_j1 < u->size[1U]) {
    for (i5 = 0; i5 < 5; i5++) {
      u_data[i5] = u->data[b_j1].Class.data[i5];
    }

    b_y = NULL;
    m8 = emlrtCreateCharArray(2, u_size);
    emlrtInitCharArrayR2013a(sp, 5, m8, &u_data[0]);
    emlrtAssign(&b_y, m8);
    emlrtSetFieldR2017b(y, i, "Class", b_y, 0);
    b_y = NULL;
    m9 = emlrtCreateNumericArray(2, b_u_size, mxDOUBLE_CLASS, mxREAL);
    pData = emlrtMxGetPr(m9);
    pData[0] = u->data[b_j1].Dims.data[0];
    pData[1] = u->data[b_j1].Dims.data[1];
    emlrtAssign(&b_y, m9);
    emlrtSetFieldR2017b(y, i, "Dims", b_y, 1);
    b_y = NULL;
    m10 = emlrtCreateLogicalScalar(u->data[b_j1].Varsize);
    emlrtAssign(&b_y, m10);
    emlrtSetFieldR2017b(y, i, "Varsize", b_y, 2);
    c_u_size[0] = 1;
    c_u_size[1] = 0;
    b_y = NULL;
    m11 = emlrtCreateCharArray(2, c_u_size);
    emlrtInitCharArrayR2013a(sp, 0, m11, NULL);
    emlrtAssign(&b_y, m11);
    emlrtSetFieldR2017b(y, i, "NumericType", b_y, 3);
    c_u_size[0] = 1;
    c_u_size[1] = 0;
    b_y = NULL;
    m12 = emlrtCreateCharArray(2, c_u_size);
    emlrtInitCharArrayR2013a(sp, 0, m12, NULL);
    emlrtAssign(&b_y, m12);
    emlrtSetFieldR2017b(y, i, "Fimath", b_y, 4);
    i5 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = 1;
    b_u->size[1] = u->data[b_j1].Data->size[1];
    emxEnsureCapacity_uint8_T(sp, b_u, i5, (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j1].Data->size[0] * u->data[b_j1].Data->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      b_u->data[i5] = u->data[b_j1].Data->data[i5];
    }

    b_y = NULL;
    m13 = emlrtCreateNumericArray(2, *(int32_T (*)[2])b_u->size, mxUINT8_CLASS,
      mxREAL);
    b_pData = (uint8_T *)emlrtMxGetData(m13);
    i5 = 0;
    for (loop_ub = 0; loop_ub < u->data[b_j1].Data->size[1]; loop_ub++) {
      b_pData[i5] = u->data[b_j1].Data->data[loop_ub];
      i5++;
    }

    emlrtAssign(&b_y, m13);
    emlrtSetFieldR2017b(y, i, "Data", b_y, 5);
    b_y = NULL;
    m14 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)emlrtMxGetData(m14) = u->data[b_j1].DataSize;
    emlrtAssign(&b_y, m14);
    emlrtSetFieldR2017b(y, i, "DataSize", b_y, 6);
    i++;
    b_j1++;
  }

  emxFree_uint8_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct1_T *u)
{
  const mxArray *y;
  int32_T iv9[2];
  static const char * sv1[2] = { "ActualIndex", "FieldNames" };

  int32_T i;
  int32_T u_size[2];
  int32_T b_j1;
  const mxArray *b_y;
  const mxArray *m15;
  const mxArray *m16;
  y = NULL;
  iv9[0] = u->size[0];
  iv9[1] = u->size[1];
  emlrtAssign(&y, emlrtCreateStructArray(2, iv9, 2, sv1));
  emlrtCreateField(y, "ActualIndex");
  emlrtCreateField(y, "FieldNames");
  i = 0;
  if (0 < u->size[1U]) {
    u_size[0] = 1;
    u_size[1] = 0;
  }

  for (b_j1 = 0; b_j1 < u->size[1U]; b_j1++) {
    b_y = NULL;
    m15 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
    *(uint32_T *)emlrtMxGetData(m15) = u->data[b_j1].ActualIndex;
    emlrtAssign(&b_y, m15);
    emlrtSetFieldR2017b(y, i, "ActualIndex", b_y, 0);
    b_y = NULL;
    m16 = emlrtCreateCharArray(2, u_size);
    emlrtInitCharArrayR2013a(sp, 0, m16, NULL);
    emlrtAssign(&b_y, m16);
    emlrtSetFieldR2017b(y, i, "FieldNames", b_y, 1);
    i++;
  }

  return y;
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [97])
{
  const mxArray *y;
  const mxArray *m17;
  static const int32_T iv10[2] = { 1, 97 };

  y = NULL;
  m17 = emlrtCreateCharArray(2, iv10);
  emlrtInitCharArrayR2013a(sp, 97, m17, &u[0]);
  emlrtAssign(&y, m17);
  return y;
}

void customFetchLoggedData_api(int32_T nlhs, const mxArray *plhs[4])
{
  emxArray_struct0_T *data;
  emxArray_struct1_T *dataInfo;
  char_T dataExprIdMapping[97];
  real_T numLoggedExpr;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_struct0_T(&st, &data, 2, &d_emlrtRTEI, true);
  emxInit_struct1_T(&st, &dataInfo, 2, &d_emlrtRTEI, true);

  /* Invoke the target function */
  customFetchLoggedData(&st, data, dataInfo, dataExprIdMapping, &numLoggedExpr);

  /* Marshall function outputs */
  plhs[0] = c_emlrt_marshallOut(&st, data);
  emxFree_struct0_T(&data);
  if (nlhs > 1) {
    plhs[1] = d_emlrt_marshallOut(&st, dataInfo);
  }

  emxFree_struct1_T(&dataInfo);
  if (nlhs > 2) {
    plhs[2] = e_emlrt_marshallOut(&st, dataExprIdMapping);
  }

  if (nlhs > 3) {
    plhs[3] = emlrt_marshallOut(numLoggedExpr);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void forcePushIntoCloud_api(int32_T nlhs)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;

  /* Invoke the target function */
  forcePushIntoCloud(&st);
}

void laplace_api(laplace_float_mexStackData *SD, int32_T nlhs, const mxArray
                 *plhs[1])
{
  uint8_T (*sharpened_image)[368200];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  sharpened_image = (uint8_T (*)[368200])mxMalloc(sizeof(uint8_T [368200]));

  /* Invoke the target function */
  laplace(SD, &st, *sharpened_image);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(*sharpened_image);
}

void logStmts_api(laplace_float_mexStackData *SD, int32_T nlhs)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;

  /* Invoke the target function */
  logStmts(SD, &st);
}

/* End of code generation (_coder_laplace_float_mex_api.c) */
