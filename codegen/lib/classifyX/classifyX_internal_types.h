/*
 * File: classifyX_internal_types.h
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 13-May-2024 00:32:34
 */

#ifndef CLASSIFYX_INTERNAL_TYPES_H
#define CLASSIFYX_INTERNAL_TYPES_H

/* Include Files */
#include "classifyX_types.h"
#include "rtwtypes.h"

/* Type Definitions */
#ifndef enum_c_classreg_learning_coderutils_
#define enum_c_classreg_learning_coderutils_
enum c_classreg_learning_coderutils_
{
  Logit = 0, /* Default value */
  Doublelogit,
  Invlogit,
  Ismax,
  Sign,
  Symmetric,
  Symmetricismax,
  Symmetriclogit,
  Identity
};
#endif /* enum_c_classreg_learning_coderutils_ */
#ifndef typedef_c_classreg_learning_coderutils_
#define typedef_c_classreg_learning_coderutils_
typedef enum c_classreg_learning_coderutils_ c_classreg_learning_coderutils_;
#endif /* typedef_c_classreg_learning_coderutils_ */

#ifndef enum_d_classreg_learning_coderutils_
#define enum_d_classreg_learning_coderutils_
enum d_classreg_learning_coderutils_
{
  linear = 1, /* Default value */
  gaussian = 2,
  rbf = 2,
  polynomial = 3
};
#endif /* enum_d_classreg_learning_coderutils_ */
#ifndef typedef_d_classreg_learning_coderutils_
#define typedef_d_classreg_learning_coderutils_
typedef enum d_classreg_learning_coderutils_ d_classreg_learning_coderutils_;
#endif /* typedef_d_classreg_learning_coderutils_ */

#ifndef struct_emxArray_real_T_61
#define struct_emxArray_real_T_61
struct emxArray_real_T_61 {
  double data[61];
  int size[1];
};
#endif /* struct_emxArray_real_T_61 */
#ifndef typedef_emxArray_real_T_61
#define typedef_emxArray_real_T_61
typedef struct emxArray_real_T_61 emxArray_real_T_61;
#endif /* typedef_emxArray_real_T_61 */

#ifndef struct_emxArray_real_T_7x61
#define struct_emxArray_real_T_7x61
struct emxArray_real_T_7x61 {
  double data[427];
  int size[2];
};
#endif /* struct_emxArray_real_T_7x61 */
#ifndef typedef_emxArray_real_T_7x61
#define typedef_emxArray_real_T_7x61
typedef struct emxArray_real_T_7x61 emxArray_real_T_7x61;
#endif /* typedef_emxArray_real_T_7x61 */

#ifndef typedef_c_classreg_learning_classif_Com
#define typedef_c_classreg_learning_classif_Com
typedef struct {
  emxArray_real_T_61 Alpha;
  double Bias;
  emxArray_real_T_7x61 SupportVectorsT;
  double Scale;
  double Order;
  double Mu[7];
  double Sigma[7];
  d_classreg_learning_coderutils_ KernelFunction;
  int ClassNamesLength[2];
  c_classreg_learning_coderutils_ ScoreTransform;
  double Prior[2];
  boolean_T ClassLogicalIndices[2];
  double Cost[4];
} c_classreg_learning_classif_Com;
#endif /* typedef_c_classreg_learning_classif_Com */

#endif
/*
 * File trailer for classifyX_internal_types.h
 *
 * [EOF]
 */
