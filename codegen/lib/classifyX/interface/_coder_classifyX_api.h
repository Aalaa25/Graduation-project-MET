/*
 * File: _coder_classifyX_api.h
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 13-May-2024 00:32:34
 */

#ifndef _CODER_CLASSIFYX_API_H
#define _CODER_CLASSIFYX_API_H

/* Include Files */
#include "emlrt.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
real_T classifyX(real_T X[7]);

void classifyX_api(const mxArray *prhs, const mxArray **plhs);

void classifyX_atexit(void);

void classifyX_initialize(void);

void classifyX_terminate(void);

void classifyX_xil_shutdown(void);

void classifyX_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for _coder_classifyX_api.h
 *
 * [EOF]
 */
