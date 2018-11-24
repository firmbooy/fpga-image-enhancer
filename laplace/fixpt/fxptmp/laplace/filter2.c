/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * filter2.c
 *
 * Code generation for function 'filter2'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "customFetchLoggedData.h"
#include "forcePushIntoCloud.h"
#include "laplace.h"
#include "logStmts.h"
#include "filter2.h"
#include "xaxpy.h"
#include "laplace_float_mex_data.h"

/* Function Definitions */
void filter2(laplace_float_mexStackData *SD, const uint8_T x[368200], real_T y
             [368200])
{
  int32_T imin;
  int32_T j;
  int32_T jbmin;
  int32_T jbmax;
  int32_T jb;
  int32_T bColOffset;
  int32_T ib;
  int32_T bij;
  int32_T n;
  for (imin = 0; imin < 368200; imin++) {
    SD->u1.f1.x[imin] = x[imin];
  }

  memset(&y[0], 0, 368200U * sizeof(real_T));
  for (j = 0; j < 700; j++) {
    jbmin = (j + 1 <= 1);
    if (j + 1 < 699) {
      jbmax = 2;
    } else {
      jbmax = 700 - j;
    }

    for (jb = jbmin; jb <= jbmax; jb++) {
      bColOffset = 8 - jb * 3;
      for (ib = 0; ib < 3; ib++) {
        bij = iv0[bColOffset - ib];
        if (bij != 0) {
          if (ib < 1) {
            imin = 2;
            n = 525;
          } else {
            imin = 1;
            n = 527 - ib;
          }

          imin += j * 526;
          xaxpy(n, bij, SD->u1.f1.x, ((imin + (jb - 1) * 526) + ib) - 1, y, imin);
        }
      }
    }
  }
}

/* End of code generation (filter2.c) */
