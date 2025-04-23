/*
 * File: _coder_classifyX_info.c
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 13-May-2024 00:32:34
 */

/* Include Files */
#include "_coder_classifyX_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void);

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
      "789ced56cd6ed34010de4091b800e1c239870a8122850005418e7548312869459ca6a55b"
      "d48dbd494df7c7d9dd14e709e006079e80a7409cb87244e250f12e48"
      "3889373f968ca3a67251602eb3e3cf3bdfccacf79341c6ac66000057c1c8bceb237f258c"
      "b3a1bf00662d8a67427f31126bbb045666f669fc7de86dce14f6d528",
      "6088e2f14e87539721a6acbe8781c0929363ec0c91b64bb0e5525c9f0e6a838856a6a071"
      "3080066be310db47f51e05e2504e2a24d3c1781e0731fdae24cc236a"
      "d17944dffb57f83e9f924fe77f91c0a7f1bdc6be51820d89858412b5df2058c6f248710f"
      "569154c1d35c1505ce4544c227c6464eba1d16ac73b7ee168bc55c5b",
      "a00ec54cc9db90f6ebdbd502456ab68f83983aafcdd947d44fdebf3cf4271f7f66d2e4fb"
      "d42bbd4d934fdb79f1f931f9e6fd0e6fc4f0652378853a9bebe5ae7a"
      "ac365e76ebafc9c336abad19933ab6127892ea0031715af917bdcfcd98fcd908be67ee18"
      "fbabc13524a8253857ab50714e5adc87522125a14d90940277607eb2",
      "221809e6b2c133ee6001f33470041a9c7ac856c36b3deee3c3827ddc49e843e3baba822e"
      "ae30acada75c220bf298169e63c130a9f498ad5ccece4da7bf9e924f"
      "e77f95c0a7f1e05c6b0b9eeb7076301f0c0fce0e2f38ded4f4e5bbf92355bd0627df1ea4"
      "ca17dab2eb75d36ff4779f76ef23a7e6d34d53ec309354cbfff55ae7",
      "db8ec99f8de067a1d7a1506f09ecb8b6e262fa3ebf5bb08f9b097d68fc8f7a6d09c4649b"
      "8b3974e66ffd9fb612f8347e663a3d9ed9e034d3d393d29794f519fe"
      "22a9f285b6ecfafc0c59560f394dd1aa296f6df7915fbcc7c512fc4fff0635432f28",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 4488U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/*
 * Arguments    : void
 * Return Type  : mxArray *
 */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[7] = {
      "Version",      "ResolvedFunctions", "Checksum",    "EntryPoints",
      "CoverageInfo", "IsPolymorphic",     "PropertyList"};
  const char_T *epFieldName[6] = {
      "Name",           "NumberOfInputs", "NumberOfOutputs",
      "ConstantInputs", "FullPath",       "TimeStamp"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 6, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("classifyX"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString("C:\\Users\\safwa\\Desktop\\Masters Materials\\ECG "
                          "signals (1000 fragments)\\classifyX.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739364.80210648151));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("9.14.0.2206163 (R2023a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("VM45Z3H9EqyePYyNfesJj"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_classifyX_info.c
 *
 * [EOF]
 */
