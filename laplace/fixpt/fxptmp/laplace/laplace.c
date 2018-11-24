/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * laplace.c
 *
 * Code generation for function 'laplace'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "laplace.h"
#include "logStmts.h"
#include "filter2.h"
#include "custom_mex_logger.h"
#include "imread.h"
#include "laplace_float_mex_mexutil.h"
#include "laplace_float_mex_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 3,     /* lineNo */
  "laplace",                           /* fcnName */
  "F:\\matlab_workspace\\fpga-image-enhancer\\laplace.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 5,   /* lineNo */
  "laplace",                           /* fcnName */
  "F:\\matlab_workspace\\fpga-image-enhancer\\laplace.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "laplace",                           /* fcnName */
  "F:\\matlab_workspace\\fpga-image-enhancer\\laplace.m"/* pathName */
};

/* Function Declarations */
static void emlrt_update_log_1(const real_T in[9], emlrtLocationLoggingDataType
  table[], int32_T b_index);
static void emlrt_update_log_2(const uint8_T in[368200],
  emlrtLocationLoggingDataType table[], int32_T b_index);
static void emlrt_update_log_3(const real_T in[368200],
  emlrtLocationLoggingDataType table[], int32_T b_index);

/* Function Definitions */
static void emlrt_update_log_1(const real_T in[9], emlrtLocationLoggingDataType
  table[], int32_T b_index)
{
  emlrtLocationLoggingDataType *b_table;
  real_T localMin;
  real_T localMax;
  int32_T i;
  if (b_index >= 0) {
    b_table = (emlrtLocationLoggingDataType *)&table[b_index];
    localMin = b_table[0U].SimMin;
    localMax = b_table[0U].SimMax;
    for (i = 0; i < 9; i++) {
      /* Simulation Min-Max logging. */
      if (in[i] < localMin) {
        localMin = in[i];
      }

      if (in[i] > localMax) {
        localMax = in[i];
      }
    }

    b_table[0U].SimMin = localMin;
    b_table[0U].SimMax = localMax;

    /* IsAlwaysInteger logging. */
    i = 0;
    while (b_table[0U].IsAlwaysInteger && (i < 9)) {
      if (in[i] != muDoubleScalarFloor(in[i])) {
        b_table[0U].IsAlwaysInteger = false;
      }

      i++;
    }
  }
}

static void emlrt_update_log_2(const uint8_T in[368200],
  emlrtLocationLoggingDataType table[], int32_T b_index)
{
  emlrtLocationLoggingDataType *b_table;
  real_T d1;
  uint8_T localMin;
  uint8_T localMax;
  int32_T i;
  if (b_index >= 0) {
    b_table = (emlrtLocationLoggingDataType *)&table[b_index];
    d1 = b_table[0U].SimMin;
    if (d1 < 256.0) {
      if (d1 >= 0.0) {
        localMin = (uint8_T)d1;
      } else {
        localMin = 0U;
      }
    } else if (d1 >= 256.0) {
      localMin = MAX_uint8_T;
    } else {
      localMin = 0U;
    }

    d1 = b_table[0U].SimMax;
    if (d1 < 256.0) {
      if (d1 >= 0.0) {
        localMax = (uint8_T)d1;
      } else {
        localMax = 0U;
      }
    } else if (d1 >= 256.0) {
      localMax = MAX_uint8_T;
    } else {
      localMax = 0U;
    }

    for (i = 0; i < 368200; i++) {
      /* Simulation Min-Max logging. */
      if (in[i] < localMin) {
        localMin = in[i];
      }

      if (in[i] > localMax) {
        localMax = in[i];
      }
    }

    b_table[0U].SimMin = localMin;
    b_table[0U].SimMax = localMax;

    /* IsAlwaysInteger logging. */
    /* Data type is always integer. */
  }
}

static void emlrt_update_log_3(const real_T in[368200],
  emlrtLocationLoggingDataType table[], int32_T b_index)
{
  emlrtLocationLoggingDataType *b_table;
  real_T localMin;
  real_T localMax;
  int32_T i;
  if (b_index >= 0) {
    b_table = (emlrtLocationLoggingDataType *)&table[b_index];
    localMin = b_table[0U].SimMin;
    localMax = b_table[0U].SimMax;
    for (i = 0; i < 368200; i++) {
      /* Simulation Min-Max logging. */
      if (in[i] < localMin) {
        localMin = in[i];
      }

      if (in[i] > localMax) {
        localMax = in[i];
      }
    }

    b_table[0U].SimMin = localMin;
    b_table[0U].SimMax = localMax;

    /* IsAlwaysInteger logging. */
    i = 0;
    while (b_table[0U].IsAlwaysInteger && (i < 368200)) {
      if (in[i] != muDoubleScalarFloor(in[i])) {
        b_table[0U].IsAlwaysInteger = false;
      }

      i++;
    }
  }
}

void laplace(laplace_float_mexStackData *SD, const emlrtStack *sp, uint8_T
             sharpened_image[368200])
{
  int32_T i0;
  real_T dv0[9];
  real_T d0;
  int32_T q0;
  uint8_T u0;
  uint32_T qY;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtInitVarDataTables(emlrtLocationLoggingDataTables);
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0U);
  for (i0 = 0; i0 < 9; i0++) {
    dv0[i0] = iv0[i0];
  }

  emlrt_update_log_1(dv0, emlrtLocationLoggingDataTables, 0);
  st.site = &emlrtRSI;
  imread(&st, SD->u2.f2.uv0);
  memcpy(&sharpened_image[0], &SD->u2.f2.uv0[0], 368200U * sizeof(uint8_T));
  emlrt_update_log_2(sharpened_image, emlrtLocationLoggingDataTables, 1);
  st.site = &b_emlrtRSI;
  filter2(SD, sharpened_image, SD->u2.f2.dv1);
  memcpy(&SD->u2.f2.dv2[0], &SD->u2.f2.dv1[0], 368200U * sizeof(real_T));
  emlrt_update_log_3(SD->u2.f2.dv2, emlrtLocationLoggingDataTables, 3);
  for (i0 = 0; i0 < 368200; i0++) {
    d0 = muDoubleScalarRound(SD->u2.f2.dv2[i0]);
    if (d0 < 256.0) {
      if (d0 >= 0.0) {
        u0 = (uint8_T)d0;
      } else {
        u0 = 0U;
      }
    } else if (d0 >= 256.0) {
      u0 = MAX_uint8_T;
    } else {
      u0 = 0U;
    }

    SD->u2.f2.laplacian_gradient[i0] = u0;
  }

  emlrt_update_log_2(SD->u2.f2.laplacian_gradient,
                     emlrtLocationLoggingDataTables, 2);
  for (i0 = 0; i0 < 368200; i0++) {
    q0 = sharpened_image[i0];
    qY = (uint32_T)q0 - SD->u2.f2.laplacian_gradient[i0];
    if (qY > (uint32_T)q0) {
      qY = 0U;
    }

    sharpened_image[i0] = (uint8_T)qY;
  }

  emlrt_update_log_2(sharpened_image, emlrtLocationLoggingDataTables, 4);

  /* imshowpair(image, sharpened_image, 'montage') */
  st.site = &c_emlrtRSI;
  custom_mex_logger(SD, &st, 2U, sharpened_image);
}

/* End of code generation (laplace.c) */
