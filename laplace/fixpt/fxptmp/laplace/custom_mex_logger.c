/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * custom_mex_logger.c
 *
 * Code generation for function 'custom_mex_logger'
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
#include "laplace_float_mex_emxutil.h"
#include "assertValidSizeArg.h"

/* Type Definitions */
#include <stddef.h>

/* Variable Definitions */
static emxArray_struct1_T *pIndexMap;
static boolean_T pIndexMap_not_empty;
static uint32_T pBufferLen;
static emxArray_struct0_T *pBuffers;
static boolean_T pBuffers_not_empty;
static boolean_T pInit_not_empty;
static emxArray_boolean_T *pEnabled;
static emlrtRSInfo p_emlrtRSI = { 1,   /* lineNo */
  "custom_mex_logger",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 12,  /* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 27,  /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtMCInfo c_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 46,  /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 16,/* lineNo */
  9,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 1, /* lineNo */
  4,                                   /* colNo */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 84,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  1,                                   /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  1,                                   /* lineNo */
  1,                                   /* colNo */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p"/* pName */
};

static emlrtDCInfo emlrtDCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "custom_mex_logger",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\coder\\float2fixed\\custom_logger\\custom_mex_logger.p",/* pName */
  1                                    /* checkKind */
};

static emlrtRSInfo u_emlrtRSI = { 46,  /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_horzcat,
  const char_T *identifier, emxArray_boolean_T *y);
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static const mxArray *f2fCustomCoderEnableLogState(const emlrtStack *sp,
  emlrtMCInfo *location);
static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  const boolean_T bv0[2] = { false, true };

  int32_T iv11[2];
  int32_T i6;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, dims, &bv0[0],
    iv11);
  i6 = ret->size[0] * ret->size[1];
  ret->size[0] = iv11[0];
  ret->size[1] = iv11[1];
  emxEnsureCapacity_boolean_T(sp, ret, i6, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 1, false);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_horzcat,
  const char_T *identifier, emxArray_boolean_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(b_horzcat), &thisId, y);
  emlrtDestroyArray(&b_horzcat);
}

static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

static const mxArray *f2fCustomCoderEnableLogState(const emlrtStack *sp,
  emlrtMCInfo *location)
{
  const mxArray *m19;
  return emlrtCallMATLABR2012b(sp, 1, &m19, 0, NULL,
    "f2fCustomCoderEnableLogState", true, location);
}

static const mxArray *horzcat(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m20;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m20, 2, pArrays, "horzcat", true,
    location);
}

void b_custom_mex_logger(const emlrtStack *sp, emxArray_struct0_T *data,
  emxArray_struct1_T *bufferInfo)
{
  struct0_T S;
  int32_T i4;
  static const char_T valClass[5] = { 'u', 'i', 'n', 't', '8' };

  int32_T loop_ub;
  struct1_T b_S;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &p_emlrtRSI;
  emxInitStruct_struct0_T(&st, &S, &emlrtRTEI, true);
  if (!pBuffers_not_empty) {
    S.Class.size[0] = 1;
    S.Class.size[1] = 5;
    for (i4 = 0; i4 < 5; i4++) {
      S.Class.data[i4] = valClass[i4];
    }

    S.Dims.size[0] = 1;
    S.Dims.size[1] = 2;
    S.Dims.data[0] = 1.0;
    S.Dims.data[1] = 1.0;
    S.Varsize = false;
    S.NumericType.size[0] = 1;
    S.NumericType.size[1] = 0;
    S.Fimath.size[0] = 1;
    S.Fimath.size[1] = 0;
    i4 = S.Data->size[0] * S.Data->size[1];
    S.Data->size[0] = 1;
    S.Data->size[1] = 1;
    emxEnsureCapacity_uint8_T(&st, S.Data, i4, &emlrtRTEI);
    S.Data->data[0] = 0U;
    S.DataSize = 1U;
    i4 = pBuffers->size[0] * pBuffers->size[1];
    pBuffers->size[0] = 1;
    pBuffers->size[1] = 1;
    emxEnsureCapacity_struct0_T(&st, pBuffers, i4, &emlrtRTEI);
    emxCopyStruct_struct0_T(&st, &pBuffers->data[0], &S, &emlrtRTEI);
    pBuffers_not_empty = true;
  }

  i4 = data->size[0] * data->size[1];
  data->size[0] = 1;
  data->size[1] = pBuffers->size[1];
  emxEnsureCapacity_struct0_T(&st, data, i4, &emlrtRTEI);
  loop_ub = pBuffers->size[0] * pBuffers->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    emxCopyStruct_struct0_T(&st, &data->data[i4], &pBuffers->data[i4],
      &emlrtRTEI);
  }

  emxCopyStruct_struct0_T(&st, &S, &pBuffers->data[0], &emlrtRTEI);
  i4 = pBuffers->size[0] * pBuffers->size[1];
  pBuffers->size[0] = 1;
  pBuffers->size[1] = 1;
  emxEnsureCapacity_struct0_T(&st, pBuffers, i4, &emlrtRTEI);
  emxCopyStruct_struct0_T(&st, &pBuffers->data[0], &S, &emlrtRTEI);
  pBuffers_not_empty = true;
  st.site = &p_emlrtRSI;
  emxFreeStruct_struct0_T(&S);
  if (!pIndexMap_not_empty) {
    b_S.ActualIndex = 0U;
    b_S.FieldNames.size[0] = 1;
    b_S.FieldNames.size[1] = 0;
    i4 = pIndexMap->size[0] * pIndexMap->size[1];
    pIndexMap->size[0] = 1;
    pIndexMap->size[1] = 1;
    emxEnsureCapacity_struct1_T(&st, pIndexMap, i4, &emlrtRTEI);
    pIndexMap->data[0] = b_S;
    pIndexMap_not_empty = true;
    pBufferLen = 1U;
  }

  i4 = bufferInfo->size[0] * bufferInfo->size[1];
  bufferInfo->size[0] = 1;
  bufferInfo->size[1] = pIndexMap->size[1];
  emxEnsureCapacity_struct1_T(&st, bufferInfo, i4, &emlrtRTEI);
  loop_ub = pIndexMap->size[0] * pIndexMap->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    bufferInfo->data[i4] = pIndexMap->data[i4];
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void buffers_free(void)
{
  emxFree_struct0_T(&pBuffers);
}

void buffers_init(const emlrtStack *sp)
{
  emxInit_struct0_T(sp, &pBuffers, 2, &emlrtRTEI, false);
  pBuffers_not_empty = false;
}

void customCoderEnableLog_free(void)
{
  emxFree_boolean_T(&pEnabled);
}

void customCoderEnableLog_init(const emlrtStack *sp)
{
  emxInit_boolean_T(sp, &pEnabled, 2, &emlrtRTEI, false);
}

void custom_mex_logger(laplace_float_mexStackData *SD, const emlrtStack *sp,
  uint32_T idx_in, const uint8_T val_in[368200])
{
  emxArray_boolean_T *hoistedGlobal;
  int32_T n;
  int32_T i2;
  boolean_T p;
  struct1_T S;
  int32_T k;
  const mxArray *y;
  const mxArray *m4;
  struct1_T b_S;
  uint32_T actualIdx;
  emxArray_struct1_T *b_hoistedGlobal;
  struct0_T c_S;
  uint32_T varargin_2;
  static const char_T valClass[5] = { 'u', 'i', 'n', 't', '8' };

  int32_T nxin;
  emxArray_int8_T *arg_Data;
  char_T arg_Class_data[5];
  const mxArray *m5;
  static const int32_T iv5[2] = { 1, 15 };

  static const char_T u[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  struct0_T d_S;
  struct0_T e_S;
  emxArray_struct0_T *c_hoistedGlobal;
  struct0_T expl_temp;
  uint32_T size;
  real_T x;
  emxArray_uint8_T *r0;
  uint32_T b_x;
  int32_T i3;
  emxArray_int32_T *r1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &p_emlrtRSI;
  if (!pInit_not_empty) {
    emxInit_boolean_T(&st, &hoistedGlobal, 2, &emlrtRTEI, true);
    pInit_not_empty = true;
    i2 = pEnabled->size[0] * pEnabled->size[1];
    pEnabled->size[0] = 1;
    pEnabled->size[1] = 1;
    emxEnsureCapacity_boolean_T(&st, pEnabled, i2, &emlrtRTEI);
    pEnabled->data[0] = false;
    i2 = hoistedGlobal->size[0] * hoistedGlobal->size[1];
    hoistedGlobal->size[0] = 1;
    hoistedGlobal->size[1] = pEnabled->size[1];
    emxEnsureCapacity_boolean_T(&st, hoistedGlobal, i2, &emlrtRTEI);
    n = pEnabled->size[0] * pEnabled->size[1];
    for (i2 = 0; i2 < n; i2++) {
      hoistedGlobal->data[i2] = pEnabled->data[i2];
    }

    y = NULL;
    m4 = emlrtCreateLogicalArray(2, *(int32_T (*)[2])hoistedGlobal->size);
    emlrtInitLogicalArray(pEnabled->size[1], m4, hoistedGlobal->data);
    emlrtAssign(&y, m4);
    b_st.site = &p_emlrtRSI;
    emlrt_marshallIn(&st, horzcat(&b_st, y, f2fCustomCoderEnableLogState(&b_st,
      &c_emlrtMCI), &c_emlrtMCI), "horzcat", pEnabled);
    i2 = hoistedGlobal->size[0] * hoistedGlobal->size[1];
    hoistedGlobal->size[0] = 1;
    hoistedGlobal->size[1] = pEnabled->size[1];
    emxEnsureCapacity_boolean_T(&st, hoistedGlobal, i2, &emlrtRTEI);
    n = pEnabled->size[0] * pEnabled->size[1];
    for (i2 = 0; i2 < n; i2++) {
      hoistedGlobal->data[i2] = pEnabled->data[i2];
    }

    b_st.site = &p_emlrtRSI;
    c_st.site = &q_emlrtRSI;
    n = pEnabled->size[1];
    p = true;
    if (1 > n) {
      p = false;
    }

    if (!p) {
      emlrtErrorWithMessageIdR2018a(&c_st, &h_emlrtRTEI,
        "MATLAB:subsdeldimmismatch", "MATLAB:subsdeldimmismatch", 0);
    }

    nxin = hoistedGlobal->size[1];
    n = hoistedGlobal->size[1] - 1;
    for (k = 0; k < n; k++) {
      hoistedGlobal->data[k] = hoistedGlobal->data[k + 1];
    }

    if (1 > n) {
      hoistedGlobal->size[1] = 0;
    } else {
      i2 = hoistedGlobal->size[0] * hoistedGlobal->size[1];
      hoistedGlobal->size[1] = nxin - 1;
      emxEnsureCapacity_boolean_T(&b_st, hoistedGlobal, i2, &b_emlrtRTEI);
    }

    i2 = pEnabled->size[0] * pEnabled->size[1];
    pEnabled->size[0] = 1;
    pEnabled->size[1] = hoistedGlobal->size[1];
    emxEnsureCapacity_boolean_T(&st, pEnabled, i2, &emlrtRTEI);
    n = hoistedGlobal->size[0] * hoistedGlobal->size[1];
    for (i2 = 0; i2 < n; i2++) {
      pEnabled->data[i2] = hoistedGlobal->data[i2];
    }

    emxFree_boolean_T(&hoistedGlobal);
  }

  n = pEnabled->size[1];
  if ((real_T)idx_in > n) {
    p = false;
  } else {
    i2 = pEnabled->size[1];
    if (((int32_T)idx_in < 1) || ((int32_T)idx_in > i2)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)idx_in, 1, i2, &emlrtBCI, &st);
    }

    p = pEnabled->data[(int32_T)idx_in - 1];
  }

  if (p) {
    st.site = &p_emlrtRSI;
    if (!pIndexMap_not_empty) {
      S.ActualIndex = 0U;
      S.FieldNames.size[0] = 1;
      S.FieldNames.size[1] = 0;
      i2 = pIndexMap->size[0] * pIndexMap->size[1];
      pIndexMap->size[0] = 1;
      pIndexMap->size[1] = 1;
      emxEnsureCapacity_struct1_T(&st, pIndexMap, i2, &emlrtRTEI);
      pIndexMap->data[0] = S;
      pIndexMap_not_empty = true;
      pBufferLen = 1U;
    }

    k = pIndexMap->size[1];
    if ((real_T)idx_in > k) {
      p = false;
    } else {
      i2 = pIndexMap->size[1];
      if (((int32_T)idx_in < 1) || ((int32_T)idx_in > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)idx_in, 1, i2, &emlrtBCI, &st);
      }

      p = (pIndexMap->data[(int32_T)idx_in - 1].ActualIndex != 0U);
    }

    if (!p) {
      st.site = &p_emlrtRSI;
      if (!pIndexMap_not_empty) {
        b_S.ActualIndex = 0U;
        b_S.FieldNames.size[0] = 1;
        b_S.FieldNames.size[1] = 0;
        i2 = pIndexMap->size[0] * pIndexMap->size[1];
        pIndexMap->size[0] = 1;
        pIndexMap->size[1] = 1;
        emxEnsureCapacity_struct1_T(&st, pIndexMap, i2, &emlrtRTEI);
        pIndexMap->data[0] = b_S;
        pIndexMap_not_empty = true;
        pBufferLen = 1U;
      }

      actualIdx = pBufferLen + 1U;
      if (actualIdx < pBufferLen) {
        actualIdx = MAX_uint32_T;
      }

      k = pIndexMap->size[1];
      if ((real_T)idx_in > k) {
        emxInit_struct1_T(&st, &b_hoistedGlobal, 2, &c_emlrtRTEI, true);
        i2 = b_hoistedGlobal->size[0] * b_hoistedGlobal->size[1];
        b_hoistedGlobal->size[0] = 1;
        b_hoistedGlobal->size[1] = pIndexMap->size[1];
        emxEnsureCapacity_struct1_T(&st, b_hoistedGlobal, i2, &emlrtRTEI);
        n = pIndexMap->size[0] * pIndexMap->size[1];
        for (i2 = 0; i2 < n; i2++) {
          b_hoistedGlobal->data[i2] = pIndexMap->data[i2];
        }

        k = pIndexMap->size[1];
        b_st.site = &p_emlrtRSI;
        S = pIndexMap->data[0];
        if (2.0 - (real_T)k >= 0.0) {
          varargin_2 = (uint32_T)(2.0 - (real_T)k);
        } else {
          varargin_2 = 0U;
        }

        c_st.site = &r_emlrtRSI;
        assertValidSizeArg(&c_st, varargin_2);
        if ((int8_T)varargin_2 != (int32_T)varargin_2) {
          y = NULL;
          m5 = emlrtCreateCharArray(2, iv5);
          emlrtInitCharArrayR2013a(&b_st, 15, m5, &u[0]);
          emlrtAssign(&y, m5);
          c_st.site = &u_emlrtRSI;
          error(&c_st, y, &d_emlrtMCI);
        }

        i2 = pIndexMap->size[0] * pIndexMap->size[1];
        pIndexMap->size[0] = 1;
        pIndexMap->size[1] = b_hoistedGlobal->size[1] + (int8_T)varargin_2;
        emxEnsureCapacity_struct1_T(&st, pIndexMap, i2, &emlrtRTEI);
        n = b_hoistedGlobal->size[1];
        for (i2 = 0; i2 < n; i2++) {
          pIndexMap->data[i2] = b_hoistedGlobal->data[i2];
        }

        n = (int8_T)varargin_2;
        for (i2 = 0; i2 < n; i2++) {
          pIndexMap->data[i2 + b_hoistedGlobal->size[1]] = S;
        }

        emxFree_struct1_T(&b_hoistedGlobal);
        pIndexMap_not_empty = true;
      }

      i2 = pIndexMap->size[1];
      if (((int32_T)idx_in < 1) || ((int32_T)idx_in > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)idx_in, 1, i2, &emlrtBCI, &st);
      }

      pIndexMap->data[1].ActualIndex = actualIdx;
      varargin_2 = pBufferLen + 1U;
      if (varargin_2 < pBufferLen) {
        varargin_2 = MAX_uint32_T;
      }

      pBufferLen = varargin_2;
    } else {
      st.site = &p_emlrtRSI;
      if (!pIndexMap_not_empty) {
        b_S.ActualIndex = 0U;
        b_S.FieldNames.size[0] = 1;
        b_S.FieldNames.size[1] = 0;
        i2 = pIndexMap->size[0] * pIndexMap->size[1];
        pIndexMap->size[0] = 1;
        pIndexMap->size[1] = 1;
        emxEnsureCapacity_struct1_T(&st, pIndexMap, i2, &emlrtRTEI);
        pIndexMap->data[0] = b_S;
        pIndexMap_not_empty = true;
        pBufferLen = 1U;
      }

      i2 = pIndexMap->size[1];
      if (((int32_T)idx_in < 1) || ((int32_T)idx_in > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)idx_in, 1, i2, &emlrtBCI, &st);
      }

      actualIdx = pIndexMap->data[1].ActualIndex;
    }

    st.site = &p_emlrtRSI;
    emxInitStruct_struct0_T(&st, &c_S, &emlrtRTEI, true);
    if (!pBuffers_not_empty) {
      c_S.Class.size[0] = 1;
      c_S.Class.size[1] = 5;
      for (i2 = 0; i2 < 5; i2++) {
        c_S.Class.data[i2] = valClass[i2];
      }

      c_S.Dims.size[0] = 1;
      c_S.Dims.size[1] = 2;
      c_S.Dims.data[0] = 1.0;
      c_S.Dims.data[1] = 1.0;
      c_S.Varsize = false;
      c_S.NumericType.size[0] = 1;
      c_S.NumericType.size[1] = 0;
      c_S.Fimath.size[0] = 1;
      c_S.Fimath.size[1] = 0;
      i2 = c_S.Data->size[0] * c_S.Data->size[1];
      c_S.Data->size[0] = 1;
      c_S.Data->size[1] = 1;
      emxEnsureCapacity_uint8_T(&st, c_S.Data, i2, &emlrtRTEI);
      c_S.Data->data[0] = 0U;
      c_S.DataSize = 1U;
      i2 = pBuffers->size[0] * pBuffers->size[1];
      pBuffers->size[0] = 1;
      pBuffers->size[1] = 1;
      emxEnsureCapacity_struct0_T(&st, pBuffers, i2, &emlrtRTEI);
      emxCopyStruct_struct0_T(&st, &pBuffers->data[0], &c_S, &emlrtRTEI);
      pBuffers_not_empty = true;
    }

    if ((real_T)actualIdx <= pBuffers->size[1]) {
      i2 = pBuffers->size[1];
      if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, i2, &emlrtBCI, &st);
      }

      if (pBuffers->data[(int32_T)actualIdx - 1].DataSize > 1U) {
        p = true;
      } else {
        p = false;
      }
    } else {
      p = false;
    }

    if (!p) {
      for (i2 = 0; i2 < 5; i2++) {
        arg_Class_data[i2] = valClass[i2];
      }

      emxInit_int8_T(sp, &arg_Data, 2, &emlrtRTEI, true);
      i2 = arg_Data->size[0] * arg_Data->size[1];
      arg_Data->size[0] = 1;
      arg_Data->size[1] = 1;
      emxEnsureCapacity_int8_T(sp, arg_Data, i2, &emlrtRTEI);
      arg_Data->data[0] = 0;
      st.site = &p_emlrtRSI;
      if (!pBuffers_not_empty) {
        emxInitStruct_struct0_T(&st, &d_S, &emlrtRTEI, true);
        d_S.Class.size[0] = 1;
        d_S.Class.size[1] = 5;
        for (i2 = 0; i2 < 5; i2++) {
          d_S.Class.data[i2] = valClass[i2];
        }

        d_S.Dims.size[0] = 1;
        d_S.Dims.size[1] = 2;
        d_S.Dims.data[0] = 1.0;
        d_S.Dims.data[1] = 1.0;
        d_S.Varsize = false;
        d_S.NumericType.size[0] = 1;
        d_S.NumericType.size[1] = 0;
        d_S.Fimath.size[0] = 1;
        d_S.Fimath.size[1] = 0;
        i2 = d_S.Data->size[0] * d_S.Data->size[1];
        d_S.Data->size[0] = 1;
        d_S.Data->size[1] = 1;
        emxEnsureCapacity_uint8_T(&st, d_S.Data, i2, &emlrtRTEI);
        d_S.Data->data[0] = 0U;
        d_S.DataSize = 1U;
        i2 = pBuffers->size[0] * pBuffers->size[1];
        pBuffers->size[0] = 1;
        pBuffers->size[1] = 1;
        emxEnsureCapacity_struct0_T(&st, pBuffers, i2, &emlrtRTEI);
        emxCopyStruct_struct0_T(&st, &pBuffers->data[0], &d_S, &emlrtRTEI);
        pBuffers_not_empty = true;
        emxFreeStruct_struct0_T(&d_S);
      }

      if ((real_T)actualIdx > pBuffers->size[1]) {
        emxInit_struct0_T(&st, &c_hoistedGlobal, 2, &c_emlrtRTEI, true);
        i2 = c_hoistedGlobal->size[0] * c_hoistedGlobal->size[1];
        c_hoistedGlobal->size[0] = 1;
        c_hoistedGlobal->size[1] = pBuffers->size[1];
        emxEnsureCapacity_struct0_T(&st, c_hoistedGlobal, i2, &emlrtRTEI);
        n = pBuffers->size[0] * pBuffers->size[1];
        for (i2 = 0; i2 < n; i2++) {
          emxCopyStruct_struct0_T(&st, &c_hoistedGlobal->data[i2],
            &pBuffers->data[i2], &emlrtRTEI);
        }

        k = pBuffers->size[1];
        b_st.site = &p_emlrtRSI;
        emxCopyStruct_struct0_T(&b_st, &c_S, &pBuffers->data[0], &emlrtRTEI);
        x = (real_T)actualIdx - (real_T)k;
        if (x < 4.294967296E+9) {
          if (x >= 0.0) {
            varargin_2 = (uint32_T)x;
          } else {
            varargin_2 = 0U;
          }
        } else {
          varargin_2 = MAX_uint32_T;
        }

        c_st.site = &r_emlrtRSI;
        assertValidSizeArg(&c_st, varargin_2);
        i2 = pBuffers->size[0] * pBuffers->size[1];
        pBuffers->size[0] = 1;
        pBuffers->size[1] = c_hoistedGlobal->size[1] + (int32_T)varargin_2;
        emxEnsureCapacity_struct0_T(&st, pBuffers, i2, &emlrtRTEI);
        n = c_hoistedGlobal->size[1];
        for (i2 = 0; i2 < n; i2++) {
          emxCopyStruct_struct0_T(&st, &pBuffers->data[i2],
            &c_hoistedGlobal->data[i2], &emlrtRTEI);
        }

        n = (int32_T)varargin_2;
        for (i2 = 0; i2 < n; i2++) {
          emxCopyStruct_struct0_T(&st, &pBuffers->data[i2 +
            c_hoistedGlobal->size[1]], &c_S, &emlrtRTEI);
        }

        emxFree_struct0_T(&c_hoistedGlobal);
        pBuffers_not_empty = true;
      }

      emxInitStruct_struct0_T(&st, &expl_temp, &emlrtRTEI, true);
      expl_temp.Class.size[0] = 1;
      expl_temp.Class.size[1] = 5;
      for (i2 = 0; i2 < 5; i2++) {
        expl_temp.Class.data[i2] = arg_Class_data[i2];
      }

      expl_temp.Dims.size[0] = 1;
      expl_temp.Dims.size[1] = 2;
      expl_temp.Dims.data[0] = 526.0;
      expl_temp.Dims.data[1] = 700.0;
      expl_temp.Varsize = false;
      expl_temp.NumericType.size[0] = 1;
      expl_temp.NumericType.size[1] = 0;
      expl_temp.Fimath.size[0] = 1;
      expl_temp.Fimath.size[1] = 0;
      i2 = expl_temp.Data->size[0] * expl_temp.Data->size[1];
      expl_temp.Data->size[0] = 1;
      expl_temp.Data->size[1] = arg_Data->size[1];
      emxEnsureCapacity_uint8_T(&st, expl_temp.Data, i2, &emlrtRTEI);
      n = arg_Data->size[0] * arg_Data->size[1];
      for (i2 = 0; i2 < n; i2++) {
        expl_temp.Data->data[i2] = (uint8_T)arg_Data->data[i2];
      }

      emxFree_int8_T(&arg_Data);
      expl_temp.DataSize = 1U;
      i2 = pBuffers->size[1];
      if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, i2, &emlrtBCI, &st);
      }

      emxCopyStruct_struct0_T(&st, &pBuffers->data[(int32_T)actualIdx - 1],
        &expl_temp, &emlrtRTEI);
      emxFreeStruct_struct0_T(&expl_temp);
    }

    emxFreeStruct_struct0_T(&c_S);
    memcpy(&SD->u1.f0.val_flat[0], &val_in[0], 368200U * sizeof(uint8_T));
    st.site = &p_emlrtRSI;
    b_st.site = &p_emlrtRSI;
    memcpy((void *)&SD->u1.f0.y[0], (void *)&SD->u1.f0.val_flat[0], (uint32_T)
           ((size_t)368200 * sizeof(uint8_T)));
    st.site = &p_emlrtRSI;
    if (actualIdx > 1U) {
      b_st.site = &p_emlrtRSI;
      if (!pBuffers_not_empty) {
        emxInitStruct_struct0_T(&b_st, &e_S, &emlrtRTEI, true);
        e_S.Class.size[0] = 1;
        e_S.Class.size[1] = 5;
        for (i2 = 0; i2 < 5; i2++) {
          e_S.Class.data[i2] = valClass[i2];
        }

        e_S.Dims.size[0] = 1;
        e_S.Dims.size[1] = 2;
        e_S.Dims.data[0] = 1.0;
        e_S.Dims.data[1] = 1.0;
        e_S.Varsize = false;
        e_S.NumericType.size[0] = 1;
        e_S.NumericType.size[1] = 0;
        e_S.Fimath.size[0] = 1;
        e_S.Fimath.size[1] = 0;
        i2 = e_S.Data->size[0] * e_S.Data->size[1];
        e_S.Data->size[0] = 1;
        e_S.Data->size[1] = 1;
        emxEnsureCapacity_uint8_T(&b_st, e_S.Data, i2, &emlrtRTEI);
        e_S.Data->data[0] = 0U;
        e_S.DataSize = 1U;
        i2 = pBuffers->size[0] * pBuffers->size[1];
        pBuffers->size[0] = 1;
        pBuffers->size[1] = 1;
        emxEnsureCapacity_struct0_T(&b_st, pBuffers, i2, &emlrtRTEI);
        emxCopyStruct_struct0_T(&b_st, &pBuffers->data[0], &e_S, &emlrtRTEI);
        pBuffers_not_empty = true;
        emxFreeStruct_struct0_T(&e_S);
      }

      i2 = pBuffers->size[1];
      if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, i2, &emlrtBCI,
          &b_st);
      }

      size = pBuffers->data[(int32_T)actualIdx - 1].DataSize;
      i2 = pBuffers->size[1];
      if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, i2, &emlrtBCI,
          &b_st);
      }

      i2 = pBuffers->size[1];
      if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, i2, &emlrtBCI,
          &b_st);
      }

      k = pBuffers->data[(int32_T)actualIdx - 1].Data->size[1];
      if ((real_T)size + 368200.0 < 4.294967296E+9) {
        varargin_2 = (uint32_T)((real_T)size + 368200.0);
      } else {
        varargin_2 = MAX_uint32_T;
      }

      if ((real_T)varargin_2 > k) {
        x = (real_T)k * 2.0;
        if ((real_T)size + 368200.0 < 4.294967296E+9) {
          varargin_2 = (uint32_T)((real_T)size + 368200.0);
        } else {
          varargin_2 = MAX_uint32_T;
        }

        emxInit_uint8_T(&b_st, &r0, 2, &emlrtRTEI, true);
        i2 = pBuffers->size[1];
        if (x < varargin_2) {
          b_x = varargin_2;
        } else {
          b_x = (uint32_T)x;
        }

        x = (real_T)b_x - (real_T)k;
        if (x < 4.294967296E+9) {
          if (x >= 0.0) {
            varargin_2 = (uint32_T)x;
          } else {
            varargin_2 = 0U;
          }
        } else {
          varargin_2 = MAX_uint32_T;
        }

        if ((real_T)varargin_2 != (int32_T)varargin_2) {
          emlrtIntegerCheckR2012b(varargin_2, &emlrtDCI, &b_st);
        }

        k = (int32_T)varargin_2;
        nxin = pBuffers->size[1];
        i3 = r0->size[0] * r0->size[1];
        r0->size[0] = 1;
        if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > i2)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, i2, &emlrtBCI,
            &b_st);
        }

        r0->size[1] = pBuffers->data[(int32_T)actualIdx - 1].Data->size[1] + k;
        emxEnsureCapacity_uint8_T(&b_st, r0, i3, &emlrtRTEI);
        if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > i2)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, i2, &emlrtBCI,
            &b_st);
        }

        n = pBuffers->data[(int32_T)actualIdx - 1].Data->size[1];
        for (i3 = 0; i3 < n; i3++) {
          if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > i2)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, i2, &emlrtBCI,
              &b_st);
          }

          r0->data[i3] = pBuffers->data[(int32_T)actualIdx - 1].Data->data[i3];
        }

        for (i3 = 0; i3 < k; i3++) {
          if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > i2)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, i2, &emlrtBCI,
              &b_st);
          }

          r0->data[i3 + pBuffers->data[(int32_T)actualIdx - 1].Data->size[1]] =
            0U;
        }

        if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > nxin)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, nxin, &emlrtBCI,
            &b_st);
        }

        i2 = pBuffers->data[(int32_T)actualIdx - 1].Data->size[0] *
          pBuffers->data[(int32_T)actualIdx - 1].Data->size[1];
        pBuffers->data[(int32_T)actualIdx - 1].Data->size[0] = 1;
        if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > nxin)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, nxin, &emlrtBCI,
            &b_st);
        }

        pBuffers->data[(int32_T)actualIdx - 1].Data->size[1] = r0->size[1];
        emxEnsureCapacity_uint8_T(&b_st, pBuffers->data[(int32_T)actualIdx - 1].
          Data, i2, &emlrtRTEI);
        if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > nxin)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, nxin, &emlrtBCI,
            &b_st);
        }

        n = r0->size[0] * r0->size[1];
        for (i2 = 0; i2 < n; i2++) {
          if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > nxin)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, nxin, &emlrtBCI,
              &b_st);
          }

          pBuffers->data[(int32_T)actualIdx - 1].Data->data[i2] = r0->data[i2];
        }

        emxFree_uint8_T(&r0);
      }

      i2 = pBuffers->size[1];
      if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, i2, &emlrtBCI,
          &b_st);
      }

      i2 = (int32_T)actualIdx - 1;
      if ((real_T)size + 368200.0 < 4.294967296E+9) {
        varargin_2 = (uint32_T)((real_T)size + 368200.0);
      } else {
        varargin_2 = MAX_uint32_T;
      }

      varargin_2--;
      if (size > varargin_2) {
        nxin = 1;
        i3 = 1;
      } else {
        nxin = pBuffers->data[i2].Data->size[1];
        if (((int32_T)size < 1) || ((int32_T)size > nxin)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)size, 1, nxin, &emlrtBCI, &b_st);
        }

        nxin = (int32_T)size;
        i3 = pBuffers->data[i2].Data->size[1];
        if (((int32_T)varargin_2 < 1) || ((int32_T)varargin_2 > i3)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)varargin_2, 1, i3, &emlrtBCI,
            &b_st);
        }

        i3 = (int32_T)varargin_2 + 1;
      }

      emxInit_int32_T(&b_st, &r1, 2, &c_emlrtRTEI, true);
      n = i3 - nxin;
      if (n != 368200) {
        emlrtSubAssignSizeCheck1dR2017a(n, 368200, &emlrtECI, &b_st);
      }

      i3 = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = n;
      emxEnsureCapacity_int32_T(&b_st, r1, i3, &emlrtRTEI);
      for (i3 = 0; i3 < n; i3++) {
        r1->data[i3] = (nxin + i3) - 1;
      }

      n = r1->size[0] * r1->size[1] - 1;
      for (nxin = 0; nxin <= n; nxin++) {
        pBuffers->data[i2].Data->data[r1->data[nxin]] = SD->u1.f0.y[nxin];
      }

      emxFree_int32_T(&r1);
      i2 = pBuffers->size[1];
      if (((int32_T)actualIdx < 1) || ((int32_T)actualIdx > i2)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)actualIdx, 1, i2, &emlrtBCI,
          &b_st);
      }

      if ((real_T)size + 368200.0 < 4.294967296E+9) {
        varargin_2 = (uint32_T)((real_T)size + 368200.0);
      } else {
        varargin_2 = MAX_uint32_T;
      }

      pBuffers->data[(int32_T)actualIdx - 1].DataSize = varargin_2;
    }
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void indexMapper_free(void)
{
  emxFree_struct1_T(&pIndexMap);
}

void indexMapper_init(const emlrtStack *sp)
{
  emxInit_struct1_T(sp, &pIndexMap, 2, &emlrtRTEI, false);
  pIndexMap_not_empty = false;
}

void pBufferLen_not_empty_init(void)
{
}

void pInit_not_empty_init(void)
{
  pInit_not_empty = false;
}

/* End of code generation (custom_mex_logger.c) */
