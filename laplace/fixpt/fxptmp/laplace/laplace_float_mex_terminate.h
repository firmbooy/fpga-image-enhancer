/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * laplace_float_mex_terminate.h
 *
 * Code generation for function 'laplace_float_mex_terminate'
 *
 */

#ifndef LAPLACE_FLOAT_MEX_TERMINATE_H
#define LAPLACE_FLOAT_MEX_TERMINATE_H

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
extern void emlrtLocationLoggingAccessor(void **info, size_t *size);
extern int32_T emlrtLocationLoggingGetVersion(void);
extern void laplace_float_mex_atexit(void);
extern void laplace_float_mex_terminate(void);

#endif

/* End of code generation (laplace_float_mex_terminate.h) */
