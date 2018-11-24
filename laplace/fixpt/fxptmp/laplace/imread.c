/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imread.c
 *
 * Code generation for function 'imread'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "laplace.h"
#include "logStmts.h"
#include "imread.h"
#include "warning.h"
#include "libmwjpegreader.h"

/* Variable Definitions */
static emlrtRSInfo e_emlrtRSI = { 149, /* lineNo */
  "imread",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pathName */
};

static emlrtRTEInfo e_emlrtRTEI = { 118,/* lineNo */
  13,                                  /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 120,/* lineNo */
  9,                                   /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 125,/* lineNo */
  9,                                   /* colNo */
  "imread",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pName */
};

/* Function Definitions */
void imread(const emlrtStack *sp, uint8_T X[368200])
{
  real_T outDims[2];
  int32_T i1;
  char_T libjpegWarnBuffer[200];
  static const char_T fname[9] = { 'm', 'o', 'o', 'n', '.', 'j', 'p', 'g',
    '\x00' };

  int8_T fileStatus;
  int8_T libjpegReadDone;
  real_T libjpegMsgCode;
  int8_T errWarnType;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  outDims[0] = 526.0;
  outDims[1] = 700.0;
  for (i1 = 0; i1 < 200; i1++) {
    libjpegWarnBuffer[i1] = ' ';
  }

  jpegreader_uint8(fname, X, outDims, 2.0, &fileStatus, &libjpegReadDone,
                   &libjpegMsgCode, libjpegWarnBuffer, &errWarnType);
  if ((fileStatus == -1) || (libjpegReadDone == 0) || (errWarnType == -1)) {
    if (fileStatus == -1) {
      emlrtErrorWithMessageIdR2018a(sp, &e_emlrtRTEI,
        "MATLAB:imagesci:imread:codegenFileOpenError",
        "MATLAB:imagesci:imread:codegenFileOpenError", 3, 4, 8, "moon.jpg");
    }

    if (errWarnType == -1) {
      emlrtErrorWithMessageIdR2018a(sp, &f_emlrtRTEI,
        "MATLAB:imagesci:jpg:unhandledLibraryError",
        "MATLAB:imagesci:jpg:unhandledLibraryError", 5, 6, 8.0, 4, 200,
        libjpegWarnBuffer);
    }

    if (libjpegReadDone != 1) {
      emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI,
        "MATLAB:imagesci:jpg:unhandledLibraryError",
        "MATLAB:imagesci:jpg:unhandledLibraryError", 5, 6, 8.0, 4, 200,
        libjpegWarnBuffer);
    }
  }

  if (errWarnType == -2) {
    st.site = &e_emlrtRSI;
    warning(&st, libjpegWarnBuffer);
  }
}

/* End of code generation (imread.c) */
