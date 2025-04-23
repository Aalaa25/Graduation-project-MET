/*
 * File: CompactClassificationECOC.h
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 13-May-2024 00:32:34
 */

#ifndef COMPACTCLASSIFICATIONECOC_H
#define COMPACTCLASSIFICATIONECOC_H

/* Include Files */
#include "classifyX_internal_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
double c_CompactClassificationECOC_pre(
    const double obj_Prior[17],
    const c_classreg_learning_classif_Com obj_BinaryLearners[136],
    const double obj_CodingMatrix[2312], const double Xin[7]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for CompactClassificationECOC.h
 *
 * [EOF]
 */
