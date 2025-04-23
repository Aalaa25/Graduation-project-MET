/*
 * File: CompactClassificationECOC.c
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 13-May-2024 00:32:34
 */

/* Include Files */
#include "CompactClassificationECOC.h"
#include "Poly.h"
#include "classifyX_internal_types.h"
#include "minOrMax.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const double obj_Prior[17]
 *                const c_classreg_learning_classif_Com obj_BinaryLearners[136]
 *                const double obj_CodingMatrix[2312]
 *                const double Xin[7]
 * Return Type  : double
 */
double c_CompactClassificationECOC_pre(
    const double obj_Prior[17],
    const c_classreg_learning_classif_Com obj_BinaryLearners[136],
    const double obj_CodingMatrix[2312], const double Xin[7])
{
  double M[2312];
  double pscore[136];
  double c_tmp_data[61];
  double negloss[17];
  double f;
  double labels;
  int obj_BinaryLearners_size[2];
  int i;
  int idx;
  int k;
  int partialTrueCount;
  int trueCount;
  signed char tmp_data[7];
  boolean_T b[17];
  boolean_T exitg1;
  boolean_T valueisnan;
  for (idx = 0; idx < 2312; idx++) {
    f = obj_CodingMatrix[idx];
    M[idx] = f;
    if (f == 0.0) {
      M[idx] = rtNaN;
    }
  }
  for (idx = 0; idx < 136; idx++) {
    double X[7];
    for (trueCount = 0; trueCount < 7; trueCount++) {
      X[trueCount] = Xin[trueCount];
    }
    if (obj_BinaryLearners[idx].Alpha.size[0] == 0) {
      f = rtNaN;
    } else {
      double obj_BinaryLearners_data[427];
      boolean_T x[7];
      for (trueCount = 0; trueCount < 7; trueCount++) {
        x[trueCount] = (obj_BinaryLearners[idx].Mu[trueCount] == 0.0);
      }
      valueisnan = true;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= 6)) {
        if (!x[k]) {
          valueisnan = false;
          exitg1 = true;
        } else {
          k++;
        }
      }
      if (!valueisnan) {
        for (k = 0; k < 7; k++) {
          X[k] = Xin[k] - obj_BinaryLearners[idx].Mu[k];
        }
      }
      for (trueCount = 0; trueCount < 7; trueCount++) {
        x[trueCount] = (obj_BinaryLearners[idx].Sigma[trueCount] == 1.0);
      }
      valueisnan = true;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= 6)) {
        if (!x[k]) {
          valueisnan = false;
          exitg1 = true;
        } else {
          k++;
        }
      }
      if (!valueisnan) {
        double b_tmp_data[7];
        int tmp_size_idx_1;
        signed char b_i;
        trueCount = 0;
        partialTrueCount = 0;
        for (i = 0; i < 7; i++) {
          if (obj_BinaryLearners[idx].Sigma[i] > 0.0) {
            trueCount++;
            tmp_data[partialTrueCount] = (signed char)i;
            partialTrueCount++;
          }
        }
        if (trueCount == 1) {
          b_i = 1;
        } else if (trueCount == 1) {
          b_i = 1;
        } else {
          b_i = (signed char)trueCount;
        }
        tmp_size_idx_1 = b_i;
        if (b_i != 0) {
          partialTrueCount = (trueCount != 1);
          trueCount = b_i - 1;
          for (k = 0; k <= trueCount; k++) {
            i = tmp_data[partialTrueCount * k];
            b_tmp_data[k] = X[i] / obj_BinaryLearners[idx].Sigma[i];
          }
        }
        for (trueCount = 0; trueCount < tmp_size_idx_1; trueCount++) {
          X[tmp_data[trueCount]] = b_tmp_data[trueCount];
        }
      }
      obj_BinaryLearners_size[0] = 7;
      obj_BinaryLearners_size[1] =
          obj_BinaryLearners[idx].SupportVectorsT.size[1];
      partialTrueCount = 7 * obj_BinaryLearners[idx].SupportVectorsT.size[1];
      for (trueCount = 0; trueCount < partialTrueCount; trueCount++) {
        obj_BinaryLearners_data[trueCount] =
            obj_BinaryLearners[idx].SupportVectorsT.data[trueCount] /
            obj_BinaryLearners[idx].Scale;
      }
      for (trueCount = 0; trueCount < 7; trueCount++) {
        X[trueCount] /= obj_BinaryLearners[idx].Scale;
      }
      int tmp_size[2];
      Poly(obj_BinaryLearners_data, obj_BinaryLearners_size, X, c_tmp_data,
           tmp_size);
      f = 0.0;
      partialTrueCount = tmp_size[1];
      for (trueCount = 0; trueCount < partialTrueCount; trueCount++) {
        f += c_tmp_data[trueCount] *
             obj_BinaryLearners[idx].Alpha.data[trueCount];
      }
      f += obj_BinaryLearners[idx].Bias;
    }
    pscore[idx] = f;
  }
  valueisnan = true;
  partialTrueCount = 0;
  exitg1 = false;
  while ((!exitg1) && (partialTrueCount < 136)) {
    if (!rtIsNaN(pscore[partialTrueCount])) {
      valueisnan = false;
      exitg1 = true;
    } else {
      partialTrueCount++;
    }
  }
  for (trueCount = 0; trueCount < 17; trueCount++) {
    negloss[trueCount] = rtNaN;
  }
  if (!valueisnan) {
    for (k = 0; k < 17; k++) {
      double maxval[136];
      double y;
      for (partialTrueCount = 0; partialTrueCount < 136; partialTrueCount++) {
        f = 1.0 - M[k + 17 * partialTrueCount] * pscore[partialTrueCount];
        if (rtIsNaN(f) || (f > 0.0)) {
          maxval[partialTrueCount] = f;
        } else {
          maxval[partialTrueCount] = 0.0;
        }
      }
      if (rtIsNaN(maxval[0])) {
        y = 0.0;
        i = 0;
      } else {
        y = maxval[0];
        i = 1;
      }
      for (partialTrueCount = 0; partialTrueCount < 135; partialTrueCount++) {
        f = maxval[partialTrueCount + 1];
        if (!rtIsNaN(f)) {
          y += f;
          i++;
        }
      }
      negloss[k] = y / (double)i / 2.0;
    }
  }
  for (trueCount = 0; trueCount < 17; trueCount++) {
    f = -negloss[trueCount];
    negloss[trueCount] = f;
    b[trueCount] = rtIsNaN(f);
  }
  valueisnan = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= 16)) {
    if (!b[k]) {
      valueisnan = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  maximum(obj_Prior, &partialTrueCount);
  labels = (signed char)((signed char)(partialTrueCount - 1) + 1);
  if (!valueisnan) {
    maximum(negloss, &partialTrueCount);
    if (partialTrueCount < 0) {
      partialTrueCount = 0;
    }
    labels = (signed char)((signed char)(partialTrueCount - 1) + 1);
  }
  return labels;
}

/*
 * File trailer for CompactClassificationECOC.c
 *
 * [EOF]
 */
