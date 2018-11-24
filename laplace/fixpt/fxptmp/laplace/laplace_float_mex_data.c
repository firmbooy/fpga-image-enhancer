/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * laplace_float_mex_data.c
 *
 * Code generation for function 'laplace_float_mex_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "laplace.h"
#include "logStmts.h"
#include "laplace_float_mex_data.h"

/* Variable Definitions */
emlrtLocationLoggingDataType emlrtLocationLoggingDataTables[5];
emlrtCTX emlrtRootTLSGlobal = NULL;
covrtInstance emlrtCoverageInstance;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131467U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "laplace_float_mex",                 /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo d_emlrtRSI = { 105,        /* lineNo */
  "imread",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\imagesci\\imread.m"/* pathName */
};

emlrtRSInfo f_emlrtRSI = { 16,         /* lineNo */
  "filter2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\filter2.m"/* pathName */
};

emlrtRSInfo g_emlrtRSI = { 80,         /* lineNo */
  "filter2",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\filter2.m"/* pathName */
};

emlrtRSInfo h_emlrtRSI = { 61,         /* lineNo */
  "xaxpy",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"/* pathName */
};

emlrtRSInfo i_emlrtRSI = { 60,         /* lineNo */
  "xaxpy",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xaxpy.m"/* pathName */
};

emlrtRSInfo j_emlrtRSI = { 57,         /* lineNo */
  "conv2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"/* pathName */
};

emlrtRSInfo k_emlrtRSI = { 82,         /* lineNo */
  "conv2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\lib\\matlab\\datafun\\conv2.m"/* pathName */
};

emlrtRSInfo l_emlrtRSI = { 41,         /* lineNo */
  "conv2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\conv2.m"/* pathName */
};

emlrtRSInfo m_emlrtRSI = { 29,         /* lineNo */
  "conv2AXPY",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\private\\conv2AXPY.m"/* pathName */
};

emlrtRSInfo n_emlrtRSI = { 392,        /* lineNo */
  "conv2AXPY",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018b\\toolbox\\eml\\eml\\+coder\\+internal\\private\\conv2AXPY.m"/* pathName */
};

const int8_T iv0[9] = { 1, 1, 1, 1, -8, 1, 1, 1, 1 };

/* End of code generation (laplace_float_mex_data.c) */
