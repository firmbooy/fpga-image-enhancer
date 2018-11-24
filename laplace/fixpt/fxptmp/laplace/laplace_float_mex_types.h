/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * laplace_float_mex_types.h
 *
 * Code generation for function 'laplace'
 *
 */

#ifndef LAPLACE_FLOAT_MEX_TYPES_H
#define LAPLACE_FLOAT_MEX_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef struct_emxArray_char_T_1x0
#define struct_emxArray_char_T_1x0

struct emxArray_char_T_1x0
{
  int32_T size[2];
};

#endif                                 /*struct_emxArray_char_T_1x0*/

#ifndef typedef_emxArray_char_T_1x0
#define typedef_emxArray_char_T_1x0

typedef struct emxArray_char_T_1x0 emxArray_char_T_1x0;

#endif                                 /*typedef_emxArray_char_T_1x0*/

#ifndef struct_emxArray_char_T_1x5
#define struct_emxArray_char_T_1x5

struct emxArray_char_T_1x5
{
  char_T data[5];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_char_T_1x5*/

#ifndef typedef_emxArray_char_T_1x5
#define typedef_emxArray_char_T_1x5

typedef struct emxArray_char_T_1x5 emxArray_char_T_1x5;

#endif                                 /*typedef_emxArray_char_T_1x5*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T

struct emxArray_int8_T
{
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int8_T*/

#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T

typedef struct emxArray_int8_T emxArray_int8_T;

#endif                                 /*typedef_emxArray_int8_T*/

#ifndef struct_emxArray_real_T_1x2
#define struct_emxArray_real_T_1x2

struct emxArray_real_T_1x2
{
  real_T data[2];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_real_T_1x2*/

#ifndef typedef_emxArray_real_T_1x2
#define typedef_emxArray_real_T_1x2

typedef struct emxArray_real_T_1x2 emxArray_real_T_1x2;

#endif                                 /*typedef_emxArray_real_T_1x2*/

#ifndef struct_emxArray_uint8_T
#define struct_emxArray_uint8_T

struct emxArray_uint8_T
{
  uint8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_uint8_T*/

#ifndef typedef_emxArray_uint8_T
#define typedef_emxArray_uint8_T

typedef struct emxArray_uint8_T emxArray_uint8_T;

#endif                                 /*typedef_emxArray_uint8_T*/

#ifndef struct_sRNFpdE62fOVCGe5oP6ZWLD_tag
#define struct_sRNFpdE62fOVCGe5oP6ZWLD_tag

struct sRNFpdE62fOVCGe5oP6ZWLD_tag
{
  emxArray_char_T_1x5 Class;
  emxArray_real_T_1x2 Dims;
  boolean_T Varsize;
  emxArray_char_T_1x0 NumericType;
  emxArray_char_T_1x0 Fimath;
  emxArray_uint8_T *Data;
  uint32_T DataSize;
};

#endif                                 /*struct_sRNFpdE62fOVCGe5oP6ZWLD_tag*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct sRNFpdE62fOVCGe5oP6ZWLD_tag struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef struct_c_emxArray_sRNFpdE62fOVCGe5oP6Z
#define struct_c_emxArray_sRNFpdE62fOVCGe5oP6Z

struct c_emxArray_sRNFpdE62fOVCGe5oP6Z
{
  struct0_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_c_emxArray_sRNFpdE62fOVCGe5oP6Z*/

#ifndef typedef_emxArray_struct0_T
#define typedef_emxArray_struct0_T

typedef struct c_emxArray_sRNFpdE62fOVCGe5oP6Z emxArray_struct0_T;

#endif                                 /*typedef_emxArray_struct0_T*/

#ifndef struct_s7nPv06S7Az2mmYGdFQWPNB_tag
#define struct_s7nPv06S7Az2mmYGdFQWPNB_tag

struct s7nPv06S7Az2mmYGdFQWPNB_tag
{
  uint32_T ActualIndex;
  emxArray_char_T_1x0 FieldNames;
};

#endif                                 /*struct_s7nPv06S7Az2mmYGdFQWPNB_tag*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct s7nPv06S7Az2mmYGdFQWPNB_tag struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef struct_c_emxArray_s7nPv06S7Az2mmYGdFQW
#define struct_c_emxArray_s7nPv06S7Az2mmYGdFQW

struct c_emxArray_s7nPv06S7Az2mmYGdFQW
{
  struct1_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_c_emxArray_s7nPv06S7Az2mmYGdFQW*/

#ifndef typedef_emxArray_struct1_T
#define typedef_emxArray_struct1_T

typedef struct c_emxArray_s7nPv06S7Az2mmYGdFQW emxArray_struct1_T;

#endif                                 /*typedef_emxArray_struct1_T*/

#ifndef typedef_laplace_float_mexStackData
#define typedef_laplace_float_mexStackData

typedef struct {
  union
  {
    struct {
      uint8_T val_flat[368200];
      uint8_T y[368200];
    } f0;

    struct {
      real_T x[368200];
    } f1;
  } u1;

  union
  {
    struct {
      real_T dv1[368200];
      real_T dv2[368200];
      uint8_T uv0[368200];
      uint8_T laplacian_gradient[368200];
    } f2;

    struct {
      uint8_T uv1[368200];
    } f3;
  } u2;
} laplace_float_mexStackData;

#endif                                 /*typedef_laplace_float_mexStackData*/
#endif

/* End of code generation (laplace_float_mex_types.h) */
