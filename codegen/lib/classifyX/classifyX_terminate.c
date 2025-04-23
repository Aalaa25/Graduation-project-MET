/*
 * File: classifyX_terminate.c
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 13-May-2024 00:32:34
 */

/* Include Files */
#include "classifyX_terminate.h"
#include "classifyX_data.h"
#include "rt_nonfinite.h"
#include "omp.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void classifyX_terminate(void)
{
  omp_destroy_nest_lock(&classifyX_nestLockGlobal);
  isInitialized_classifyX = false;
}

/*
 * File trailer for classifyX_terminate.c
 *
 * [EOF]
 */
