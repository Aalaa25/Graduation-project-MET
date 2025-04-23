/*
 * File: CompactClassificationSVM.h
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 13-May-2024 00:32:34
 */

#ifndef COMPACTCLASSIFICATIONSVM_H
#define COMPACTCLASSIFICATIONSVM_H

/* Include Files */
#include "classifyX_internal_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
int ab_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ac_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ad_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ae_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int af_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int bb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int bc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int bd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int be_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int bf_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int c_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int cb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int cc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int cd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ce_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int cf_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int d_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int db_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int dc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int dd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int de_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int df_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int e_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int eb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ec_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ed_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ee_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ef_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int f_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int fb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int fc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int fd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int fe_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ff_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int g_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int gb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int gc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int gd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ge_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int gf_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int h_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int hb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int hc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int hd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int he_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int hf_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int i_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ib_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ic_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int id_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ie_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int if_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int j_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int jb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int jc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int jd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int je_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int jf_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int k_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int kb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int kc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int kd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ke_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int kf_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int l_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int lb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int lc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ld_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int le_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int m_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int mb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int mc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int md_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int me_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int n_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int nb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int nc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int nd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ne_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int o_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ob_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int oc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int od_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int oe_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int p_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int pb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int pc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int pd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int pe_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int q_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int qb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int qc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int qd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int qe_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int r_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int rb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int rc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int rd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int re_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int s_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int sb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int sc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int sd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int se_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int t_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int tb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int tc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int td_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int te_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int u_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ub_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int uc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ud_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ue_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int v_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int vb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int vc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int vd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ve_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int w_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int wb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int wc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int wd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int we_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int x_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int xb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int xc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int xd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int xe_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int y_CompactClassificationSVM_Comp(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int yb_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int yc_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int yd_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

int ye_CompactClassificationSVM_Com(
    double obj_Alpha_data[], double *obj_Bias,
    double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2],
    double *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
    d_classreg_learning_coderutils_ *obj_KernelFunction,
    int obj_ClassNamesLength[2],
    c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
    boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for CompactClassificationSVM.h
 *
 * [EOF]
 */
