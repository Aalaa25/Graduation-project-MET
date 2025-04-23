/*
 * File: minOrMax.c
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 13-May-2024 00:32:34
 */

/* Include Files */
#include "minOrMax.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const double x[17]
 *                int *idx
 * Return Type  : double
 */
double maximum(const double x[17], int *idx)
{
  double ex;
  int k;
  if (!rtIsNaN(x[0])) {
    *idx = 1;
  } else {
    boolean_T exitg1;
    *idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 18)) {
      if (!rtIsNaN(x[k - 1])) {
        *idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (*idx == 0) {
    ex = x[0];
    *idx = 1;
  } else {
    int i;
    ex = x[*idx - 1];
    i = *idx + 1;
    for (k = i; k < 18; k++) {
      double d;
      d = x[k - 1];
      if (ex < d) {
        ex = d;
        *idx = k;
      }
    }
  }
  return ex;
}

/*
 * File trailer for minOrMax.c
 *
 * [EOF]
 */
