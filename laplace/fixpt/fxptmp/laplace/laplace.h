/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * laplace.h
 *
 * Code generation for function 'laplace'
 *
 */

#ifndef LAPLACE_H
#define LAPLACE_H

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
extern void laplace(laplace_float_mexStackData *SD, const emlrtStack *sp,
                    uint8_T sharpened_image[368200]);

#endif

/* End of code generation (laplace.h) */
