/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_laplace_float_mex_api.h
 *
 * Code generation for function '_coder_laplace_float_mex_api'
 *
 */

#ifndef _CODER_LAPLACE_FLOAT_MEX_API_H
#define _CODER_LAPLACE_FLOAT_MEX_API_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "laplace_float_mex_types.h"

/* Function Declarations */
extern void customFetchLoggedData_api(int32_T nlhs, const mxArray *plhs[4]);
extern void forcePushIntoCloud_api(int32_T nlhs);
extern void laplace_api(laplace_float_mexStackData *SD, int32_T nlhs, const
  mxArray *plhs[1]);
extern void logStmts_api(laplace_float_mexStackData *SD, int32_T nlhs);

#endif

/* End of code generation (_coder_laplace_float_mex_api.h) */
