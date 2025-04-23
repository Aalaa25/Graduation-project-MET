/*
 * File: Poly.c
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 13-May-2024 00:32:34
 */

/* Include Files */
#include "Poly.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const double svT_data[]
 *                const int svT_size[2]
 *                const double x[7]
 *                double kernelProduct_data[]
 *                int kernelProduct_size[2]
 * Return Type  : void
 */
void Poly(const double svT_data[], const int svT_size[2], const double x[7],
          double kernelProduct_data[], int kernelProduct_size[2])
{
  double temp_data[61];
  int boffset;
  int j;
  int k;
  int n;
  n = svT_size[1];
  kernelProduct_size[1] = svT_size[1];
  for (j = 0; j < n; j++) {
    double s;
    boffset = j * 7;
    s = 0.0;
    for (k = 0; k < 7; k++) {
      s += x[k] * svT_data[boffset + k];
    }
    kernelProduct_data[j] = s;
  }
  boffset = svT_size[1] - 1;
  for (n = 0; n <= boffset; n++) {
    kernelProduct_data[n]++;
  }
  n = svT_size[1];
  if (n - 1 >= 0) {
    memcpy(&temp_data[0], &kernelProduct_data[0],
           (unsigned int)n * sizeof(double));
  }
  kernelProduct_size[0] = 1;
  for (n = 0; n <= boffset; n++) {
    kernelProduct_data[n] *= temp_data[n];
  }
}

/*
 * File trailer for Poly.c
 *
 * [EOF]
 */
