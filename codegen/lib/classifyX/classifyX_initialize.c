/*
 * File: classifyX_initialize.c
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 13-May-2024 00:32:34
 */

/* Include Files */
#include "classifyX_initialize.h"
#include "classifyX_data.h"
#include "rt_nonfinite.h"
#include "omp.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : void
 */
void classifyX_initialize(void)
{
  omp_init_nest_lock(&classifyX_nestLockGlobal);
  isInitialized_classifyX = true;
}

/*
 * File trailer for classifyX_initialize.c
 *
 * [EOF]
 */
