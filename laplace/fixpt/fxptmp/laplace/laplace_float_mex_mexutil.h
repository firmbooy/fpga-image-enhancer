/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * laplace_float_mex_mexutil.h
 *
 * Code generation for function 'laplace_float_mex_mexutil'
 *
 */

#ifndef LAPLACE_FLOAT_MEX_MEXUTIL_H
#define LAPLACE_FLOAT_MEX_MEXUTIL_H

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
extern void emlrtInitVarDataTables(emlrtLocationLoggingDataType dataTables[5]);
extern const mxArray *emlrt_marshallOut(const real_T u);

#endif

/* End of code generation (laplace_float_mex_mexutil.h) */
