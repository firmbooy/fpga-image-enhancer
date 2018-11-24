/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * filter2.h
 *
 * Code generation for function 'filter2'
 *
 */

#ifndef FILTER2_H
#define FILTER2_H

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
extern void filter2(laplace_float_mexStackData *SD, const uint8_T x[368200],
                    real_T y[368200]);

#endif

/* End of code generation (filter2.h) */
