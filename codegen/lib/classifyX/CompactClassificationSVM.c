/*
 * File: CompactClassificationSVM.c
 *
 * MATLAB Coder version            : 5.6
 * C/C++ source code generated on  : 13-May-2024 00:32:34
 */

/* Include Files */
#include "CompactClassificationSVM.h"
#include "classifyX_data.h"
#include "classifyX_internal_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ab_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[70] = { 0.24150644486567285, -1.7880567792441588,
    -0.29943899311508881, 1.194353028959755, 1.5404837295970448,
    -1.4099398376890064, 0.34238307850041039, 1.2080081457054059,
    -1.7412054056086641, -0.19328866222243804, -1.5755064070822336,
    0.42287172445057863, 1.2080546877196809, 0.7786886277050622,
    0.22947899744552697, -1.5778180631870959, -0.034063165883462143,
    -0.28826118705923442, 1.0607497809205853, 3.1715505817761964,
    -0.14973488862216361, 1.6950402382212171, -1.7986136739057115,
    -0.61788998579304055, -3.741069446787832, -2.5976434862541997,
    0.553556056367509, 0.573513347804599, -0.26149560831241769,
    -1.1436982165303358, -1.3609423020415952, 0.51814312424514175,
    0.7431740822151478, -0.31910878543538673, -0.33739600079982657,
    0.80055665520749353, -0.9320826979817779, -1.8386187910585234,
    -1.0543195092861493, -1.3041093218766129, -1.1917736272382826,
    2.0226466387207269, -0.35706538099401541, -0.22628614178136439,
    0.443613323133466, 1.1312735949811614, 1.7414698819651846,
    0.11722363546606117, -0.36685995592059278, 3.119838703704064,
    -0.50546081949743138, 1.7704924592915994, -1.4704605007076408,
    -2.0587776156439106, 0.553556056367509, -0.382369710066868,
    3.4620483591152973, -0.73980124761459931, -0.19328866222243804,
    -1.2489435103952407, -1.506886982169692, 0.77172226681823308,
    -0.46915302746994708, 3.0037827115931579, -0.663420592607361,
    -0.14021349677611267, -1.6653705303912816, -2.165707228372201,
    0.553556056367509, -0.37503411362142769 };

  static const double dv3[10] = { -0.99999999999999989, -0.52984047470893325,
    -0.3429459514874989, -0.23670891773408007, 0.84417084271920517,
    0.25972873911669886, 0.62287696703905826, 0.058338146990674862,
    0.30627547894649876, 0.018105169118376233 };

  static const double dv[7] = { 33.127369735373122, 2.6863974213432824,
    3.864179104477611, 8.7595525717164158, 21.939443059552229, 92.77611940298506,
    11.762105992313428 };

  static const double dv1[7] = { 14.084850598992725, 1.3402953665466555,
    1.8841203632446428, 0.37362001390178573, 3.2819614795738583,
    27.501967365176323, 17.635055167246922 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.1699255871519478;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 10;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 70U * sizeof(double));
  *obj_Scale = 3.1545657714464448;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 10;
  memcpy(&obj_Alpha_data[0], &dv3[0], 10U * sizeof(double));
  obj_Prior[0] = 0.11940298507462685;
  obj_Prior[1] = 0.88059701492537323;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ac_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { 0.33769500421871607, -2.4608991087804961,
    -1.202846167683457, -0.44985207472996758, -0.26947354951844182,
    -1.2307860149224983, 2.6357507471510178, 2.7977876985146031,
    -3.17769823602828, -1.3567259020257745, -0.56768583437278963,
    0.63404286690210132, 1.8698479842091889, -1.0977823889549199,
    2.6245408730992765, -1.9549552158545558, -0.12568802728723522,
    -3.0254079347730993, -2.3333199699907143, 0.54100484172418006,
    -0.13293051149226373, -0.90340229738068145, -1.0329232583376311,
    0.10513157422624111, 0.610600724941171, 0.56137193634939508,
    -3.4455245857308463, 8.6471598985455245, 1.6969094134993756,
    -1.1232244753370919, 1.4131093161359394, -1.4034988347903317,
    -1.2210870171092829, 0.098057127562510532, 0.56046647150714024,
    0.89407071111072434, -0.72511967248509546, 0.028191707055082331,
    -1.0946862045127659, -0.99326901501619635, -0.34489058659915905,
    0.27549341749297707, 0.845090376352667, -1.1500644786135745,
    -1.6644853707104095, -0.1747520016300558, 0.2248301371358325,
    1.4269002700475193, -0.0033129291308218946, 0.544323599432296,
    -0.23570555588870626, -1.0489664333411397, -0.63371081296865073,
    -1.0350516627346955, -1.2307860149224983, 1.7188370170601048 };

  static const double dv3[8] = { -1.0, -0.64105831868434349,
    -0.79234549096345075, 0.10988944565379151, 1.0000000000000002,
    0.31200754310386775, 1.0000000000000002, 0.011506820890134477 };

  static const double dv[7] = { 32.380899657328222, 3.3311746002366389,
    2.5633587786259526, 8.3884196497480872, 16.997971931908385,
    88.671755725190792, 13.08522788010686 };

  static const double dv1[7] = { 12.049464196504266, 0.841182162588723,
    1.2997163067300628, 0.21980082854445204, 2.2337327837335255,
    13.545616803454337, 8.3606074905650161 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.7432741018427997;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 4.4676834859969272;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.068702290076335881;
  obj_Prior[1] = 0.93129770992366423;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ad_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[49] = { 0.062845131526314629, -1.3342933221907747,
    0.17152249468397335, 2.1018946855080523, 2.2355571954799331,
    -0.76963637602479817, 0.22897672940617844, 1.4468701777330468,
    -1.2901873158454629, 0.288765718898334, -0.645938057906479,
    1.2352540501644553, 0.90393534096872541, 0.53431355495779143,
    0.045621893887980915, -1.1363740420308017, 0.46463055521987479,
    0.63107063010025055, 1.8061779694463089, 2.1591141287138682,
    -0.11541893127710698, 2.1442974184328865, -1.3442316105865812,
    -0.18020717795910818, -2.7942799380036538, -1.4682162524342242,
    0.48554241172034451, 0.39072709642965131, -0.39500376539583282,
    -0.69951644872093821, -1.1181529716739929, 0.32751683672148191,
    -0.18299804907304912, -0.49070775652587756, -0.24784569798122161,
    -0.019308716057799616, 0.22570280868908024, 2.4577653668640043,
    0.1622588770680797, -0.47610335670352522, -0.35124344677641728,
    -0.20553045927470781, -0.99158113380763957, 0.82074334787383529,
    -0.0043423416375674194, 1.6405569451754134, 1.8294299043174875,
    -0.49070775652587756, -0.3508040436419177 };

  static const double dv[7] = { 35.910818036666647, 2.18953558211111,
    3.0074074074074049, 8.4141817823703651, 18.797802973333322,
    87.111111111111057, 12.029998551111099 };

  static const double dv1[7] = { 9.8358278250165565, 1.4237217150963901,
    1.7058555096909638, 0.37661496081964457, 3.6668479622176862,
    43.021759551089872, 25.199293980016151 };

  static const double dv3[7] = { -0.99999999999999978, -0.0034262175570350384,
    -0.63407331553712309, -0.507526468071273, 1.0000000000000002,
    0.385476304243677, 0.75954969692175356 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.75803262450699282;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 7;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 49U * sizeof(double));
  *obj_Scale = 3.827553430345207;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 7;
  for (i = 0; i < 7; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.29629629629629628;
  obj_Prior[1] = 0.70370370370370372;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ae_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { -0.68195234375946134, -0.592276770561504,
    -0.66257358669812472, 0.1368554872812619, 0.049266446158107935,
    -0.49738743990660228, 2.1079395827873117, 0.9392531564558968,
    -1.254468184791498, -0.8702459049169402, 0.066037867888646087,
    0.66368659727246437, 1.2029835755880645, -0.94079924373285417,
    1.1160290746557409, -0.10466514511553184, -0.8702459049169402,
    -1.0164433330554168, -0.719492275821745, 0.9600734305173978,
    -0.51504191244635844, 0.82508318761309019, -0.12487706366726935,
    0.79113264083358381, -1.4110433082237872, -1.3542153351327066,
    0.47425314037606442, -0.1529178259374476, 0.32236005478672003,
    0.81427265089792111, 1.5179857545994384, -0.0693147851741387,
    -0.55567537136210032, -0.9832077300479356, 2.0455505673594416,
    -1.4883471349103534, 0.702248252365485, -0.8702459049169402,
    0.4955008804358112, 0.10409629921623541, -1.4690280201892689,
    0.44867684046660072, 0.038860170174767936, 0.097429143371823124,
    0.27195184528654504, 0.60954347925759056, 0.2654996686316457,
    0.23134299530539773, -0.88543300924257373, 0.025082399309251418,
    0.099516281056797634, -0.76640974580753252, 1.3019781076165089,
    1.4237188063072885, 0.23134299530539773, -1.0178763492849947,
    0.52969689450884416, 1.0859945962381057, 0.1681156861771374,
    -0.42689473782140486, -0.97859220171257977, 0.23134299530539773,
    -0.085804533861230534 };

  static const double dv3[9] = { -0.62631778808363658, -0.35871454467455866,
    -0.19153205456825015, -0.91187274434743681, 0.23901763532557393,
    0.14656856645520047, 0.68379322316578883, 0.019057706727318754, 1.0 };

  static const double dv[7] = { 48.919045149523782, 1.8004080010476182,
    1.6380952380952372, 8.2394899620476156, 16.2342122595238, 84.285714285714263,
    13.539501856904756 };

  static const double dv1[7] = { 18.284417882903991, 0.91055037417108331,
    0.96305565284473049, 0.3657276003081899, 3.2847461730212149,
    24.700491608757215, 10.238530382620011 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.40726372634732178;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 2.4925527084690988;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.4285714285714286;
  obj_Prior[1] = 0.5714285714285714;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int af_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[49] = { -2.1428221915766574, 0.79788244102587846,
    1.2269867222022719, 3.7169131742561734, 3.0017440321178253,
    -0.89157988267252353, 0.52812731413703407, -1.6467933469644511,
    0.91443696845524647, 1.5261028883112844, 0.088000475498183184,
    1.873811797657071, 1.37789618231208, 0.92912543843466822,
    -1.0820534842236049, 0.31951493115018154, 1.3765448052567781,
    0.34427011417746545, 1.8386169471611622, 3.6473722472966839,
    -0.17493826878052887, -1.3968383122968584, 0.77161952122395672,
    0.32963822387523639, -2.7491973665620848, -1.1745953911923799,
    0.81052716606592923, 0.740553685124842, 0.67596181943820211,
    1.7869423346748472, 1.3765448052567781, -0.44230570731318075,
    -0.94378275042110782, -0.32421086642637259, -0.24186654916801095,
    -0.84328573052913824, 0.1791048711040602, -0.26859410834278824,
    1.0797131553280928, 0.50471713519576133, -0.32421086642637259,
    -0.19498543541631549, -0.51321018525156648, -0.473603436702712,
    -0.26859410834278824, 1.0758682556236494, 0.9639627056355663,
    -0.32421086642637259, -0.21726777760848417 };

  static const double dv[7] = { 95.336635212244914, -0.13999230832653067,
    2.479591836734695, 8.1458163166530646, 17.233782188367353, 82.2857142857143,
    7.6664483744489829 };

  static const double dv1[7] = { 27.444033160294591, 0.53875795633982182,
    0.66863654546545159, 0.28517492894061358, 3.2519325522721614,
    31.725384158430618, 19.187801547642795 };

  static const double dv3[7] = { 0.59128325722619957, 0.56613272720426577,
    0.14780786187513489, 1.0, -0.62819385765796987, -1.0, -0.67702998864763031 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.95692061231727477;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 7;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 49U * sizeof(double));
  *obj_Scale = 4.5588201294670441;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 7;
  for (i = 0; i < 7; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.83673469387755106;
  obj_Prior[1] = 0.163265306122449;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int bb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[112] = { -0.97937646484767038, 1.6651467832003757,
    1.1162145198668867, -0.14195256448078328, 0.052662580069434736,
    0.062612389688077336, -0.76077211812545764, -1.0123229713545738,
    1.668347905606159, -0.526928083400848, -0.086293029801990467,
    0.17335308655684567, 0.062612389688077336, -0.79551352362922467,
    2.2938320662771465, -1.2145384037007942, -0.15589588266297236,
    -1.78756922572817, -1.5315736172967032, 1.6108460256114243,
    -0.80186841923481755, 2.1141302990136754, -0.8427946742440009,
    -0.26190508287379405, -0.58061087694279023, -0.068215885632451317,
    0.83672920764975078, -0.74914662877461791, 2.4535903498992484,
    -0.70302215109388755, -0.26190508287379405, -2.0718407449986844,
    -2.1987585191642749, 1.2237876166305877, -0.763876436556266,
    1.7582396028609784, -0.8196017137985927, -0.20890048276838319,
    -2.3964902716430054, -1.9990699239457059, 1.2237876166305877,
    -0.79600937368619629, 2.1023289539766252, -0.995650792039687,
    -0.26190508287379405, -1.2257430209165909, -1.1589368990262141,
    1.2237876166305877, -0.77691588349975671, -0.89644156952636689,
    1.9816944101442706, 0.480159318601957, 0.72432522705403346,
    0.55457467610566891, -0.71150442827359617, -0.072777496667692718,
    -0.38135445986208555, 1.620393992109967, 0.2681409181803141,
    -0.60868860143987558, -0.87659991590382091, -1.4856212462352696,
    -0.17679100087116456, -0.30010096333177855, 0.90520012629455371,
    -0.84495568403331278, -0.68634745079600767, -0.84860365568360152,
    -1.0985628372544329, -0.33168320298559018, -0.40670223081908785,
    0.066418109110179507, -0.526928083400848, 0.30639999489526115,
    0.22178744518336516, 0.062612389688077336, -0.50652814690176939,
    -0.31339333588376517, -0.14053796470340779, 0.4271547184965464,
    0.31797829673824335, 0.44633299022778994, 0.83672920764975078,
    -0.40674926050795462, 2.0457830275154518, -0.89659917232180508,
    1.7522697211318161, -1.8685067460621838, -1.8879524858965935,
    1.2237876166305877, -0.36435965863951658, 2.285361771967914,
    -1.1918347025864111, -0.20890048276838319, -1.5925398926245338,
    -1.342039877074638, 1.6108460256114243, -0.53811067031898818,
    1.9941581925012228, -1.1477866398103527, -0.20890048276838319,
    -1.5936697260539565, -1.5906696242740368, 1.2237876166305877,
    -0.53808974486194494, 1.9645329855120985, -1.0956059666222309,
    -0.15589588266297236, -2.1113265294087178, -1.9937238476559871,
    1.2237876166305877, -0.34967288079087028 };

  static const double dv3[16] = { -0.99999999999999989, -0.99999999999999989,
    -0.89723847865173745, -0.919063033581819, -0.15777412693280224,
    -0.99999999999999989, -0.99999999999999989, 0.74977463825531809,
    0.094062915428074656, 0.52467657762991848, 0.38725293802864452,
    0.9524074320152357, 0.26590113780916697, 0.99999999999999989,
    0.99999999999999989, 0.99999999999999989 };

  static const double dv[7] = { 35.9116870135294, 2.9627748355882351,
    3.8941176470588226, 8.7705291582941172, 21.446653011323527,
    89.02941176470587, 8.2283371720735285 };

  static const double dv1[7] = { 20.118528799437762, 1.0638468537933068,
    1.88662870394511, 0.29990261500263693, 3.3179006506346043,
    15.501536359327773, 8.8081708141260719 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.2467644081017975;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 16;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 112U * sizeof(double));
  *obj_Scale = 2.4764283197220309;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 16;
  memcpy(&obj_Alpha_data[0], &dv3[0], 16U * sizeof(double));
  obj_Prior[0] = 0.13235294117647056;
  obj_Prior[1] = 0.86764705882352944;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int bc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[49] = { -1.3005404270469609, -1.4205493769211912,
    -0.76422837586867, -0.032367184194658671, 1.712568675187002,
    -3.7052787701718253, 10.15957245759242, -0.63311818330362413,
    -1.7645480349470826, -0.0618346604198531, -2.3565258052141478,
    -0.18378754897059019, -2.1036620116603135, -0.58198510832766992,
    -0.33537575124847657, -2.3374516935440792, -1.3105345989955277,
    -1.3339630171754218, 1.1131637606439337, -1.7032578220324357,
    -0.49809583440535343, -0.9969712914795581, -1.5086647972467013,
    0.094252831902106357, 0.61800619300615978, 0.48238105315087032,
    -2.9044703909160692, 3.7980161683027371, 1.5215826176804172,
    -1.0983163385552484, 0.016209085741126627, -1.2289930224452124,
    -1.2177303622511428, -0.10164106352092414, 0.0614715894278904,
    -0.74777942837691258, -1.016162722810688, -0.84227212202964974,
    -0.1307598590653907, -0.10325786194904103, -0.10164106352092414,
    0.26888139937238126, 0.98335603272742511, -0.4727404741623239,
    -1.0764033605125887, -0.441366609595555, -0.82768894946361771,
    -0.90244944277667993, -0.12377493613815302 };

  static const double dv[7] = { 30.068952396923073, 3.4142250565538452,
    2.5792307692307692, 8.397214206738461, 17.266613905384613,
    85.523076923076943, 14.237046497892308 };

  static const double dv1[7] = { 8.59961209534875, 0.63097321438871157,
    1.2813326489188706, 0.20293645869708721, 2.0426028721057943,
    14.984858189361598, 18.731803143929344 };

  static const double dv3[7] = { -0.16322687452328968, -0.67882528977047563,
    -0.92207800881393553, 0.59924744274542263, 0.22943325539377718,
    0.6652663777298905, 0.27018309723861067 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.3276734954510057;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 7;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 49U * sizeof(double));
  *obj_Scale = 4.1369202404648995;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 7;
  for (i = 0; i < 7; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.061538461538461528;
  obj_Prior[1] = 0.93846153846153846;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int bd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { -1.1269277278683683, 2.1145783123982431,
    1.6397625575730048, 1.3605610809354713, 1.6097239997709549,
    0.60676528849653111, -1.0258868333690374, -1.1552592413113747,
    2.1184587882260035, -0.1195871333705906, 1.4432119600613793,
    1.7746603109118901, 0.60676528849653111, -1.190153858291783,
    1.53325502771469, -0.92560727546585264, 0.16417894581386028,
    0.709181306201457, 1.4445308225319085, 1.2245626731475474,
    -0.97091828730009855, 1.2272158414301473, -0.89749222362653136,
    0.2209321616507505, -1.9872844336707611, -1.1941849447615649,
    1.5334613654730553, -1.192498375230157, -0.58450034664108363,
    0.78134334651143145, 0.5614514566720914, 0.08567865294963932,
    0.017767633674101856, -0.62882948080550127, -0.64351117554902892,
    -0.41637510775582587, 0.079934480564775867, 0.050672514140080081,
    0.15086007644644009, 0.0921817954305487, -0.62882948080550127,
    -0.26596760662000946, -0.52198892573158884, 0.19162903350886618,
    0.78846432001965228, 0.057642670881097161, -0.28598996520851427,
    -0.62882948080550127, -0.45793712154292027, -0.48845251292130593,
    0.45299958826650405, 0.61820467250898181, -0.25600557265298551,
    -0.47513108391044878, -0.62882948080550127, -0.33039288612599643,
    -0.70164750245655816, 0.54644825987581069, -0.062833917533700365,
    2.8661957049610534, 3.2097720866196857, -0.62882948080550127,
    -0.13336225461241671 };

  static const double dv3[9] = { -0.45704777031716315, -0.99358416211512712,
    -0.67312903832524906, -0.48469527790332312, 1.0000000000000002,
    0.39878142139693284, 0.20454018309713204, 0.29734504711435916,
    0.70778959705243838 };

  static const double dv[7] = { 42.573322558571441, 2.8784829395357154,
    3.1107142857142867, 8.45317387796429, 17.713228573571438, 78.214285714285765,
    3.4384209677142867 };

  static const double dv1[7] = { 23.395687679495147, 0.87759959117313924,
    1.7620146898354079, 0.20196324802027976, 2.4278408267408871,
    19.42384396265874, 1.862870738323257 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.5981153578022389;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 3.62272285352123;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.32142857142857145;
  obj_Prior[1] = 0.6785714285714286;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int be_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[77] = { -1.1375433906897623, 0.61285519477150652,
    -0.11200156499562333, 0.31374141232228392, 1.1775233599376549,
    -1.8254967758797054, 4.1479906365123629, -0.72518867359589245,
    0.089553639699874732, 0.94906589285765552, -1.1450681757775623,
    -0.43846121139468808, -0.52157050739420074, -0.40042444567650204,
    -0.54123391708622537, -0.78196538648036851, -0.93727625443706253,
    -0.50323401431630144, 0.66673900331569769, -0.19558894027282461,
    -0.36490229384698247, -0.36060199072564608, -0.87049020614715655,
    -0.81937987023114267, -1.1289735359596635, -0.12381450544311212,
    -0.19558894027282461, -0.38130768761011719, 0.016578370812644367,
    -1.3371773057402541, 0.2416875876221361, -1.0084766853214227,
    -0.49712771880459455, -0.19558894027282461, -0.3587951081527973,
    1.4437022081959334, 0.67059167473454739, 1.6564441980931748,
    -0.23218294132906256, -1.4740294769825231, -0.19558894027282461,
    0.3036793472072547, -0.93489438686011994, 0.42466765344919288,
    -1.0551726386429825, 0.40672345620681655, -0.56990374553390533,
    -0.8475520745155769, -0.065911701761286579, -0.91907255857833081,
    0.87752471412277033, -1.0551726386429825, 0.48439376609609625,
    -0.26684237897396551, -0.52157050739420074, -0.024213133563443758,
    1.0747120046520351, -0.90317136832665013, 1.5385478138872548,
    1.5933276920107251, 2.1548218694845924, 1.4343188953340562,
    -0.4162939604549683, 1.0712886760281028, -0.90307477929307911,
    0.2416875876221361, 0.53572580230882771, -0.34872277348176733,
    1.4343188953340562, -0.374686935826093, 1.053189803358545,
    -0.89849294445005146, -0.93727625443706253, 1.3189918143379713,
    1.2384562033161535, 1.4343188953340562, -0.40534050107099256 };

  static const double dv3[11] = { -0.13402077090038478, -0.9233107574774615,
    -1.0, -0.22366457067677098, -0.1487159979361895, 0.33064500446145706,
    1.0000000000000002, 0.49112874093716635, 0.034468012682605735,
    0.49622853656091226, 0.077241802348665109 };

  static const double dv[7] = { 34.7182952315, 2.26369763715, 1.6949999999999996,
    8.2892080981000014, 17.9421971035, 63.59999999999998, 21.049036571349998 };

  static const double dv1[7] = { 13.919017200653055, 0.4147779361563117,
    0.84820243363306425, 0.32331602688076028, 2.3969923591574771,
    18.40594869514802, 44.237110762364928 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.15859074818360436;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 11;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 77U * sizeof(double));
  *obj_Scale = 2.9070166240828006;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 11;
  memcpy(&obj_Alpha_data[0], &dv3[0], 11U * sizeof(double));
  obj_Prior[0] = 0.4;
  obj_Prior[1] = 0.60000000000000009;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int bf_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[35] = { -1.8479096058560198, 3.1171843861930881,
    0.059974858132266481, 1.5661241779149973, 1.7057316113908629,
    0.82463706822875549, -1.476665519927105, 1.9381405721324239,
    0.10815478994477741, 0.75513798648354669, 1.1874662949182455,
    1.4488340496653016, 1.9030086189894428, -1.1045202263006235,
    1.5071665843604445, 0.13594624430696409, 0.89417061215380289,
    -0.20353557028196742, -0.604540976088962, 2.4421943943697864,
    -1.4806452616291326, 0.16394790687019198, -0.60270413280697821,
    0.19900748380252264, -0.59650593524963391, -0.32093236373061679,
    1.3638228436090991, -0.9531937758625364, 0.80946096689319891,
    -0.22701642518246376, -0.079057767537989682, 0.1150946465620484,
    0.97748046896543694, 0.82463706822875549, -0.67916966772963783 };

  static const double dv[7] = { 46.245531022549024, 1.9701485859117653,
    2.8568627450980397, 8.131501061235296, 16.70006182029412, 80.823529411764767,
    2.8418715622647066 };

  static const double dv1[7] = { 16.61352523156971, 0.887818164477617,
    0.71925563886832, 0.39150700845510022, 3.1199278210987069,
    11.127890003714541, 1.0974410720612644 };

  static const double dv3[5] = { 0.16068323245748364, 0.36900032662841453,
    0.47330783976984941, -0.26699975521870045, -0.735991643637047 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.5179790973634082;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 5;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 35U * sizeof(double));
  *obj_Scale = 2.7779908185553603;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 5;
  for (i = 0; i < 5; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.91176470588235292;
  obj_Prior[1] = 0.088235294117647051;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int c_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[196] = { -0.94843235682963212, 0.932048749819677,
    -0.742673909670035, 1.6861955863435385, 1.5576095856771679,
    0.4867466331388578, -0.64251819787590614, 0.27788992402928242,
    -0.17104594820906152, 0.15410780967071869, -1.0966403483557241,
    -0.82182360555360823, 0.4867466331388578, -0.69443313815629315,
    0.43847534487090573, -0.22296278698968233, 0.66655450643686343,
    0.34610458518659115, -0.16523340884028234, -0.20702834112712665,
    -0.21007175284363866, -0.78032829011336424, 0.36364158193310192,
    0.60249866934109531, 0.60404384496020869, 0.53732742258871435,
    -0.20702834112712665, -0.32410908203918248, -0.87154243246722407,
    -3.7131293470639295, -0.29428304999965821, 0.35951997836240207,
    1.3760316979010463, 1.8742965816708268, 2.5177582018142926,
    -0.32280392511111694, -1.1759820302252286, -0.742673909670035,
    2.7970859681682518, 5.6672188170638274, 0.4867466331388578,
    -0.8239205301402921, -0.509743564776287, 1.0366113573338902,
    -0.93484142095733935, 0.72822576313497678, 0.31295774415206029,
    -0.55391582826011887, -0.12446457042066796, 0.50084440669049257,
    0.091256124161165963, -0.678618072574267, -1.0284433727145044,
    -0.76455173494501416, 0.83363412027185, -0.71073709038507593,
    0.56553191480155485, 0.060411941515250513, -0.742673909670035,
    -0.94370745230659014, -0.49961312347202641, 0.83363412027185,
    -0.76848827273277609, 0.89908773802736663, -0.42191883991468393,
    -1.319176443531948, 0.12835991687484669, -0.44725454743404863,
    -1.2476908025261033, 1.0993436321779906, -0.37472068866671565,
    0.838559323764125, 0.73061034353263166, 0.51902872619320573,
    0.16108296368844813, -1.5945782896590956, 1.3838584510192997,
    -0.5915367354126847, 0.068728545946215525, 0.21816364676648659,
    1.4846110238114665, 0.8910364676410909, 0.13985914600586558,
    -0.270797944464449, 4.2053936546305337, -1.1668315488692316,
    0.73061034353263166, -0.70761870705554919, -0.2017718655973566,
    2.2211840688038191, -0.83389151364171343, 0.12999503341892574,
    -1.5616330431749477, -0.42239472419119439, 0.66912753588264451,
    0.698616179570623, 1.8742965816708268, -0.69159984759451532,
    -0.39270645118266106, -0.9059046831688683, -0.99889725805310747,
    0.39724654717272495, 0.19837286402012627, -0.90080331539311109,
    0.649936107721997, -0.76886499605283587, -0.55686865305549871,
    0.15410780967071869, -0.10676084115893175, -0.39715680340311532,
    -1.9414657767920878, 9.5110936767672722, 1.4223790322588661,
    -0.34436349018826429, -0.16617137580812186, -1.6813419999813768,
    -1.3179647333745577, 3.608734017335788, -0.7709293168029443,
    -0.59735791324680221, -0.097764650883289186, -0.742673909670035,
    -0.442067873116086, -0.55176423968718857, 0.4867466331388578,
    -0.15171787454724314, -0.54397709602389388, 0.15650261332638529,
    -0.742673909670035, -0.75002852859928681, -0.85092443642743965,
    0.4867466331388578, -0.1759132555599745, -0.71775890826862565,
    0.22881027779320923, -0.742673909670035, 1.0724175514219763,
    1.3748133315907789, 0.13985914600586558, 0.084722921555639763,
    -0.63259778938363265, 0.11952163472072183, 0.28221948386225476,
    0.62276573788213629, 1.0487955767783694, 0.4867466331388578,
    -0.19955041450461622, -0.426521554125979, -0.031701327570750969,
    -0.678618072574267, 1.0377953303640644, 0.757155513376749, 0.83363412027185,
    -0.2110026859057445, -0.750154166304185, 0.14814115106687889,
    0.34627532095802288, -0.52361281775955, -0.59091418154880149,
    0.4867466331388578, -0.15746055862147998, 0.86950354787229589,
    0.1392751636537379, -0.87078558386157112, 0.76674683398549526,
    0.64610697970742981, -0.20702834112712665, 0.73499835816535086,
    1.2294966995404057, -0.16325524109801715, -0.80672974676580311,
    -0.88297444357326349, -1.4683726097847212, 0.13985914600586558,
    0.11264208566719229, 0.65825517182961635, -0.075353643499899842,
    -0.80672974676580311, -0.98648473293647931, -1.35726313555488,
    -0.20702834112712665, 0.50968868955184554, -0.97512954445275168,
    0.81233792772053026, 0.02599613547918235, 0.16014872266393573,
    -0.17455562110918538, 0.13985914600586558, 0.0781568637937629,
    -0.518859012945087, 0.85191461087693687, 0.02599613547918235,
    1.1137058614331055, 0.83909916542788321, 0.13985914600586558,
    0.24925699708036822 };

  static const double dv3[28] = { 0.98756253839967, 0.99999999999999933,
    0.16396690222420987, 0.99999999999999933, 0.0757971840895629,
    0.070202037765699124, 0.21211979957532304, 0.99999999999999933,
    0.93062829687668547, 0.99999999999999933, 0.2900577122956281,
    0.95374154114939813, 0.041008941271752, 0.1598556919579224,
    0.15049713954308969, -0.038138158819617692, -0.29081047662322207,
    -0.20763522532098991, -0.05601149480951409, -1.0000000000000002,
    -1.0000000000000002, -1.0000000000000002, -1.0000000000000002,
    -0.59989831946625027, -1.0000000000000002, -0.75690990211717757,
    -0.086034207992164949, -1.0000000000000002 };

  static const double dv[7] = { 30.670371538408538, 3.2182285275305103,
    2.4594164456233454, 8.5487202200848973, 19.358859265145924,
    75.580901856764086, 7.7588501131299887 };

  static const double dv1[7] = { 11.933155450580609, 1.3574665109676634,
    1.5611379779565251, 0.24437822708850898, 2.7871420699858573,
    17.296674635311007, 8.1611947295269331 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.15296098676195849;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 28;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 196U * sizeof(double));
  *obj_Scale = 1.6180366230201866;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 28;
  memcpy(&obj_Alpha_data[0], &dv3[0], 28U * sizeof(double));
  obj_Prior[0] = 0.32360742705570295;
  obj_Prior[1] = 0.67639257294429711;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int cb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[119] = { 0.544264621083763, -1.3386292088184637,
    -0.15137031897788594, -0.44878132264941345, 0.012248292123515258,
    1.199955352409622, -0.44600659670896287, 0.31233741596717046,
    -1.30830098327274, -0.15137031897788594, 0.89461294176620332,
    1.6417527704700716, 0.69749470897639, -0.36661479696033639,
    -0.95155204313160791, -0.13603786939799103, 0.1241780461076038,
    0.40333787024152118, 0.55139338097735857, -0.80988722132330626,
    -0.30889359291696794, -0.77445524086188433, -0.026893858370977353,
    0.055290954836231296, 0.25613855164505173, 0.14442053085280557,
    -0.80988722132330626, -0.26504504944087043, -0.95076236660504565,
    -0.1465055199353445, 0.055290954836231296, 0.28961357059681936,
    0.096441144599308831, -0.80988722132330626, -0.32102898923632006,
    0.45485288717805084, 0.96870678954459, -1.4602250531339624,
    -0.0021577933179985809, -0.20905490234629862, -1.3123478647565383,
    -0.15862213419590027, 0.35573087207083781, 0.80459743965717512,
    -1.4602250531339624, -0.350720001272332, -0.88592044740952047,
    -0.30742657789007422, -0.087157884637048683, 0.33759425117724434,
    0.76228757940554726, -0.63357995787749322, -0.25145150485706491,
    -0.88552999718948822, -0.30742657789007422, 0.042152510785447177,
    -0.10635599401684052, 0.75532661025443038, -0.35803159279200314,
    -0.17960497892346181, -0.71842492647226808, -0.30742657789007422,
    0.0027736754046942358, -0.6554092459609655, -1.1225182068491775,
    -1.3224508705912175, 1.136499520365116, 1.4030541802166423,
    0.19503406554315789, 0.060316363155416587, -0.82686997207641666,
    -0.99425003493999931, -1.3913379618625898, 0.35155639838475455,
    0.14456376963432552, -0.30742657789007422, 0.414015611837202,
    0.039001602359551427, 1.3232983074333535, -0.70246704914886537,
    -0.0019843975532404692, -0.747345171209807, -0.80988722132330626,
    0.47929636643332335, -0.62651106067856144, 1.489968035345395,
    -0.63357995787749322, 0.35158943153780137, -0.019984781490308412,
    -0.80988722132330626, -0.018285462132982058, -0.47227265115570893,
    1.4645373836097657, -0.56469286660612072, 0.2955242237079635,
    -0.29073599301581521, -0.80988722132330626, 0.49705385268533842,
    -0.74419770653869188, 0.18621605528666776, 0.950823141364073,
    0.944614606007461, 0.85410978790590664, 0.69749470897639,
    -0.10869771946057002, -0.74419770653869188, 0.18621605528666776,
    0.950823141364073, 0.944614606007461, 0.85410978790590664, 0.69749470897639,
    -0.10869771946057002, 2.4765356392127642, -0.56821745088157349,
    0.19306513737897632, -0.19823904157905553, -0.62958923792477917,
    2.2048766392760863, -0.30109733685696982 };

  static const double dv3[17] = { -0.31102491160075857, -0.99999999999999978,
    -0.99999999999999978, -0.99999999999999978, -0.41161204311610455,
    -0.67753235921044919, -0.25838032695015012, -0.99999999999999978,
    -0.99999999999999978, 0.74178406842306854, 1.0, 1.0, 1.0,
    0.93672041376183779, 0.95495180583944561, 0.49863886944885205,
    0.526454483404258 };

  static const double dv[7] = { 39.193307682631612, 2.3446750949276338,
    3.2197368421052657, 8.3906912968947438, 18.711785931315806, 81.671052631579,
    5.42436347077632 };

  static const double dv1[7] = { 14.874774170049232, 1.0611597091784906,
    1.4516507832514218, 0.4948967474483067, 4.0388503299346628,
    11.941233763112217, 6.4285280799271671 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.7845219702329691;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 17;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 119U * sizeof(double));
  *obj_Scale = 2.393514863915839;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 17;
  memcpy(&obj_Alpha_data[0], &dv3[0], 17U * sizeof(double));
  obj_Prior[0] = 0.61184210526315785;
  obj_Prior[1] = 0.38815789473684215;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int cc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { 0.539881865578945, -3.1622120981846362,
    0.48680596013196348, 3.4697185502599037, 3.7248484213284354,
    -1.7339844946587386, 0.26299314605493179, 1.9291233878111917,
    -3.0962845798393288, 0.64384014081969387, -1.0504112975646611,
    2.2898411904327904, 1.6728364268370168, 0.83745813274241288,
    0.52259371249239139, -2.8663719608691096, 0.87939141185128911,
    1.0502424268748247, 3.1088728572804989, 4.2279521179588331,
    -0.38495768094483074, 2.6291792749294056, -3.1770673694918083,
    0.01570341806877304, -4.5843906777986634, -1.5884825466351526,
    0.821131196463078, 0.56731255551682036, 1.6741821619497987,
    -0.57854420659285277, -0.37688203365055256, -1.1948763969147507,
    -0.69983743404049581, 2.2406399137529758, -0.95644402990930766,
    2.2032119294157519, -0.96115402955991758, 1.3504939539144802,
    -1.4478045158965052, -1.2534693603645284, -0.030574033910860915,
    0.260829279370162, 1.1557506801132185, -0.984857749259131,
    -1.790189659840125, -0.26815013456776454, 0.01011482053050901,
    0.821131196463078, -0.09108998653905577, 0.5315866314241432,
    -1.6569052544012379, 1.8215964959776707, -0.21661329498856613,
    -0.084755758686443819, 0.53722945300509828, -0.043592874601226461,
    -0.79307133539785779, -0.024064676861603077, -0.92650166605760853,
    1.8310753575809628, 2.2863493896746609, -0.030574033910860915,
    -0.37967270851575191 };

  static const double dv3[9] = { -0.49594489783552737, -0.594220738442611,
    -0.29917499671012049, -0.66377021862031693, 0.10767843106259734,
    0.26120061689666246, 0.52643991813116409, 0.99999999999999989,
    0.15779188551815249 };

  static const double dv[7] = { 31.238706118076916, 3.3018187266769226, 2.68,
    8.4114014658076925, 17.474328327307692, 90.646153846153879,
    14.277571363592306 };

  static const double dv1[7] = { 9.7988951828379349, 0.95248055100605722,
    1.273608071338999, 0.2289480514587566, 2.55605649297717, 21.134072397438665,
    13.393805729339983 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.5027821023887979;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 5.4471193123735677;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.061538461538461528;
  obj_Prior[1] = 0.93846153846153846;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int cd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[91] = { -1.0761753280008628, 0.2362724424465931,
    0.51557788000921956, 0.8686937022030653, 0.83261942023450419,
    -0.47958645815056072, 0.39995255165945348, -0.92313024007207367,
    0.45271494496537135, 0.61530969790392187, 0.5648995301059615,
    0.28842788033320294, -1.1427183509019498, 0.53811677864200735,
    -0.9733543278656609, 0.18146090474228607, 0.61530969790392187,
    0.698482207113883, 0.56147304296678124, -1.1427183509019498,
    0.42877939104436091, -0.97841867103427893, 0.25885881537350064,
    0.61530969790392187, 0.77396197888953988, 0.63937595732199148,
    -0.47958645815056072, -0.16330996752872123, -1.3312381176609702,
    0.20106301323795692, 0.51557788000921956, 0.9157942907050417,
    1.0372781790988959, -1.1427183509019498, -0.51528390019782777,
    0.29446184784994595, 1.4066346894992834, -1.678522113674229,
    0.54376977888462685, 0.355887979412096, -1.1427183509019498,
    0.95267519320394112, -0.33126716055564176, 1.1557990691796431,
    -0.0828130273589934, 0.32055006690229065, -0.33109810987727317,
    0.18354543460082848, 1.7909074292905949, -0.68951189760429066,
    0.93694134889649816, 0.41584606211451769, 0.78275050233745747,
    0.37912518245601334, -1.1427183509019498, -0.22823939591027209,
    -0.67628924178092753, 0.41035275110865893, 1.5128960589562417,
    0.90406313336069266, 0.46165291492725286, -0.47958645815056072,
    1.1783615846221318, -0.5297472144531109, 1.094807847140461,
    -1.678522113674229, 0.61651933100964362, -0.16564296286387079,
    -0.47958645815056072, 1.9351605999932018, -0.93306588926369372,
    1.325072793971465, 0.41584606211451769, 0.52941831120776972,
    -0.047260953628102273, -1.1427183509019498, 0.31211087352954214,
    -0.59517848060904222, 0.021085166827747224, -1.7782539315689312,
    0.66962438960287263, 0.17277716994023104, -1.1427183509019498,
    0.13017455257735991, -1.1897847495064617, 1.3904810083910655,
    0.21638242632511306, 2.1766924674628272, 2.9066536198150992,
    -1.1427183509019498, -0.028665225689634147 };

  static const double dv3[13] = { -0.088603562505234962, -1.0000000000000002,
    -1.0000000000000002, -0.52350112406918847, -0.071290578971474644,
    -0.95408944611070234, -0.83848730859629939, 1.0000000000000002,
    1.0000000000000002, 0.87727199788557408, 0.94718226536125649,
    0.61235279310415713, 0.039164963901912285 };

  static const double dv[7] = { 42.0307239507143, 2.1028522135357148,
    2.7830357142857141, 8.1756960977410742, 16.801691579017863,
    76.339285714285737, 3.2254652406517872 };

  static const double dv1[7] = { 13.341007461474518, 0.9027045230316938,
    1.0026890325571016, 0.39341523300123665, 2.9946302000497207,
    9.0479738127290226, 1.2377685435289596 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.8600770963063056;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 13;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 91U * sizeof(double));
  *obj_Scale = 1.681377946508487;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 13;
  memcpy(&obj_Alpha_data[0], &dv3[0], 13U * sizeof(double));
  obj_Prior[0] = 0.8303571428571429;
  obj_Prior[1] = 0.16964285714285715;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ce_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -0.39266382095699393, -1.0570072563687636,
    0.79648459956931472, 1.8706510419561426, 1.8039574266697964,
    -0.87642516550851346, -0.12506210284176175, 0.5301020699211314,
    -1.003616552031193, 0.964165567899697, -0.47769963260303222,
    0.94495187373223455, 0.59449818919108988, 0.14889943692142782,
    -0.404147006370944, -0.81742424613213038, 1.2156870203952699,
    0.613656535666533, 1.4352300651632097, 1.6976907052157924,
    -0.43406893592880152, 0.99509514996032833, -1.0690376409201956,
    0.293441694578169, -2.3137138934422121, -1.3766403485951728,
    0.22676735051618901, 0.020067393172865256, 0.846743434361817,
    0.8577142314406947, 0.628803631238933, -0.379606618314205,
    -1.1436471574324025, -0.75384821928354651, 0.46894705935375591,
    -1.3974796741734528, 0.77098621705320924, -1.2995275045604604,
    0.089141521659415024, -0.636111087150782, -0.99900211173348041,
    -0.11319668929790132, 0.49859850581968446, 0.30270808308753711,
    0.54496314707374194, 0.95972057762616214, 0.89342897916990671,
    -0.14096348815871182, -0.66508462626559628, 0.42865961358048121,
    0.36047778112712719, 0.54496314707374194, 0.83922471032303,
    0.614874645078514, -0.018386541933744865, -0.63820078042403372 };

  static const double dv3[8] = { -0.7771629684586967, -0.97639576263701278,
    -0.1892534649927114, -0.2397206058059268, 0.16368915694653227,
    0.018843644947815263, 1.0000000000000002, 1.0000000000000002 };

  static const double dv[7] = { 42.321694419, 1.53305649295, 2.3499999999999996,
    8.3814252820500013, 19.292340846, 96.899999999999991, 21.312448198399995 };

  static const double dv1[7] = { 14.752422249857466, 1.1761350553267009,
    1.1927412036763752, 0.44068159504936955, 4.2700067973444336,
    48.948845478562731, 28.085228447215169 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.392008072604682;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 3.023893645973915;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.4;
  obj_Prior[1] = 0.60000000000000009;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int cf_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[77] = { -1.8307310583481617, 1.6895754108028069,
    2.2105571746656625, 0.85176912171056651, 0.92087099985217014,
    0.64154155181170192, -0.83389218802036846, -1.874213236803258,
    1.6914570058573031, 0.10052746980952304, 0.9161153998806848,
    1.0622577339451944, 0.64154155181170192, -1.1176526831535987,
    2.2520208756112567, 0.21542677007373404, 0.4408548415605133,
    0.34464972234430608, 0.779264074956648, 1.2830831036234025,
    -0.7389376354763536, 2.2364456828118722, 0.12557912326891166,
    0.4408548415605133, -0.40116773071535211, -0.49849576199012791,
    1.6038538795292527, -0.96575106907309594, -0.76062130192278055,
    1.4273232981668618, -0.23979990194146722, 0.69850792896085279,
    1.6673812192271462, -1.2830831036233994, 1.1805080707175493,
    -0.97026092964469812, 1.5556792760408338, -0.23979990194146722,
    -1.4803742462962242, -1.0832357995107167, -1.6038538795292496,
    -0.86261535685807378, 0.060776614797843208, -0.13530051394185835,
    0.10052746980952304, 1.20059158610885, 1.8442732797566084,
    0.96231232771755215, -0.31794190947230672, -0.010303272192938893,
    -0.15452202219630998, 1.1895750594126919, 0.437658655399895,
    0.45708323577555993, 0.64154155181170192, -0.62003806188299526,
    -0.010156713291619804, -0.12791131015759713, 2.9592773925178411,
    0.74313222652478272, 0.54011374734653217, 0.64154155181170192,
    -0.46401058107336374, 0.014138131269672938, -0.12857525247295823,
    0.10052746980952304, 0.66074135221011621, 0.31456041275550284,
    0.64154155181170192, -0.501689242390185, -0.1649538364015608,
    -0.17911475615961359, 0.16859294415972115, 1.0975251847262708,
    0.81036284544827453, 0.64154155181170192, -0.718248111914452 };

  static const double dv3[11] = { 0.91342391747765472, 1.0, 1.0,
    0.9629056535644358, -0.066786898267661668, -0.34048994619454348,
    -0.6405581768894717, -0.99999999999999989, -0.54067809046852977,
    -0.99999999999999989, -0.28781645922188415 };

  static const double dv[7] = { 44.1154392116923, 1.676268876692308,
    2.7523076923076926, 8.5069948611384589, 19.01326791584615,
    77.999999999999972, 2.4265984325692309 };

  static const double dv1[7] = { 15.243836982190411, 1.8099027162419994,
    1.4691736295775779, 0.25941578090761608, 2.83222547411368,
    18.704945870009887, 1.0784032282447351 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.1777355985497506;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 11;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 77U * sizeof(double));
  *obj_Scale = 3.57030293885231;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 11;
  memcpy(&obj_Alpha_data[0], &dv3[0], 11U * sizeof(double));
  obj_Prior[0] = 0.86153846153846148;
  obj_Prior[1] = 0.13846153846153847;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int d_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[133] = { -1.0155404207131717, 1.0638261980326689,
    -0.69512079366246, 1.3468864761226544, 1.0137477996828332,
    0.34383931045192034, -0.17978577288484818, -0.93955983241363106,
    1.0462253467078018, 2.6347122552729871, 1.1623104601160896,
    0.69366072368267917, 0.015963967985272047, 0.0333003259601346,
    0.28114234071266769, -0.029090593690058602, 0.12369061181346971,
    -1.8499719138336224, -1.8554644574356096, 0.67171465291856858,
    -0.45361169736694823, 0.30940257639125274, -0.058541874697195448,
    0.12369061181346971, -1.9285247847963369, -1.8565754646687969,
    0.67171465291856858, -0.47268372139674414, 0.96481557652888184,
    0.25187021603653753, 0.56039002806729876, 2.2501231982037475,
    2.5423458174063942, 0.34383931045192034, -0.063370897027474157,
    -0.82832770265747879, -3.0928634124680161, -0.25842137740863091,
    0.0931746453494393, 1.1157323025704535, 1.9832160227851616,
    3.4115150715206579, 0.43471551588927687, 0.16781342893546991,
    -0.58594593959900287, -1.2448898397524875, -1.2638135424560175,
    0.99958999538521687, -0.50300744765862981, -0.37108976038827884,
    0.80831483313924, 0.61497745509902746, 0.2469488717149099,
    -0.23484631448066046, -1.295537401881321, 2.0366714656763403,
    3.6535256818283108, -0.703313245256601, 0.61497745509902746,
    -1.6762105152770375, -1.4686191190449638, 2.31109136525181,
    -0.665444343946836, 3.5937605673723314, -0.84327508368411419,
    0.61497745509902746, -0.980061736292537, -0.47117200348807592,
    2.31109136525181, -0.65523353257933237, 0.13154551106178947,
    -1.484744648284249, -0.3675962314720882, 0.68756278845539454,
    0.58545532293630709, 2.31109136525181, -0.48724186145563669,
    0.093413214928390262, -1.2488509627524751, -0.3675962314720882,
    0.39165145795083595, 0.36269401531415185, 1.9832160227851616,
    -0.47980370688203505, 0.235096318601257, -1.2542536050212891,
    -0.3675962314720882, 0.64616547743610486, 0.88715607218351844,
    2.31109136525181, -0.53326553396118692, 1.536893784431838,
    -2.8586335559411302, -0.31300880444035961, -1.5226670934610254,
    -0.58969506174610153, 2.6389667077184584, -0.543445537403694,
    -0.073269962546508832, -0.11608244120870073, 1.2154391524480426,
    0.96873035258613316, 0.66345217309740312, 1.6553406803185133,
    1.0373715687433953, 0.1307780549812822, -0.16041434116886377,
    0.39662774697211295, 1.9556531189703468, 1.6979273936163284,
    2.31109136525181, 0.70747578369117015, -0.25156133616471876,
    0.653756108721465, -0.42218365850381684, -0.76810424206864625,
    -1.5236109279271188, 1.6553406803185133, -0.10659909776554898,
    -0.12877573319910068, 0.520254972052041, 0.17827803884519816,
    -0.49852622855641104, -0.926887860919234, 0.99958999538521687,
    1.1259948840126315, -0.19821114548959559, 0.51656929171292176,
    1.8704882768287865, -0.448134443691823, -1.1396376635056003,
    1.6553406803185133, 0.21172437826465954 };

  static const double dv3[19] = { 0.15420709031532323, 0.45193010627155916,
    0.99999999999999911, 0.032932562001589359, 0.03860811672414613,
    0.25385471162151052, 0.44004203444257434, 0.12041460290503717,
    0.0744720574753499, 0.30820140081263958, 0.99999999999999911,
    0.41754898876812008, 0.315352484764628, -0.999879232039925,
    -0.280915542264948, -1.0, -1.0, -1.0, -0.3267693817976029 };

  static const double dv[7] = { 31.010405500299576, 3.0763193601385721,
    2.4734082397003707, 8.6129600909363173, 20.396638182059895,
    71.707865168539243, 5.34409445549812 };

  static const double dv1[7] = { 12.96622732264308, 1.5838202076404269,
    1.8319236761585327, 0.25349153704962329, 2.5072474028898704,
    18.299637767394248, 6.7309304350417074 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.6090223037540194;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 19;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 133U * sizeof(double));
  *obj_Scale = 2.5245545231262585;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 19;
  memcpy(&obj_Alpha_data[0], &dv3[0], 19U * sizeof(double));
  obj_Prior[0] = 0.044943820224719107;
  obj_Prior[1] = 0.95505617977528079;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int db_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[119] = { -0.34975491869233533, 1.1697346331813105,
    -0.46579687639483652, 0.2820982584626997, 0.70428161700808567,
    -1.572170069072889, -0.31453103178303848, -0.33659486861856436,
    1.1101991969760434, -0.46579687639483652, -1.6973530474588587,
    -1.8998890400515762, -1.572170069072889, -0.18366656467125742,
    0.56178486282993223, -0.70929941187873013, -0.25344151153693262,
    0.60603895415532871, 0.29317622337069749, 0.575943490650467,
    -0.0933833682390325, 0.56577191153210393, -0.54044532310543536,
    -0.14726382910798055, 0.13913143540215425, -0.25020319584699069,
    0.575943490650467, -0.4089830870469125, 0.74318607923084479,
    -0.53472978959873863, -0.99668528853959637, 0.07834277168234334,
    -0.38888640438969219, 0.575943490650467, -0.39443237254324909,
    0.70623065498357729, -0.51429321736957045, 2.0293786606855346,
    0.045929262463312789, -0.038935640489746723, 0.575943490650467,
    -0.56174832051146062, 0.34164432724419919, -0.541727525481963,
    -0.2003526703224566, 0.15858346470170195, -0.0576607535721699,
    0.575943490650467, -0.52871722971224122, -0.17539323667573409,
    0.36125327757595577, -0.99668528853959637, 0.76147316817025879,
    0.46213255180182627, 0.575943490650467, -0.26029989501714917,
    -0.64115693679929175, 1.4373101057023028, 0.59597994789468334,
    -0.33563886960450445, -0.67094390468212073, -0.85613221583177024,
    0.0892633274941811, -0.53789547725026543, -0.68963054723290884,
    -1.0497741297540724, 0.910708251773969, 1.1701963955992754,
    0.2179245640299077, -0.028596082988026721, -0.75648103266265432,
    -0.60769046235977653, -1.1028629709685482, -0.4151874660383415,
    -0.432152750813287, -0.14009436259065161, 0.28336842603570583,
    0.34736953009796756, 0.87280236017862123, -0.57197455882378834,
    -1.0123749746357751, -1.5677589644339738, -0.49811328921121095,
    0.34094637858205096, -0.50105481978033783, 0.97927407056180582,
    -0.51888571760931257, -0.415131667707298, -0.64166108573653913,
    -0.49811328921121095, -0.097923286610461943, -0.29468893547689706,
    -0.0058671043516245495, -1.5275737006843562, 0.59262785532550155,
    0.32911102769106726, 0.575943490650467, -0.089032856820456391,
    -0.42060937849668839, 0.32268472956454558, 0.7552464715381112,
    1.2569131778363738, 1.2162666370170674, 0.93396241727102636,
    -0.35965513719345155, -0.33517058950572443, -0.0058691011868245305,
    -0.041086146679028504, 1.2112942126456725, 1.0362958649674696,
    1.2919813438915857, -0.12819922381057863, 3.4548434301174984,
    -0.33553295378325204, 0.11818037696439934, -1.3438807676391027,
    -1.4178284464120114, 1.650000270512145, -0.34736477672718569 };

  static const double dv3[17] = { -0.72452969627032648, -0.99999999999999978,
    -0.81537237718467637, -0.1493146555847206, -0.65014427836947075,
    -0.11585394063869263, -0.99999999999999978, -0.99999999999999978,
    0.70428583412571677, 0.38951415281373725, 0.58678060815274669,
    0.84317152001638307, 1.0000000000000002, 0.71804706830192311,
    0.011306562006506432, 1.0000000000000002, 0.20210920263087287 };

  static const double dv[7] = { 35.720366541043468, 2.2990690056608685,
    3.2773913043478249, 8.6863185639652141, 20.666500612347818,
    80.347826086956488, 6.0205325767304334 };

  static const double dv1[7] = { 11.667923688682347, 1.6611285698659415,
    1.8836350109056916, 0.2929836734377253, 3.1721266375557451,
    16.758890533066719, 7.2885391967040194 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.09186010655079653;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 17;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 119U * sizeof(double));
  *obj_Scale = 1.9603147377933472;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 17;
  memcpy(&obj_Alpha_data[0], &dv3[0], 17U * sizeof(double));
  obj_Prior[0] = 0.48695652173913034;
  obj_Prior[1] = 0.5130434782608696;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int dc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { -1.1363101040787662, 2.0031984397519613,
    2.535300421075652, 1.7116508492830087, 2.0331505317321796,
    0.096030752131539041, -1.2795102888612306, -1.1819844914307045,
    2.0084718053627428, 0.15034443080735949, 1.8043555801191202,
    2.2195080822753064, 0.096030752131539041, -1.3154422644629624,
    3.15227892064343, -2.1282562686490079, 0.53501475181837432,
    0.98103567219803933, 1.8465027543946593, 0.9946042185051901,
    -1.26748639996971, 2.6589006771072512, -2.090049369780012,
    0.61194881602057738, -2.0434346452059051, -1.1349183988415803,
    1.4438909516920155, -1.3159551070463544, -0.85722174039420029,
    0.47252162688180782, 3.3046410630976815, 0.52629951396190655,
    0.12517231394403261, 0.54531748531836455, 0.23585200080319549,
    1.0298533233508336, -1.0681705025635693, -0.38819401860806113,
    -1.5656980620658816, -0.72930608153582066, 3.6903246176261431,
    -1.2865767873954053, 0.92340719540688321, -0.71382908234774767,
    -0.54206214701246724, -0.16580919232634908, 0.22715677064449671,
    2.791751151252492, -1.0496409189684257, 1.3762020348560824,
    -0.99139439073473845, 1.1504872654359983, -1.6200260397737645,
    -1.0821935915020175, 0.096030752131539041, -0.1206454648912583,
    0.258351824987833, -2.6586453174258851, 1.7659597790536221,
    -0.32182890777605339, 0.0023613820340959448, 0.9946042185051901,
    0.14908436362779104, -0.659923568536342, -0.093077457677635256,
    0.15034443080735949, 1.5614422321329533, 2.3405915264858277,
    -0.35325598105528649, -0.73902408795220742, -0.58521420757312637,
    1.2764130104307387, 0.68888288022278044, 3.0301033643917696,
    3.0667408415525892, -0.802542714242112, 0.874875497926717,
    -0.56639786347084142, 1.4464228600213875, -0.15739182600145235,
    2.227747291209202, 2.0685967203983511, -0.802542714242112,
    -0.30893171185120144 };

  static const double dv3[12] = { -0.45215070492163595, -1.0,
    -0.29539423224012673, -1.0, 0.0941016671731769, 0.38172113627483922,
    0.2057755619372808, 0.8025568603859341, 0.0097097491192500354,
    0.19928268695914261, 0.05951652965025394, 0.99488074566188511 };

  static const double dv[7] = { 32.6984178625954, 3.4405839393740432,
    2.7045801526717543, 8.41975687796946, 17.252613758244266, 88.717557251908346,
    12.424046591473275 };

  static const double dv1[7] = { 14.512186773138408, 0.64579326588639863,
    1.2998143415012324, 0.18006028224718915, 2.1487678327652815,
    13.354500715927079, 8.5163208778660149 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.7249993165023347;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 3.6349092677688635;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.068702290076335881;
  obj_Prior[1] = 0.93129770992366423;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int dd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[112] = { 0.054355536243108647, -1.1283245998819131,
    2.1173347084714784, 0.12204914881545306, 0.64250244401551726,
    0.022130341652916597, -1.5425457724297704, 0.67633722546273978,
    -0.97829787254434564, -0.95661231311893768, -0.36150880304146132,
    -0.056484990470213763, 0.022130341652916597, -0.06450501582963282,
    -0.82030709187691964, -1.2610044949530956, 0.58036119767627059,
    0.66773145334277861, 1.179737495762486, 0.022130341652916597,
    -1.103122707054166, -0.87229394690359574, 1.3270472631730037,
    -0.15738608750542946, 1.0719648011974785, 1.5170386365692163,
    -1.2227013763236685, 0.47746216081388915, -0.95014392875838638,
    1.295819735305497, -0.15738608750542946, -1.3217893692689626,
    -1.5021796477256351, -1.2227013763236685, 0.22789912969811904,
    -0.75341392372200333, 1.336984518802115, -0.15738608750542946,
    0.720063232822165, 1.8303138365315519, -1.2227013763236685,
    0.45732238565876782, -0.85157890152481852, 1.2706855394565078,
    -0.15738608750542946, -1.4547711644997892, -1.581874247039267,
    -1.2227013763236685, 1.1538857733881882, 0.78991774343250987,
    -0.26720850269365176, 2.7321241127895615, 0.7704990897707219,
    0.63262442648796413, 1.2669620596295017, -0.80037601193979491,
    -0.59783373322305322, 0.56166439711892291, -0.77217549182351275,
    1.6838787299652564, 1.2288859166669446, 1.2669620596295017,
    0.7577767661059418, -0.34687391331561596, 0.8650568469012635,
    -1.018091253550746, -0.41351016848257582, -0.874199677339024,
    -0.39281356433927844, 0.99155793787811886, -0.71141889874199582,
    0.58986136118470667, 0.33444543594903736, -0.17115791082222426,
    -0.34496668264101066, -0.39281356433927844, -0.0793173331090958,
    -0.93891278284467694, 0.77645056999568363, 0.94923484026712068,
    -0.52916777335173748, -0.86165930803237067, -0.39281356433927844,
    -0.16443026621007079, -0.54163794839108614, 0.11869054945902165,
    -1.018091253550746, -0.36506141401412678, -0.57677707381175147,
    -0.39281356433927844, 0.23529871317479187, -1.4782780622604494,
    1.134685414670189, -1.0795701939825544, -0.72982948924680913,
    -1.085646511024724, -0.80775747033147349, 1.8768427861508985,
    -1.6118082086616055, 0.823189097239454, 0.21148755508542058,
    2.2181244904759256, 2.49444693039085, -0.39281356433927844,
    0.095869030703336591, -1.3437862212408866, 0.93531724456668786,
    -0.40330184923266271, 0.7427121832173772, 0.56244384217994048,
    -0.80775747033147349, 0.929857428256783 };

  static const double dv3[16] = { -0.045010974997965608, -0.97258714112366251,
    -0.4589286026937926, -1.0, -1.0, -0.30157446005450539, -0.41198715851149836,
    -0.089373361604498963, -0.62089306328143845, 0.96262625589721518, 1.0,
    0.75150110316764041, 1.0, 0.14461259120209277, 0.86526081816646838,
    0.17635399383394498 };

  static const double dv[7] = { 38.105339559200004, 1.9136235885066668, 2.656,
    8.5229269423333331, 18.856607542800003, 71.68, 3.0548014095866671 };

  static const double dv1[7] = { 7.4125089852476087, 1.7546662429533753,
    1.6265732508991229, 0.22952414612104552, 2.6656958166506706,
    14.459785800813419, 1.4100790987618468 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.18993545298745304;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 16;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 112U * sizeof(double));
  *obj_Scale = 2.0100144931083577;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 16;
  memcpy(&obj_Alpha_data[0], &dv3[0], 16U * sizeof(double));
  obj_Prior[0] = 0.7466666666666667;
  obj_Prior[1] = 0.25333333333333335;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int de_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { -1.3486022150315251, 2.6500671060571768,
    0.27234383817323377, 1.2868245485003527, 1.4242713100583639,
    0.22555364910651035, -0.77825186159811566, 1.1886194400306529,
    -0.95463528297954214, 0.7727756408165497, -0.83333313113898588,
    -0.49440886931845235, 1.2227382030510794, -0.78356848319158734,
    1.05071204906921, -0.48981448676699046, 0.62979512577560226,
    0.67079771975383051, 1.1524158702647205, 0.72414592607879491,
    -0.73946047150993177, 0.77759310248750346, -0.46081448088521321,
    0.70128538329607593, -1.5921803041504954, -1.0205170565337291,
    0.9734420645649372, -0.7786666988013734, 1.0416554174696484,
    -0.68094266661167147, 0.62979512577560226, -0.13317630439550576,
    -0.07505319623432366, 0.9734420645649372, -0.7626927365964512,
    -0.046633317602359455, -0.69795308930957345, 0.34383409569370749,
    1.5349304265315009, 1.7924428849321843, 0.22555364910651035,
    -0.64412993443226352, -0.048450908495178621, -0.69790600174246509,
    -0.44255873703150322, 0.11403363148576759, -0.24298391393497198,
    0.22555364910651035, -0.46930836435256107, -0.085990233497229313,
    -0.61809478630452819, 0.34383409569370749, 1.3142772682864368,
    1.3890093598407962, 0.47484978759265262, -0.57241477648988792,
    0.29388871011134887, 0.36006116894207185, -0.51404899455197683,
    -1.4610885165920098, -1.6290622189029662, 0.22555364910651035,
    0.30831173375869259 };

  static const double dv3[9] = { -0.82207161557216846, -0.049630636036970162,
    -1.0, -1.0, -1.0, 0.87170225160913861, 1.0, 1.0, 1.0 };

  static const double dv[7] = { 50.899753953809508, 2.4829138785238092,
    2.5190476190476181, 8.4349745761904718, 17.822692223809515,
    84.571428571428555, 9.4149900087619 };

  static const double dv1[7] = { 26.215673828611543, 0.85081906881626856,
    1.3987919958374966, 0.240650582218391, 2.9482648962566089,
    24.067761484133555, 10.528303550648054 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.45445875123641172;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 3.5920444988387352;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.4285714285714286;
  obj_Prior[1] = 0.5714285714285714;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int df_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[49] = { -0.946609357110871, 0.62340870451818076,
    2.2280384344679076, 0.61862926796540452, 0.92423000553127088,
    0.54826574651562254, -0.68264521807447842, -0.968542805700722,
    0.62564185078749446, 0.42361833804832544, 0.678795607872384,
    1.0739953902129349, 0.54826574651562254, -0.85965296037916961,
    1.1128281602869778, -1.126165163457262, 0.71465383747083877,
    0.14445237656808821, 0.77423138142689174, 0.88280077828786674,
    -0.62341325571313289, 1.3388165992386716, -1.028657961589152,
    0.71465383747083877, -1.4675237859828447, -1.8695684200501363,
    1.0500682941739887, -0.69846174561170327, -0.71055640153373756,
    0.74304914749846052, -0.97335205917973822, 0.57018903572328328,
    0.75147869491061714, -0.95714189645947623, -0.78833074703686046,
    -0.72322729329733093, 0.81867996928256559, -0.27486686056570642,
    0.92680485932009016, 0.70250784849330894, -0.95714189645947623,
    1.7158452390044292, -0.733740883333776, 0.797280539631601,
    -0.97335205917973822, 0.67773961047068931, 0.6511851634385597,
    -0.95714189645947623, -0.070197339130516873 };

  static const double dv[7] = { 44.81488540388888, 3.7835500276666654,
    2.1722222222222212, 8.5563258331666638, 19.150198096666664,
    70.333333333333329, 2.7074728489444442 };

  static const double dv1[7] = { 30.220292868432235, 1.5249802696741295,
    1.7180034772119697, 0.27743818264177905, 2.6737761255790846,
    35.870682769539535, 1.7287844588925065 };

  static const double dv3[7] = { 0.50701526018349974, 1.0, 0.80281731701257941,
    0.09571051742239535, -1.0, -0.41153350130907973, -0.99400959330939476 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.015186662815899773;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 7;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 49U * sizeof(double));
  *obj_Scale = 4.7445513339664425;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 7;
  for (i = 0; i < 7; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.5;
  obj_Prior[1] = 0.5;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int e_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[259] = { -0.96986324628882647, 1.0308672611771834,
    -0.71334910437976773, 1.4870140268353127, 1.5404135757031168,
    0.537442303802497, -0.35906434158476125, -1.1003301560334779,
    0.99164804567794484, 2.2374005121669747, 1.4545015311438056,
    1.6495914021093314, 0.537442303802497, -0.4302961721691933,
    -0.3491128204579606, 0.0977811187527784, -1.1264540506963117,
    0.97364144970496269, 0.52431410420978652, 0.15495089797942121,
    -0.42837756394413673, 0.4433064692772864, -0.12656782473095235,
    0.17187578058425512, -1.6314841350775198, -1.603348304058704,
    0.91993370962557286, -0.46457571007563053, 0.24080257693918031,
    -0.059045903796729707, 0.17187578058425512, -1.2941244564119532,
    -1.2249864908297372, 0.91993370962557286, -0.46305821149961895,
    0.39114277737232755, -0.10469300962577438, 0.64399571923173382,
    0.13223520962460261, -0.50863287730947548, 0.15495089797942121,
    0.14801797686643239, -0.60233566946238282, 0.14395810260181033,
    0.40793574990799447, 0.13005676887160128, -0.16416049281183659,
    -0.61003191366673049, 0.2212757523281863, 0.17683410446353384,
    0.55027875643655821, 0.34892075757705954, 2.1819803553316697,
    2.8780249853189259, -0.61003191366673049, -0.18250436515120383,
    -0.20554618743525163, 0.32949678375887048, 0.40793574990799447,
    0.15516397627973461, -0.27873303089548551, -0.22754050784365465,
    0.11427700786980866, 0.15295164508754511, 0.027448790057911981,
    0.23089077291518975, 0.049889939602119363, -0.37932242016193951,
    -0.61003191366673049, 0.17205656232316008, -0.634835459817509,
    -0.54878442730502752, 0.23089077291518975, 0.32890911241466209,
    0.29464379500880133, -0.61003191366673049, -0.25356416949892685,
    -0.606681863695999, -1.1344475391236175, -0.24122916573228892,
    -0.3480614852426091, -0.59164830364358012, -0.61003191366673049,
    0.26221508038696584, -0.321567488820355, -0.94262095891623443,
    -0.65433411204883285, 2.5553807744528858, 5.8546942765604495,
    0.91993370962557286, -0.62642107306210026, 1.3984870726840233,
    -0.18723452294357862, -0.89039408137257237, 0.62634790012716435,
    -0.10833343972281487, -0.61003191366673049, 0.4884123056688402,
    -0.3802272619257811, 1.0279888614459076, 0.17187578058425512,
    0.0030363204179040333, -0.71195052710650242, -0.61003191366673049,
    -0.19784466004702353, 0.17500361605403755, 0.85925376814153231,
    0.34892075757705954, -0.63313615446401184, -1.2218668664527501,
    -0.61003191366673049, -0.23085338727702451, -0.40379915036047503,
    0.94194087148321493, 7.725794798943916, 0.44052557574429391,
    0.13945938008045833, -0.22754050784365465, -0.10266470582008305,
    -0.12705051469904377, -1.4842009188387426, -1.0084240660344419,
    -0.40439912697362751, -0.55996460939025106, -0.99252331948980632,
    -0.028835223781142897, -0.58880177606559547, 0.11526606032613612,
    -0.89039408137257237, -2.0701972606605312, -1.4960201119860932,
    -0.61003191366673049, -0.39385202326634977, 0.29780277862336962,
    0.34637725330532732, 1.706265581188561, 0.40161595359367586,
    1.4996710844413854, 0.537442303802497, -0.500626379110272,
    -0.36910680831964304, 0.62731296482469889, -0.94940907370350713,
    -1.0750063541950341, -1.425055373676801, -0.99252331948980632,
    0.13347159888115639, -0.21808480477911515, 0.67947930264592693,
    -0.89039408137257237, -1.2082627424786196, -1.5314732889144367,
    -0.99252331948980632, 0.38470836804436276, -0.090593289628892334,
    0.34341863750543661, 0.40793574990799447, -0.565706993081933,
    -0.7976312438255182, -0.22754050784365465, -0.21491966544606561,
    -0.49224844112541655, 0.68256565324216967, 0.82104069622453824,
    1.3094006300582417, 1.6456790331259672, -0.61003191366673049,
    -0.46830995431959516, -0.15836541648412908, 0.3154236667581905,
    0.99808567321734265, -0.526471785510521, -0.95565255597872079,
    -0.22754050784365465, -0.44014896083250254, 0.36222218050802912,
    0.22948649941983384, -0.83137908904163738, -0.69825144240010517,
    -1.4371759077484021, -0.22754050784365465, -0.09799702198162169,
    0.15022500537040623, -0.083273863916931812, 0.46695074223892935,
    -0.47321521832866931, -0.88493133348653885, -0.22754050784365465,
    -0.33142584107346806, 0.086966838249869421, -1.2200020059858228,
    -0.7723640967107025, -0.25521112556213044, -0.8106557993948319,
    -0.22754050784365465, 0.10783290541987958, 0.16406452555310155,
    -0.39116199831584381, 1.1161156578792124, -0.28013660306609522,
    -0.78818888660332564, 0.15495089797942121, -0.062283227651046977,
    -0.10469128589316058, 0.14366053425974865, 0.46695074223892935,
    -0.87641337050942192, -1.3847589294553404, -0.22754050784365465,
    -0.22803384455609416, 0.14056387940059262, -0.1875630184543266,
    -0.83137908904163738, -0.3077034812981842, -0.99968499059383376,
    -0.22754050784365465, 0.042208084465933, -0.36284087119765923,
    0.35629073639344927, 0.34892075757705954, -0.66156480244735416,
    -1.1706819038433822, -0.61003191366673049, -0.33315370848753056,
    0.1631710165677919, -0.052319095959593845, 2.7095204508144537,
    -0.45244888825252277, -1.1624005066841183, -0.22754050784365465,
    0.2463475369648955, -0.29573360850043018, 0.53592004647386282,
    -0.89039408137257237, -0.99196979366624172, -1.6578166610982739,
    -0.61003191366673049, 0.094976895981497084, -0.37338661420464692,
    0.18190369637266718, 0.34892075757705954, 1.7453533026297865,
    2.0779428213587527, -0.22754050784365465, -0.29323881114230543,
    -0.21752133974062954, 0.30933761850634761, -0.24122916573228892,
    0.37535899030402603, 0.061934307886446258, -0.61003191366673049,
    -0.11144646608447788, -0.17465212647660566, 0.099455546198181158,
    -0.83137908904163738, -0.49063585883591493, -1.2767462829202951,
    -0.61003191366673049, 0.12157816414597609 };

  static const double dv3[37] = { 0.0020373075433122263, 0.05086895003282331,
    0.6176898264592956, 0.99999999999999922, 0.036178307470658311,
    0.99999999999999922, 0.40163897701738605, 0.064827312007640608,
    0.99999999999999922, 0.99999999999999922, 0.17348245225694586,
    0.99999999999999922, 0.10404364050425073, 0.16570049784579102,
    0.14000875555364026, 0.99999999999999922, 0.072322795245375993,
    0.47300802419086191, 0.075783659374625972, 0.044522509762165319,
    0.99999999999999922, 0.28280762747850641, 0.99999999999999922,
    0.18271402448522467, -1.0, -0.30496050624478843, -1.0, -1.0, -1.0,
    -0.18237862535164417, -1.0, -1.0, -0.4002955356320676, -1.0, -1.0, -1.0,
    -1.0 };

  static const double dv[7] = { 30.9171181081022, 3.0772013909781037,
    2.4087591240875921, 8.6006140165729956, 20.197693214197088,
    69.569343065693431, 5.0869057527846735 };

  static const double dv1[7] = { 12.746363144913643, 1.543917598279746,
    1.6944846733053183, 0.24718551526327556, 2.5546184530389611,
    15.686626963784235, 6.4688620834167807 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.75263972445197957;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 37;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 259U * sizeof(double));
  *obj_Scale = 1.450576558312801;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 37;
  memcpy(&obj_Alpha_data[0], &dv3[0], 37U * sizeof(double));
  obj_Prior[0] = 0.069343065693430656;
  obj_Prior[1] = 0.93065693430656937;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int eb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { -0.55764320393714, 1.4652957968774682,
    -1.3718273979322531, -0.33972519159365183, -0.21507624915378659,
    -1.9818701934424425, -0.60957781812935763, -0.58188865720041538,
    1.5213019948824074, -1.3718273979322531, -0.19511983607690644,
    -0.60910844773606376, -1.9818701934424425, -0.33470959574125203,
    -0.56273788659614266, 1.4609025478396629, -1.3718273979322531,
    -0.32726795840628276, -0.56440410997702217, -1.9818701934424425,
    -0.36494995004137609, -0.55920980157587663, 1.4849121888219512,
    -0.82066483923569045, -0.041835413432201138, -0.29196126324170546,
    -1.9818701934424425, -0.33814713274292957, -1.0013576543346649,
    1.6071332416452124, -1.0962461185839716, 0.51421356530522655,
    0.43750692165848443, -0.35816931206791114, -0.39386993407144388,
    -0.59120692219761561, 1.5054598167416371, -0.26950228053912789,
    0.1492484740999917, -0.09374228616787203, -0.89940293919275494,
    1.0805547295863163, -0.58755265615224, 1.4562623407437563,
    -0.26950228053912789, 0.0018580105261228877, -0.38232714929227013,
    -0.89940293919275494, -0.052416758821014341, -0.017919985181818185,
    0.54337039069112025, -0.5450835598874092, -1.09688240942664,
    -1.1488484961671237, -0.35816931206791114, -0.3808629472487064,
    -0.22070788741482875, 0.42588298917439732, -1.2799669714828259,
    -1.7901412482028587, -1.6991643633520226, -0.89940293919275494,
    2.8492607703666333 };

  static const double dv3[9] = { -0.34408671247955336, -0.99999999999999989,
    -0.99999999999999989, -0.99999999999999989, 0.99999999999999989,
    0.5138240463959618, 0.99999999999999989, 0.76066807779750345,
    0.06959458828608793 };

  static const double dv[7] = { 30.103037363676471, 3.2873435171176464,
    3.4867647058823525, 8.82332108645588, 21.845422376911763, 79.941176470588232,
    8.5789244042352912 };

  static const double dv1[7] = { 12.775692689118744, 1.1749363524764964,
    2.1772161063296189, 0.23578582465468656, 2.7978902332515809,
    22.171571385441684, 8.5913044675847114 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.7126660652047994;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 3.8256400385477507;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.13235294117647056;
  obj_Prior[1] = 0.86764705882352944;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ec_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[119] = { -0.65735489099600164, -0.48114576956854421,
    0.56951925944261317, 0.69582481567937426, 0.90272975155247537,
    -0.97306167466409377, -0.63053980252865671, 1.0622093931117687,
    0.051680504293916775, -1.3993777209428231, -0.29683006343287427,
    -0.65423231158443029, -0.47136320930970088, -0.364543604823649,
    0.74027511777540689, 0.53391023052119224, -1.4931347200087961,
    0.30772587151052949, 0.35135002628725104, -1.4747601400184867,
    -0.5456549623443534, 0.62758091224320911, 0.3665939670948819,
    -1.4931347200087961, -0.21600056721855765, -0.70447989349174367,
    -0.47136320930970088, -0.48865378558903994, 0.78598188923557877,
    -0.040158503357402175, -1.3993777209428231, -0.1117766720870641,
    -0.2953010209918101, -0.47136320930970088, -0.47863977535367386,
    0.60696095127458416, 0.32345731626878149, -0.36805073121711851,
    -0.066846313202670926, -0.70387083748719281, -0.47136320930970088,
    -0.38551347765497018, 0.10222322854106865, 0.31636032058273611,
    0.0069772650467744878, 0.041105508032041792, -0.44320675922694386,
    -0.47136320930970088, -0.41692274830166193, 0.49558130980122139,
    0.32804891788810642, -0.743078727481011, -0.36204534252260068,
    -0.56447663924612912, 2.5388275828166567, -0.5392650157494584,
    1.2532154446185413, -0.015924715481217825, 1.4133322510363719,
    -0.48641157258351403, -0.78421671293135331, 0.532033721399085,
    0.32186761911014267, -0.17461381729330486, 0.030115689091615355,
    1.2258182529044255, -0.25885005060074284, -0.42301939351100576,
    0.03033525604469206, 0.46325888125005027, -1.0052762975483445,
    0.54144989034825, 0.19449126317872056, 1.2528108426909843,
    2.0563364819049137, 0.03033525604469206, -0.33154861905891247,
    -1.1124979691354644, 0.57877623781027288, 0.2882482622446938,
    0.40226022518896565, 0.2912748047175745, 0.03033525604469206,
    -0.288928503998535, 0.71799245634215758, 0.46777965763164353,
    -1.3056207218768499, 0.081710451307880752, -0.73151083071952827,
    -0.47136320930970088, 0.21410278039795769, 0.37889708756102142,
    0.49963928156122017, -1.3993777209428231, 0.39030500965235781,
    -0.39533422808751123, -0.47136320930970088, -0.057744479184716764,
    0.69311632891489583, 0.17264463894668949, -1.3993777209428231,
    0.13563341920227079, -0.65326323754199556, -0.47136320930970088,
    -0.015423034897896884, 0.50347747783816521, 0.48365916602337028,
    -1.3056207218768499, 0.069254332276126443, -0.77275732441815126,
    -0.47136320930970088, 0.092109561301629353, 0.17209421947607714,
    0.28728828053481176, -1.3993777209428231, 0.058834407128623763,
    -0.53365970774681826, -0.97306167466409377, 0.3866256674992074 };

  static const double dv3[17] = { -0.61107117806601641, -0.94944973329837734,
    -0.055345565104922383, -0.99999999999999978, -0.99999999999999978,
    -0.99999999999999978, -0.99999999999999978, 0.058515212238801136,
    0.38091622845176643, 0.27188410702936638, 0.1018990358154199,
    0.762905249982653, 1.0000000000000002, 1.0000000000000002,
    1.0000000000000002, 1.0000000000000002, 0.039746642951309141 };

  static const double dv[7] = { 36.273864143441813, 2.8169228914744155,
    2.6925581395348792, 8.2882662575720811, 16.957727716837187,
    83.637209302325488, 8.8024484806511527 };

  static const double dv1[7] = { 13.083348722652349, 1.0408206974852625,
    1.0665870387941265, 0.32937482289152065, 2.5892036006824153,
    11.959374832374028, 8.0596570308028888 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.33238605432920337;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 17;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 119U * sizeof(double));
  *obj_Scale = 2.1391412389019933;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 17;
  memcpy(&obj_Alpha_data[0], &dv3[0], 17U * sizeof(double));
  obj_Prior[0] = 0.4325581395348837;
  obj_Prior[1] = 0.56744186046511635;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ed_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -1.080903904539934, 1.1892784518193471,
    -0.8284426320477738, 1.053247354216899, 0.8361481189231782,
    -1.3947413117887433, -0.5778232906691213, -1.1051820669988359,
    1.1675658052906532, -0.8284426320477738, 0.76967198542894066,
    1.116007491079948, -1.3947413117887433, -2.0212875828380263,
    -1.2165668603690609, 1.2252579623285655, -0.8284426320477738,
    0.73494439164679826, 0.68089277006151783, -1.3947413117887433,
    0.5800069322876058, -1.1877575205364646, 1.2752983340060848,
    -0.21532209379215303, 1.3416503950237182, 1.0570334607889258,
    -1.3947413117887433, 0.94979589692003008, -0.46890151628936511,
    -0.036836577995254485, 0.44889182265143623, -0.83420599531313355,
    -0.66416888302520849, 0.2670781235340115, -0.93203081721013747,
    -0.28444205775772213, 0.22221433607712457, -0.62406911929590025,
    -1.3063586248165442, -1.2246659181356949, 0.2670781235340115,
    0.968668086929767, -0.49788887125956161, -0.28832739594437906,
    0.44889182265143623, 2.6053083658929648, 3.0736972814079411,
    0.68253298236470017, -0.75482741046696322, -0.0694579835144456,
    -0.10454962605938616, -0.0620419592282478, 0.64757033480856074,
    0.75407878215255864, 0.2670781235340115, 0.052245261810155333 };

  static const double dv3[8] = { -0.39686049172717641, -0.36651255241786812,
    -1.0000000000000002, -0.36017120474599329, 0.22524344765274479,
    0.50521093950492368, 0.39308986173336941, 1.0000000000000002 };

  static const double dv[7] = { 28.466601980357154, 3.6667211661071448,
    2.1214285714285723, 8.5813828463571458, 18.681668461428579,
    56.142857142857181, 4.2898471029642868 };

  static const double dv1[7] = { 4.6371899105041789, 1.07057276363253,
    1.9572007870003838, 0.17297653956920045, 2.2202498176545995,
    14.442002235542981, 1.4571049775257534 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.77262017824124951;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 4.2364994508713911;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.32142857142857145;
  obj_Prior[1] = 0.6785714285714286;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ee_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[98] = { 0.26114042004106558, -1.2908950589792467,
    0.4577902984310554, 0.037809124450768457, 0.64172696730568091,
    1.7476189264194444, -0.34724063827729912, 0.012909877101148949,
    -1.251247365489033, 0.4577902984310554, 1.7099173859821619,
    2.7550823937405897, 1.1812609410057353, -0.2514130553208232,
    1.1536836528302878, -0.25061441097284554, 0.20142773130966227,
    0.057855421334020149, 0.95914023947265092, 1.1812609410057353,
    -0.43373696637245718, -1.3577979003028338, -0.69227805644545515,
    1.0986967162345376, 1.7547615017637042, 2.3158922800580877,
    -1.0841710006491012, -0.11287970748278908, 0.46851091944484441,
    1.1071255323828146, -1.8494728056614806, 0.09290635461625231,
    -0.48135889778062219, 0.048544970178317083, 0.27371107218170565,
    0.43936415713843019, 1.1265418681958486, -1.8494728056614806,
    0.3165759443211878, -0.23499626370968049, 0.048544970178317083,
    -0.04022396377634619, 0.20847162566463259, 0.98936675817181829,
    -1.8494728056614806, 0.24620338815481282, -0.18293283567292748,
    0.048544970178317083, 0.10105137644770561, -0.43521561310793661,
    1.4465060583886991, 0.073246447748966284, 0.3728499982100219,
    -0.30590602909879472, 0.048544970178317083, 0.19444665047754917,
    -1.5796969544231592, 0.57631556229369718, -2.3621979399042661,
    0.67189659945836411, -0.059943310389585419, -2.7832449568902282,
    2.5773288908586642, 0.43297370999861867, -0.10218661810203608,
    0.4577902984310554, 1.6367902107581562, 2.0372991876669606,
    1.1812609410057353, -0.33293388213718078, 0.42954516144047067,
    -0.10213726281965207, -0.95220382073660559, 0.77679555046555149,
    0.1103014040845551, 1.1812609410057353, 0.012652607669645721,
    0.41141869138395681, -0.099796026509960126, -2.23401665634357,
    1.4137125175141005, 1.331965407173507, 1.1812609410057353,
    -0.24195483200046963, 0.35873417800183688, -0.018482376461023704,
    0.4577902984310554, 1.5032403720020298, 1.6553569291162613,
    1.7476189264194444, -0.19116768195977332, 1.0753054424847031,
    1.0067811134904709, -1.0803851042973018, -0.17654366556942205,
    -1.2019392635884587, 1.1812609410057353, 1.5498485039597305 };

  static const double dv3[14] = { -0.54103398081547149, -0.99999999999999989,
    -0.99999999999999989, -0.18635981933189008, -0.99999999999999989,
    -0.69627875133016826, -0.99999999999999989, -0.15507256258213226,
    0.578745114059662, 1.0, 1.0, 1.0, 1.0, 1.0 };

  static const double dv[7] = { 43.659836989238116, 1.9720296862666675,
    2.6428571428571455, 8.1535577187047643, 16.762815176095245, 77.4857142857143,
    4.4065820003904772 };

  static const double dv1[7] = { 13.897825622671375, 0.81172668992570185,
    0.780145097803206, 0.39760670244587326, 3.1141589425410849,
    10.594006184299076, 5.3259447671951268 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.2384559061529172;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 14;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 98U * sizeof(double));
  *obj_Scale = 3.6658827643043166;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 14;
  memcpy(&obj_Alpha_data[0], &dv3[0], 14U * sizeof(double));
  obj_Prior[0] = 0.88571428571428568;
  obj_Prior[1] = 0.11428571428571431;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ef_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[35] = { -0.77648209120104916, 1.3773007842316634,
    1.0378092486709767, 2.1058426656734328, 2.0575053601134194,
    1.8133349477508369, -0.81716125941722, -0.39959873612726166,
    1.1258501053521317, 1.2814264431946807, -0.0069497225385935259,
    -0.32516103843900074, 2.2556117642754314, -0.88209522939402107,
    0.6396141239273192, 0.411792437553653, 1.0378092486709767,
    -0.76267639066053794, -1.1242307729927574, -0.39804913487213545,
    0.05174531831781632, 0.7724874224088597, 0.40799446046332555,
    1.0378092486709767, 0.52741789224264324, 0.64920861294820476,
    -0.39804913487213545, -0.086749786532626161, -1.0262527533827128,
    -0.26082695720542354, -0.30208532120939396, 1.3961794190737902,
    0.99992718582848339, -0.39804913487213545, 0.61171180783502721 };

  static const double dv[7] = { 97.879121401, 0.29240876964000018,
    2.5480000000000009, 8.1730191995000023, 16.6577009402, 77.4,
    2.9424359312800008 };

  static const double dv1[7] = { 25.028578638484053, 1.2878534766459926,
    0.82096011486800113, 0.20105169555229, 2.2175487987785782,
    13.566164392580925, 1.6064273913525891 };

  static const double dv3[5] = { 0.22565015971565466, 0.76799691170166051,
    -0.24118259352128235, -0.577182609547579, -0.17528186834845363 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.85258948129762513;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 5;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 35U * sizeof(double));
  *obj_Scale = 3.5159055087558442;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 5;
  for (i = 0; i < 5; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.82;
  obj_Prior[1] = 0.18000000000000002;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int f_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[427] = { -0.5341824054777975, 0.3001242446202842,
    -1.2203166561966776, 1.0995347718830994, 0.7682755149478987,
    0.016949683085102328, -0.39686798124408795, 0.096833644462220786,
    0.071629932239019645, 0.22431132681704072, -1.282288185160489,
    -1.053722523797074, 0.652562798776425, -0.40754518412866653,
    -0.0226104786181361, 0.16956069238789, 0.22431132681704072,
    -1.4795323468064381, -1.1734669432401097, 0.652562798776425,
    -0.39800449093734486, 0.00028177190727807482, 0.13878999655546895,
    0.22431132681704072, -1.5531841394456027, -1.174400698833312,
    0.652562798776425, -0.40385798472089224, 0.722455724633954,
    0.29955715863360971, 0.28997623513584586, 1.078690774929888,
    0.60233643568754425, -0.61866343260622036, -0.19959642085522103,
    0.53499590638224481, 0.4268427625585, 0.22431132681704072,
    0.66700534596947669, 0.14042105242579797, -0.61866343260622036,
    -0.11165855531352364, 0.055294869166691615, 0.093908935466362239,
    0.74963059336748361, 0.33025105269131866, -0.11627617292407182,
    0.016949683085102328, -0.22685120445544613, 0.31650031923162447,
    0.35509091596438935, 0.35564114345465131, 0.57877756905287869,
    0.15610298547260404, -0.61866343260622036, -0.17069962240346992,
    0.6426243894311181, 0.50676329923725982, 0.68396568504867816,
    1.0322501819417407, 0.48390824500991164, -0.300856874760559,
    -0.21965019859799886, -0.1343805077102404, 0.22849236245600743,
    0.28997623513584586, 0.25496414303552944, -0.0055427227317725088,
    -0.61866343260622036, -0.21976065199877065, -1.0620287318505393,
    -1.0441070958637093, 1.8659340347871751, 1.4936732651312647,
    1.3706266808287835, -0.61866343260622036, 0.010444848988242139,
    -0.82735579849356489, -0.56188809948140717, -1.0233219312402615,
    -0.022944124516082888, -0.1517785389264239, -0.93646999045188173,
    0.0059794472568048271, -0.89548188141502139, -0.86761159862262538,
    -0.23534303141459706, 0.40789378177639241, 0.26962919812424596,
    -0.61866343260622036, -0.22914754261504156, -0.86904068540263724,
    -0.10549469698369314, 0.28997623513584586, 0.075284545458656732,
    0.097929952013214763, -0.93646999045188173, -0.049492141284403185,
    -0.73928872022336511, -0.95487270569240312, -0.23534303141459706,
    -0.10887622036964673, -0.18736543190543811, -0.61866343260622036,
    -0.19316700309632978, -1.1102293017215936, -3.1184927918661502,
    -0.36667284805220779, 0.1765179440722642, 0.82593335487551389,
    0.016949683085102328, 1.4406932067005911, -1.0709078868004769,
    -1.1610455775653283, -0.36667284805220779, 1.4926662813107388,
    1.6154493844664657, -0.93646999045188173, 1.6868063948820702,
    -0.51224762096484477, -0.75950168294402087, -0.6949973896462347,
    2.5456927067443438, 5.3328822787115433, 0.652562798776425,
    -0.45528397633800904, -0.39060223892542306, -1.4048827669385968,
    -0.49800266468981852, 0.059664127274077119, 0.10524665082472698,
    -0.93646999045188173, -0.36170457845057619, 0.10179172524565976,
    0.37528599808586843, -0.62933248132742936, -0.91220261202115516,
    -0.67620883853754254, 0.97036935662208634, -0.41316479677663581,
    -0.3948316477301903, 1.0478595685754275, 4.2955356425829745,
    0.2916757953229645, 0.032420157323398632, -1.2542765482975431,
    -0.041172271282139218, 0.39868672929659815, -0.08425242839735704,
    -1.2859815645154831, 0.13343168414150533, -0.37976360692013839,
    -0.93646999045188173, 0.26042415880818737, -0.46917333553475321,
    1.0037291798512791, 0.88096041000509451, 0.40171583794597687,
    -0.003639692515993252, -0.93646999045188173, 0.12858624089072138,
    -0.7125910354679077, 0.3551129799729934, 0.28997623513584586,
    1.3593468283877863, 0.87057836127562449, 0.33475624093076367,
    -0.24944936346604807, -0.53319625891686362, 0.053480697664622649,
    0.22431132681704072, 1.8198260140459166, 1.6659129482394019,
    0.97036935662208634, -0.38174716441158979, -0.55010393516095646,
    0.83944042402078745, -1.0233219312402615, -0.77350981327203971,
    -0.901043523493503, -0.93646999045188173, -0.23114188355321982,
    -0.42984271819839254, 0.89257065634913635, -0.95765702292145627,
    -0.89534391088352183, -0.9921732215587582, -0.93646999045188173,
    -0.15703571395334362, -0.451828564558263, 1.3048248397696309,
    0.61830077672987271, -1.0163463021761887, -1.1000641739350872,
    -1.2542765482975431, -0.23875934510994531, 2.5311674472019114,
    -0.60196158942573519, 0.81529550168628906, -1.4222044236826408,
    -1.0671469972648613, 1.9237890301590703, -0.45279163307533615,
    2.8635759848386617, -0.75130760081167924, 0.81529550168628906,
    -0.62220925144987937, -0.15041341618570347, 2.2415955880047318,
    -0.45899449834907474, 2.709194209445879, -0.534867075275428,
    0.81529550168628906, -1.316612286236591, -0.8483394484439748,
    2.2415955880047318, -0.46301914685276163, -0.14379163723001209,
    -1.351306537132418, -0.36667284805220779, 0.89968024488082243,
    0.87802509875328871, 2.2415955880047318, -0.40832609897041322,
    -0.0384514806081481, -1.136291900543497, -0.36667284805220779,
    1.0340081981216365, 1.2660721238023116, 2.2415955880047318,
    -0.42084787921992373, -0.53916391962127475, -1.003873592216777,
    -0.82632720628384537, 1.2834120118901751, 1.3758371105842946,
    0.016949683085102328, -0.28286060693191956, -0.56436076167083771,
    -0.51765255197842774, -0.95765702292145627, 0.3764782634081309,
    0.22343482994108843, -0.61866343260622036, 0.093185238876688919,
    -0.75325000426432764, -1.7570890619175941, -0.82632720628384537,
    2.3026797197430655, 2.3311825381746392, 0.016949683085102328,
    -0.10046884929502795, -0.051791223027937809, 0.00033366747951254735,
    0.22431132681704072, -1.0266400863512939, -0.82558733125347583,
    0.652562798776425, -0.097458040766545143, -0.066069768612221108,
    -0.17468260247359257, 0.28997623513584586, 0.87471439337641288,
    0.87725446386671524, 0.97036935662208634, -0.0053702052668054634,
    0.024518169185664129, 0.19662063980861649, 0.22431132681704072,
    -1.3275976634730913, -1.240509111185145, 0.652562798776425,
    -0.10838206264254766, 0.61282721064689294, 0.16135790260124219,
    0.5526358684110676, 0.679441718952271, 0.13162491698721734,
    -0.300856874760559, 0.28681808511537871, 0.3167196965644658,
    0.47451399884607709, 0.42130605177345676, 0.67820560717955014,
    -0.0072222740262258391, -0.61866343260622036, -0.16005573901529066,
    -0.23288962215907746, -0.71308158683494027, -1.0233219312402615,
    0.16249803717487771, 0.26663033076483672, -0.93646999045188173,
    -0.026357265648038447, -0.72784959579332731, -1.6756632323792959,
    -0.23534303141459706, 0.9217259698037743, 0.71251201990149171,
    -0.61866343260622036, 0.7498632906066387, -0.2854041437298635,
    0.062503445698001245, 0.88096041000509451, -0.2350942824521631,
    -0.79881518801750817, -0.93646999045188173, -0.23548716096898775,
    -0.17261092788691554, -0.11508642030086216, 0.22431132681704072,
    -0.051288229049252329, -0.31385777639364032, -0.61866343260622036,
    0.03159493996861934, -0.38931214527287755, 0.046249375351604748,
    0.22431132681704072, -0.3421062978589583, -0.83742768483935,
    -0.93646999045188173, -0.11063055696788987, -0.42982452702887058,
    -0.11575232431082258, 0.22431132681704072, -0.26748639551387221,
    -0.9798638934272389, -0.93646999045188173, -0.27083396779460467,
    1.8664724816688216, 0.56853065585068252, 0.88096041000509451,
    0.030602175781746007, -0.11619133755266565, 0.33475624093076367,
    -0.15736438566758176, 1.8131292829177275, 0.60937147748586562,
    0.94662531832389962, 0.12949293369777926, -0.40083392019370889,
    0.33475624093076367, 0.029414666923091925, -0.31288157792940169,
    0.49026794506741189, 0.61830077672987271, 0.22895042886048611,
    -0.31688316570099306, -1.2542765482975431, 0.043889647508413905,
    -1.2236506264490572, 0.80212001268857425, -1.0233219312402615,
    0.095500597853252212, -0.23686138035360149, -1.2542765482975431,
    -0.088546004100424472, -1.0992323811449216, 0.37956244783526838,
    -1.0889868395590669, -0.13065665812590066, -0.53080824581553354,
    -1.2542765482975431, 0.36282653432722578, -1.2663961782413873,
    1.0006962016075494, -1.0889868395590669, 0.29357466451508013,
    0.19758506186186264, -1.2542765482975431, 0.25111646407148186,
    -0.39862016775858355, 0.36781453911688716, -0.89199211460265082,
    -0.29804532591070948, -0.526081999159488, -0.300856874760559,
    0.098322643161362314, -0.034320325859740132, -0.67064041048235812,
    1.4719445848743427, 0.82290600272308279, 0.062249454525304046,
    0.97036935662208634, -0.42217213020187744, 0.079932604827573847,
    -0.5675853461793805, -0.36667284805220779, 1.4075918571693751,
    1.2114982011409856, 2.2415955880047318, -0.24578941559043629,
    -0.024888704254265842, -0.86903488912675009, 1.9315989431059803,
    1.0481720206161016, 0.479088869845552, 1.9237890301590703,
    -0.24976743206528609, 0.10023141232171635, -0.768411868053726,
    -0.36667284805220779, 1.102247297376963, 0.68697074377718637,
    1.9237890301590703, -0.39286761412727472, 1.2660030988172883,
    -0.8542536769469441, -0.82632720628384537, -1.6190139017108147,
    -1.7190380880139149, -2.5255027796801883, 15.054086511163366,
    1.2076687418165311, -0.51228747326671176, -0.49800266468981852,
    -2.1685420845801033, -1.6749370597723476, 1.6059824723134091,
    -0.31963264078775117, 1.740410353265434, -1.0995855958715393,
    -0.43233775637101324, -1.1273251343237227, -1.2523003797250447,
    1.9237890301590703, -0.13284618964532388 };

  static const double dv3[61] = { 0.374055097063873, 0.99999999999999911,
    0.99999999999999911, 0.45909819489488052, 0.29986107892633174,
    0.99999999999999911, 0.99999999999999911, 0.99999999999999911,
    0.99999999999999911, 0.29299990954137234, 0.25778854108715238,
    0.99999999999999911, 0.99999999999999911, 0.99999999999999911,
    0.99999999999999911, 0.073175039705779821, 0.40850895486294347,
    0.13005523428274457, 0.10633072256773909, 0.075921573244045332,
    0.019958726249765472, 0.99999999999999911, 0.787297783971491,
    0.152096474874261, 0.23921276996253737, 0.99999999999999911,
    0.99999999999999911, 0.79407890309498219, 0.99999999999999911,
    0.031456429276224447, 0.458129937429826, 0.99999999999999911,
    0.51133970743003521, 0.33356676593426315, 0.99999999999999911,
    -0.99999999999999978, -0.99999999999999978, -0.99999999999999978,
    -0.99999999999999978, -0.62746342971233249, -0.99999999999999978,
    -0.99999999999999978, -0.99999999999999978, -0.99999999999999978,
    -0.99999999999999978, -0.99999999999999978, -0.99999999999999978,
    -0.99999999999999978, -0.685618842752747, -0.99999999999999978,
    -0.99999999999999978, -0.99999999999999978, -0.99999999999999978,
    -0.99999999999999978, -0.15896644661612402, -0.2837801985985326,
    -0.40711124417233485, -0.99999999999999978, -0.0025308838185378723,
    -0.99999999999999978, -0.63946079872963013 };

  static const double dv[7] = { 35.017679410799971, 2.7732067349066645,
    2.3583999999999978, 8.5440140181839936, 19.245204152959982,
    71.679999999999993, 11.019467818247998 };

  static const double dv1[7] = { 16.006667391360498, 1.5159076757325942,
    1.5228834176467068, 0.270359855293063, 2.9831896272204474,
    18.879409036341606, 21.93091369821272 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.36463098291362456;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 61;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 427U * sizeof(double));
  *obj_Scale = 1.3638460662381608;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 61;
  memcpy(&obj_Alpha_data[0], &dv3[0], 61U * sizeof(double));
  obj_Prior[0] = 0.31999999999999995;
  obj_Prior[1] = 0.68;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int fb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[70] = { 0.94623810129502939, -0.66587135266072939,
    -0.5408773463247325, -0.46242780014728158, -0.55004512519832727,
    -0.610863197576876, -0.4859355692659465, 0.61395266737956355,
    -1.4587541355893838, -1.2212262096262827, -1.0241218162697996,
    -0.77331057728832153, -0.17453234216482127, 0.74613056372475062,
    0.32923937532212466, -1.0527636680196679, -1.2212262096262827,
    -0.6758016184416179, -0.83448899955775946, -0.610863197576876,
    -0.45028399730547608, 0.27484709915137728, -0.96038316017794334,
    -0.5408773463247325, -0.22604145967131103, -0.2279757914523862,
    -0.610863197576876, -0.38190727751052439, 0.50430425885534214,
    -1.1540238730552983, -0.5408773463247325, -0.22872072216547829,
    0.16717477792551771, -0.610863197576876, -0.43835941580411397,
    -0.80800372230648, -0.30124150160555546, -1.1078347324093578,
    0.99430431462844127, 1.2281840191410811, 0.26179851324723347,
    -0.13275389652488206, -0.87260712129120854, -0.22628945557638938,
    -1.1645304710178201, 0.045073791148352887, -0.11669672916763417,
    -0.17453234216482127, 0.16746638080814816, -0.54636187516320245,
    1.1279435349380382, -0.59757308493319483, -0.38246255562937742,
    -1.0698316547096287, -0.610863197576876, 0.22287675083974928,
    0.37205826389331675, 0.022657834893155489, 0.13947151697681809,
    -0.61979299813841271, -0.94399224716032448, 2.0071219348954528,
    -0.43952220789128077, -0.79695997987548051, 1.3465775531662798,
    4.2782604353945839, 0.98285556217927, 0.91147087996853537,
    -1.0471940529889308, 1.2626412872808415 };

  static const double dv3[10] = { -0.2780305526461847, -0.079024161929521247,
    -0.4015756870922832, -0.99999999999999989, -0.94009859127337292,
    0.552020828603928, 1.0, 0.5543415459912403, 0.57916220505672622,
    0.013204413289467514 };

  static const double dv[7] = { 61.342946735099979, 1.7005589714799998,
    3.2539999999999996, 8.5462292885699984, 19.736702028999996,
    80.399999999999991, 6.8175414477099974 };

  static const double dv1[7] = { 39.478411663802504, 1.8160013396703607,
    1.7638009920038993, 0.40924284290374385, 3.7794090043983872,
    13.75103301904657, 7.573657489756239 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.34006311140826334;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 10;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 70U * sizeof(double));
  *obj_Scale = 3.331292582140962;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 10;
  memcpy(&obj_Alpha_data[0], &dv3[0], 10U * sizeof(double));
  obj_Prior[0] = 0.40999999999999992;
  obj_Prior[1] = 0.59000000000000008;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int fc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[98] = { 1.0186546230291764, -1.8534071422388818,
    -1.1203682107911817, -0.087424443731320578, 0.34267551111188305,
    -0.72896589314472171, -0.81887693940551332, -0.1874163088855364,
    0.93513726607951708, -0.16230019905030935, 1.5089090431192236,
    2.0336166954094046, -1.9014592272991953, -0.728521275777765,
    -0.094832779054103353, 0.94715736588551247, -0.16230019905030935,
    1.1170272142445405, 2.3702687345224347, -1.9014592272991953,
    -0.73187893806411342, -0.17128347200968963, 0.86696215117902475,
    -0.16230019905030935, -1.3048945892215829, -1.296539478542007,
    -1.9014592272991953, -0.61574930905803438, 1.1524143707531602,
    -1.0166760618045405, -0.89927559269713431, 1.219269218640179,
    0.6356974669766513, 0.44352744100975183, -0.79737595833552677,
    0.026332769393316226, 0.0093305058289785362, -0.89927559269713431,
    2.190343771093092, 1.7239617953639224, 0.44352744100975183,
    -0.68178779582317883, 0.95468607292361263, -0.99458362238510045,
    0.13248995840842059, 1.0229887658868264, 0.696602058973002,
    0.052696329624927346, -0.9021112309083944, 1.3317893937005847,
    0.064783290316431444, -0.45709035650903923, -0.33026198631615783,
    -0.04647142621235454, 2.7885141093186991, -0.75726291666877543,
    0.059474490861254385, -0.025750569906254329, 1.0168604307846107,
    -1.2370381855989223, -0.80366021876499216, 0.052696329624927346,
    0.31288676714503938, -1.0823599343132391, 0.34113265325753817,
    0.20618749777310313, 1.1787025373114255, 1.7842530257368185,
    0.052696329624927346, -0.44449952013947747, -0.82398949086643281,
    0.19962042930167334, -0.89927559269713431, 1.6707954577678528,
    1.4565722721344658, 0.44352744100975183, -0.45555008026220917,
    0.82033443204711853, 0.31113346510128365, -1.0466706714264993,
    -0.19964261527235747, -0.77476287208471128, -0.33813478175989714,
    -0.18358665650666667, 0.80091684490209236, 0.35961771510217877,
    -1.1203682107911817, 1.3494182630222484, 1.3318004325772652,
    -0.72896589314472171, 0.457268088947847, 1.252262387574745,
    0.076514211890994291, -1.0466706714264993, -0.60662577845979937,
    -1.0439851754769252, -0.33813478175989714, -0.1432577950547391 };

  static const double dv3[14] = { -0.16479963910867856, -0.63838073928335493,
    -0.092609518451895162, -0.9503315547927923, -1.0, -1.0, -0.34193322777651736,
    0.0572134616133741, 0.25235822202604924, 0.691848872238355, 1.0,
    0.93585536715752426, 1.0, 0.25077875637793551 };

  static const double dv[7] = { 33.423259411797709, 2.8856221510617943,
    2.62022471910112, 8.4579708039662833, 17.855997572921325, 83.191011235954946,
    9.8898001241910016 };

  static const double dv1[7] = { 9.5178833816813633, 1.4506174891578507,
    1.3568974061014882, 0.20610781375583848, 2.4805921039427288,
    15.351899644683641, 8.4578714528450316 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.0304987094537181;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 14;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 98U * sizeof(double));
  *obj_Scale = 2.7756970575333568;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 14;
  memcpy(&obj_Alpha_data[0], &dv3[0], 14U * sizeof(double));
  obj_Prior[0] = 0.3146067415730337;
  obj_Prior[1] = 0.6853932584269663;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int fd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[49] = { 0.77007184762448522, -0.07969715762319457,
    0.76665795660593128, -0.46693489550216216, -0.43008326126879193,
    -0.93300150229176615, -0.19960657484940239, -0.18758857556685521,
    -0.63523885178832451, -1.1125391661581645, 0.090994985684391058,
    -0.13116024638899521, 0.62200100152784044, -0.14538103050630272,
    -0.24460312085635821, -0.53187420029106613, -0.13208849341167989,
    0.88607308281471964, 0.97563573755310551, 0.62200100152784044,
    0.17571177354188794, -0.042227783219275027, -0.90653416305910361,
    -1.1125391661581645, 0.74351741537955052, 1.8185064222512335,
    -0.93300150229176615, 0.159667829450188, -1.3111189095667355,
    0.230356250904856, -1.1125391661581645, 1.2480853297389574,
    0.61432095259479824, -0.93300150229176615, 1.3285783840538747,
    -1.285026367125965, 1.0187993537280393, 1.5019959611657947,
    1.2214710804684861, 0.6420332711531529, 0.62200100152784044,
    0.64625533282304271, -1.2562950282537166, 0.802293624497357,
    -1.1942433888870383, 0.82306287681663759, 0.22433979064822682,
    -0.93300150229176615, -0.15818691910569566 };

  static const double dv[7] = { 81.405883137166668, 0.81974551058333345,
    2.4616666666666673, 8.2485969112666684, 16.854469969833339,
    69.600000000000009, 3.6417167361000002 };

  static const double dv1[7] = { 37.662681673536817, 1.6230222186203553,
    1.2239269484496382, 0.2315006873718827, 2.0710786027932628,
    3.8585146874439058, 1.6128105316314634 };

  static const double dv3[7] = { -0.35085670636260646, -0.22600053871505257,
    -1.0, -0.24413114999291907, 0.28852485567071573, 0.64248628226336713,
    0.88997725713649511 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.66996994523248932;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 7;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 49U * sizeof(double));
  *obj_Scale = 3.0680505700141945;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 7;
  for (i = 0; i < 7; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.68333333333333335;
  obj_Prior[1] = 0.31666666666666671;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int fe_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[105] = { 1.3400776820544822, -1.3919834532126323,
    2.316359629022235, -0.57343133847881844, -0.20822660702559517,
    -0.0575576174287107, -0.48052693875785207, 1.1405608987822531,
    -1.2837296109036493, -0.91079179833393875, -0.68757934250162589,
    -0.60891892435188211, -0.0575576174287107, -0.27698213087126333,
    -1.2747473962741165, 1.484464101337535, -0.6361406130270304,
    -1.4195540867029774, -1.5957067357752011, -1.4808005211204269,
    0.12656602690250512, -0.84121237084189227, 1.4900396594650314,
    -0.018175446086486521, 0.67158149119767441, 1.6891548220918211,
    -1.1249897951974979, -0.176710618098806, 0.36779295990370958,
    -0.17074312636914107, -0.70480340935375752, 0.88845943962898588,
    0.41631225223762353, 1.0098745603400765, -0.270113644340903,
    0.62236192886433916, -0.24280509501540531, 0.39380133187387617,
    1.4224123460264819, 0.96465791463844641, 1.3656852862630056,
    -0.24759534096497662, 0.45634106871610214, -0.16326922968670821,
    -0.70480340935375752, 0.75802701760587443, 0.1517775904144511,
    1.0098745603400765, -0.26100149835642628, 0.52739932357582,
    -0.15132891159415771, 0.325138535547149, 1.2058888907438239,
    1.8681614474569908, 1.3656852862630056, -0.42258959423481585,
    0.46460697007655466, -0.15789443675959591, 0.46246412820060334,
    0.75311713879153519, 0.46532448880330074, 1.0098745603400765,
    -0.28874048632758931, -2.1412241315017893, 0.64117400292420257,
    -1.1854429836408473, 0.14740949032434889, -0.057036599983307665,
    -1.4808005211204269, 1.8752811615772869, 1.0340542510180868,
    0.11429773288027584, 0.39380133187387617, 1.1480854098062305,
    1.464635109208327, 1.0098745603400765, -0.33895295190446212,
    1.0288460286699348, 0.11432098378788788, -0.36148942772012205,
    -0.25462546203092479, -0.67951373141927207, 1.0098745603400765,
    -0.058892760869726668, 1.0013105614480735, 0.11542392285550487,
    -1.0481173909873931, 0.78423023718071116, 0.67981811534080561,
    1.0098745603400765, -0.26522434585945004, 0.92127883509373187,
    0.15373018053579388, 0.39380133187387617, 0.93025637038919562,
    1.0396522380107756, 1.3656852862630056, -0.22406689508509336,
    2.0098043176492961, 0.636724209369063, -0.43015222404684905,
    -1.8095877712457038, -2.1396292178962484, 1.0098745603400765,
    1.1868370030844562 };

  static const double dv3[15] = { -0.030725809276996051, -0.33370730694432749,
    -0.45036693060266669, -0.34637034584101334, -0.98523269662416835,
    -0.28539560968993516, -1.0, -0.533635739369711, -1.0, 0.80497097294034958,
    1.0000000000000002, 1.0000000000000002, 1.0000000000000002,
    1.0000000000000002, 0.16046346540846859 };

  static const double dv[7] = { 40.216798063676471, 1.6921387982352938,
    2.4264705882352939, 8.5244870322352941, 19.008113269852942,
    72.970588235294144, 4.8610163059852942 };

  static const double dv1[7] = { 9.1488739947726962, 1.7230725212283922,
    1.4563927679868587, 0.2437705787167366, 2.7987690342632621,
    16.862898060300857, 6.5720677765720579 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.004368143439887;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 15;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 105U * sizeof(double));
  *obj_Scale = 2.9172355627730164;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 15;
  memcpy(&obj_Alpha_data[0], &dv3[0], 15U * sizeof(double));
  obj_Prior[0] = 0.82352941176470584;
  obj_Prior[1] = 0.17647058823529416;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ff_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[210] = { 0.38262984359283592, -0.6415308195156133,
    0.27893416098834761, -0.24658118040604501, 0.36026579713960061,
    1.6058540317043875, -0.26217125146668424, 0.086057330399581064,
    -0.6171498715621111, 0.27893416098834761, 1.4012287081457881,
    2.3936011595040663, 1.1063294999216025, 0.21613031671859786,
    1.4489925342871983, -0.0018207606608641937, 0.087848230012421355,
    -0.22682618786578015, 0.6656605370436578, 1.1063294999216025,
    -0.693897984979031, -0.51658522008531049, -3.1667801490627245,
    -0.1032377009635045, -0.56317170155664453, -0.26323299590658233,
    0.60680496813881746, -0.48162790958534563, -1.3933165464649033,
    -0.0022657474980691027, 0.66110602294019971, 0.8336784143025977,
    0.94400709646473568, -0.89176862720953765, -0.14121757685731437,
    -1.3488162606548977, -0.487792675180095, 0.66110602294019971,
    1.3224141313233349, 1.3215404936155519, -0.39224409542675259,
    -0.23394342411707217, -1.2475055535568496, -0.15819643913962025,
    0.66110602294019971, 0.63909742767466626, 0.53589437255723615,
    -0.89176862720953765, 0.15967047290579409, -1.3227404966046461,
    0.0997491669261764, 0.66110602294019971, 0.898909680524313,
    1.1982687988496508, -0.39224409542675259, 0.10844995625761768,
    -1.0598724656914351, 0.29255538618751431, 0.66110602294019971,
    0.5105371518205164, 0.43421792950276894, -0.39224409542675259,
    -0.21172998491713524, -1.1281340236756836, 0.56099380652593112,
    0.66110602294019971, 0.32185126134439451, 0.021703729059769444,
    -0.89176862720953765, 0.98831356629615041, -1.5376691474912247,
    0.0038710431580830417, 0.56556305745223656, 0.67688387340334433,
    0.72450735504118435, -0.89176862720953765, -0.53812403843160572,
    0.26829628526770039, 1.2133432416957763, -1.5363821832829503,
    0.30124806644009017, 0.084118282911049835, -0.89176862720953765,
    1.4691969695246827, 0.47327682682241967, 1.097232638318361,
    -0.29432363193943079, -0.125764312729036, -0.74281900467720741,
    -0.39224409542675259, 0.72995863163520025, 0.33050413636509895,
    1.0427853885443694, -1.5363821832829503, -0.1966253887987566,
    -0.7863338957516538, -0.39224409542675259, 1.7706467185032011,
    0.49880691990557458, 0.95543418460018315, -1.5363821832829503,
    -0.15549111344145189, -0.709584963776443, -0.39224409542675259,
    2.0269188446359556, -0.37223012861191213, -1.3918170578172537,
    3.2407660911152019, 0.70107173353254626, 0.91887825464291784,
    -0.39224409542675259, -1.834267496115517, 0.024113293040183992,
    -1.1923891234812305, -1.5363821832829503, 0.42598735700118384,
    0.34320552774203833, -0.39224409542675259, 0.1189225274691459,
    0.67169406718940949, -1.7354591354548934, -1.5363821832829503,
    0.22008214608252813, -0.089994925301154, -0.39224409542675259,
    0.19092161351448517, 0.21169813483350458, -2.0133782336650392,
    2.0942505052596458, 0.31336956238753821, 0.2298103502163476,
    -0.39224409542675259, -1.201481163749224, -0.92958862457543834,
    -1.5681861479889652, 0.852191953916126, 1.0114971457270165,
    1.3613348024540446, -0.39224409542675259, -1.2535820558852544,
    -1.0123241408743986, 1.8305560878091829, -0.29432363193943079,
    -0.12029293854866741, -0.84744103405284343, -1.8908176907751075,
    0.50532652705392278, -0.88696250292074352, 1.8852757226756327,
    -0.29432363193943079, 1.0412674242956614, 1.8971370753851318,
    -1.8908176907751075, 0.8085030211523726, -0.94951586078178363,
    1.7971456358962867, -0.29432363193943079, -0.19594305264692066,
    -0.91307598690418545, -1.8908176907751075, 1.7289922929346855,
    -0.048396444981617909, -0.49255028141159291, 0.087848230012421355,
    1.4766885180166494, 1.2362276256833842, 1.1063294999216025,
    2.3456753728118507, -0.044397237439975222, -0.28006068905718934,
    0.27893416098834761, 1.137638866068799, 0.70369110330564755,
    1.1063294999216025, 0.18995853630269391, 0.06099502013146299,
    -0.277519749649049, 0.087848230012421355, 1.080867002213203,
    0.64282845989655146, 0.60680496813881746, -0.3395482146881742,
    0.14005906725385969, -0.26585216306565451, 0.37447712647631076,
    1.0905300809243219, 0.83889757264872256, 1.1063294999216025,
    0.11850082805467839, -0.78782263093993887, 0.85465609202455994,
    -1.2497532868190613, 1.5895586562043553, 1.4018125050407273,
    1.1063294999216025, 1.2055451837660882, -0.028226946817809618,
    -0.24858977572870214, 0.087848230012421355, 0.99322898086735556,
    0.61445205881137466, 0.60680496813881746, -0.54082531663008182,
    -0.17135955286979007, -0.28779095648131664, 0.087848230012421355,
    1.0181408903122429, 0.78293143563606937, 0.60680496813881746,
    -0.42937123959105422 };

  static const double dv3[30] = { 1.0, 1.0, 1.0, 0.9307652367760807, 1.0, 1.0,
    0.59017267340871826, 0.96230234133894, 1.0, 0.476751145629239,
    0.22929497713991018, 1.0, 0.40236210921498633, 1.0, 0.10631677549765949,
    -0.536244189529464, -1.0, -0.81579208680346971, -0.066426890444780673, -1.0,
    -0.73966766102671222, -0.930763249891818, -1.0, -0.54874019981146, -1.0,
    -1.0, -1.0, -0.060330981497829693, -1.0, -1.0 };

  static const double dv[7] = { 42.838198655033587, 1.7710027019731558,
    2.7080536912751687, 8.2680789284429572, 17.595177659865779,
    76.711409395973178, 2.8369477716375848 };

  static const double dv1[7] = { 11.632449557966867, 1.320009831503576,
    1.046649530808194, 0.40346975498750692, 3.2367138357082919,
    12.011422098903164, 1.0670515171764905 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.82202729611449266;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 30;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 210U * sizeof(double));
  *obj_Scale = 2.5940735280688867;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 30;
  memcpy(&obj_Alpha_data[0], &dv3[0], 30U * sizeof(double));
  obj_Prior[0] = 0.37583892617449666;
  obj_Prior[1] = 0.62416107382550345;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int g_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[140] = { 0.23322441563256449, 0.0022208604876679211,
    0.28831301369052315, -1.4929202933758, -1.3638765163046567,
    0.833293743499819, -0.580962521334987, 0.18506931448275799,
    0.023297608727269145, 0.79368927332046491, 0.23248775685867232,
    -0.33633476267679779, 0.087972360017572054, -0.26389240591865482,
    0.736777133344595, 0.37257386021338729, 0.79368927332046491,
    2.4093895391552138, 2.5562777622983623, 0.46063305175869551,
    -0.35405502367949104, -0.94712293662649361, -2.9334236026899183,
    -0.15389121348567603, 0.24546269328948836, 1.2420346212208775,
    2.3239365104643128, 1.5173619373815503, -1.1661003803953338,
    -3.0157513900336803, -0.28023527839316142, 0.06799418239393501,
    0.69642794377403983, 0.087972360017572054, 2.6622067361960631,
    1.4832948640245673, -0.10628650063233604, -0.848783570476846,
    0.644701759949008, -0.091303706562918044, -0.65734902346467483,
    0.09313941059833783, -0.71262359073849868, -0.10294551435939729,
    -0.848783570476846, -2.3815716129341764, -0.30079759754677804,
    -0.65734902346467483, -0.59093325244665018, 0.58315687582584952,
    -0.1452495284072631, -1.1646437327455597, 0.021892122987267539,
    -0.6251452527225384, -1.0300097152057983, 0.59114690390752145,
    -0.51774118452807549, 0.92257415820729116, 0.8568613057742076,
    0.39973441951779165, -0.0021626792298082217, -1.4026704069469218,
    0.77693313883355608, -0.37734133496297012, 0.77886067624340649,
    -0.848783570476846, -1.0788920637625923, -1.2964118791042096,
    -1.0300097152057983, -0.14138469608027224, 3.2055595811365674,
    -0.70988829806787435, 0.8568613057742076, -0.83124588889788331,
    -0.21987365182922594, 2.6965972022054361, -0.67280556249294765,
    0.0763909790307633, -1.1405171741937656, -0.28023527839316142,
    0.98550400330556576, 1.178867245011362, 2.6965972022054361,
    -0.60430523079083676, 1.4317401303237529, -2.4923948116825483,
    -0.596095440661875, 0.062745871800104311, -0.2270986155047616,
    0.833293743499819, 0.84845836503827765, 0.23675745840507337,
    -2.3790576911025263, -0.15389121348567603, -0.93196574103262009,
    -1.5319303246804854, 0.833293743499819, 0.45196337105027579,
    -0.65060874824740844, -2.0072379373424778, 0.28831301369052315,
    -0.28605725980554325, -0.36261146102874076, 0.087972360017572054,
    2.0954044135689722, 0.43257743345533145, -0.28846310764222066,
    -0.09071918103193323, 0.50062419411408887, 0.85968369787973153,
    0.833293743499819, 0.854392140704073, 0.606055174339858,
    -0.25950956308694478, -0.09071918103193323, 0.40781388330086948,
    0.83018188228537926, 0.833293743499819, 0.72545387671107353,
    0.21708767711190696, 0.045529695040620051, -0.09071918103193323,
    -0.92205982944889586, -1.2949854429505183, 0.833293743499819,
    0.82194477830114054, 0.38719081692706558, -0.24574563427849244,
    -0.09071918103193323, 0.12555531235911949, 0.28784866457693059,
    0.833293743499819, 0.87222315453847266, 0.47558682113736106,
    0.24788290547843403, -0.72243950556936043, -1.5735141231064902,
    -1.7023300209234569, -3.2659738656525388, 0.69519568310266833 };

  static const double dv3[20] = { 0.67383987376680188, 0.534943911464928,
    0.13702063721264499, 0.2457126938433363, 0.39701435471426783,
    0.69613089145612994, 0.14583901750757175, 0.99999999999999933,
    0.41373678517122464, 0.39474126706754487, 0.15907870478576283,
    0.57064580238045937, -0.29064856399466515, -0.32331076366075873,
    -0.22409723768066378, -1.0000000000000002, -1.0000000000000002,
    -0.82484365682613925, -1.0000000000000002, -0.70580371720844548 };

  static const double dv[7] = { 33.347437568327905, 2.8782324416131191,
    2.2436065573770509, 8.57455701717706, 19.813706365344288, 70.583606557377124,
    9.3425756859475548 };

  static const double dv1[7] = { 13.80741279997642, 1.6023777300021906,
    1.5829789879441396, 0.25267407031093647, 2.7216219877453538,
    16.100437027493165, 12.498131742238227 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.72741390726864941;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 20;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 140U * sizeof(double));
  *obj_Scale = 2.4304453356483711;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 20;
  memcpy(&obj_Alpha_data[0], &dv3[0], 20U * sizeof(double));
  obj_Prior[0] = 0.16393442622950821;
  obj_Prior[1] = 0.83606557377049184;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int gb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[133] = { 0.67641805137184507, -0.57233459236718276,
    -0.46528992682504544, -0.585288623624688, -0.24367707257875851,
    2.4149346186352645, -1.0255862731964458, 1.0462998010296414,
    -0.71012079305795672, -0.46528992682504544, -1.2112874272731566,
    -0.30197372253221128, 2.8193495069234666, -1.4800054535470926,
    1.2959740963894277, -1.1617423155819748, -0.3970083862008249,
    -0.93047763958184726, -0.21466528116770586, 3.2237643952116688,
    -1.4634750591933212, 0.90666194682354018, -0.98605411889089456,
    -0.46528992682504544, -1.3366011127169015, 0.056777959229525769,
    2.8193495069234666, -1.4863134554814064, 1.6300675938152855,
    -1.4720951026761144, 0.96862242628358419, 0.55357967203917413,
    0.52037121919841156, 2.0105197303470623, 0.017206020188985725,
    0.148960189406711, -1.07349404086186, 1.3100301294046863,
    -0.3058640944014413, -0.21213922964736309, 0.392860177194254,
    0.41412276818066585, -1.1264757976954365, -0.15321992897184192,
    2.0611270762711111, 2.2964981851220712, 2.1128846507164765,
    0.392860177194254, 0.24635851721933141, -0.83683993747249386,
    -1.1691754085813608, -1.4895130361883522, 2.3233763445345308,
    2.32457321078241, -0.011554711093948112, 0.063618741255551128,
    -1.0524730136665552, 0.58095855937965524, 2.8805055637617567,
    0.15265841932924065, -0.14747112564135248, 0.392860177194254,
    0.18908439695452736, -0.91506673693441343, -1.3481522845776857,
    -0.055600683079722657, 0.18490501013744029, 0.086960953160244964,
    -3.2468738173995648, 9.10130539463705, -0.85147642356577458,
    -0.015510854401638328, 0.90034088565936332, -0.11729884596240174,
    -0.2608492720085176, 0.392860177194254, 0.51916456717934523,
    1.9892048144436874, -0.91456039060281547, -0.3970083862008249,
    -1.3455299390131659, -0.73682815871532126, 3.2237643952116688,
    -1.4395896767586616, 1.5689036866298212, -0.70691207167892545,
    -0.533571467449266, -1.1309176098785285, -0.82186463571001922,
    2.0105197303470623, -1.0594060954593796, 1.466465266361082,
    -0.17691370991637889, -0.3970083862008249, 0.22474727127959668,
    0.49579037540662563, 1.6061048420588602, -0.40550518937740482,
    1.8176298551451706, -0.57060828065906788, -0.533571467449266,
    -0.34299665137946234, -0.077129666877035138, 2.4149346186352645,
    -1.1861188352775682, 0.81755141498381645, -1.2709906672334803,
    1.6514378325257888, -0.20118006201570141, -0.18141553255956711,
    0.79727506548245608, 0.09491726597885855, 0.745661806002116,
    -2.4584023948796236, 1.5148747512773477, -0.45473049086242784,
    -0.23217717185899031, 0.79727506548245608, 0.096261532463016428,
    -0.66439535903696256, 0.051939862583007472, -1.0115422518188091,
    1.3761482201526762, 1.7819849111679795, -0.011554711093948112,
    -0.70495930326465128, -0.69602872158124829, -0.1207364758290848,
    -0.87497917057036823, 1.4098802852180359, 1.7132239041392261,
    -0.011554711093948112, -0.46918510832963412 };

  static const double dv3[19] = { 1.0, 1.0, 0.325961721024672,
    0.8275883032278446, 1.0, 1.0, 0.37452358178851397, 1.0, -0.28356023486683724,
    -0.02250136914673178, -0.046554090067537586, -1.0000000000000002,
    -0.4831511970878738, -0.64456525497397288, -1.0000000000000002,
    -0.27330322763162951, -1.0000000000000002, -0.77443823226644826,
    -1.0000000000000002 };

  static const double dv[7] = { 29.734141087071428, 3.3592235548214284,
    2.781428571428572, 8.4761400003714282, 17.9810097405, 90.171428571428564,
    12.927381401285711 };

  static const double dv1[7] = { 9.00344721814747, 0.66529989607397644,
    1.4645246590193155, 0.25142744695784686, 3.1153877649060959,
    14.836249044630033, 7.9607653141062009 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.4874754007220354;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 19;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 133U * sizeof(double));
  *obj_Scale = 2.9413638308306775;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 19;
  memcpy(&obj_Alpha_data[0], &dv3[0], 19U * sizeof(double));
  obj_Prior[0] = 0.87142857142857144;
  obj_Prior[1] = 0.12857142857142856;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int gc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[35] = { -0.79147904269882507, 2.1399579841991589,
    -1.4721768302879878, 1.4011136969210014, 1.2520172816366615,
    -2.6598552464321785, -0.89892028085499154, -0.77606117216314841,
    2.2236754127759, -0.58582601557610781, 1.9637338317942072,
    1.6344841713632068, -2.6598552464321785, -0.83408906498546587,
    -0.87456218311732514, -0.12537882450867527, -0.88127628714673434,
    1.9494671744939518, 2.6246774566038806, -0.33248190580402026,
    -0.50002047875145383, -1.0866842511688788, 1.5272719395473167,
    0.30052479913577218, 0.96877444466617257, 0.588651102471748,
    -0.66496381160804285, 0.43102780485336295, -0.60064072268873725,
    1.1964312535166972, 0.0050745275651455646, 2.0035599655041976,
    1.9408698605609034, -0.33248190580402026, -0.33845485040346718 };

  static const double dv[7] = { 29.683240945114477, 3.6090623389465621,
    2.4931297709923648, 8.4471603215954154, 17.459608543435102,
    83.999999999999957, 12.606030803587778 };

  static const double dv1[7] = { 8.6649047733840376, 0.63991285817973942,
    1.3538657381277139, 0.18653065984503067, 2.1835257441424485,
    18.0460948257937, 8.31114045561618 };

  static const double dv3[5] = { -0.6444501674789, -1.0, 0.026561922887810119,
    0.61788824459109, 1.0000000000000002 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.4456231993647293;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 5;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 35U * sizeof(double));
  *obj_Scale = 4.71552072223836;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 5;
  for (i = 0; i < 5; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.068702290076335881;
  obj_Prior[1] = 0.93129770992366423;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int gd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[357] = { -0.63996618848883768, 0.64946426598738771,
    0.54810693106175468, -0.58791472205863515, -0.033605599874163575,
    0.41754399151579291, -0.56048694690690182, -0.65433583702496423,
    0.41486634095838787, 0.63865909654328779, 1.5739072731284351,
    2.1724645825630109, 0.70147390574652824, -0.49301152938997023,
    -0.53461701747292467, 0.79332968658780656, 0.54810693106175468,
    -0.64742790118883953, -0.553431209439232, 0.41754399151579291,
    -0.47848578334229186, -0.48885644172942888, 0.78203885934589523,
    0.54810693106175468, -0.73589507889034456, -0.510213751986495,
    0.41754399151579291, -0.47752918565712243, -0.37424430127986824,
    0.79794858504210109, 0.54810693106175468, -1.1123769095935028,
    -1.0164067215303849, 0.41754399151579291, -0.28909379261025769,
    0.30127194781949718, 0.3848619048126809, 0.1858982691356208,
    1.7906867369906918, 1.6362761935471648, 0.13361407728505753,
    -0.080245883238200574, -0.87764555954543655, -0.85639217905783871,
    -0.90072771664277973, 0.31411485859183141, 0.53531018068092584,
    -0.15031583694567785, -0.10397441995446025, 0.53218189780285741,
    -0.48448333614628725, -0.90072771664277973, 1.7700283115633135,
    2.2458735690916121, -0.43424575117641323, 0.48811975225584575,
    -0.99856679824728956, -0.53579483778478332, -0.17631039279051269,
    0.013101944500895399, 0.534590423084643, -0.71817566540714861,
    0.140444196102213, 0.6427542388583608, -0.37767323019359617,
    0.27645043461715429, 0.92806150621488714, 0.4689794662700279,
    -0.15031583694567785, 0.010801036896779706, -0.81491108590379724,
    -0.63956211521671769, 0.1858982691356208, -0.084246763017893481,
    0.066434096353936392, -0.15031583694567785, 0.16740741667499012,
    0.15372379604392536, -0.30126805298070775, 1.1819720894324883,
    1.040111269995927, 0.6049860668619772, -0.15031583694567785,
    0.21010690556676362, 0.38633783929112814, -0.70154316948222106,
    -0.99127988212431317, 1.1334148065357823, 0.98201996494954624,
    -0.43424575117641323, 0.3479511244719532, -0.69084970092545483,
    -0.37325328350054221, 0.27645043461715429, -0.078764523751141374,
    -0.40772403630268728, -1.0021055796378839, 0.615172976103745,
    -0.58869505467681371, -0.45014353760513626, -1.0818320476058467,
    0.14264595842115746, -0.27102317001788062, -1.0021055796378839,
    0.63206288517851317, -0.22706023453096361, 0.47336610194294271,
    -0.17631039279051269, -0.3435306228169947, -0.709609401216962,
    -0.71817566540714861, -0.34878730490929455, -0.57353354239574383,
    -0.52221166793438911, 0.54810693106175468, 0.29629327141856271,
    -0.03985633184853888, -0.71817566540714861, 0.376738292876489,
    -0.62804376128439043, 0.69563590604955849, -0.26686255827204597,
    -0.21656128229954494, -0.58320061083386809, -1.0021055796378839,
    -0.31099161013236842, -0.41435318071057214, 1.1423326194389818,
    -1.0818320476058467, -0.41607025230801081, -0.77810413937793,
    -1.0021055796378839, 0.04534675002423625, 1.2905368220167588,
    1.4110953675719424, 1.4536285858770885, 0.61415969430577511,
    0.88543300590147545, 0.13361407728505753, -0.60438205652886889,
    -1.1066605250653065, 1.1988141142126578, -0.99127988212431317,
    0.17016613953365597, 0.28462637645742034, -0.71817566540714861,
    0.22403858826810502, -0.98501303895348558, 1.1407467821266697,
    -0.99127988212431317, 0.022388713495423259, 0.10385747432311059,
    -0.71817566540714861, 0.34963094923270055, -0.44425018761528307,
    0.13036752946144373, -0.26686255827204597, 1.1531658637642748,
    0.75971646617832722, 1.8371935626694698, -0.66292035395673632,
    -0.59202818518099787, 0.19974484597394715, -0.99127988212431317,
    -0.75720475092700645, -0.2326479017924776, -1.8538953223300902,
    0.61330236544291117, 1.0526641196758464, -1.3649228409337502,
    -1.3534885440504467, -1.3854936692667861, -0.076226651012549079,
    -1.2860354938686194, 3.1981085561245104, 0.99990229846901035,
    -1.1303520489861991, -0.44796688923511274, -1.2058580515809885,
    -1.2344258564567583, 1.2693337342079991, -0.41709150641146375,
    0.86111569476081085, -1.557208814473835, -0.44796688923511274,
    -0.98919205132398269, -0.7018298194766982, 1.2693337342079991,
    -0.38215514043435611, 1.0775260788323782, -0.79782093652949215,
    -0.44796688923511274, -0.33196340778118422, -0.584499642622013,
    1.2693337342079991, -0.51471512037006939, -0.48539434133929532,
    -0.43130735013149035, -0.085758227308979237, -0.43467668969602768,
    -0.2721112660763409, 0.70147390574652824, -0.0941587493234442,
    -0.924492802883126, -0.50988549942666483, 0.1858982691356208,
    0.13830821703622934, 0.28817774168152677, -0.43424575117641323,
    0.45895289040507947, 0.42671569074460136, 0.30937824344463127,
    0.0047939381725542445, 1.6355644433851737, 1.9885432135516776,
    -0.71817566540714861, 0.67211241959103862, -0.37515768576798458,
    -0.16504381036789426, -0.085758227308979237, -1.0035054136336443,
    -0.8872125085949274, 0.13361407728505753, -0.0037314390839241589,
    -0.036324766481316065, -0.535144949861012, -1.44404070953198,
    -0.20877904575723558, -0.42915279088803732, -0.71817566540714861,
    0.92766423692413735, -0.3645404794045396, -1.0881002270938815,
    1.0008677584694217, -0.065605983754392222, 0.22665702374155658,
    -0.15031583694567785, 0.28704780956975778, 0.16126020784240738,
    0.78936241978994148, -1.3534885440504467, 0.93907465045780536,
    0.46407994848781503, 0.41754399151579291, -0.04622045276999,
    0.31192977489669532, -0.1629213720471113, 0.0047939381725542445,
    0.45774893693265362, 0.2283126859558231, 0.70147390574652824,
    -0.11313695297422899, 0.11507611362636942, 0.16923205781937956,
    -0.085758227308979237, 0.97194027527917259, 0.60283704294741591,
    0.13361407728505753, -0.030703927138320538, 0.55004757591463127,
    -2.7895780216074408, -0.719623385679713, 0.77448761232869534,
    1.0144326422214236, 0.41754399151579291, -0.19081017980302128,
    -1.2576553269242425, -2.102161318212175, 0.54810693106175468,
    0.40384471211330708, 0.85426586650523673, -0.15031583694567785,
    0.32987995695815786, -0.31733316231051678, 0.333163397980817,
    0.0047939381725542445, 1.2397830085506369, 2.2989338890745969,
    0.41754399151579291, -0.18833239941583146, -0.37960245748218358,
    0.35920591082584624, -0.085758227308979237, -0.45585573139517538,
    -0.3184937279061324, 0.41754399151579291, -0.18004131871798273,
    -0.50440145911836987, 0.806396373789486, 0.0047939381725542445,
    -0.27198017475601405, -0.24773545203137581, 0.41754399151579291,
    -0.20188151935332219, -0.38033708706395264, 0.62512353541275523,
    0.0047939381725542445, -0.33220101688781634, -0.52284412158591331,
    0.70147390574652824, -0.23429815236565618, -0.34129587764994829,
    0.28378274071091431, 0.0047939381725542445, -0.41115704269418879,
    -0.58014001034953588, 0.41754399151579291, -0.16763577253472534,
    -0.24997581152203943, 0.30182877677554149, 0.0047939381725542445,
    -0.45302851105304193, -0.37298898148745879, 0.70147390574652824,
    -0.23295792978800153, -0.3456687382268856, 0.34519897503269253,
    -0.085758227308979237, -0.60107520918841406, -0.54481491568169671,
    0.41754399151579291, -0.20631641558326264, -0.34908030289806707,
    0.34292519539565647, -0.085758227308979237, 0.12285394831690247,
    0.38636235692102378, 0.41754399151579291, -0.17495774454745089,
    -0.22457287346073637, 0.29387655561167586, 0.0047939381725542445,
    0.22225270515295803, 0.38287228517646771, -1.0021055796378839,
    0.473999872321502, -0.27999638567226409, 1.0931097735116302,
    -0.90072771664277973, -0.96422427144034706, -0.729188464158197,
    -2.7056850650222963, -0.25480843130032582, 0.0023773403240025205,
    0.52576292064967389, -0.99127988212431317, -0.91076759283564124,
    -0.57514894319489607, -1.2860354938686194, 1.6390383110935651,
    2.0459312866320905, -1.9326181785906014, -0.44796688923511274,
    -1.1321182395677738, -0.99292491331562438, 1.2693337342079991,
    -0.25909070642785437 };

  static const double dv3[51] = { 1.0, 0.21380741599179842, 0.26612721423764374,
    1.0, 0.75888904363086085, 0.84585106166040058, 0.47547640156407195,
    0.29055672388310272, 0.9624316638143614, 1.0, 1.0, 0.739326118867734, 1.0,
    0.46026541706974827, 0.0087669514357357325, 1.0, 1.0, 0.73732979325220538,
    1.0, 0.051712716967292037, 0.26682096715682524, 1.0, 0.98992996206461537,
    0.22970337230707891, 0.18529020937433177, 0.91136081791300771, 1.0, 1.0,
    -0.21990536802983465, -0.99999999999999989, -0.99999999999999989,
    -0.99999999999999989, -0.99999999999999989, -0.99999999999999989,
    -0.61081588034589329, -0.99999999999999989, -0.99999999999999989,
    -0.57923991329058522, -0.10600670178552485, -0.747683054284925,
    -0.99999999999999989, -0.99999999999999989, -0.99999999999999989,
    -0.99999999999999989, -0.99999999999999989, -0.99999999999999989,
    -0.99999999999999989, -0.99999999999999989, -0.99999999999999989,
    -0.12999493345405291, -0.99999999999999989 };

  static const double dv[7] = { 44.367455670411722, 2.0392286616823507,
    2.0947058823529385, 8.4062493485882257, 16.859703933235281,
    75.176470588235176, 25.657756813111739 };

  static const double dv1[7] = { 15.905185810592648, 1.1309073043472302,
    1.1043358208854026, 0.237785499057945, 2.3026919181637, 21.131975530849157,
    29.930461304566673 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.97391398530097173;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 51;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 357U * sizeof(double));
  *obj_Scale = 1.5325264555157929;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 51;
  memcpy(&obj_Alpha_data[0], &dv3[0], 51U * sizeof(double));
  obj_Prior[0] = 0.29411764705882348;
  obj_Prior[1] = 0.70588235294117652;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ge_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[49] = { -0.6282525454203326, 1.0912168023986311,
    -0.76330840073029793, 0.68344474157841917, 0.446683958684434,
    -0.84187863209219349, -0.52548669659646952, -0.6343125414561539,
    1.0723888120361156, -0.76330840073029793, 0.49998090631385061,
    0.41844055811811642, -0.84187863209219349, -0.55723697007748052,
    -0.62516686286920253, 1.1121588656013257, 0.54522028623592833,
    1.011437944944847, 0.74216336960339135, -0.84187863209219349,
    -0.50179145032282779, -0.85522678500591975, -0.30793144213224027,
    -0.54522028623592689, -0.66522560330334146, -0.872022883777243,
    -0.31413381794484763, 0.94246284599593211, -0.78479418086313846,
    -0.54710327343869269, -0.54522028623592689, -0.22173947610216016,
    -0.10290285958388466, -0.31413381794484763, 0.68277880472227925,
    1.2039421091316838, -1.2210594444140646, 1.9627930304493402,
    0.96708681212226233, 1.5479530519952627, 1.532973031570863,
    -0.81465364983553656, 1.1834341234146857, -1.219618873398344,
    -0.32713217174155579, 0.53481839644216989, 0.69650804844567848,
    1.532973031570863, -0.76479279417944446 };

  static const double dv[7] = { 32.090793182857126, 3.5338981806190461,
    1.1999999999999993, 8.60591986738095, 19.113945407619042, 55.142857142857117,
    10.5502248557619 };

  static const double dv1[7] = { 14.607377542286232, 1.347040152011866,
    0.91706052144882977, 0.20519006890765487, 2.5797573429204865,
    22.738262278119915, 9.7180321040237914 };

  static const double dv3[7] = { -1.0, -1.0, -0.242821017722152,
    0.78692671292551886, 1.0, 0.12664463239087126, 0.32924967240576175 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.36197483194670044;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 7;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 49U * sizeof(double));
  *obj_Scale = 3.9500881076315415;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 7;
  for (i = 0; i < 7; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.4285714285714286;
  obj_Prior[1] = 0.5714285714285714;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int gf_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[42] = { -1.2305607699120547, -0.65372490742422473,
    1.043088752219105, 1.6292525265796152, 2.1936602728455785,
    -0.60679433569890606, 0.64716213522014232, -1.2668632306768335,
    0.082364063483315764, 0.81501789964386617, 0.87889596392532576,
    0.92080002131059735, -0.60679433569890606, -0.43268615093285628,
    0.25096224897533537, 0.998640612103787, -1.6937614786837571,
    0.5305625087392164, 0.282162194634563, -0.60679433569890606,
    1.1785748321768845, 0.30160405586020561, 0.80908493173308194,
    -1.6937614786837571, 0.052480481978377333, -0.59962700728528617,
    -0.19140492468354758, 1.4638163967736051, -1.3318777173044622,
    2.2986647498566732, -2.3779740364094728, 1.3038037244478269,
    1.3125022468042391, -2.6837413907756984, -1.5349842129137321,
    -1.3586754879255778, 2.3957718445403913, -1.0095489209580419,
    1.5392757398713339, 1.2715216567728647, -2.6837413907756984,
    2.3040164936504381 };

  static const double dv[7] = { 42.373097922647069, 2.1865277069313729,
    2.5852941176470594, 8.1666956800098056, 16.965908064019612,
    74.764705882352942, 3.0755963837058831 };

  static const double dv1[7] = { 14.289175969670913, 1.1877145678763543,
    0.87692047336045187, 0.420172417610022, 3.1950999216886404,
    14.444277684724511, 1.1276842225107406 };

  static const double dv3[6] = { 0.049938899854881882, 0.78159534980268419,
    0.99999999999999978, 0.036227734966793532, -0.86776198462435983,
    -0.99999999999999978 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.3395198735926177;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 6;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 42U * sizeof(double));
  *obj_Scale = 5.8653653408207873;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 6;
  for (i = 0; i < 6; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.088235294117647051;
  obj_Prior[1] = 0.91176470588235292;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int h_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[175] = { 0.31614299294664289, -0.04428389405825351,
    -0.63248195440613486, -1.9398642389896366, -1.7203258777956663,
    0.86539366372792459, -0.50517337533147011, 0.34561173299474734,
    -0.086793895343832708, 0.70056397317967378, 0.12072616153556759,
    -0.53679757082623614, 0.13186951066330824, 0.061686945127461965,
    0.91346142444497447, 0.27108090520277006, 0.70056397317967378,
    2.3157474606104871, 2.5408851386875972, 0.4986315871956164,
    -0.094795225564744068, -0.707566127250452, -0.72247508699398788,
    -0.93544693794836409, -0.26033632535775725, -0.57820172667202185,
    -0.96841671893361636, 0.7707586100131294, -1.0450904976103357,
    -3.2006587792440593, -0.32951697086390558, -0.045136580847854962,
    0.56204159177531166, 0.13186951066330824, 5.1400925725381841,
    -0.33157937698245027, -0.91402709398312687, -0.63248195440613486,
    2.5109674806144153, 5.8182100290884833, 0.86539366372792459,
    -0.63399124278311214, 1.6818207779579701, -0.21956813090596916,
    -0.87485394123991833, 0.53637124204336872, -0.27608935699380188,
    -0.60165464240130817, 0.68133525439636344, 2.6519424541001571,
    0.41360106857914597, -0.69307495111458073, 0.054302989904428167,
    0.18859115544429023, 0.4986315871956164, -0.61649079096331616,
    0.40109173339307669, 0.18595223941603814, -0.5718889576976891,
    -1.2197578367695452, -1.1898114952691994, 1.2321557402602328,
    -0.50571982939501914, 0.75534654397711276, -0.25949035789482,
    -1.1778189247821476, -0.091622372329956556, -0.84408623941402972,
    -0.96841671893361636, 1.5456545866136151, -0.37776160225106925,
    0.83462121493654939, 0.76115696988811976, 0.28936490753754807,
    -0.18124506099402291, -1.3351787954659247, 1.8680967921302576,
    -0.23325393255793953, 0.68736976719325171, -0.87485394123991833,
    -1.2015689740786895, -1.5583006983679795, -0.96841671893361636,
    0.27430579801937494, 3.6964498445327, -0.90608435618959438,
    0.76115696988811976, -0.90688382745952445, -0.5766096706749182,
    2.6992040463894655, -0.64529141310275229, 0.071205043156455775,
    -1.2487772296863475, -0.32951697086390558, 0.43574397812346832,
    0.40444814999636636, 2.3324419698571575, -0.48403148712158017,
    0.23375368577502129, -1.2792596915120749, -0.32951697086390558,
    0.88001016458170078, 1.0753474988016227, 2.6992040463894655,
    -0.529118192194127, -0.39376072236667015, -0.67959641561934447,
    -0.87485394123991833, 0.17060072669008039, -0.14061419239378464,
    -0.60165464240130817, 1.0363385729468937, 1.6439507907445545,
    -0.3402572285213577, -0.2083309774470139, -0.18990828582267757,
    -0.71601916928472009, 0.13186951066330824, 3.1637333233958,
    -0.86979578247830647, 0.043355750387276751, -0.99603993465681,
    -0.5332487905858625, -1.3319585942959025, -1.3351787954659247,
    1.9592368528241664, -0.79310239044044473, -0.16265397877024962,
    -0.99603993465681, -0.17010752418838238, -0.55628545399528617,
    -1.3351787954659247, 1.6087942947214191, -0.71270862197111773,
    -0.39098874639997638, -0.93544693794836409, -0.72764682086335986,
    -1.4446247328104818, -1.3351787954659247, 1.7404109733354203,
    1.3724136202880572, -0.74316351238995648, 0.39759898963744456,
    0.80334318227890811, 1.1086362082139758, 1.2321557402602328,
    -0.41198471575433382, 1.3688616517600547, -0.74313789466089653,
    -0.26892397415545982, -0.56120438259726568, -1.2373624918986708,
    1.2321557402602328, -0.15639306342317313, 1.3500826699044512,
    -0.74192268213348489, -0.87485394123991833, 0.44938735307550237,
    0.24993665688030947, 1.2321557402602328, -0.34469769372705611,
    1.2955016335642513, -0.69971704668353962, 0.39759898963744456,
    0.59144057906707637, 0.6436455114357762, 1.5989178167925411,
    -0.3071361223723772, 2.0378678379061119, -0.16755673816228422,
    -0.32951697086390558, -2.0738611068830575, -2.8349330375547721,
    1.2321557402602328, 0.98049871527187848 };

  static const double dv3[25] = { 0.067698784556652056, 0.56092086914823,
    0.37934114430455107, 0.99999999999999911, 0.095595781066494662,
    0.013939729401261142, 0.14118238971135377, 0.057054708958858322,
    0.23895418705554317, 0.99999999999999911, 0.11171720223852746,
    0.99999999999999911, 0.80906017697455246, 0.10412330590897968,
    0.728473332808415, 0.81020614837274807, -0.048129130490291612,
    -0.74627224626443556, -1.0, -0.89594416251863684, -1.0, -1.0, -1.0, -1.0,
    -0.42792222123280044 };

  static const double dv[7] = { 31.26641259554302, 3.0512990646816434,
    2.3438202247190976, 8.60304808261422, 20.27143849187263, 69.842696629213378,
    5.6001916829625396 };

  static const double dv1[7] = { 13.414918973620154, 1.5638778873091379,
    1.6503557412941312, 0.25058829006889982, 2.5579627898821311,
    16.359379510360739, 7.2012311052132292 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.2689124402857523;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 25;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 175U * sizeof(double));
  *obj_Scale = 2.368687421251932;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 25;
  memcpy(&obj_Alpha_data[0], &dv3[0], 25U * sizeof(double));
  obj_Prior[0] = 0.044943820224719107;
  obj_Prior[1] = 0.95505617977528079;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int hb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[112] = { 0.693444183771129, 0.34186820967689469,
    -0.73901731159940887, -1.278864539000266, -1.3028285638962003,
    1.0748416408222761, -1.0061399603949419, 0.91471282008782673,
    0.084230756713490493, -0.73901731159940887, -1.8124266584543181,
    -1.0561309880483902, 1.4587136554016613, -1.6622554083884844,
    1.6099190087237543, -0.21844376810392663, 0.042158705695268264,
    -0.47007060779908688, -0.67548389844769507, 0.69096962624289071,
    0.47888666500529775, 0.94531476396905134, -0.95995908885734815,
    0.19095413756092083, 1.58771523009133, 1.8495659012538339,
    0.30709761166350535, 0.29789264041407715, 0.18654743585699465,
    0.029778894184282145, 0.22815299552733423, -1.0804246804802149,
    -1.2769334761959925, -0.8445184320746506, 1.0441305228413849,
    -1.0391701060638576, 0.602865400899875, 0.63734043315787925,
    0.76770369966630636, 0.6320968090415634, -0.8445184320746506,
    0.80521968599669247, -0.76082469458523, -0.029805201549459426,
    -1.2970001810956067, 0.7867918526137756, 0.80591002258195821,
    -1.2283904466540361, 0.5449824033208942, -0.70415835735727006,
    -0.1108095756113676, 0.60014157519146616, 0.93675210666412978,
    0.92626656040311861, -0.076774402915879975, 0.18054084393802483,
    2.3066842787141186, -3.8044155225048768, -0.81341502753223527,
    -1.5669858048152487, -0.85576719346699937, 0.69096962624289071,
    -1.5565304375680826, 0.078215327339792126, 0.26138561201315325,
    0.22815299552733423, 0.21686354742895167, -0.027686650019538635,
    -0.4606464174952653, 0.3469058095093514, 0.36061807830440046,
    0.195664069692526, -0.32982987396886365, 0.92350372654720936,
    0.65589527792304725, 0.30709761166350535, -0.050316356536746647,
    -0.040579630513485371, 0.26825969577606318, 0.30255071146016066,
    0.40477332863581666, 0.122636489693414, -0.076774402915879975,
    0.16570394549383191, 0.88711676341983736, 0.806673469535292,
    -0.73901731159940887, 0.42034543948707942, 0.26973133175311381,
    -0.4606464174952653, 1.4014024485492702, 0.52513757145323459,
    0.67748453931958741, 3.8736410762358275, 0.36135951512707409,
    0.08316402859042947, -1.2283904466540361, 2.20087217312923,
    0.73727625142157693, 0.583982256692413, -0.70181845363299555,
    -1.0530352642449781, -1.357547265455747, 1.4587136554016613,
    -1.4428865261885078, 0.0013952605897309372, 1.2047486592408831,
    -0.47862530583451657, -0.83369733598203044, -1.078584424054216,
    -1.2283904466540361, 0.45361570653898253 };

  static const double dv3[16] = { 1.0, 0.1811250351055553, 0.61642914729558607,
    0.12692287805115759, 0.48842026613940293, 0.631061184799169,
    0.22394811002189216, 0.66177814294382453, -0.12234212815778443, -1.0,
    -0.37057078322632164, -1.0, -0.0568961891221236, -0.0511779887974869, -1.0,
    -0.32869767505287106 };

  static const double dv[7] = { 29.32759835966667, 2.6132137317666673,
    4.0866666666666669, 8.78174737866667, 22.165127177333339, 109.20000000000005,
    10.387337438266666 };

  static const double dv1[7] = { 9.3686515834669422, 1.0683522711237852,
    2.6882545719626632, 0.35403671683680621, 3.79425669986092,
    15.630209476390966, 5.5900847681856387 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.89614109812731468;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 16;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 112U * sizeof(double));
  *obj_Scale = 1.7366654693954269;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 16;
  memcpy(&obj_Alpha_data[0], &dv3[0], 16U * sizeof(double));
  obj_Prior[0] = 0.39999999999999997;
  obj_Prior[1] = 0.6;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int hc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { 1.882149073401312, -1.0280326839091403,
    0.73504643980242934, -1.5681973922419259, -1.3874692778362412,
    -0.8696523576866122, -0.91939874152801482, 1.6947320253249925,
    -0.92198079614572481, -0.21106861157284393, -0.72054964346794981,
    -0.26598744889681364, -0.8696523576866122, -0.93245822195849426,
    0.73625510801825145, -1.6355638613683297, -1.2431941221640508,
    -0.38503401800681947, -0.21527839246693442, -0.8696523576866122,
    -0.87387957996632026, 0.67403536140633047, -1.5369937531318183,
    -0.21106861157284393, 0.48613148194017985, 0.895882693397731,
    -0.8696523576866122, -0.81211995932722958, 0.1083358794853449,
    0.13392308986762036, 1.423130113529901, -1.0552668695175178,
    -1.0178193128826059, 0.49336047214912931, 0.078920859761831677,
    -0.36171817746689267, -0.49869732557551505, 2.1112137872573724,
    0.051094913327990647, 0.11185676268235901, 1.4020356920396235,
    0.35287110205012695, -0.74785137341299734, 0.47477977933909227,
    0.30499414372275974, 1.6560739758875704, 2.5473650751284302,
    0.039022862203882132, -0.54913342160395884, -0.22847060523255497,
    0.49053492927660258, -1.2431941221640508, 1.8226093813619557,
    2.0033119545379448, -0.8696523576866122, 0.36045810937168765,
    -0.10399596759282775, 0.24924073299995655, -1.1571836629481169,
    -0.085536960854696392, -0.85345932593969742, -0.415314747741365,
    -0.24527806114042064 };

  static const double dv3[9] = { -0.29441683076006991, -0.12006187843879532,
    -0.41978779765228313, -0.91042079642622942, 0.39811752059883376,
    0.019334910023266226, 0.17681558019309324, 0.15041929246218452, 1.0 };

  static const double dv[7] = { 48.931243537361972, 2.572415364331289,
    2.5453987730061347, 8.35101286568712, 17.026933745153375, 83.484662576687171,
    10.73483018744172 };

  static const double dv1[7] = { 34.511883878173556, 1.7019675538700374,
    1.1626492976737233, 0.21128146834464592, 2.06294254645918,
    13.206038568374447, 8.3851204175341056 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.74850833179699583;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 3.3530842580836593;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.25153374233128833;
  obj_Prior[1] = 0.74846625766871167;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int hd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[252] = { -0.51479286920507317, 0.59831602013018625,
    0.3851133983635095, -0.58346766912548464, -0.060710814754167938,
    0.3921171617572991, -0.42101861583154437, -0.52766299019414953,
    0.34471962912367232, 0.47156742656756245, 1.4298327042579209,
    1.9569067346022384, 0.65352860292883264, -0.35985909159784979,
    0.32822348316888206, 0.31228534088435356, 0.03929728554729614,
    1.6317189726497681, 1.4665220169935005, 0.13070572058576554,
    0.014270502077078693, 0.53503710052326525, -0.62746216804450827,
    -0.99815105290134287, 1.6124798235805797, 2.0240447888127111,
    -0.3921171617573016, 0.52943547825339943, 0.63407079670950217,
    -0.51200224916723125, 0.12575131375134949, 0.8283578711911862,
    0.39894112994358372, -0.13070572058576801, 0.096795168441704146,
    -0.67802786355291023, -0.43541378014276078, -1.2575131375135027,
    0.67568324335588592, 1.2334067767450647, -0.91494004410036878,
    -0.37379750833893671, -1.1321176392941894, 0.10018560695055571,
    -1.2575131375135027, 0.39856855870451557, 0.68856965963968542,
    -0.3921171617573016, 0.039767455643763175, -1.0735076854597392,
    -0.7311347798536395, -1.2575131375135027, 0.083442984395696765,
    0.33873414550806846, -0.91494004410036878, 0.2009682955032624,
    -0.5603664933450111, -0.50722436151259376, 0.12575131375134949,
    -0.1092971376743006, -0.40287033845620451, -0.91494004410036878,
    0.64459615467225628, -0.62579239894024064, 0.53869035845516589,
    -0.47942688367702335, 0.0098827114135796954, -0.25183785644679946,
    -0.91494004410036878, -0.017898237935962544, -0.14497522396568854,
    0.40795688179158446, -0.30651882726891688, -0.35587326063692365,
    -0.67896727090828413, -0.65352860292883519, -0.22913466962597653,
    -0.50411459268223935, 0.64822678249166432, -0.39297285547297,
    -0.23762697521604378, -0.56335689917111531, -0.91494004410036878,
    -0.19487676066144588, -0.31272343796493779, 1.1310983781207633,
    -1.1710591093094496, -0.4234292682381503, -0.74161087438578888,
    -0.91494004410036878, 0.12810730339305551, 1.9843935562663209,
    0.92650006783746408, 1.3361077086080952, 0.70838482745942732,
    0.63930906565755208, 0.3921171617572991, -0.2737742315548623,
    -1.4589152487800903, 1.1478137901934509, -1.343967165717556,
    0.36526850281119827, 0.288559127801385, -1.1763514852719024,
    -0.11532367282332398, -0.82741087745028485, 1.130791217071228,
    -1.0846050811053962, 0.18802450599500822, 0.2941590362738874,
    -0.3921171617573016, -0.29099217511655978, 2.8097341233661495,
    -0.45891339791703062, 0.9902915957918822, -0.28065440466717018,
    -0.37091811414141651, 0.91494004410036622, -0.11787555446216001,
    -0.33215949179094573, -0.51524602630462635, -0.39297285547297,
    2.4794163467863433, 2.8218087731706629, 1.4377629264434333,
    -0.56959873172025766, -0.28906491752120084, -0.58443556606945779,
    2.9787342444851075, 1.5052354577475118, 1.3689657458186222,
    1.6991743676149669, -0.548077544146301, -0.47185737909927566,
    0.11217692974030681, -1.0846050811053962, -0.74112712447823026,
    -0.24275001033906335, -1.6991743676149693, 0.64290063855315449,
    0.67301524897850362, -0.63997037692569525, -0.99815105290134287,
    -1.2107186296179604, -1.119318802584528, -2.2219972499580365,
    9.6417790509056669, 1.0234725394898678, -0.96617481699056951,
    -0.56588091188107648, -0.34510073708852296, -0.56454496170593338,
    1.1763514852719, -0.37953116399625314, 0.62043494743531913,
    -0.14446561543842315, -0.56588091188107648, -1.7926013387874185,
    -1.06706555816697, 1.1763514852719, -0.56857440059257025, 1.1006273420171566,
    -0.99545326577168813, -0.47942688367702335, -0.69008074250991058,
    -0.56630313554568379, 1.4377629264434333, -0.4445214198359167,
    0.64660743487255523, 0.3766836320571485, 0.73092951117972249,
    -0.78835051850324944, -1.0033542883061741, -0.65352860292883519,
    0.35426178696673083, 0.56251555436933165, 0.35501826796423736,
    -0.22006479906486351, 0.54844376058331734, 0.59763626109101431,
    -0.13070572058576801, 0.16953384485721265, -1.3057195634221372,
    0.49391794708095732, -1.2575131375135027, 0.094035934291485768,
    0.018006661936175523, -1.1763514852719024, -0.0503816506794253,
    -1.336407127666795, 0.9284583216852258, -1.343967165717556,
    0.21147542681936804, -0.028135428252122487, -1.1763514852719024,
    -0.09314033674353274, -1.2784717640727365, 0.62050672293789988,
    -1.343967165717556, 0.56787703327500771, 0.75991981171762024,
    -1.1763514852719024, -0.16956414901425226, -1.2177410794178236,
    0.27918276203212145, -1.2575131375135027, 0.020685294455626061,
    -0.14260006059605157, -1.1763514852719024, -0.14086144694362379,
    -1.2053399004571619, 0.45872584685105766, -1.2575131375135027,
    0.11903782707447869, 0.14592325363825898, -0.91494004410036878,
    -0.084999894037604329, 0.35739221477401645, -0.24726219116788392,
    0.64447548297566914, 1.5232611432444141, 2.4514186813763663,
    0.65352860292883264, -0.61025159454970546, 0.35470900331763849,
    -0.24722389675988413, -0.30651882726891688, 0.18403867196877238,
    0.067970715304636178, 0.65352860292883264, -0.55451267813079086,
    0.34052307265501364, -0.24540734837566661, -1.1710591093094496,
    1.1758744983888207, 1.5790116766347779, 0.65352860292883264,
    -0.595577775343761, 0.29929172140445348, -0.18231667316285172,
    0.64447548297566914, 1.3152913111566311, 1.979005320522816,
    0.91494004410036622, -0.58738642297678734, 0.86008652817547238,
    0.61317788172624987, -0.39297285547297, -1.3005441514035776,
    -1.5551019093806657, 0.65352860292883264, -0.30658159254146361 };

  static const double dv3[36] = { 0.1898832080656124, 0.38474027454413823,
    0.32917260628033557, 0.17956546747414159, 0.12168953451886952,
    1.0000000000000002, 1.0000000000000002, 0.30759613379316625,
    0.076115480432121879, 1.0000000000000002, 1.0000000000000002,
    0.87447441473532583, 0.98146819188042378, 0.602575460859371,
    0.9384943348188326, 0.70554789527392447, 0.29476678407070478,
    0.775947803902064, 0.10203836116073856, 0.052660380843021722,
    0.005917618088376108, 0.019399220080302329, 0.20901598382338107,
    0.59677873922736491, -1.0000000000000002, -1.0000000000000002,
    -1.0000000000000002, -1.0000000000000002, -1.0000000000000002,
    -1.0000000000000002, -1.0000000000000002, -0.74784789387221473,
    -1.0000000000000002, -1.0000000000000002, -1.0000000000000002,
    -1.0000000000000002 };

  static const double dv[7] = { 43.330539156363649, 2.147763848969698,
    2.2545454545454553, 8.4154267960530316, 16.935176549621218,
    75.000000000000028, 22.784729192166676 };

  static const double dv1[7] = { 17.75833577586307, 1.0461840799350537,
    1.1566841022603924, 0.25532698885667277, 2.5177715080940004,
    22.952323636297564, 33.021355190453882 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.87454701168218718;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 36;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 252U * sizeof(double));
  *obj_Scale = 1.7878074628139455;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 36;
  memcpy(&obj_Alpha_data[0], &dv3[0], 36U * sizeof(double));
  obj_Prior[0] = 0.090909090909090925;
  obj_Prior[1] = 0.90909090909090917;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int he_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { 0.53486999902307186, 0.49733474487565726,
    0.22189487614345851, -0.068244815662866692, -0.13524677698025067,
    0.10599215415323196, -0.43537410033226082, -0.4712205402838634,
    -0.48939784228825106, -1.458166328942732, 0.24202300666731422,
    -0.089041877533336533, 0.10599215415323196, -0.36684499743203941,
    -0.53653113597376978, -0.35309648837804031, 0.22189487614345851,
    1.0476326476080238, 0.9234219673164592, 0.10599215415323196,
    -0.29459457895323105, -1.0651505065685578, 1.7473988833765162,
    1.3419356795342527, -0.00099195296340727338, -1.049212364719291,
    -1.1423598836514921, 3.968735032451403, -2.0721195155726724,
    1.6645245099610797, -1.8781816302142798, 0.903130075026237,
    -0.091994387969414032, -2.3907119214562162, 1.687685886672192,
    -1.221360979738797, 1.2170536758754933, 1.2019305791104034,
    2.5823041015093331, 2.7927330892894213, 1.9785202108603182,
    -0.47481007777266793, -1.2228102317217104, 1.2170862255857418,
    -0.33812552555193831, 1.0856824226361581, 0.14217481571434465,
    1.9785202108603182, -0.21801904278148021, -1.2304723144447907,
    1.2186302662602733, -1.7381765297904308, 2.1940890029778144,
    1.8225564220161752, 1.9785202108603182, -0.40720730643695896,
    -0.9498465119674423, 1.9484156820230278, -0.47813062597578737,
    -0.57338385290612015, -1.6627937152593966, 1.9785202108603182,
    0.92420768434892719 };

  static const double dv3[9] = { -0.52966223961526127, -0.61170597809899707,
    -1.0, 0.080996744913139324, 0.46723696639610812, 0.28923804480952459, 1.0,
    0.020919484590823545, 0.282976977004663 };

  static const double dv[7] = { 89.833863955094344, 0.39110188258490569,
    2.1415094339622645, 8.2143662677924549, 16.784421411886793,
    70.981132075471692, 6.0366416463018879 };

  static const double dv1[7] = { 32.878595690589634, 1.2308250885791994,
    0.71425969266306422, 0.22847433377916329, 2.2640428017852523,
    9.61267305743536, 7.1675966299336054 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.97546332726987217;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 4.1412031740116593;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.7735849056603773;
  obj_Prior[1] = 0.22641509433962267;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int hf_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { -0.10598924479081157, 0.57348012512165536,
    0.1114379580243785, -0.94879347234922162, -0.80392161953342756,
    -0.56439790375315124, -0.70026047289586379, -0.10082027850606018,
    0.42865567633486618, 0.1114379580243785, -0.1958379628832381,
    0.849465088944515, 0.99496950043079158, -0.50417605555126666,
    -0.81665379080389411, -2.9672174465774153, -0.04093639274365278,
    -0.22266346400164264, 0.06617609259626657, 0.99496950043079158,
    -0.60966782608598269, -0.18789233855749068, 0.22491129408925592,
    0.26381230879240913, -0.7691192060006391, -1.0623891021810594,
    0.99496950043079158, 2.5207176288004938, -1.0808671431032759,
    -0.14880782882840402, 1.025684062632565, 1.2976321854027029,
    1.1025153225031921, -1.3440816058451226, 0.570226217956307,
    -0.52907506002992322, 1.7017851749314954, -2.32655165426412,
    0.80102571790959254, 0.46687867232492153, -1.3440816058451226,
    1.0772222429997376, -0.40916567937678805, 1.3091995433446584,
    -2.174177303496089, 0.47759121172925056, -0.187647263845485,
    0.21528579833882019, 0.90517654664172287, -0.51023939528795048,
    1.2192817272940004, -2.174177303496089, 0.39546354922171073,
    -0.12986128598786034, 0.21528579833882019, 1.514918571160595,
    1.6105330261368063, -0.35733720060470248, 1.178058413400596,
    -0.2848136986695381, -0.85282631084875427, -0.56439790375315124,
    -0.040354822665419787, 1.4068010260839114, -0.21157990998766113,
    -0.49805944504774663, 0.24085153971421727, -0.028254837127381308,
    -0.56439790375315124, -0.12909459517920019, 0.51644230604303687,
    -1.8837812381467949, -0.49805944504774663, -0.44328668807277866,
    -0.47343295375146727, -0.56439790375315124, 0.12925385342791845,
    0.29725109494431529, -1.0568512596560995, -0.49805944504774663,
    0.98916983862824, 0.82601221453825835, -0.56439790375315124,
    0.68860945571694965 };

  static const double dv3[12] = { 0.95923315581491175, 0.049071685846673617,
    0.66964061214037285, 0.22095177902057347, 0.59257759817824118,
    0.049689486695935994, 0.020049329751323973, 0.12384930299876468,
    -0.62095713820885889, -0.14061055964600833, -0.9234952525919301, -1.0 };

  static const double dv[7] = { 62.756299409626905, 1.2652415230671652,
    2.6268656716417929, 8.1167168234253779, 16.557493311940309,
    76.343283582089612, 3.0753590777686592 };

  static const double dv1[7] = { 31.748156393304377, 1.2383385505856619,
    0.65627843200615932, 0.34069641270297413, 2.8057635435272927,
    7.69542826648984, 1.2340049213332704 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.45231158341565736;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 2.99539500362876;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.30597014925373134;
  obj_Prior[1] = 0.69402985074626866;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int i_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[70] = { 0.2478181705942035, -0.01640634081746117,
    -0.636380755542872, -1.660571421830034, -1.5640447657917875,
    0.75228198891381248, -0.49010068613490554, -1.1648093167016518,
    -3.1996014541649438, -0.45508091439540632, 0.065798694972703,
    0.76546634432471339, 1.1000971291471691, 4.4571946870512082,
    -1.0303878292546129, -3.0722035053944525, -0.33421435363042928,
    0.027205320953205357, 0.56454561455130092, 0.0566517084470993,
    5.4133531617998578, 0.66023280627316139, -0.22475526194116616,
    -1.1802802789852689, -0.014203077449712423, -0.74684276392262494,
    -0.98679371225297041, 1.6545224964036798, 3.04950817511066,
    -0.71059351620018518, 0.75358469325436439, -1.5092597341719716,
    -1.49448219424148, 2.1435425498472389, -0.61687265232430843,
    3.2651566614656757, -0.81089737145692475, 0.75358469325436439,
    -1.5563635636127608, -1.2612565370820141, 2.1435425498472389,
    -0.66430411958920776, 0.31379033662606109, -1.081768814575244,
    -0.81768059669033766, -1.0470204260490206, -1.3725838818046994,
    0.0566517084470993, 4.3251784706114549, 1.8776578596097178,
    -1.4699156334796926, 0.028385328664501872, -2.648549432644264,
    -2.2216295602311105, 1.7957274096138822, 0.36450888507963342,
    1.9626964445990345, -1.3946417716865553, -0.9385471574553147,
    -2.5877345147562463, -2.3455540256742813, 2.1435425498472389,
    -0.25923643919057221, 2.3887008881576124, -1.45503670154635,
    -0.9385471574553147, -1.1390879557362465, -0.63675035804452285,
    2.4913576900805952, -0.20768733815713095 };

  static const double dv3[10] = { 0.98702369074458018, 0.141136736544493,
    0.44453729536496067, 0.27695190774898565, 0.99999999999999933,
    0.53693123252552621, -1.0000000000000002, -1.0000000000000002,
    -0.38658086292854421, -1.0000000000000002 };

  static const double dv[7] = { 31.967039994507576, 3.0085464604090908,
    2.3530303030303035, 8.5840841247840931, 20.160707235833335,
    71.02272727272728, 5.3372943843636369 };

  static const double dv1[7] = { 14.286302037511836, 1.6153509611896337,
    1.6547173902705523, 0.28131479239193308, 2.7427592992593484,
    17.250542906138222, 6.88628484073299 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.9057289707125802;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 10;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 70U * sizeof(double));
  *obj_Scale = 4.3003974074742581;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 10;
  memcpy(&obj_Alpha_data[0], &dv3[0], 10U * sizeof(double));
  obj_Prior[0] = 0.034090909090909095;
  obj_Prior[1] = 0.96590909090909094;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ib_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { 0.897255016194999, 0.3835384207713336,
    -0.58050172523082677, -0.982960127896272, -0.74857353022023421,
    1.6543965559447855, -0.55825841180033231, 0.2769394022644559,
    -0.088187641875678735, 0.67442559987491257, -0.77331562798476938,
    -0.725115961639686, 0.405158340231371, 1.7551946906999403,
    -1.6987712216539159, -1.8987977129802573, 1.301889262427782,
    1.0973178342682932, 1.4605204108868506, 0.405158340231371, 0.459166266169431,
    -0.88240858553424151, -0.17824958722774861, -1.3044982589456764,
    1.1993307910683146, 1.1616683111450277, 0.15531069708868811,
    1.1919735083469232, 0.40107370303403805, -2.1416482772450358,
    -1.0631660810407266, -0.36064477909480119, -0.532527117112527,
    -0.84407987548204344, -0.35206100596438467, 0.52943785561935053,
    -0.331178343960588, 0.48135985755095245, -0.37903016562035752,
    -0.51882434789791054, -0.59423223233936051, -0.57418963760589536,
    0.784806130405839, 0.54297389260587814, -1.0631660810407266,
    -0.7165982993965373, -0.96731617416823057, -0.59423223233936051,
    -0.38510721988318558, 0.883757266248866, -0.27799007145244159,
    1.8810864893996619, -0.54636800317814316, -0.78912642753282325,
    -0.59423223233936051, -0.13682431067949138, -0.36539391591838666,
    0.92059304789942609, -0.14610380500191711, 1.1149999814012159,
    1.229254780612643, -0.84407987548204344, -0.87575919955620518 };

  static const double dv3[9] = { 0.99999999999999989, 0.74601932899102785,
    0.15764966154744131, 0.4623861676295411, -0.22391486680326544,
    -0.12189948828280778, -0.99999999999999989, -0.58171441364903553,
    -0.4385263894329014 };

  static const double dv[7] = { 28.955136319729753, 2.7073601060540562,
    3.3027027027027058, 8.65838696272974, 20.357280037837853, 86.27027027027043,
    7.528623778189198 };

  static const double dv1[7] = { 7.6556819034571939, 0.70681133692097009,
    2.0718331237077221, 0.33511490179640291, 4.1885248960317849,
    24.014635177380971, 4.95414659005332 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.11683690233235192;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 3.1313473439418029;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.51351351351351349;
  obj_Prior[1] = 0.48648648648648651;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ic_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { 4.0320580723282538, -4.4310092232234535,
    -0.57381042936339888, -1.5251997971379618, 0.0042867007057973061,
    1.4843508408404711, -1.0077533462997397, -0.404933311019821,
    -0.11910435396646561, 0.44473241866815511, 1.1870243459675844,
    1.1208927621057829, 0.75780016611329271, 1.231507452902477,
    0.15734446803157925, -0.18880403404710114, -0.10091553563446301,
    2.2614236790064415, 2.0426530066182886, 1.2421672825980783,
    0.76420310984031836, -0.89623569560886351, 1.0912543424144683,
    -0.64656348993708124, -0.70375575725423667, -0.82787099634691219,
    0.75780016611329271, -0.38895114347126369, -0.55788584555167464,
    0.88136064228833844, -0.24642165678182798, -0.41028351425327886,
    -0.29616604175599914, 0.27343304962850712, 1.3570442496679309,
    -0.74922310960963256, 0.87556592695362589, 0.88125078211024976,
    -0.35542521946744993, -0.48573492282946173, 0.75780016611329271,
    0.061960779589561345, 0.22157740351030408, -0.53522137556667,
    0.29922629752079016, -0.21797123371666857, -0.25655100925450713,
    -0.45311762509867126, -0.376866963635607, 0.63706276986926735,
    0.078115590071275318, -0.86482267165812843, -0.70378999351991833,
    -0.92415100374968673, -0.45311762509867126, -0.17973005216777,
    0.7980567263885322, -0.49790255133554295, 1.3541456758391854,
    -0.45879924020256291, -0.65890765503100845, -0.45311762509867126,
    0.079129161079887933, 0.219156986918287, -0.015906131675260067,
    1.2813926152655029, -0.40089003977982196, -0.59628891464739642,
    -0.695301183341064, 0.043293375818177375, -1.0239646681857724,
    0.8856371841063102, -0.9375757322318109, -0.97362064780127688,
    -1.0460655585745056, -0.93748474158345685, -0.16277791450851717,
    -1.2343180350982983, 0.34306690768641762, -0.17366859620814548,
    1.9321958007580324, 2.3455423806646789, -0.695301183341064,
    -0.69128272344875363 };

  static const double dv3[12] = { 0.089393874727714387, 0.076840570625523491,
    0.20399480050247804, 1.0000000000000002, 0.81830605968422787,
    0.57876481509684219, -0.60878197373408, -0.37613150929331063,
    -0.024248649121590443, -0.49915495635935136, -0.96862316603920728,
    -0.29035986608924597 };

  static const double dv[7] = { 31.965737315483878, 3.0124484673870979,
    3.4774193548387107, 8.5821234523548426, 18.906064682580649,
    83.225806451612925, 6.4747754210645185 };

  static const double dv1[7] = { 4.70538420434029, 1.00737562810575,
    2.7490252426898958, 0.23285249842104344, 2.8138394180492488,
    24.774596770912154, 4.7517332397328857 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.25643334678039315;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 2.8644178112154446;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.61290322580645162;
  obj_Prior[1] = 0.38709677419354843;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int id_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[133] = { -0.47465073135854974, -0.70667756801662551,
    -1.099008070286118, -0.28850763441630295, -0.09218976802428247,
    -0.23283484224005782, 0.3731939596272188, 1.7167190588975227,
    -2.188615386179706, 0.88925835931078356, -1.9707785053799216,
    -1.8778583112029346, 1.7863715207157562, -0.1791745828400339,
    0.75915879857868984, -1.2760838913789523, 0.11124106077286558,
    -1.86001865369045, -1.0059904537823, 1.029169134607326, -0.44270274901532325,
    0.826249786165682, -1.1656581174156584, -1.2719008032945442,
    -1.8003436099018577, -1.1393663891195411, 1.2815699299768026,
    -0.57119409274222022, 0.7653313994051415, -1.1668418294777232,
    -1.2719008032945442, -2.1723921320700077, -1.4460883963514479,
    1.2815699299768026, -0.54555897645012918, 1.1623449697624302,
    -1.2542566921978904, -1.2719008032945442, -0.3788495119751849,
    0.69976429958489239, 1.5339707253462793, -0.56057499388572751,
    1.3408426482593374, -0.30346191002929424, -1.2719008032945442,
    -1.7597683419814498, -1.0830778366818172, 1.2815699299768026,
    -0.43017386728623119, 1.0470630094138109, -0.32017554361128969,
    0.11124106077286558, -2.2631586415587313, -1.9012012457447762,
    0.77676833923784916, -0.31926235648056112, -1.2195838920499218,
    -1.752405870119897, -1.0125617037819048, 2.7706490416346643,
    3.7547459582831539, -0.23283484224005782, -0.41372494987751329,
    -1.6480423149667889, 2.2110084035795854, -1.4447935363029702,
    0.75328941117989945, 0.8996847202987942, -1.4948388190874415,
    0.5684395672556628, 2.4079783702113828, -0.49055533586591282,
    0.97570472581499679, -1.0516250234017974, -1.2229732793164989,
    1.2815699299768026, -0.56784431612420927, 0.56534126946788055,
    -0.50949300245875306, -1.0125617037819048, -0.92768316467148071,
    -0.98649763591012163, -2.2520412051958716, 9.5284524841138278,
    0.65169027455059358, -0.881825574086709, -0.58032987126083924,
    -1.323056808006605, -1.5093080872209379, 1.029169134607326,
    -0.42594570100487772, 0.9833198733284414, -1.3384311190026186,
    -0.58032987126083924, -1.125315843910573, -1.1613455728400195,
    1.2815699299768026, -0.31678676262142397, 0.9833198733284414,
    -1.3384311190026186, -0.58032987126083924, -1.125315843910573,
    -1.1613455728400195, 1.2815699299768026, -0.31678676262142397,
    1.0310150599423031, -1.5788606654357369, -0.58032987126083924,
    -1.3187326027214892, -1.0984508979091636, 1.029169134607326,
    -0.26381188759609414, 0.96699071245094315, -1.5940083105504821,
    -0.58032987126083924, -1.6302801701313654, -1.3836217275475149,
    0.77676833923784916, -0.22944473368042906, 1.0671995682558173,
    -1.5022342864239413, -0.58032987126083924, -1.6279485017882438,
    -1.2195774362552949, 1.029169134607326, -0.22064942048151368,
    0.5137764302544553, -0.038715935083165287, -0.58032987126083924,
    -1.4459127800244873, -0.93487236979605448, 1.029169134607326,
    -0.557507809242186 };

  static const double dv3[19] = { -1.0, -1.0, -1.0, -1.0, -0.15858028567114543,
    -1.0, -1.0, -1.0, 0.17897419714754556, 0.12395597866154842,
    0.59518205640649224, 0.001866973346419287, 0.739876966817874, 1.0,
    0.51872411329126589, 1.0, 1.0, 1.0, 1.0 };

  static const double dv[7] = { 45.044942357984453, 2.03925770032558,
    2.2713178294573617, 8.37225355010852, 16.630976259534872, 77.534883720930182,
    22.646347220829437 };

  static const double dv1[7] = { 18.108049287912756, 1.1011351846211044,
    1.1567866186154432, 0.28668828565267918, 2.5483980985068655,
    23.77171589818845, 33.428617418224349 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 2.2043875468055338;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 19;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 133U * sizeof(double));
  *obj_Scale = 2.2777017781752975;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 19;
  memcpy(&obj_Alpha_data[0], &dv3[0], 19U * sizeof(double));
  obj_Prior[0] = 0.069767441860465115;
  obj_Prior[1] = 0.93023255813953487;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ie_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { -0.50129682628799344, -0.26842681929786433,
    -0.86514663602510644, 1.7089103017558038, 0.21274340679288295,
    -0.3143193546715447, 0.31966356938702967, 0.6464896469751118,
    -1.1113006176654567, 0.80887693612103417, -0.48950761154473432,
    -0.63488907033778053, 0.75436645121170842, -0.24541360897083928,
    1.1876176235218792, 0.328440302237084, -1.1042928606174123,
    -0.34926546346433224, -0.70639456419548707, 0.96810361238835907,
    -0.2367363033015544, 0.91432074308347966, 0.30369965001075377,
    0.80887693612103417, -1.0534681310877307, -1.4652777458680553,
    0.54062929003505789, -0.15992074207965631, -1.403683740506722,
    1.4210843228777532, -0.14770796224818888, 2.2022555282643541,
    1.8028939164101228, -1.810479482908099, 3.8298092071399679,
    -0.97727942194867035, 0.64334578162691836, -0.9847197483212593,
    0.913355886454613, 1.3572447750905037, -0.741793677024846,
    -0.30633770483828165, -0.848114555584632, 0.59398519357885,
    -0.86514663602510644, -0.073840813733427824, 0.66750264070809273,
    -0.741793677024846, -0.32137354100818027, -0.71038085094672609,
    0.46439218635331658, 0.33058448693642262, -0.39648336175528737,
    0.58376540400401078, -0.52805651584819535, -0.31327941836773854,
    -0.57840337011025067, 0.33376495526522004, 0.21101137464026962,
    0.11626080078616782, 0.341794324035928, -0.741793677024846,
    -0.3007403601550187 };

  static const double dv3[9] = { 1.0, 0.42492926084813337, 0.12868303457967142,
    0.46154086718282905, -0.038381347226738249, -0.16216769685871449,
    -0.15054736109707784, -0.66405675742810322, -0.99999999999999989 };

  static const double dv[7] = { 46.207782362941181, 1.4607863541764705,
    1.723529411764706, 7.9393254615882336, 15.811563235294118, 80.8235294117647,
    19.692662914588229 };

  static const double dv1[7] = { 19.465191741180774, 0.74387570027008576,
    0.83630841482426943, 0.20493546621606731, 2.7473321195561331,
    28.071861565715697, 48.266502294889911 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.016576693514958572;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 3.0721729500078561;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.47058823529411759;
  obj_Prior[1] = 0.52941176470588236;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int if_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -0.719411029145225, 1.0591662379975155,
    0.047685257992916778, 0.83868902257107047, 1.3360129234043987,
    -0.728377292932168, 0.75590941653990973, -0.62034552495480721,
    1.0674616007709499, 0.047685257992916778, 0.51103563014584463,
    1.6575282178696664, -0.728377292932168, 0.73294273246628916,
    -0.97962378603381761, 1.1152525004367062, -0.53347882379575429,
    -1.3648067236489703, -1.5347472227022305, -1.0299347708977151,
    1.5392122307577591, -0.49069691283873662, 0.420244510363806,
    -0.59805261066116222, 1.4084383293407861, 1.0402809069489458,
    1.0809675748611141, 1.075570233573766, -1.639602144894839, 1.391132502609389,
    -1.1792166924498333, 0.816788027186246, 0.42646262093958442,
    -1.6330497268288091, 0.52933501173257558, -1.6522588026244152,
    1.3800738210342327, -1.1792166924498333, 0.61780281784639091,
    0.66568771244556835, -1.6330497268288091, -1.1716366964736324,
    -1.7103257674679426, 1.4094575810113061, -1.1792166924498333,
    0.59343441960311416, 0.29374962743862443, -1.6330497268288091,
    1.8937168415014742, -1.6953069226812556, 1.4349441349213898,
    -0.40433125006493853, 1.0191608203328439, 0.61527643736794291,
    -1.6330497268288091, 2.3294744631198814 };

  static const double dv3[8] = { 0.99999999999999989, 0.99999999999999989,
    0.95342085070786176, 0.042510700661430589, -0.43563890669980587, -1.0,
    -0.56029264466948669, -1.0 };

  static const double dv[7] = { 38.03869803953846, 2.0158176512153849,
    2.3261538461538458, 8.56222333983077, 19.430442021384614, 68.4923076923077,
    2.7933666139076929 };

  static const double dv1[7] = { 8.8951168946378019, 2.1019655771824532,
    1.5486160074277737, 0.24651021130029382, 2.5973768725027591,
    19.896704404344106, 1.2365161600589187 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.3682606409924878;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 4.1455332154103859;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.13846153846153847;
  obj_Prior[1] = 0.86153846153846148;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int j_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[112] = { 0.3224328324614083, -0.04102870319444412,
    0.20603534516746333, -1.7107766375611932, -1.823558721886519,
    0.89832199657096667, -0.26623701656608673, -1.0302151960743269,
    -3.2237910762620676, -0.33947434388330128, -0.083683600737736258,
    0.86484370335313887, -0.20914058982667302, 1.7614346311366664,
    -1.0423525499366351, -3.1687673592438181, -0.33947434388330128,
    0.009424828815435075, 0.56083890181906471, 0.16001360563920686,
    2.6330706950386866, -0.21290650795077054, -1.5693875515065119,
    -0.46069871922791561, -0.3148480897043946, -0.10476964078588373,
    -1.3166031762243127, -0.25254122645773264, -0.15520583131211704,
    -1.4880558038731193, -1.0062084082786802, -0.45183308147166451,
    -0.33472758764654342, -1.3166031762243127, -0.25192089582556809,
    -0.56161513846059985, -0.21226191128493135, -0.88498403293406591,
    -2.267326429133969, -0.52362846951564079, -0.57829478529255285,
    -0.28096402922733366, -0.5654833895692164, 0.0091453257157984719,
    -0.82437184526175866, -1.9524358922203051, -1.2444955892103591,
    -0.57829478529255285, -0.30304874694376127, -0.59426551925944615,
    -0.018426334150258145, -0.88498403293406591, -1.9754814204470588,
    -0.854337521924487, -0.57829478529255285, -0.32471039007894847,
    -0.62841967698074985, 0.15308044133102586, -0.88498403293406591,
    -2.1416663317074978, -0.94856921904251479, -0.57829478529255285,
    -0.33611646491537456, 3.6693579382877468, -0.854953082728262,
    0.75154503421822783, -1.6292596066296712, -1.4401132442142577,
    2.374938778434486, -0.36656188153494962, -0.91657366965223386,
    -0.33602147569427659, -0.46069871922791561, -0.73028238950407365,
    0.18347954844372216, -2.4240657626219524, 14.238773094049838,
    -0.47589697160948952, -0.4735110960611621, 0.084810969822848886,
    -2.4652510806294541, -1.3642645305809689, -0.94744898075843276,
    -0.1821718063658955, -0.27930755156052889, -0.70248962458022468,
    -0.88498403293406591, -1.7019148754702489, -0.3057351864273346,
    -0.57829478529255285, -0.069547302000919312, -0.086269185392015474,
    -0.72574819075698216, -0.82437184526175866, -2.4461096543550589,
    -1.0629048612125538, -0.57829478529255285, -0.12156130583584142,
    0.119575407321785, -0.786812040556844, -0.21824996853868697,
    -2.6893326104672739, -1.1548280497812982, -0.20914058982667302,
    -0.093561018967651649, 0.31681725790293219, -0.84836321364640344,
    -0.27886215621099419, -2.3028022172899751, -1.4204536434546626,
    -0.57829478529255285, -0.050184208087760383 };

  static const double dv3[16] = { 0.43512016591769531, 0.009793349631516771,
    0.034434716745000954, 0.086508523999421771, 0.34530887926450776,
    0.99999999999999933, 0.99999999999999933, 0.51483647141469724,
    0.24637862709172709, 0.0496113883160187, -0.0016704975261591405, -1.0, -1.0,
    -1.0, -0.040571267573505231, -0.6797503572809207 };

  static const double dv[7] = { 30.822678764410618, 3.0483712937984766,
    2.3600760456273751, 8.58917521559695, 20.305521653536108, 69.399239543726168,
    5.8771745623726179 };

  static const double dv1[7] = { 13.024451770407152, 1.5786932745962947,
    1.6498332074835924, 0.27185304404200089, 2.5026764582687857,
    16.253370742347602, 13.952535230766983 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 2.0855231018611948;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 16;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 112U * sizeof(double));
  *obj_Scale = 2.6982838634253996;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 16;
  memcpy(&obj_Alpha_data[0], &dv3[0], 16U * sizeof(double));
  obj_Prior[0] = 0.030418250950570346;
  obj_Prior[1] = 0.96958174904942973;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int jb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[119] = { -0.31690237579620117, 0.79446844913637382,
    -0.29477551761652737, -0.42652606577104535, -0.12493881815085715,
    1.8611212961704473, -0.52757624885792964, 0.15965129946306114,
    0.21904405304467822, 1.2092023874058313, 0.48958000415622271,
    0.56613481892524453, 1.6195081834032583, -0.2714532585644378,
    -0.1859333110548895, -0.5424710002783214, 1.4956743693148515,
    2.8203963270507977, 3.3476924617729358, 1.3778950706360695,
    -0.30266935261329925, -0.58048136522227245, 0.47396163683286191,
    1.5672923647921071, -0.20175687315885679, -0.096413171205898582,
    0.6530557323345032, -0.17396547980155569, -1.3789342654196992,
    -0.99328944450450418, -1.3690454497753548, 1.4696278372792224,
    2.3207661232929824, 0.894668845101692, -0.33685842211902023,
    -1.4555578702262797, -0.49069905355511229, 2.3550903150419136,
    1.5188799771004218, 1.9488966919366326, 0.41144261956731437,
    -0.26274578714187646, -1.073101193185116, 0.41277047251034976,
    -1.3690454497753548, 1.9132050891490284, 2.1980165281870621,
    0.41144261956731437, -0.26005370662813221, -1.2988011165287541,
    0.087798752413242115, 1.9253823421783829, 1.6545668133246347,
    1.802371092166841, 0.6530557323345032, -0.17784810969150708,
    -1.0308658364362289, -1.963239795074228, -1.010955472389079,
    2.2531842002648736, 2.4815545189539359, -0.31339671873425207,
    -0.402524391216533, -0.42036568459187729, 0.34262949633127232,
    0.20655045072425865, 1.0180349485809073, 1.2222951529581096,
    0.41144261956731437, -0.33817758734411091, -0.37110698650152557,
    0.839910466339876, 1.2092023874058313, -0.7723685513938382,
    -0.590035844337852, 0.16982950680012554, -0.350514350594283,
    -1.4867517901904965, 2.0553815354324745, -1.2974274542981,
    0.51536566945123108, 0.63362775229401869, -1.2798491698030072,
    -0.16463045030077272, -0.290655214863298, -0.22990505432928954,
    -0.50962950404829288, 1.4789587458819407, 1.5117864724571317,
    1.3778950706360695, -0.50085296439014082, -0.23490607971477717,
    0.033349841415479628, -0.50962950404829288, 0.697953726933226,
    0.27781686094420316, 1.3778950706360695, -0.49507842988133266,
    -0.18392156867667322, 0.19574924802308327, 1.9970003376556378,
    0.50570328745779036, 0.17047955814929805, 1.3778950706360695,
    -0.4581465465635845, -0.2320982630644261, -0.1470809285805304,
    2.1402363286101482, 0.70277058331426179, 0.36613976003505527,
    1.3778950706360695, -0.52578383674396578, 0.71124071745899586,
    -0.14932546223499985, -0.65286549500280322, -1.6142950471302229,
    -0.98817944805505542, 0.894668845101692, -0.55081766764782969 };

  static const double dv3[17] = { 1.0, 1.0, 0.14793757272717248, 1.0,
    0.42547210487186055, 0.10786287154697827, 0.54056771334048492,
    0.22811851209026349, -0.2355560286156495, -1.0000000000000002,
    -0.33426374411983256, -0.09488955418630482, -1.0000000000000002,
    -0.22207788240217607, -1.0000000000000002, -0.23960600669576143,
    -0.32356555855703478 };

  static const double dv[7] = { 41.5339091395652, 2.1519686114927534,
    2.5115942028985492, 8.4622995210072443, 17.652195493260862,
    79.782608695652172, 21.862661850528983 };

  static const double dv1[7] = { 18.017137975756533, 1.0402940474296642,
    1.3962971084796494, 0.31256505922150762, 3.4443604448159215,
    24.833089277656139, 32.411868647509472 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.9712209079853655;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 17;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 119U * sizeof(double));
  *obj_Scale = 1.9442957701257189;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 17;
  memcpy(&obj_Alpha_data[0], &dv3[0], 17U * sizeof(double));
  obj_Prior[0] = 0.86956521739130443;
  obj_Prior[1] = 0.13043478260869565;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int jc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[98] = { 0.46619602762135864, -3.1852689042641411,
    -0.37996999326124725, -0.75860805363921591, 0.63212321381596992,
    1.6598893974371325, -0.62196705653266837, -0.73166599615700956,
    0.60578205113597294, 1.3452991653303608, 1.5392304432491839,
    1.7803532159188133, 0.93517473218343317, -0.30040270723402768,
    -0.29685970878984413, 1.1142215898229622, -0.25673648193327514,
    1.8013425573706054, 2.192757845563277, 0.93517473218343317,
    -0.1222572473631668, -0.37740301581484448, 0.906578936560905,
    -0.19511972626928911, -0.096570457172212715, -0.0636532268623037,
    2.1430325076062653, -0.6027681837200719, -0.772958849067196,
    1.4853964895105631, 0.17458080771462664, 0.18596636958183929,
    0.32316120381562, 0.4520316220143003, -0.28237525889960369,
    -0.50791750235511179, 0.27058521844964584, 0.17458080771462664,
    1.2553485575206218, 1.7080463407837769, 0.4520316220143003,
    -0.34346411658282033, 1.2179077774171176, 1.3079172356734814,
    0.79074836435448659, 0.522286773784162, 0.31466064403744831,
    -0.031111488154832553, -0.32040947881591764, -1.5057893699323535,
    1.3082545222567059, 1.2836824096663744, 0.19300157429116993,
    0.088799444435274835, -1.2389692635776646, 1.0103927012093874,
    -1.6102773934106642, 1.8256540549037277, -1.119371061229079,
    0.68369120559342067, 0.96706345174367214, -1.2389692635776646,
    -0.17347047045549777, -0.37383134113445843, -0.24923937798913454,
    -0.44158674892523314, 1.7795311331129622, 2.0724424565401871,
    1.418317842352566, -0.5028086090954561, -0.31620154811097712,
    -0.010220842281252272, -0.44158674892523314, 0.89133828045426944,
    0.51918782294735877, 1.418317842352566, -0.49715231195011511,
    -0.26349711044209456, 0.13722738753177174, 1.7149996993142764,
    0.67270272483079485, 0.38407739448297346, 1.418317842352566,
    -0.46097663305104425, 1.0498239545847445, -1.4861025739138292,
    -1.180987816893065, -1.3050182925588396, -0.18427664023122053,
    -1.2389692635776646, 2.9952770363452355, 1.1327299778829381,
    -1.6707702301641245, -0.56482026025320509, -1.930563830193786,
    -1.4923075686796998, 0.69360317709886676, -0.22032398019294444 };

  static const double dv3[14] = { 0.18593098900277549, 0.68237969835043011,
    0.19482998923815845, 0.18104796446184762, 0.77052314409669831,
    -0.92197606305828583, -0.060950309928603646, -0.13349552138611287,
    -0.086054226360639335, -0.018918696897255911, -0.15971176286931,
    -0.49992728793757796, -0.0015746799835982751, -0.13210323672852597 };

  static const double dv[7] = { 42.812706622803049, 2.1983730829621217,
    2.5166666666666671, 8.4354760856136384, 17.188421377500006,
    78.772727272727323, 22.266714345704553 };

  static const double dv1[7] = { 17.42917694656197, 1.1457793438024517,
    1.6229351727852883, 0.27484445441017991, 2.7363421476933194,
    24.837361327162849, 33.089395622392708 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -2.1032758251920272;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 14;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 98U * sizeof(double));
  *obj_Scale = 1.6320622944710241;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 14;
  memcpy(&obj_Alpha_data[0], &dv3[0], 14U * sizeof(double));
  obj_Prior[0] = 0.90909090909090917;
  obj_Prior[1] = 0.090909090909090925;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int jd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { -1.3450294711737696, 0.38379651009023674,
    -0.60183050666171256, 0.034887580468893738, 1.5937730084070825,
    -1.9107475838742238, 4.8495856893047815, -1.0221699430586351,
    0.17779281124353266, 0.18871538122231632, -1.6815838911436352,
    -0.0040175443950247946, -0.87440991126447531, -0.55180494428622284,
    -0.8781397103021964, -0.16529071539309648, -1.2166995305715129,
    -0.9263859292975, 1.0887394616716777, -0.61532549311203821,
    -0.50962123529970049, -0.73671113900243257, -0.20013953270379509,
    -1.1288610985843985, -1.6626465395395194, 0.30708662278476034,
    -0.61532549311203821, -0.52910317320804212, -0.44139191869913569,
    -0.38385629751841194, -0.33831521070036968, -1.5208669623918949,
    -0.062023538368197149, -0.61532549311203821, -0.502368753938589,
    -0.48416416776671262, 0.62658897831868088, 0.36439224519654512,
    -0.41708414226748597, -0.048933161030524357, 0.42101217949771036,
    -0.40290517012076049, -0.80500071942984308, -0.64558836129347807,
    -0.33831521070036968, 0.10301079846012755, 0.49076385345831247,
    -0.61532549311203821, 0.16027519973406551, -1.0422827995341173,
    -0.69345294229307775, -1.3045379625586271, 0.202606768072171,
    0.3659150771765341, -0.87440991126447531, 0.14845435301084231,
    -1.0134556937731405, 1.4128779707237349, -1.3045379625586271,
    -0.36868548725394873, 0.085052396960729748, -1.1334943294169124,
    0.00059071574696583826, -0.44127449257831008, 0.14389042447184652,
    -1.1288610985843985, -0.56358072452382935, -0.23799209802010576,
    -1.6516631657217868, 0.54020472826795085, 0.70237648309131273,
    -0.60293373426078967, -1.0410226665972842, -0.99992341266558771,
    -1.1483628757402398, -2.169832002026661, 8.5172492926079677,
    0.64985228809694984, -0.11093579267928262, -0.60183050666171256,
    -1.540606671888219, -1.0940946572277426, 1.1982654339550218,
    -0.53370581180396748 };

  static const double dv3[12] = { -0.30634398594102719, -0.76797309363324207,
    -0.99999999999999989, -0.28304672102756229, -0.99999999999999989,
    0.43066860028649978, 0.99999999999999989, 0.18125697553923675,
    0.44877344639564037, 0.82089950807998457, 0.055511987069898475,
    0.42025328323057159 };

  static const double dv[7] = { 42.795808755234376, 2.1135127192421872,
    2.2851562499999996, 8.3810592243984381, 16.900948610156252, 74.25,
    23.890859249367185 };

  static const double dv1[7] = { 17.777305299019147, 1.0536409793375545,
    1.1384538377764957, 0.27478261526648373, 2.424286877405105,
    23.158474920208395, 37.251284980703282 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.3696778680969908;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 2.7719734422000823;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.0625;
  obj_Prior[1] = 0.9375;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int je_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { -1.40931862458935, 1.0339326193174772,
    -1.2658885828385735, 0.50705611313719667, -0.185892913210933,
    -1.2182191802030089, 0.49225198626701555, 1.580775931195159,
    -1.52279026028713, 0.68278242460190819, -0.50461508028927982,
    -1.0285066913825389, 7.2133065754739408E-16, -0.10893221338219748,
    0.274197856629131, 0.0515606487198588, -0.07974101309219335,
    -0.43800716757053754, -0.61709334582410491, -0.45683219257612789,
    -0.39574972286502369, 0.82433995532221693, 0.089218166370013216,
    -1.435338235659485, 0.452727005581509, 0.18781104858853029,
    -0.15227739752537547, -0.52403894599266254, 1.0831024473198305,
    1.5639534229779359, 0.089708639728718273, -0.70729404632139481,
    -0.92906504468607842, -0.30455479505075167, -0.41266791325544133,
    -1.4033651444934176, -0.48779960810938655, 0.68278242460190819,
    2.429019532864062, 1.7767169884130898, -1.6750513727791374,
    -0.071709681584775642, -0.3775893389241, -0.38941302421451679,
    0.85223207742281981, 0.25821173117988627, 1.0975368556065854,
    0.15227739752537692, 0.17880187462077107, 0.79027921132722567,
    -0.89160155541243391, 0.767507251012364, 0.41151167999655824,
    1.0763444093730186, 1.9796061678298913, -0.51092882656140381,
    0.13931170388260963, -0.50996879380645754, 0.17443346613917407,
    -1.4389939394260458, -0.73805001399015491, -0.30455479505075167,
    0.060997325133675805 };

  static const double dv3[9] = { 0.18524315074782011, 0.482262766098983, 1.0,
    0.14359280912965341, 0.026001665335871983, -0.025158745141450098,
    -0.65745567512183123, -0.15448597104904729, -0.99999999999999989 };

  static const double dv[7] = { 55.152957877647061, 0.60120853747058833,
    2.4941176470588231, 8.0478162662352943, 17.399967638235296,
    119.99999999999997, 20.00255894641176 };

  static const double dv1[7] = { 13.270962315634467, 0.63824432675799314,
    1.1802915890974217, 0.47672342074554647, 5.40056955854006, 39.40177660969109,
    30.714241476695751 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.086958525220866556;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 2.4485307550568565;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.47058823529411759;
  obj_Prior[1] = 0.52941176470588236;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int jf_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[119] = { -0.44054055882928939, -0.89253132526990353,
    2.7945636599405033, 0.074957059168449289, 0.13312265709935109,
    -0.060118286374464654, -0.879759330595507, -0.65624986066754731,
    -0.9376579208423711, -1.1486166946459275, 0.20333604471363376,
    0.040387982930312961, -0.060118286374464654, 0.040363601974824574,
    -0.71266968001407371, -0.35706033749577143, -1.1486166946459275,
    0.26316665234775616, 0.23353625272318929, -0.060118286374464654,
    0.057773029669831992, -0.51203296546705579, -0.62217743889712085,
    -1.1486166946459275, 1.6465156852072849, 2.3320122437563828,
    -0.060118286374464654, 0.25236883358598611, -0.49361982656112935,
    -0.78196853338656191, -1.1486166946459275, -0.019831160761974154,
    -0.26804616758193922, -0.060118286374464654, 0.1148976942646462,
    -0.536359848813791, -0.8309871919887567, -1.1486166946459275,
    0.063344408110916212, 0.047964924187202718, -0.060118286374464654,
    -0.779113966129984, -0.49361982656112935, -0.78196853338656191,
    -1.1486166946459275, -0.019831160761974154, -0.26804616758193922,
    -0.060118286374464654, 0.1148976942646462, -1.0208490262152592,
    2.0509625481435849, -0.057949788058191495, 1.1088126305019144,
    2.0327604713959344, -1.517986730955182, 0.60489184153884312,
    -1.0420082459132995, 1.9820079099726839, -0.057949788058191495,
    -0.59161961096048166, -1.2210529986828302, -1.517986730955182,
    1.3352155692675125, -0.737196732270148, 0.19050674085826363,
    0.27764002935341958, 1.7072589580869248, 1.2675245187205091,
    1.3977501582062526, 1.8244969759383753, 0.19523433981614494,
    -0.5990740683943131, -1.1486166946459275, -0.31692011566841738,
    -0.52598833309524162, -0.060118286374464654, 0.38746427548918094,
    0.1327926357035194, -0.49963463747728365, -0.14184724241109437,
    0.3100788607152698, 0.2940105422790083, -0.060118286374464654,
    0.77252144621894248, 0.4691816015160285, -0.91312896008810207,
    -1.1486166946459275, -0.60997546769482758, -0.295623923283811,
    -0.060118286374464654, -0.18456069828893185, 0.396206801857941,
    -0.70807170651659379, -0.14184724241109437, 0.306343770337547,
    0.82824956323216992, -0.060118286374464654, 0.45461645285042884,
    0.35443188386839047, -0.86006707685949657, -1.1486166946459275,
    0.19765939163147636, 0.91847342754960115, -0.54607443456803706,
    0.75328141454769626, 0.47580539461269977, -0.99536384185321325,
    -0.14184724241109437, -0.19472870283039048, 0.689055679296109,
    -0.060118286374464654, -0.10506281332985366, 0.37272486530645377,
    -1.1198041577734, -0.14184724241109437, -1.3941376162889008,
    -1.1841773840957144, -0.060118286374464654, 0.16576787756038991 };

  static const double dv3[17] = { 0.38011096123610666, 1.0000000000000002,
    0.44580254722407936, 0.17192408468756623, 1.0000000000000002,
    0.32408566605671885, 1.0000000000000002, 0.0066253386919858182,
    0.16451617006838007, 0.28257397887168195, -1.0000000000000002,
    -1.0000000000000002, -1.0000000000000002, -1.0000000000000002,
    -0.456837292305138, -0.31046751442071258, -0.0083339401106680214 };

  static const double dv[7] = { 67.62684026134022, 0.79942974549484547,
    2.4690721649484546, 8.3626970316185556, 18.053198068659796,
    72.742268041237139, 2.886145517391753 };

  static const double dv1[7] = { 34.389206709139408, 1.6870885568520457,
    1.1919312781453908, 0.2935588939261119, 2.7954446632061605,
    12.346793064155248, 1.3448960189951698 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.13686086144531345;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 17;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 119U * sizeof(double));
  *obj_Scale = 2.7387939441525226;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 17;
  memcpy(&obj_Alpha_data[0], &dv3[0], 17U * sizeof(double));
  obj_Prior[0] = 0.422680412371134;
  obj_Prior[1] = 0.577319587628866;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int k_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[77] = { 0.903415403292811, 0.29330856544487155,
    0.65895943792133549, 2.118960335011415, 2.4381362401426174,
    0.2823028806494548, -0.093163112026521014, -0.82971002556416129,
    -2.9274659012889224, -0.24777058740118468, 0.14576492029723662,
    1.067514140995411, 1.6778979485217449, 2.1310982541890895,
    -1.1240182232203135, -3.0438753013760786, -0.36866792411085403,
    0.17195739721630143, 1.1470384233329654, 1.1196599213728289,
    2.5681452360816959, -0.34159507946997347, -0.83350915112573876,
    -0.67091126588502736, 2.2955039324180091, 5.65052372114385,
    0.56142189422391287, -0.46241573022613924, -0.41972668040463246,
    0.93548911186146577, 7.9127996405014969, 0.40894445563618492,
    0.055855518517962117, -0.27593514649946127, -0.14021437205592469,
    0.37937279755114328, 0.25953610626551449, 1.9283814733728635,
    0.4313819124213949, 1.3192995183400622, 0.84054090779837087,
    -0.34395318865885594, 3.444367633704851, -0.76124955800152017,
    0.71940810627617024, -0.83604111506601131, -0.45710769140452345,
    1.957016962096203, -0.47201214657903817, 0.38225672759561358,
    -1.6433446859160963, 0.538062101211666, 2.1999407111675486,
    2.5240946510189457, -0.83417317364837729, 1.1319335250829243,
    1.3970001329365558, -1.6051664600538327, 0.65895943792133549,
    -1.5347505784523221, 1.1185691051462581, 2.5152549892451193,
    1.8636413817780046, 0.20548178728592456, -1.8875363102868672,
    0.71940810627617024, 0.58264521249244527, 2.1553831379236512,
    4.4690880842663256, 1.0555576418210191, 1.9083418135982952,
    -1.6519472833965581, 0.17537009108265816, -4.4546494427312338,
    -2.6800759262179294, 1.6778979485217449, 1.5195514095636871 };

  static const double dv3[11] = { 0.24780852221215874, 0.99999999999999933,
    0.24424997797246631, 0.26751284278106069, 0.0020470559051900539,
    0.2494479697093509, 0.78349168370826072, -1.0, -1.0, -0.54779394391578151,
    -0.24676410837270518 };

  static const double dv[7] = { 31.400884025817462, 2.9928092296007582,
    2.409885931558934, 8.5961879292053158, 20.408194181482877,
    71.931558935361153, 5.89720586480988 };

  static const double dv1[7] = { 13.415245655551887, 1.6447772933856439,
    1.6542961610502047, 0.27709784845572422, 2.6096712085887948,
    21.496206665259781, 10.515497899329493 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.3720367317189739;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 11;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 77U * sizeof(double));
  *obj_Scale = 3.9976516784784213;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 11;
  memcpy(&obj_Alpha_data[0], &dv3[0], 11U * sizeof(double));
  obj_Prior[0] = 0.030418250950570346;
  obj_Prior[1] = 0.96958174904942973;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int kb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -0.38304802970673579, 0.89071191303238217,
    -0.034575581124042833, -0.593005125895741, -0.3530389694660076,
    2.0097785003961044, -1.4174438491124539, 0.28460938902193966,
    0.35479961262634069, 1.2998549552309233, 0.31896340886016417,
    0.27390710499300969, 1.7279951230209807, -0.85010894623695121,
    -0.75232535741926232, 0.59221302378818785, 1.6175765115059153,
    -0.36925108913766175, -0.32716033452167359, 0.60086161352048539,
    -0.63416495998015143, -1.4424916489147632, 0.53522361239142824,
    -0.98774024994901866, 1.7361587811228054, 1.7543598045517153,
    0.31907823614536157, -0.82485793818337017, -0.11120094869720691,
    0.38717826560860669, -0.034575581124042833, 0.59199286145924979,
    0.94588366586961781, 0.037294858770237763, -0.37468688914326093,
    0.075055843247222628, 0.42871343444755994, -0.034575581124042833,
    0.51730490629531023, 0.92473544597935708, 0.037294858770237763,
    -0.484818954925287, -0.1891233634719009, 0.68277518908200707,
    -0.034575581124042833, -0.59850100053615063, -0.76553376077485358,
    0.31907823614536157, -0.46871000897540732, -0.15993092148025026,
    0.44845841267829023, -0.034575581124042833, 0.29016079583584631,
    0.53596675799099491, 0.037294858770237763, -0.3594566050696601 };

  static const double dv3[8] = { 0.42401918338840605, 0.62973144485646659,
    1.0000000000000002, 0.97151192416913867, -0.99999999999999989,
    -0.99999999999999989, -0.95344573630114937, -0.071816816112861948 };

  static const double dv[7] = { 40.750266772794106, 1.9835299630588232,
    2.1544117647058818, 8.5151759899852912, 18.562233266764704,
    83.20588235294116, 25.503418937411755 };

  static const double dv1[7] = { 12.860088241585554, 1.1169935333569589,
    1.57370499459358, 0.31398314425030116, 3.7966689592146032,
    21.292952252511711, 14.632318013442728 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.3468345590073483;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 2.8636507351743812;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.73529411764705876;
  obj_Prior[1] = 0.26470588235294124;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int kc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { 0.733641347825937, -2.63043686872176,
    -0.11542865007594678, -1.0002925267326419, 0.48651782468159643,
    1.8193447907023998, -1.6939596333509004, -0.56020564867127653,
    1.0537391140818804, -0.015336673786315027, 1.9792565742803607,
    2.1417241704368748, 0.97122917398398678, -0.57490175748889816,
    -1.3674853967797447, 1.3717939284207503, 0.3349852432273957,
    0.099105977849434562, 0.15883326024429498, 0.4058187628383782,
    -0.93347250913174684, 0.76256114869848268, -2.5307659548146506,
    0.034709314358500852, -0.15749006656718428, -0.20686169842693375,
    0.4058187628383782, -0.81265651257816429, -0.3966168718598192,
    0.26173693503180834, -0.015336673786315027, 1.0073155981147333,
    1.7405159660184792, 0.12311355726557391, -0.45310989396555351,
    -0.16359008414530071, 0.29643370321798407, -0.015336673786315027,
    0.90800653492044225, 1.7093947146298387, 0.12311355726557391,
    -0.56217171765810525, -0.68607698040202947, 0.66198053313130278,
    -0.015336673786315027, -0.5149874344207499, -0.532428889753761,
    0.12311355726557391, -0.48055534272597028, -0.4575831802800589,
    0.31292784424745868, -0.015336673786315027, 0.60598368839430006,
    1.137291335068819, 0.12311355726557391, -0.43802761484341229,
    3.26018011393578, -1.6545804330992335, -0.26556661451039421,
    -1.3811222886894838, -1.1975229108983136, 0.97122917398398678,
    -0.5964397558629877 };

  static const double dv3[9] = { 0.39165000572285191, 0.69840419227779571, 1.0,
    -0.12307008753698555, -1.0, -0.17087790931773719, -0.55070527146656811,
    -0.16148631894806489, -0.083914610731292055 };

  static const double dv[7] = { 43.397031508064543, 2.0660260653709686,
    2.1306451612903237, 8.4631851084032288, 17.662911385483881, 81.3870967741936,
    26.71599106458066 };

  static const double dv1[7] = { 10.278984675935478, 1.3371422592172522,
    1.9981621645801952, 0.23613916238560778, 2.5799987602460419,
    21.223521469451104, 14.775907420572985 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.6715883765261634;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 2.3858717849978603;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.80645161290322576;
  obj_Prior[1] = 0.19354838709677422;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int kd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[77] = { -0.42481939859856305, -1.4835641049258987,
    0.78930096665694971, 2.7412195666188093, 3.4039322660383089,
    -0.85815629419068862, -0.17608745982395349, 0.3509239972717223,
    -1.4290679398932649, 0.96229843880093879, -0.75964954314723732,
    2.1406465358465, 1.5693355435199885, 0.0448636511976706,
    -0.43447299041040238, -1.2390205008123421, 1.2217946470169219,
    0.86732003113270506, 2.8616680018206768, 3.3899544218029964,
    -0.42530274435940973, 0.49439216235010214, -1.6028587049548015,
    1.0487971748729332, -2.2214235488878273, -0.23293796820338136,
    0.35558962466465, 3.1711003750861368, 0.74183063408133065,
    -1.4958435799778798, 0.2703085502249834, -3.4967388886592334,
    -1.2735739144882152, 0.96246258409231922, -0.059039923099790385,
    -1.1980134260517776, -1.6399946002434591, -1.1136712269269278,
    2.6085405735210481, 3.1298886793879142, -0.25128333476301928,
    -0.43407353287088679, -0.32975214338979769, -0.40182470517816216,
    2.8652706323848167, 1.3676550641174927, 1.1262278357292501,
    1.1647535705682091, -0.552661216321972, -0.533641912634436,
    -0.47169209483170704, 2.5192756880968386, 1.4611704222319482,
    1.2269672357030998, 0.96246258409231922, -0.52809803479051376,
    0.64383929188980427, -0.4522462910150099, -1.1136712269269278,
    -0.978232315069766, -1.0314838327172786, -1.8696112265701375,
    9.1098852451783312, 1.0582987516853111, -1.4886272450092088,
    -0.68117754656695551, -1.659635647764319, -1.3800382248304686,
    0.55788061114053977, -0.25717437786466751, 1.1617036212032439,
    -1.4009264537280717, -0.68117754656695551, -1.6573743136461905,
    -1.2360571382254097, 0.7601715976164295, -0.24873134743518727 };

  static const double dv3[11] = { -0.99999999999999989, -0.77603686049553,
    -0.39804527442864468, -0.21633510383533508, -0.99999999999999989,
    0.90814970355349489, 0.99999999999999989, 0.035557257175106931,
    0.037788928106497852, 0.40892134992440982, 0.99999999999999989 };

  static const double dv[7] = { 43.983839878281245, 1.9993500404609374,
    2.3874999999999993, 8.3954681593906244, 17.111908569921876, 79.453125,
    23.932017316093749 };

  static const double dv1[7] = { 17.54836990230244, 1.1522770265099684,
    1.1560862567606562, 0.29560514505186913, 2.9035074665515963,
    29.660243911634272, 34.8234158879019 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.4001264783928409;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 11;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 77U * sizeof(double));
  *obj_Scale = 3.8524592522111329;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 11;
  memcpy(&obj_Alpha_data[0], &dv3[0], 11U * sizeof(double));
  obj_Prior[0] = 0.0625;
  obj_Prior[1] = 0.9375;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ke_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -1.293875844907808, -0.39325621676419409,
    -1.2019301327661474, 0.4796822089413087, 0.18630687588958741,
    -2.8618381798307726, 3.4259769717045856, -0.2613833665646958,
    -0.88636009781840863, -0.20230507185172772, -0.86499419211363482,
    -0.53018543854763356, -0.20652440473005421, 0.19570935345166629,
    0.076016109625398, -0.86745781980159742, -1.3447337128967787,
    0.40238043422226571, 0.80726176427268648, 0.85560110531023315,
    -0.27096601324902519, 0.23471388873563609, -0.12721104940721764,
    -0.0595014917210962, -1.2481470649020594, -1.0485646136377726,
    0.32453835029008948, 0.13416636089254091, -2.2599515464339457,
    2.3408894195563548, 0.15470387847485076, 1.8380104896740097,
    1.9172214289497362, -1.2686499147703416, -0.5890601572337183,
    0.96246014464203955, 0.35683335379900383, 0.51171282880142921,
    0.060750411366631119, -0.50431652412115635, 0.32453835029008948,
    -0.55605611563920643, 0.31596204472881156, 0.25929463862711577,
    0.583114618866745, -0.22984277797366209, -0.300467130631015,
    0.32453835029008948, -0.589577431654944, 0.992542994953492,
    0.074812379721203179, 0.65451640893206076, 0.012532936332321793,
    -0.22424497898941306, 0.85560110531023315, -0.58257208506134361 };

  static const double dv3[8] = { 0.00476794449788096, 0.1480339698714572,
    0.43233788627954817, 1.0, -0.018974941422487512, -0.48304125307872897, -1.0,
    -0.083123606147669754 };

  static const double dv[7] = { 64.447846031666657, 1.7611448181666662,
    2.6833333333333331, 8.1288242769444441, 15.790509423888887,
    104.33333333333331, 6.19496268361111 };

  static const double dv1[7] = { 21.6387859946961, 1.2715238331921888,
    1.4005251116046773, 0.33504997904814932, 3.2501785198200395,
    11.29809978817365, 8.4433558296792821 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.077290562504523319;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 2.3261194159281797;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.5;
  obj_Prior[1] = 0.5;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int kf_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[35] = { -1.8637851337994349, 2.0051638627807589,
    -1.8066461005642309, 1.6646514110637394, 1.6455087006091245,
    -2.0902432706679077, -1.3112629161987366, -1.8782314349012597,
    2.0347718702303057, -1.8066461005642309, 1.6433620338687656,
    1.2440228775112931, -2.0902432706679077, 1.0844374203328564,
    -1.874494942825693, 2.0604529293807277, -0.35552473464918627,
    2.0152966122727607, 1.5910926214717225, -2.0902432706679077,
    1.4249999909546542, -0.49745217901016375, -0.372628638354484,
    0.37003594830833592, 0.74037970090241434, 0.69613780552687821,
    0.50096739544933278, 0.31973688625814145, -0.28427304057586261,
    -0.66412823950959665, -1.0810854176067084, 0.62341957374142465,
    1.4216122616959066, 0.0690989510964593, 0.30338203429149763 };

  static const double dv[7] = { 89.979357877200016, 0.73382217652000037,
    1.9940000000000002, 8.2448162218000025, 17.200027277400004, 65.04,
    3.4192345670200006 };

  static const double dv1[7] = { 35.753957802719015, 2.0860455437687819,
    0.82694668288017859, 0.28216227017754447, 2.4062204053581175,
    13.893119718414729, 1.5821507924849827 };

  static const double dv3[5] = { 0.25063144131052228, 0.14403627684621212,
    0.25943372052662983, -0.020713255711515145, -0.63338818297184907 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.9669815929335801;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 5;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 35U * sizeof(double));
  *obj_Scale = 4.1529619051566948;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 5;
  for (i = 0; i < 5; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.82;
  obj_Prior[1] = 0.18000000000000002;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int l_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[161] = { -0.83035267542924, 0.89777432529762446,
    -0.67446700400918336, 1.411998882394762, 1.3333298624525267,
    0.75316382016911676, -0.37717074813047852, -0.9903293260240873,
    0.97662457734387431, 2.2681654289968169, 1.409481130284012,
    1.6113311970892616, 0.40433005082763068, -0.40919374247379831,
    -0.34498044593977173, -0.91063321712133749, -0.67446700400918336,
    2.4733855572529957, 5.807901087593863, 0.75316382016911676,
    -0.60105587048231568, 1.8917654114252054, 0.50444180988347054,
    0.82687607405510244, 0.040157617490463135, -0.2329536996956674,
    0.40433005082763068, -0.517862945229082, 2.1726157624977978,
    0.47594944321055105, -0.73452072713175487, -0.23492696179122166,
    -0.059326113817153407, 0.40433005082763068, -0.59679639748908331,
    0.29401868973521478, 0.17648707453997448, -0.614413280886612,
    -1.181669822759144, -1.1950555971757626, 1.1019975895106027,
    -0.46136588997607653, 0.29204695561033833, 0.1632873922966486,
    1.9678968133839598, -0.94853020209113548, -1.0597104588600967,
    1.1019975895106027, -0.47898596169773061, -0.1484758130617366,
    0.886972685835571, 1.0670909665453885, -1.2155368162754276,
    -1.6436087224833722, -0.99100502653831357, -0.16274645614185312,
    3.0215186906153493, -0.86845513905206217, 0.70676862780995975,
    -1.5264375307535152, -1.1847341667150317, 2.148498897535061,
    -0.59786966131743191, 2.8221449346414476, -0.75971068308526513,
    0.70676862780995975, -1.7207505911714007, -1.6506524484420675,
    2.148498897535061, -0.59278991218485366, 3.1680653867293045,
    -0.90278333197848559, 0.70676862780995975, -0.87514180643323314,
    -0.5822969460029499, 2.497332666876547, -0.613361968388104,
    3.0074082209486952, -0.69543451141784041, 0.70676862780995975,
    -1.6091378688415208, -1.3956555184912436, 2.497332666876547,
    -0.62670987964561764, 3.022439604049652, -0.86210474176155516,
    0.70676862780995975, -1.7725576216436949, -1.4007584580128065,
    2.148498897535061, -0.64218459148356222, 3.0478519569020843,
    -0.85625142472506643, 0.70676862780995975, -1.6143038152366618,
    -1.3912903633835474, 2.148498897535061, -0.62199680956768955,
    -1.0347879195358411, 1.0562590764878323, 2.1480579827516739,
    0.50170105413928257, 0.52125632532934152, 1.1019975895106027,
    -0.52655368087521426, -1.0778811189739439, 1.0584112220027539,
    0.28639256595195955, 0.56696295789668039, 0.67768929069512751,
    1.1019975895106027, -0.57283031253612, 3.2464862727584252,
    -0.87978109122903525, 0.70676862780995975, -1.4278169841927359,
    -1.532150967477504, 2.497332666876547, -0.58129523095030555,
    3.01144089414016, -0.62985419102516094, 0.58666118156481672,
    -0.012634481281311654, 0.3645797366816263, 1.7996651281935749,
    -0.51106816781765374, 3.4554460778465206, -0.53588377356680206,
    0.58666118156481672, -1.7611309552610246, -2.3969224866633305,
    2.148498897535061, -0.53068872948644863, 3.6247032312886973,
    -0.834503133515425, 0.70676862780995975, -1.6733853114130495,
    -1.6995082980142329, 2.148498897535061, -0.526842888732634,
    2.5459448408860812, -0.61426133968334529, 0.64671490468738824,
    -2.1417889374920387, -2.1380961712478155, 2.148498897535061,
    -0.57349080021970056, 3.4977669904265172, -0.76250268589388837,
    0.70676862780995975, -1.8242926790319867, -2.0413173762528105,
    2.497332666876547, -0.56454594434741145, 2.9960050325196592,
    -0.73262083554583013, 0.58666118156481672, -0.76906466226993664,
    -1.0491579919752596, 2.148498897535061, -0.5480576779937395 };

  static const double dv3[23] = { 0.50537008036238873, 0.8392918300524469,
    0.00079028017764723457, 0.31623610438567318, 0.12774015193885274,
    0.046656205441840272, 0.27659329568749419, 0.025435260232093804,
    0.99999999999999933, 0.99999999999999933, 0.99999999999999933,
    0.99999999999999933, 0.99999999999999933, 0.99999999999999933,
    -1.0000000000000002, -1.0000000000000002, -1.0000000000000002,
    -1.0000000000000002, -0.13811320827843387, -1.0000000000000002,
    -1.0000000000000002, -1.0000000000000002, -1.0000000000000002 };

  static const double dv[7] = { 32.124596376666673, 3.0628367006628787,
    2.4231060606060613, 8.59963403727273, 20.287063596628787, 71.045454545454561,
    5.009208214625 };

  static const double dv1[7] = { 15.381434858464623, 1.582376273531956,
    1.6651756927026327, 0.25577617321817303, 2.5598128186322944,
    17.200169614675069, 6.612586591052918 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.4719569701602444;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 23;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 161U * sizeof(double));
  *obj_Scale = 2.6030792132457106;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 23;
  memcpy(&obj_Alpha_data[0], &dv3[0], 23U * sizeof(double));
  obj_Prior[0] = 0.034090909090909095;
  obj_Prior[1] = 0.96590909090909094;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int lb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { 0.69355176235980542, 0.35351954431537497,
    -0.36415347160690276, -1.2257605051906557, -0.8425414091948078,
    1.7643740683811475, -1.437276874236473, 0.90650930683007735,
    -0.019310278119904798, 0.62899236004828474, -0.21239302032156443,
    -0.32647855873050485, 1.064842499419459, 0.050193089858332374,
    0.46569428733210927, -1.4497585082509208, 0.827621526379322,
    1.7661800125869542, 1.8326486913919748, 0.83166530976556274,
    -0.077484444681337472, -0.037576700140425343, 0.45953305526908877,
    0.87727881796208151, -0.799252005594198, -0.84076788999221252,
    0.13213374080387416, 0.44892969094336022, -1.0560538546676972,
    -2.2965867394720259, -1.1586701369310528, 0.61954564191051,
    1.0355181170959891, 0.36531093045777036, -0.21732180216312913,
    -0.66594443544861259, 0.34459009738160085, -1.1586701369310528,
    0.99608753409673723, 0.94023625356309459, -0.101043448850022,
    0.09681861205871499, 1.5372778614232416, 0.23229033910718411,
    -0.46346805477242159, -0.3749788321899758, -0.58841279082064368,
    -0.80057501781171059, 1.9832795263200689, -0.77728641045143976,
    0.73381383673586642, -1.1090128453482935, -0.36150328915861452,
    -0.49633128836191748, -1.7332837764272953, 0.57024761383903011,
    -0.6853420515932459, 0.4282001299833274, -1.0593555537655339,
    -0.6727402142650859, -0.84471980558459236, -1.5001065867733991,
    0.92262950077664629, 1.2793884406766025, -0.90545330570522553,
    0.033104861055172137, 0.300985211343752, 0.46344409690672805,
    -0.101043448850022, -1.2661107109683456, 1.2063421329783597,
    -0.7827673555820025, 0.033104861055172137, 0.1567734531913412,
    0.19539147000148741, 0.13213374080387416, -1.1708308281592057,
    1.9113962148845252, 0.71996921935543634, -0.56278263793794026,
    -1.6571157407663859, -1.8099005162979966, -0.101043448850022,
    -0.00070834511573154651 };

  static const double dv3[12] = { 0.30938461888746738, 0.81956069407463183,
    0.15428518275924524, 0.9971636351452885, 0.17603370554884692,
    0.968809110315761, -0.31466308638443008, -0.74084957018931752,
    -0.24410014759186066, -0.86557108117354375, -1.0, -0.26005306139208867 };

  static const double dv[7] = { 31.606061507333337, 2.3905331022000005,
    2.9333333333333349, 8.6935305046000018, 21.050849934666672,
    92.600000000000009, 12.666602762699998 };

  static const double dv1[7] = { 14.12484905140284, 0.55381212707533056,
    2.0138029443941567, 0.36821069017050728, 4.4372961896787331,
    25.731504907944778, 7.9244319969668444 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.50320702769357106;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 3.0250685790585363;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.39999999999999997;
  obj_Prior[1] = 0.6;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int lc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[77] = { 1.1835737730170537, -3.8187342447982968,
    -0.40223300589671762, -1.4020902939692481, -0.1358128373693481,
    1.0645535131332211, -1.2235632114642854, -0.48823248956336,
    0.17185955825514274, 0.56312620825540372, 0.94772716462605844,
    0.8528070838719285, 0.42045390854841413, -0.029547100122585958,
    0.11860858211273938, 0.70706093016535165, -0.33327877631442315,
    1.2157684663563058, 1.2078852752900013, 0.42045390854841413,
    0.6319334082488165, 0.006197634590918215, 0.48848895761593863,
    -0.29880166152327592, -0.7250768726468908, -0.73487265005945512,
    1.4939532495230925, -1.1522749498524529, -0.54586320889889051,
    1.0977727069175036, -0.091938972776392944, -0.43614883479661654,
    -0.401827483767461, -0.0089458278414571782, 0.037391488699932161,
    1.3742955089984632, -0.17108204102687441, -0.36775589110557039,
    -0.17989732941384429, -0.28629144259799333, -0.65304543242626412,
    1.7722319526223025, -1.3260032549980039, 0.38007206196762694,
    -0.81595838339048388, -0.50001781017673608, -0.78204095200134371,
    -1.5118449052060068, 0.798889336713756, -1.2436182310132595,
    0.084088574117495291, -0.81595838339048388, -0.16143568784838436,
    -0.15772699652689842, -1.5118449052060068, 0.515699900660423,
    1.0787912326718612, -0.74991890100926417, -0.40223300589671762,
    -0.52608277318153562, -0.70590364133309846, -0.0089458278414571782,
    -0.91073190941350557, 0.999986961560748, -0.68753420644990582,
    -0.022984743194098503, 0.54860912642820414, 0.80805821428265157,
    0.20575404035347847, -1.0325460009550451, 1.7974462461882252,
    0.077044558133984253, -0.43671012068786474, -1.9364389388241017,
    -1.9917359522488618, -0.0089458278414571782, 0.0079799713733226686 };

  static const double dv3[11] = { 0.31130546141788296, 0.7338540027064373,
    0.25693721760194649, 0.23397166728419747, 1.0, -0.099398132027133712,
    -0.082220407323706668, -0.68521560255102432, -0.575001252885662, -1.0,
    -0.094232954222937482 };

  static const double dv[7] = { 36.15748575708335, 2.705398817958335,
    3.0666666666666678, 8.6038093558333362, 19.349755908333343,
    90.250000000000043, 12.589876714208335 };

  static const double dv1[7] = { 12.488139108759789, 1.088486598830573,
    2.9004747237630615, 0.26876477817027211, 3.1781173760438457,
    27.945988278634296, 8.9114123929563753 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.0769964704515525;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 11;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 77U * sizeof(double));
  *obj_Scale = 2.4946402240276795;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 11;
  memcpy(&obj_Alpha_data[0], &dv3[0], 11U * sizeof(double));
  obj_Prior[0] = 0.5;
  obj_Prior[1] = 0.5;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ld_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[147] = { -1.483967390858687, 2.3523293153495297,
    3.0060312118079637, 1.2505829772101373, 1.8842420097949224,
    0.52435261912341713, -0.60745335502728759, -1.5177002152692796,
    2.3554296487801318, 0.40687038672254983, 1.3150366129124915,
    2.043699639111189, 0.52435261912341713, -0.6165441936366769,
    1.867361182219363, -0.43668751150798818, 0.99377766980635307,
    -0.65503799863636258, -0.20886834048247596, 1.5377082425978836,
    -0.61820708923609924, 1.6833705621485617, -0.076648323387752917,
    0.82608987463955208, 0.74261748248586845, 1.7245360466898547,
    1.0310304308606504, -0.60441129481379963, 2.0309323374322177,
    0.058723390427079754, 0.82608987463955208, -0.98422387935479339,
    -1.0903603970139157, 1.284369336729267, -0.608265666948392,
    2.163424747180132, -0.37146108281362772, 0.99377766980635307,
    -0.8975649644682534, -0.37946155984442437, 1.284369336729267,
    -0.60751016862546892, 1.3189859995495796, -0.054185605156913161,
    0.90993377222295257, -1.3601674161096464, -0.82652962090916915,
    1.284369336729267, -0.616673943506523, 2.0640606252263884,
    -0.26773882368583757, 0.99377766980635307, -1.0466033457797954,
    -0.72787958776619555, 1.5377082425978836, -0.61491676632657877,
    1.6712875602721646, -0.22469168818314042, 0.82608987463955208,
    -0.004444317932112361, 0.28346340474724252, 1.284369336729267,
    -0.61167771968489149, 1.6897415905261226, 0.88006410369624477,
    1.1614654649731537, 0.74220866522564677, 0.659129904733201,
    0.27101371325480056, -0.24451267775279231, 0.99372697686052913,
    1.3516394681067618, 1.0776215673897536, 0.57227926126985762,
    0.8000046301827447, 0.017674807386183936, -0.42798849264324662,
    -1.5583291688083654, 1.9480563123915782, -1.43769536011226,
    0.84680313471628177, 1.1727480205094865, -1.249019721956899,
    -0.16185516639418071, 2.0539093752701265, -0.377369540292055,
    0.82608987463955208, -1.2488184014089687, -1.4174487055825387,
    1.0310304308606504, -0.51595928970939242, 2.3429593799888382,
    -0.54449026074305984, 0.82608987463955208, -0.74611636182091678,
    -0.75671419768063586, 0.77769152499203376, -0.133866250026336,
    2.2026622804235121, -0.59291210174884446, 0.82608987463955208,
    -1.2869986522261225, -1.344033029771611, 1.284369336729267,
    -0.543974556530492, 2.4356449639187279, -0.43945146894316106,
    0.82608987463955208, -0.2328659241202575, -0.35371787195434778,
    0.77769152499203376, -0.091577230394366022, -0.46160057341919813,
    -0.21627525190070604, -0.515412486694855, 2.0097548803016836,
    2.3772025994290753, 1.5377082425978836, -0.48559914281711691,
    -0.36373402628775137, 0.18685013560445193, 2.4191239287241606,
    0.83514169351185963, 0.53750868353367032, 1.5377082425978836,
    -0.44447772784169454, -0.40790835088350541, -0.13783481889504084,
    2.5868117238909614, 1.0729804257731934, 0.805869995290454,
    1.5377082425978836, -0.50960473260749783, 0.457060963824452,
    -0.13996055448428743, -0.68310028186165583, -1.7234650712644974,
    -1.0516711690219562, 1.0310304308606504, -0.53370945975186179,
    0.89103590856110437, -0.95047054626283212, -0.59925638427825545,
    -0.63651140679844831, -0.54960973517539247, 1.284369336729267,
    -0.412014404591877 };

  static const double dv3[21] = { -0.28101062933452914, -0.84510129165389847,
    -0.98628613549979072, -1.0, -1.0, -1.0, -1.0, -0.82409405388707169, -1.0,
    0.56161538513187215, 1.0, 0.16058039563734511, 1.0, 1.0, 1.0, 1.0,
    0.50310836058442088, 1.0, 0.12084582927584914, 0.21469259958610334,
    0.37564954015969915 };

  static const double dv[7] = { 45.367383326123985, 2.1503633082868197,
    2.4147286821705403, 8.40407662682945, 16.889566021162778, 77.581395348837177,
    21.974915059503861 };

  static const double dv1[7] = { 19.649562453829368, 1.0984315320362559,
    1.1926926452879758, 0.25898368366813873, 2.5112571390721858,
    23.683689559753777, 33.661166713920494 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 2.1911136207774335;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 21;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 147U * sizeof(double));
  *obj_Scale = 2.7084931921954838;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 21;
  memcpy(&obj_Alpha_data[0], &dv3[0], 21U * sizeof(double));
  obj_Prior[0] = 0.069767441860465115;
  obj_Prior[1] = 0.93023255813953487;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int le_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { 0.90934651997452121, -1.38934908206907,
    -0.36636636962198044, -0.65143492751471255, -0.73561973430509586,
    1.865989674169336, 1.1070694172330073, 0.99462871627852534,
    -1.248040956623103, -2.4941596622307713, -0.60725255465819361,
    -0.8440607283648256, 2.3932222136853269, -0.037001306201863531,
    1.6629141585887579, -0.26756932086137614, -0.1003922080458813,
    -0.98296888945390737, -1.2731507170661385, 2.3932222136853269,
    0.96866361756864594, 1.2753137580235048, -0.1661055233134813,
    -0.36636636962198044, -0.949912819218814, -1.4634687868942915,
    1.3387571346533449, 2.2061671081132324, 0.10188366250486212,
    -1.0522619181654023, 0.43155611510631636, 0.19972466631401625,
    0.76194821657655776, 1.3387571346533449, -0.30200329490653893,
    0.86296724962325533, -0.10983963458508683, 0.16558195353021726,
    -1.0024128088723558, -0.824872195510272, 0.81152459513735375,
    -0.31446775194647736, -0.68693359284515365, -4.9665329163102729,
    0.032594872742168275, -0.48010107896545506, -0.3446376924594452,
    0.28429205562136267, -0.36604832056922681, 0.76889765844919955,
    -0.332224723822421, 0.16558195353021726, -0.61095967626254921,
    -0.892152074773663, 0.28429205562136267, 0.66452901899625794 };

  static const double dv3[8] = { 0.99999999999999978, 0.042298786052851325,
    0.061603829508577082, 0.50300129986945685, -0.082072257225732664,
    -0.439653497148273, -0.085178161056879517, -0.99999999999999978 };

  static const double dv[7] = { 45.837738033431386, 1.8296326699607848,
    2.6754901960784321, 8.091254228911767, 16.373021827647062, 80.764705882353,
    3.6910357662941182 };

  static const double dv1[7] = { 14.245492759934434, 0.860486292746801,
    0.75195274163042047, 0.38721632392986821, 3.134377206213959,
    11.3801777210263, 3.7543902514209564 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.4299572462600534;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 3.3496409299570411;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.91176470588235292;
  obj_Prior[1] = 0.088235294117647051;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int m_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[294] = { 0.12319812540698923, 0.1132367964627765,
    0.14649667149121845, -0.89904120064899717, -1.0052377942743049,
    0.78905848291738856, -0.418130532805314, 0.089374902684321439,
    0.12821169104991198, 0.14649667149121845, -0.9093391919997299,
    -0.74844124986793936, 0.78905848291738856, -0.44519956947071088,
    0.14426710821082372, 0.074459354179814183, 0.14649667149121845,
    -0.75117019766456783, -1.0382405793874752, 0.78905848291738856,
    -0.42537082511301827, -0.056387507125973235, 0.17587715955201313,
    0.14649667149121845, -0.075163187430164355, 0.14159225856587146,
    0.38877808633538691, -0.42175872561387528, 0.004770340925478826,
    0.14135616081889771, 0.14649667149121845, -0.81482978890244617,
    -0.818041073705703, 0.78905848291738856, -0.40484484146529665,
    0.012645650151563848, 0.17220967531984224, 0.14649667149121845,
    -0.895447167064001, -1.1516363294364089, 0.78905848291738856,
    -0.38948088762929034, 0.037871766888891975, 0.14149567499196897,
    0.14649667149121845, -0.94932078919882568, -1.1525205787095363,
    0.78905848291738856, -0.41150041196993214, 0.098493452467918033,
    0.096697307983520872, 0.68812579955437447, 0.4283439250020315,
    -0.15049622702164614, -0.011502310246614703, 0.25435920121849009,
    -0.11051933961131891, 0.23103276283309795, 0.21420031249911273,
    0.37327427391606605, -0.045633698158366327, -0.81206310341061794,
    0.2810322614764863, -1.1327413517004921, -1.0392219104102711,
    1.8390876966885814, 1.2793451893340868, 1.2575732691223025,
    -0.81206310341061794, 1.1470134719769427, -0.80180276725529487,
    -0.35476636764024166, 0.21420031249911273, 0.55987258719970812,
    0.50090989352178994, -0.81206310341061794, -0.19123377295299471,
    -0.78895722267794732, -1.0878614641414326, -0.25972517455614869,
    0.81244685460236066, 0.92145252379624232, -0.41178270682861634,
    -0.31579018881779414, -0.77709797797123148, -0.95015193604552739,
    -0.3274288155640433, 0.10713820915632445, -0.21781644018990803,
    -0.81206310341061794, 0.38107157491347976, -0.36586089004450989,
    -0.98600682436104525, -0.80135430261930485, 0.02295095769781275,
    0.56826106971524937, 0.78905848291738856, -0.636141183429832,
    1.3325170130561632, -0.040026127950441713, -1.0721688666508831,
    0.710139433108019, 0.061198271475698139, -0.81206310341061794,
    1.0197585064277535, 2.1739636962232844, 0.68160685938442545,
    -0.86905794362719946, 0.13720869345356596, 0.24763297275735829,
    0.38877808633538691, -0.62008040626017547, -0.373336254065857,
    -1.5064505954073228, -0.59824337959562124, 0.2020559725263418,
    0.24253229210206798, -1.2123434999926197, -0.27013860298576636,
    0.016587574763508708, 0.55525568303983264, 1.9067913376964756,
    0.60849639247957155, 1.4781101270264319, 0.38877808633538691,
    -0.46537241627290715, -0.83529917069880566, 1.0179356993792381,
    0.75582944056226908, -0.033489596289760039, -0.2235195602428918,
    -1.2123434999926197, -0.28326260873649456, -0.318829884332161,
    1.1178280000597849, 1.1620512866096362, -0.503902197778684,
    -1.0452296807918009, -1.2123434999926197, -0.10780251692571484,
    -0.32423009497637173, 0.552247951949785, 0.41731123552279648,
    -0.038415532714542067, -0.38485545997720533, -0.41178270682861634,
    -0.1483540790917294, -0.61810358197070459, -0.29724204506844232,
    1.3651622096333196, 1.1610373830581326, 1.5262148816645091,
    1.1893388794993902, -0.55033280445075672, -0.46007671987545934,
    -0.430781175898135, 1.432865850641214, 1.1258696488491349,
    1.2242861473172075, 1.5896192760813919, -0.40220167693022713,
    -0.61266699251923817, -0.38534416977606889, 1.5005694916491088,
    1.0891411681493401, 1.3483400347222256, 1.5896192760813919,
    -0.29920030895913191, 3.037899653669565, -0.71119453211894423,
    0.75582944056226908, -0.719047790655652, -0.67235506270147782,
    2.3901800692453952, -0.60133945558707225, 0.998034223503404,
    -0.87815047950770275, 0.34960759451490186, -1.561121433551266,
    -1.1661603595255339, 1.5896192760813919, -0.4743991307637711,
    0.64486676208253169, -1.1933517966139084, 0.34960759451490186,
    0.969804082198027, 1.8951615095541978, 1.1893388794993902,
    -0.25625404269453017, -0.64939006116482745, -0.37426077184933687,
    0.62042215854647986, 0.31200997908715306, 0.4972230206581405,
    -0.011502310246614703, -0.19260630481685895, -0.56692988149567747,
    -0.36546472064559388, 0.62042215854647986, 0.041319210332947026,
    0.20671353825198108, -0.011502310246614703, -0.44306533434061918,
    -0.46803816914389357, -0.29799898489987203, 0.55271851753858536,
    0.11491704812651556, -0.024552658633738931, -0.011502310246614703,
    -0.14425560514352179, -0.60797145389059792, -0.40918422703803492,
    0.55271851753858536, 0.10799606441841028, 0.15187196388525834,
    -0.011502310246614703, -0.27548286354437818, -0.32747581803892856,
    -0.1693475956152074, 0.62042215854647986, -0.20843920120112922,
    -0.54186831318025819, -0.41178270682861634, -0.11492161789814158,
    -0.3782547874924802, -0.28457385710781047, 0.62042215854647986,
    0.014085308888230721, -0.20825244294415551, -0.011502310246614703,
    -0.26384325756640975, -0.60824357037043342, -0.42274056917377484,
    0.62042215854647986, 0.27987781868088241, 0.17805512206501298,
    -0.011502310246614703, -0.33565233198555205, -0.66658622208623475,
    -0.894590659096134, 0.68812579955437447, 1.0180443611675192,
    1.4609973543954595, -0.41178270682861634, -0.12969679139751975,
    -0.702297405289373, -0.31892713870930273, 0.55271851753858536,
    0.16505056297964357, 0.16999865655174343, -0.41178270682861634,
    -0.3385717099097621, -0.648581411147768, -0.38157479419128215,
    0.55271851753858536, 0.15973851647348256, -0.086066533199975911,
    -0.011502310246614703, -0.20598770488944662, 0.85429091976340987,
    0.0887078033186088, -0.86905794362719946, -0.691880572147024,
    -1.0740055145858076, 0.38877808633538691, -0.046460179284653742,
    0.79080644035512249, 0.39765333521958945, -0.93676158463509385,
    -0.2309295506933278, -0.47773985334220187, -0.41178270682861634,
    -0.026905700096492739, 0.68930282905195084, 0.28298582245581883,
    -0.93676158463509385, -0.69763787409366829, -1.3455421636352431,
    0.38877808633538691, 0.051896152687602851, 0.670730441116283,
    0.2534228119158024, -0.12431789254035984, -0.56472204882292687,
    -1.3450415714489963, 0.38877808633538691, 0.19448351359097615,
    0.21611344127636567, 0.24855899995425659, 0.14649667149121845,
    -0.46852294606476419, -1.1307978896901016, 0.38877808633538691,
    0.15106145000479421 };

  static const double dv3[42] = { 0.99999999999999922, 0.2351380437685831,
    0.99999999999999922, 0.99999999999999922, 0.362307711401327,
    0.99999999999999922, 0.99999999999999922, 0.99999999999999922,
    0.99999999999999922, 0.46427381055671285, 0.99999999999999922,
    0.99999999999999922, 0.99999999999999922, 0.9587855090131594,
    0.28369550268178617, 0.28714689755592843, 0.014770489798172748,
    0.041148254812682812, 0.16796049719441258, 0.052863990222019777,
    0.99999999999999922, 0.99999999999999922, 0.13192426834947907,
    0.098343992946836961, 0.17009131478665018, -0.99999999999999989,
    -0.80748698324879575, -0.99999999999999989, -0.99999999999999989,
    -0.99999999999999989, -0.99999999999999989, -0.58109641792593969,
    -0.99999999999999989, -0.99999999999999989, -0.99999999999999989,
    -0.99999999999999989, -0.99999999999999989, -0.12984234997739227,
    -0.99999999999999989, -0.99999999999999989, -0.75002453193561858,
    -0.99999999999999989 };

  static const double dv[7] = { 34.4720732594253, 2.7687092373103455,
    2.4836206896551749, 8.4749783913908079, 19.372424845689661,
    72.17241379310353, 4.5615151968908076 };

  static const double dv1[7] = { 14.525764857727099, 1.5187059159359568,
    1.4770254377949865, 0.36961479868879082, 3.1502089791358787,
    14.989492493846965, 5.8299382409029068 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.0021115544625101004;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 42;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 294U * sizeof(double));
  *obj_Scale = 1.7380872847124924;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 42;
  memcpy(&obj_Alpha_data[0], &dv3[0], 42U * sizeof(double));
  obj_Prior[0] = 0.26724137931034481;
  obj_Prior[1] = 0.73275862068965514;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int mb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[49] = { -0.10263304506578576, -0.6883822764776536,
    -1.0216776173253359, -0.40739244015207249, -0.6478706477015499,
    -2.3689131855589824, 3.4794740195970109, 1.3854698132987717,
    -1.3389773908218836, -1.1194978147288255, -0.45354582931287557,
    -0.29049240424983114, 0.50111625079131927, -1.0010614614881175,
    1.5578619628610517, -0.32337362832323291, -0.23911603809741988,
    -1.4390010567583338, -1.3585763882828603, 0.091112045598419039,
    -0.51005849382933455, 0.14598477828985576, 0.7415213979371692,
    -0.4347564329043988, -0.49176847095326437, -0.48563246081370604,
    2.1411330715629204, -1.3785853062275368, 0.29698952174808396,
    0.51873104555521132, 0.54344554113049615, 0.17314923292911405,
    -0.080140863107000249, 0.91112045598421953, 0.31336819563151469,
    -0.37244656533539017, 0.80487144678345335, 0.78799603463921986,
    -0.21191633786984496, -0.48423893455159112, -0.72889636478738151,
    0.76691939653642882, -1.0946322095210372, -0.8420914926789711,
    -1.2173180121323148, 0.719023018423414, 0.99003539091946424,
    -0.31889215959448119, 0.00907784404071816 };

  static const double dv[7] = { 38.494379287407433, 1.8990891979259275,
    3.0888888888888912, 8.5181587415925968, 20.054745591481495,
    106.66666666666671, 10.881208185259265 };

  static const double dv1[7] = { 19.919858814449015, 0.92678015359484311,
    2.0445675362424232, 0.56117131311336688, 5.6472778547098557,
    14.633996246885074, 6.96671307163496 };

  static const double dv3[7] = { -0.48924999271164149, -0.99999999999999978,
    -0.9773847492719322, 0.76845832801114955, 0.0782836921202964,
    0.99999999999999978, 0.61989272185212763 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.67897016765237161;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 7;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 49U * sizeof(double));
  *obj_Scale = 4.0138100740084788;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 7;
  for (i = 0; i < 7; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.33333333333333331;
  obj_Prior[1] = 0.66666666666666663;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int mc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -0.54360934845453357, -0.55325919205409857,
    -0.7555394713640925, -0.15702915702049963, -0.33321198160672344,
    -2.3180022278587673, 3.1618048419519944, 0.77449934839070311,
    -0.9578364715012041, -0.29277154515358567, -1.0882496725814121,
    -0.875842576714915, -0.38633370464312711, -0.31009225131468965,
    0.84617428043864129, -0.87937622724697539, -0.82164917510845059,
    -1.0528884028471408, -0.95504350564081453, 9.1502202471154242E-16,
    -0.85686332916051489, 1.2052329306739049, -0.94232770649403208,
    -0.82164917510845059, -0.21056248180493556, 0.13706399181153051,
    0.38633370464312894, -0.81167572383935971, 0.31115255013778936,
    -2.3034470957011077, -0.45804580451448096, -0.28634628909997578,
    0.25447428736875005, 0.772667409286257, -1.0943864111815405,
    -0.47347685113284294, 0.87530416638325159, -0.39193610077012275,
    1.1679192806574339, 1.2495523795998436, -0.38633370464312711,
    1.0104578016457844, -0.55629733691361782, 0.72178729106348083,
    -0.35888124889794371, 0.089746311392471273, -0.18916055138547569,
    1.5453348185725129, -1.0135182040923856, -0.96303661139126406,
    1.1497256780620477, -0.16055213766486945, 0.25025080611584843,
    0.057476654976845, -1.1590011139293832, 0.33601943007967866 };

  static const double dv3[8] = { -0.3366139123907923, -0.63119275384849827,
    -0.60241052604833778, -1.0, 1.0, 0.045394299434804053, 0.52482289285282435,
    1.0 };

  static const double dv[7] = { 45.664097795714277, 2.1185231861428564,
    3.2857142857142847, 8.36551406785714, 17.826036891904756, 107.99999999999999,
    10.283408536285707 };

  static const double dv1[7] = { 16.949955518443282, 1.5497492539789872,
    3.0252744857757472, 0.48381000254126122, 4.2915529477944219,
    15.530614926653737, 7.85573367911599 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.25800351085873807;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 3.498950538750778;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.4285714285714286;
  obj_Prior[1] = 0.5714285714285714;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int md_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[273] = { 0.30969902856087056, -0.60262069417260844,
    0.48625207567505796, -1.063058420633457, -0.37485342681344264,
    1.0485859395281261, -0.45988735815937343, -0.0087485032570365,
    -1.0877689002246065, 0.48625207567505796, 1.556895279753125,
    3.1135012940366713, 0.72013181435240592, -0.41404011877053404,
    0.79523768247243454, -0.49245508982544728, 0.28494655163465626,
    -1.1842838341197701, -1.1424573172564443, 0.39167768917668566,
    -0.30162336623814023, -1.0122436357678128, 0.2903307041000644,
    0.78821036173566006, 0.67193662159005652, 0.92600051245622073,
    -0.2652305611747548, -0.39050156824425669, -0.83620921781517332,
    0.12923113890061289, 0.88886312375586085, 0.55041974879120648,
    0.81948777680174778, -0.2652305611747548, -0.4304986538907381,
    -0.885499983915483, 0.48834697919234715, 0.88886312375586085,
    0.3372059482860349, 0.33652296553970046, -0.593684686350475,
    -0.38433648633766226, -0.92709285294551125, 0.2401853934425818,
    0.88886312375586085, 0.484391850859317, 0.63229013732604611,
    -0.593684686350475, -0.389215274173805, -0.93128686763824486,
    0.31099424930391539, 0.88886312375586085, 0.56755801120035132,
    0.71667590131658121, -0.2652305611747548, -0.41563513314415113,
    -1.2234728222164921, 0.25811873122558393, 0.78821036173566006,
    0.72383363986874438, 1.1476903666429319, -0.593684686350475,
    -0.43134070448690665, -1.1750376530060584, 0.16169338012146717,
    0.78821036173566006, 0.71833473608282172, 0.85590588539061907,
    -0.2652305611747548, -0.40347571485501504, 0.27085756187353216,
    1.205725134053427, -0.11766449644614667, -0.16859667146829085,
    -0.55856762142263638, -0.2652305611747548, -0.39427464547357438,
    0.30237431461432623, 0.8724707062067758, -0.11766449644614667,
    -0.34193566091654803, -0.62499948103103731, 0.063223564000965446,
    -0.38864261555492591, 0.031319049379822737, 1.1845647118123683,
    -1.4261504027087564, -0.16920084452294493, -0.57925772990909252,
    0.063223564000965446, -0.34927663543728565, 0.15996465833822818,
    0.75550390922333366, -1.3254976406885557, -0.073056753007623584,
    -0.19603462498843677, 0.063223564000965446, -0.34636706825099289,
    0.014572514820032223, 1.1390622321252271, -0.2183172584663475,
    -0.031609553870158145, -0.57868730863658513, 0.063223564000965446,
    -0.319309254887856, -0.39535104081851524, 1.1315760018347518,
    0.18429378961445586, 0.067973461780344108, -0.33455814135610773,
    0.063223564000965446, -0.3284352075353032, -1.3047919152741512,
    -1.9459149149301438, -1.4261504027087564, 2.489899599782194,
    3.4234894001692262, -0.2652305611747548, -0.20680652332461461,
    -0.67665737387121128, 1.0807103977941135, 0.083641027594255013,
    -0.27915375324914116, -0.51149017291678556, 0.063223564000965446,
    -0.071824409502882089, -0.537441062529602, 0.99541608917672653,
    0.18429378961445586, -0.3161996526623021, -0.47558217244102274,
    0.39167768917668566, -0.1397474743612041, -0.60781038286745048,
    0.754072330216214, 0.18429378961445586, -0.031041047591189593,
    0.017086101612559079, 0.39167768917668566, -0.20442615774696082,
    -0.62199779180448245, 0.48518898834172747, 0.28494655163465626,
    1.4086529656535085, 1.854586504791589, 0.72013181435240592,
    -0.13162089242685632, -0.50379727728435653, 0.91896302593075374,
    0.18429378961445586, -0.070674638096637418, -0.41589185836483178,
    0.39167768917668566, -0.11594776532529653, -0.53198805581879016,
    1.0556345626898924, 0.18429378961445586, -0.25892428906067727,
    -0.43064717583990647, 0.39167768917668566, -0.21306276329566259,
    -0.45861704899729727, 0.90602209577991233, 0.18429378961445586,
    -0.12959052774392088, -0.37989477353680262, 0.39167768917668566,
    -0.11491560649121625, 0.26930578281855189, 0.18366555774343346,
    0.58690483769525881, 1.0799782784035403, 0.692373763809225,
    -0.92213881152619526, 0.22522304053914716, 0.658642252275758,
    -0.423176626711242, -0.11766449644614667, 0.97854341631274266,
    0.43570390852723606, -0.2652305611747548, 0.41198756395513531,
    -1.2795536317235916, -1.8208176930145681, -0.52027554452694957,
    1.4442498445402696, 1.6768164335646076, -0.92213881152619526,
    0.46547181528318204, -1.0134100463354303, 0.5321430114653668,
    0.98951588577606175, 0.4930536176565517, -0.087234355234772659,
    -1.2505929367019155, -0.22504151041181913, -0.72785892355163551,
    0.5767485937993122, 0.18429378961445586, 0.707489428833145,
    0.56928259224849875, -0.92213881152619526, -0.10239599869516569,
    -0.20014100900573076, 0.55223822260260758, -0.62092830654715048,
    0.13170978267776698, -0.54597724397224257, -0.92213881152619526,
    0.023995527823779009, -0.30617301269907432, 0.97758378565582937,
    0.28494655163465626, 0.30604586225654012, -0.24181929416461379,
    -0.92213881152619526, -0.013103309216568274, -0.9834307879024049,
    0.57572554322456426, 0.18429378961445586, 0.54378549605667015,
    -0.1493904589274383, -1.2505929367019155, -0.341498337790031,
    1.2982094891813654, 1.6270123438343502, 1.1908214098164633,
    0.76949634381632959, 0.78258024685511329, 0.063223564000965446,
    -0.25178851903180161, -0.9524255988253798, 1.318645468858022,
    -1.5268031647289571, 0.52064646037838436, 0.34027594229774588,
    -0.593684686350475, -0.049640625428057354, -0.590450998386801,
    -0.27676755936594422, 2.0966962679982695, 1.3694239682967801,
    0.97513191450061631, 0.72013181435240592, -0.46114731213420163,
    2.5913677180887817, -0.29777595134725976, 0.88886312375586085,
    -0.551405486229803, -1.2316910091590534, 1.3770400647038463,
    -0.35853940537436668, 1.1467346430611436, -1.444503782405127,
    -0.92288659260775252, -0.85154038416506062, -1.291719900202144,
    1.0485859395281261, -0.081542153016198229, 0.64361074091539372,
    -0.033484652207698438, -0.92288659260775252, -0.895682274721867,
    -0.89942914546784847, 1.3770400647038463, -0.38007889856936539,
    1.2143537454513, -0.92188363661582351, -0.82223383058755184,
    -0.67759769777929846, -1.2080952959516877, 1.3770400647038463,
    -0.19700860398164266 };

  static const double dv3[39] = { -0.99999999999999989, -0.28594734238314495,
    -0.87486060046304714, -0.99999999999999989, -0.17464084232905661,
    -0.99999999999999989, -0.99999999999999989, -0.99999999999999989,
    -0.35218666065142107, -0.99999999999999989, -0.99999999999999989,
    -0.99999999999999989, -0.99999999999999989, -0.99999999999999989,
    -0.99999999999999989, -0.99999999999999989, 0.077262488084855,
    0.52898393075126926, 1.0000000000000002, 1.0000000000000002,
    0.70705807320269876, 0.65990036099981408, 1.0000000000000002,
    1.0000000000000002, 0.12972516745196483, 0.02132979728540961,
    0.20768386719318216, 0.8496154229735593, 1.0000000000000002,
    1.0000000000000002, 1.0000000000000002, 0.40642797582378321,
    0.14512617638272696, 0.28062506865681075, 1.0000000000000002,
    0.1822247180526064, 0.38535976261097776, 1.0000000000000002,
    0.10631263635700869 };

  static const double dv[7] = { 43.980190140422486, 2.0296656919154907,
    2.5169014084507007, 8.2775351137323874, 16.735084852206555,
    76.845070422535116, 14.552771655084491 };

  static const double dv1[7] = { 16.109490535895947, 0.98670488528755551,
    0.99351471328655894, 0.35705498339988528, 2.7645708110928013,
    18.2673912126695, 27.739345006443028 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.17433515394741256;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 39;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 273U * sizeof(double));
  *obj_Scale = 1.9518408030743692;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 39;
  memcpy(&obj_Alpha_data[0], &dv3[0], 39U * sizeof(double));
  obj_Prior[0] = 0.43661971830985913;
  obj_Prior[1] = 0.56338028169014087;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int me_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -0.65762127865646614, -0.1114455825293723,
    -1.0023349853613093, -0.46794127629967813, -0.64998360450139681,
    -0.31209882433564257, 6.69009321863853, 1.4336665467089984,
    -0.47041394861085845, -0.046229286536580323, -1.8342934487907823,
    -1.3693827441897581, 1.272778017993798, 0.872088222149016,
    2.1170607908717605, -0.45665352182126145, -1.1389215137648419,
    -0.54648913193388038, -0.026509488328968357, 1.906728754925574,
    0.031563554823878862, 0.842573971475913, -1.2378623882805597,
    2.2757416963234758, -0.17934703407305608, -0.023086360932956209,
    -0.31209882433564257, -0.43861149074238664, 0.67171369637308365,
    -1.131070041795349, -0.93404172115954287, -0.26373584813167888,
    -0.36952732454419246, -0.31209882433564257, -0.15325841628626677,
    0.67171369637308365, -1.131070041795349, -0.93404172115954287,
    -0.26373584813167888, -0.36952732454419246, -0.31209882433564257,
    -0.15325841628626677, 0.22794341747193281, -0.10419866989150682,
    0.36353029867401787, 1.2961661211823066, 0.99099658081486985,
    0.95580264952790983, -0.11206055457108464, 0.0857680607299796,
    -0.025736589405348839, -0.72916192855424389, 0.80499073512683739,
    0.28817541193417545, 0.63882728106202169, -0.1308548842718171 };

  static const double dv3[8] = { 0.071293215252141051, 0.45231937476548545,
    0.94345472826215571, -0.0031958552040166318, -0.99999999999999989,
    -0.015495485782887264, -0.023174277476764957, -0.42520169981611344 };

  static const double dv[7] = { 43.4755179056923, 1.4557669778153848,
    2.4676923076923076, 8.4438382934923073, 18.500066696615384,
    77.907692307692287, 3.7591330296615388 };

  static const double dv1[7] = { 10.683313654396487, 1.7466534554124802,
    1.464273251086065, 0.32973475584892292, 3.2370457532223202,
    18.928915609560057, 4.6879125993286106 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.0346563309464796;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 3.5922872799447023;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.86153846153846148;
  obj_Prior[1] = 0.13846153846153847;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int n_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[266] = { 0.30712187784682676, 0.0455914313888273,
    0.17252054521546245, -1.5694318604360116, -1.58195497560462,
    0.82877337758297842, -0.42217057135883557, 0.255312869869817,
    0.064959897014417955, 0.66083808389131149, 0.15409791411600446,
    -0.49551557166269833, 0.089179344790129941, 0.22185439919640573,
    0.7821453426406999, 0.36370501050576143, 0.59979839155683035,
    0.71405224844645176, 0.25550235034636343, 0.089179344790129941,
    -0.074978761411333222, 0.84888310658203747, 0.38592710665415453,
    0.66083808389131149, 2.3286299255747269, 2.5628985671043685,
    0.45897636118655422, 0.038718321637154836, -0.45255136515690753,
    -0.67696082800749546, -0.68203514746727367, 2.5220276766375815,
    5.8197049790033555, 0.82877337758297842, -0.59231998254877083,
    1.3778538380931744, -0.039263903180437085, -0.92619391680519836,
    0.89935883679906581, 0.52866691794839427, -0.65041468800271862,
    -0.23587019713426913, -0.4384464972458797, 1.1875237168205297,
    -0.43787637812934921, -0.40452391276711069, -1.1028458358383231,
    -1.0202117043991428, -0.071116343455271042, 0.040643333954185783,
    0.91846059817762682, 0.35563962221890577, -0.59383306399492075,
    -1.2033575286697087, -0.65041468800271862, -0.17645629896753223,
    -0.3008298345241755, -1.2380290774799096, -0.49891607046383024,
    -0.13511341892565412, -0.238785013834989, -1.0202117043991428,
    -0.25878662920726458, -0.71796860872250368, 0.25971672878265645,
    -0.92619391680519836, -1.9981481052855021, -1.4754381821327374,
    -0.65041468800271862, -0.34781815590664544, -0.49976744387402938,
    0.713094863445058, -0.9872336091396795, -1.0256344432853923,
    -1.4050099355713566, -1.0202117043991428, 0.20656166789122857,
    -0.21703542161700859, 0.95432835614927269, 1.0881159302326797,
    -1.2081188825686771, -1.5905083785562348, -1.0202117043991428,
    -0.12128358328004303, -0.57453950701776269, 0.68389560820021267,
    -0.9872336091396795, -1.2066876320644941, -0.68353055801957485,
    -1.0202117043991428, -0.14900172218328958, -0.34977230548560939,
    0.759284141665025, -0.92619391680519836, -1.1558543411086561,
    -1.5106233338796677, -1.0202117043991428, 0.4706890272024431,
    -0.37719403088160192, 1.1176812790551882, 0.53875869922234909,
    -1.2851852865452043, -1.6356619367621752, -1.3900087207955671,
    0.17941170161317174, -0.37690594780988984, -0.3944550731523791,
    1.3322746995706038, 1.1733365399736828, 1.1869707650243095,
    1.5683674103758269, -0.40021845890509677, 3.7579259750567338,
    -0.669837223935355, 0.72187777622579274, -0.86391991436990678,
    -0.53507841831184155, 2.6777584595650996, -0.60554493245159979,
    3.6138470343352811, -0.6276105062238545, 0.72187777622579274,
    -1.6113421544309992, -1.3395883740719814, 2.3079614431686757,
    -0.61482450611444162, -0.07319363836988961, -1.1899620097821531,
    -0.37683668579486795, 0.70216957295070281, 0.63102059039995717,
    2.3079614431686757, -0.46152478121770435, 0.0070033247607203513,
    -1.1914520670651805, -0.37683668579486795, 0.76272072725458628,
    0.65681499097041585, 2.6777584595650996, -0.42495388853891858,
    0.13838825308115185, -1.00452702579312, -0.37683668579486795,
    0.90629442861369125, 1.1065362771038449, 2.6777584595650996,
    -0.46958370504456171, 0.607506411908899, -1.7697354628841586,
    -0.804114532136236, -0.44269746777058783, -0.27474894915756815,
    0.089179344790129941, -0.43336771400046936, 1.3552099920449361,
    -1.7505998874204476, -0.804114532136236, 0.99515815901064908,
    1.7087214532859494, 0.089179344790129941, -0.23626168359076058,
    -0.076885809632898, 0.82574441202242432, -0.010598531787981168,
    0.6904426795807096, 1.0593091651368012, -1.0202117043991428,
    -0.15459534449653076, -0.31728228161927596, 0.83023454709790667,
    -0.5599557627983115, -1.6441237028303741, -2.1878616817549368,
    -1.3900087207955671, 0.16471347853776314, -0.12185079087218695,
    0.79432060244423541, -0.010598531787981168, -1.4816293461067174,
    -2.0673700654309224, -1.0202117043991428, -0.2117861251226045,
    -0.24278344370266827, 1.0207333580190368, -0.010598531787981168,
    -1.874415124615868, -2.2497278581851088, -1.3900087207955671,
    -0.12477357801485692, -0.0082224922533629657, 0.83574412861683012,
    -0.010598531787981168, 0.37113021136906821, 1.3837345524197724,
    -1.0202117043991428, -0.15921064932595749, -0.25724194124963318,
    0.89335408076740863, -0.5599557627983115, -1.4569596720672866,
    -1.8374347479207265, -1.3900087207955671, 0.0028144604964148163,
    -0.064921110288906847, 0.76902842473453692, -0.010598531787981168,
    -1.6022958877718074, -2.1499011794475913, -1.0202117043991428,
    0.0004163744430718204, 0.85365696602103225, -0.80538630793145471,
    -0.62099545513279264, 0.58013824465905983, -0.00021410085024335283,
    1.1985703939794028, -0.25897267951846603, 0.91678141561082971,
    -0.79800085124814923, -0.62099545513279264, 0.45443886304150072,
    -0.28783992170517836, 1.1985703939794028, -0.24924016635057675,
    0.96743764403841492, -0.7862018251437749, 0.29459992988442457,
    0.88604903810630775, 1.5783666176632491, 1.5683674103758269,
    -0.42182939764578686, 0.88318271820697569, -0.77853210381575955,
    2.8582670079326329, 0.41689527585277264, 0.14341661233124897,
    1.1985703939794028, -0.44742943248962563, 0.55171241437996921,
    -0.804667191913372, 0.29459992988442457, 0.54737923040806613,
    0.12034100227293004, 1.1985703939794028, -0.40830340938922555,
    0.081638291016168429, 0.055550705388412842, -0.62099545513279264,
    1.2456881359451744, 0.760900424955084, 1.1985703939794028,
    -0.09035742020995878, 0.73046823192973209, -0.7625450210622392,
    0.29459992988442457, 0.6331578738043524, 0.53794995678895408,
    1.1985703939794028, -0.44272954143036258, 0.64040293278265692,
    -0.80929763159496315, 0.23356023754994337, 0.33424198046891507,
    -0.017296890391192494, 0.82877337758297842, -0.37387712084295605 };

  static const double dv3[38] = { 0.48007721529492542, 0.99999999999999933,
    0.35789691679285318, 0.66974581951957, 0.15315172205716768,
    0.82590067680205215, 0.31080149781086625, 0.99999999999999933,
    0.52493998283145893, 0.47746238242588346, 0.99999999999999933,
    0.92108474137871554, 0.81229790285247594, 0.99999999999999933,
    0.99999999999999933, 0.49654205451405442, 0.10712292787409211,
    0.14734097319602119, 0.99999999999999933, 0.16605270527270008,
    0.34689980889881322, -0.27667129633479892, -0.075623145771812325, -1.0, -1.0,
    -1.0, -0.97804718602456608, -1.0, -1.0, -1.0, -1.0, -0.0753268379076846,
    -0.1684681146933153, -0.46103197835366266, -1.0, -1.0, -1.0,
    -0.76214876843580492 };

  static const double dv[7] = { 32.626176458971074, 2.80229304117685,
    2.4173633440514477, 8.59432166537621, 20.173826222379432, 70.5530546623795,
    4.679309605414792 };

  static const double dv1[7] = { 12.833624613986929, 1.7437061176068229,
    1.6382782444581603, 0.25294943054483532, 2.5740784252238869,
    16.225117385933611, 6.1531528359583882 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.1480581050415564;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 38;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 266U * sizeof(double));
  *obj_Scale = 1.7524383943507431;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 38;
  memcpy(&obj_Alpha_data[0], &dv3[0], 38U * sizeof(double));
  obj_Prior[0] = 0.18006430868167203;
  obj_Prior[1] = 0.819935691318328;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int nb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -0.93093510119068079, 0.45437123767249493,
    -0.80145013477362792, -0.33704129607379468, -0.1770053349452041,
    -2.1523245272864009, 4.8584449733875168, -0.28601170906150225,
    0.073050074924645186, -0.34735974364280775, -1.2378319703475651,
    -1.0901907496970653, -1.3139659099164174, -0.34166536439879652,
    0.0016938042951078697, -0.56201138285075436, -1.1546315500975994,
    -0.84151004335248558, -0.4656472148401431, -1.1043762555739214,
    -0.30105361159891664, 0.58545271881786554, -0.7958757401754083,
    -0.59963218315993, -1.354174445798219, -0.96662100572250853,
    -0.8947866012314255, -0.30971282073602241, 1.2053827687744061,
    0.77991645320575342, -0.54917769525650562, -0.81557947350296633,
    -0.79156714360777425, 1.4106995965360289, -0.39956259394669441,
    0.43884120467846816, 0.67771655717370261, 0.76263899023253079,
    -0.32063258514523241, -0.98907563846459168, 0.15316167048105375,
    -0.008565225721288797, -1.1776140902976335, -2.0038204116326512,
    -1.3059950138078726, 0.67710169011912036, 0.97370861556616517,
    0.3627513248235496, -0.14501475809788431, -0.55845986232731359,
    0.56588404848980389, -1.3059950138078726, 0.94189544176357176,
    0.87403418388007892, -0.056427983861442113, -0.080678222923606671 };

  static const double dv3[8] = { -0.053582767187420333, -0.63961039986947066,
    -0.99999999999999989, -0.22294636189064193, 0.1642606982730416,
    0.99999999999999989, 0.39594395542409666, 0.35593487525039458 };

  static const double dv[7] = { 27.169776817307689, 2.25926127173077,
    3.18846153846154, 8.5671214916153886, 21.515523676538471, 91.615384615384642,
    16.555531285923081 };

  static const double dv1[7] = { 8.8996188850448146, 0.56921555949289859,
    1.9819842427379537, 0.52360280081746691, 4.2417482883829667,
    28.62736721820842, 38.693167781831058 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.63993490031486633;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 3.3131522762354617;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.30769230769230765;
  obj_Prior[1] = 0.69230769230769229;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int nc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -1.9276892921545052, -0.06526042929759053,
    -0.60766296401618769, -0.069875146756380263, 0.41686583137784561,
    -1.8464856355937314, 4.2165791142895053, -0.63901575099659369,
    -0.53825983930071952, -0.84073916939225979, -0.667424267589754,
    -0.026526317780412138, -0.89956992503284328, -0.28702452359359032,
    0.16760161110274541, -0.647094544658407, -0.47447656094414653,
    -1.2746812376529122, -0.79608839897300454, -0.71018678292066562,
    -0.29458294136010332, 0.56646222339151786, -0.72653847080824241,
    -0.50777316171215681, -1.0369669784504736, -1.0368340152744304,
    -0.89956992503284328, -0.28092990886773866, 3.0489426339252188,
    -3.3103215353016529, -0.50777316171215681, -0.44013227766971263,
    -0.25186758436415235, 0.994261496088933, -0.35967808755400177,
    -0.19255946182091424, 0.2409772762451686, 0.42453165979213153,
    0.98857699807209254, 0.88597727484038535, 0.42611206975240012,
    -0.11964279228506419, -0.55148684564845252, 1.2378326175235226,
    -0.57436636324817747, -0.007422937526128221, -1.0998536291933774,
    0.42611206975240012, -0.293346211641236, -0.30430093670756764,
    1.0649634864989475, -0.20810375480006421, 0.14716845817914367,
    -0.5580351937495337, 0.047345785528044852, -0.10618600239732627 };

  static const double dv3[8] = { -0.04130324252455092, -1.0, -0.0982970660381138,
    -0.91031633059368955, 0.30319428057483444, 0.26365690640433681,
    0.48306545217718294, 1.0000000000000002 };

  static const double dv[7] = { 31.300600510000002, 2.5977185815,
    3.4249999999999994, 8.4215334092, 19.6136129675, 88.499999999999986,
    17.630138584699996 };

  static const double dv1[7] = { 6.4407637426482474, 1.2231321852942114,
    3.003309577957729, 0.44204106372312296, 2.761316821518641, 31.68180616860824,
    44.328355794836085 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.30915808262895389;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 3.2032852345688578;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.4;
  obj_Prior[1] = 0.60000000000000009;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int nd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[252] = { -0.72189684719940361, 1.6499635779005786,
    -0.0053443310402967693, 1.2272500448569788, 1.9045979794946395,
    -0.99004239356209223, -0.4374824642304781, -0.922944169309086,
    1.655559556688794, -0.71079602835937672, -1.0230518092179686,
    -1.0969266905694286, -1.27337159887417, -0.37203457852312816,
    -0.75950176291290628, 1.6108006197961227, -0.0053443310402967693,
    -0.86642257178574156, -0.98555017975891457, -0.99004239356209223,
    -0.44920470741298918, -0.66447264304092934, 1.6624260541980089,
    -0.0053443310402967693, 0.91946293515663091, 2.204480815797214,
    -0.99004239356209223, -0.43842845106576345, -0.71189058236913938,
    1.5792794099456504, -0.0053443310402967693, -0.98273373966666011,
    -1.061837873400296, -0.99004239356209223, -0.40571012180645005,
    -0.025774577824706404, -0.380468295421781, 0.46495680050575661,
    1.0676329025996858, 0.81733514507889038, 0.70993283831037468,
    -0.46041430439098308, 0.05633060184708067, -0.38288682776071759,
    -0.789179550283719, 1.1209269707790748, 0.92522689884727849,
    0.70993283831037468, -0.45887641078052288, 0.040158941486733976,
    -0.33987904985559486, 0.30818975665707204, 0.90887588854896462,
    0.83424654174639679, 0.70993283831037468, -0.48638027469907025,
    0.054116955516913236, -0.37807103708746886, 0.30818975665707204,
    0.98034682423046138, 0.74659432036749074, 0.42660363299829684,
    -0.47923535614577811, 0.10912256441130473, -0.37368245901761887,
    -0.789179550283719, 0.99976461975698261, 0.65935976781230377,
    0.70993283831037468, -0.456881563273948, 0.10272328364952499,
    -0.35039042011129529, 0.30818975665707204, 0.93333709243441931,
    0.67340157748774621, 0.70993283831037468, -0.4815129015475596,
    0.0810234492969983, -0.34941889103284707, 3.6786811994037869,
    0.96357614188977125, 1.0579920502115236, 0.70993283831037468,
    -0.49750389345396606, -0.19619034004296604, -0.3819906057282379,
    0.38657327858141433, 1.0893503700612384, 1.0366620937255191,
    0.70993283831037468, -0.48948433588670431, -0.58932066726633658,
    0.69008429304902608, -0.789179550283719, 1.7624543077716288,
    1.6287636493498219, 0.70993283831037468, -0.42431578663343145,
    -0.013516852806255662, -0.3507769501565477, 0.30818975665707204,
    0.84560438880902267, 0.71361234813184427, 0.42660363299829684,
    -0.48638964973243176, -0.12201707504434221, -0.387761443754867,
    0.30818975665707204, 0.883906158954607, 0.90943641024710142,
    0.42660363299829684, -0.48242807049230113, -1.2874589971403554,
    -1.3036864072319081, -1.0243301160567455, 2.7423608963878197,
    3.0892651372890709, -0.14005477762585877, -0.2679952476586519,
    -0.55577434036227635, 0.60042499376920766, 0.2298062347327301,
    -0.68767420367971077, -0.29246374310440637, 0.42660363299829684,
    -0.2657957329873073, -0.47617677462599806, 0.81309565952761353,
    0.2298062347327301, -0.99773605212978078, -0.73695384670305408,
    0.42660363299829684, -0.27377616288148748, 0.41979722460754049,
    0.38654799224344888, -0.083727852964639055, 1.4676266050611542,
    1.0883546704676763, 0.14327442768621904, 0.21301039764361665,
    0.77373572351376319, -0.22980602481500415, -0.0053443310402967693,
    0.685983740739338, 0.12312178902861258, -0.14005477762585877,
    0.30378527474943257, -0.17138427649325438, 1.1141842390449899,
    0.46495680050575661, 1.0687447976747153, 0.584219975760287,
    -0.70671318825001439, -0.31152582654456829, -0.79945364736507762,
    0.6677839629707415, 1.0136414539761522, 0.12781666196656755,
    -0.2637837525710755, -0.99004239356209223, -0.36663146268780972,
    -0.68180016917284858, 0.47537101479708227, 0.2298062347327301,
    0.31718303452795504, 0.255732890226331, -0.70671318825001439,
    -0.17151742806607584, -0.907839047162183, 0.6501731968519574,
    0.2298062347327301, 0.017567424779326983, -0.3051478687555027,
    -0.99004239356209223, -0.275418776887074, 1.4451473929247114,
    1.2160482843267382, 1.0136414539761522, 0.40155070699213136,
    0.46748551476406874, 0.14327442768621904, -0.30955968651339155,
    -1.778129193306079, 1.4691348923849668, -1.2594806818297721,
    0.46841237201955965, 0.33821623457666977, -1.27337159887417,
    -0.2592851378387771, -1.1689455327514853, 1.1925565570992982,
    -1.2594806818297721, -0.63699574591325725, -0.175821193668185,
    -1.27337159887417, 0.23489248166791304, -0.91754815255784461,
    0.998578782058151, -1.1027136379810878, 0.06296128572622002,
    0.028385059078809782, -0.42338398293793661, -0.12277020260517116,
    -0.53755062182020286, -0.12655399099770734, 1.7190931512952319,
    1.217822526644891, 0.65864242672473616, 0.70993283831037468,
    -0.503012213859048, -0.34442383770845841, -0.232231531510975,
    -0.47564546258635, 2.2924071457111621, 2.3137113218554588,
    1.5599204542466081, -0.42922979887705726, -0.41837452963629879,
    -0.014897120065168494, -0.47564546258635, 1.8201957199898735,
    1.8897894022533419, 1.8432496595586858, -0.37415766701911679,
    -0.527712591415767, -0.341508072541909, 2.2677778047656276,
    1.4499030695867592, 1.1051868210204743, 1.5599204542466081,
    -0.37706376533673114, -0.39720104604517847, -0.23248624277756461,
    -0.47564546258635, 1.505614178203029, 1.3278828571152055, 1.5599204542466081,
    -0.48160410622517519, 1.0000623236017736, -1.1832197919439509,
    -0.63241250643503444, -1.0512800313834607, -0.845015612618208,
    1.2765912489345304, -0.087996771829652237, 1.2243666828497686,
    -0.56940968983942708, -0.63241250643503444, -0.45575133465020973,
    -0.74799577007193918, 1.2765912489345304, -0.22016067006996917 };

  static const double dv3[36] = { -1.0000000000000002, -0.5167652202524663,
    -1.0000000000000002, -0.13951053460903354, -1.0000000000000002,
    -1.0000000000000002, -1.0000000000000002, -1.0000000000000002,
    -0.15415692659036659, -1.0000000000000002, -1.0000000000000002,
    -0.63984053421573162, -1.0000000000000002, -1.0000000000000002,
    -1.0000000000000002, -1.0000000000000002, 0.31759491061907197,
    1.0000000000000002, 0.25357811438934835, 0.90052605925936113,
    1.0000000000000002, 1.0000000000000002, 0.77710371752623686,
    1.0000000000000002, 0.324569882656081, 0.53562897563653356,
    0.18201087765467111, 0.684426057188863, 1.0000000000000002,
    1.0000000000000002, 1.0000000000000002, 0.17866481112118923,
    0.72606284654990616, 1.0000000000000002, 0.14003573582113527,
    0.43007122724520175 };

  static const double dv[7] = { 42.717272070284125, 1.9336426909090922,
    2.4068181818181826, 8.4469121417784159, 17.596756718068196,
    74.965909090909136, 16.861354325562512 };

  static const double dv1[7] = { 15.345432347101232, 1.3991253891969311,
    1.2757783465831321, 0.26242134402131284, 2.7847422023093307,
    21.176779123038859, 30.020159838094731 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.7467948567893552;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 36;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 252U * sizeof(double));
  *obj_Scale = 1.9489772540959469;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 36;
  memcpy(&obj_Alpha_data[0], &dv3[0], 36U * sizeof(double));
  obj_Prior[0] = 0.31818181818181823;
  obj_Prior[1] = 0.68181818181818188;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ne_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[42] = { -0.28001418852701038, -0.80955333805041862,
    -0.15891797457859527, -0.083128497342222149, -0.23818871724148918,
    0.055195968893379313, 3.5411993196859419, 0.80953070587900733,
    -1.0465780092713182, -0.37895824707203524, -1.0136882090790771,
    -0.94372061271876129, 1.0487234089742, -0.508977354604698,
    1.0910209400586315, -1.0923316868201713, -0.37895824707203524,
    -0.13873539709995494, 0.29538780002914333, 1.2143113156543366,
    -0.4634354543417239, -0.90609221688522523, 0.94571592833821938,
    -0.70901865581219536, 0.8972166162294779, 0.78502774461635672,
    -0.9383314711874412, -0.266321533331641, -0.91018646322850449,
    0.9338215118896529, -0.70901865581219536, 0.81639334422714016,
    0.765764684291285, -0.9383314711874412, -0.30590655336408251,
    -0.90400747220440247, 0.95894589161252453, 0.61122297914844481,
    1.0417109458741962, 0.98655580438322865, -0.9383314711874412,
    -0.23677921146859557 };

  static const double dv[7] = { 42.504058465555545, 2.9872931706111108,
    1.1444444444444442, 8.3282604499999966, 17.296971471666662,
    69.999999999999986, 7.5194033384444428 };

  static const double dv1[7] = { 21.620743496615933, 2.1322659341608508,
    0.90892452428662807, 0.46576878252232384, 3.7824270271930862,
    36.234530167653453, 7.7946197007638416 };

  static const double dv3[6] = { 0.40199569851523359, 0.0068808391740032282, 1.0,
    -0.11505161880140347, -1.0, -0.29382491888783335 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.072491049911156971;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 6;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 42U * sizeof(double));
  *obj_Scale = 4.3305505035620371;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 6;
  for (i = 0; i < 6; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.5;
  obj_Prior[1] = 0.5;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int o_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[70] = { 0.19492430826586105, 0.48670182115933175,
    0.40778207403786104, 2.117612417376797, 2.9201853491836123,
    -0.51009638091153364, -0.18117893001703109, 1.1328853913443098,
    -0.13710690713572246, -0.84818671399875289, 0.94231619524912225,
    0.26299775265422665, -0.86170328576961386, 0.43668695740909369,
    -0.6339289676747859, 1.1615133981874814, -0.36972241379432857,
    0.38352331545968538, -0.23224861595587623, -0.86170328576961386,
    -0.085386987011388221, -0.39435411572526685, 1.1141359117161089,
    -0.84818671399875289, 0.549234524601855, 0.41868121018076593,
    -0.51009638091153364, -0.31661377961435544, -0.50683162594401843,
    0.96390641345354355, -0.967802789049859, 0.12359989369851904,
    -0.33623459073718986, -1.5649170954857741, 0.73931610441981765,
    -1.1880027873652468, 0.99920983052362733, -0.967802789049859,
    -0.098364628945281793, -0.43183100117225437, -1.213310190627694,
    0.44174566880294508, -0.61017682916712379, 1.202700771428745,
    -1.087418864100965, 0.65965385188902437, -0.10137739349647358,
    -1.9165240003438542, 0.0916859174424232, -0.59142062840670773,
    1.1584397378390558, -1.087418864100965, 0.53438815329362055,
    -0.050365986920654193, -1.9165240003438542, 0.052236541310207885,
    -0.59820670498460626, 1.1426214761429758, -1.087418864100965,
    0.38304587011287677, -0.080081470599013715, -1.9165240003438542,
    0.0053854238344072849, -0.58796523372273812, 1.1760341294771344,
    -0.36972241379432857, 0.80495504836401766, 0.26051419876508625,
    -1.9165240003438542, 0.0872015556257024 };

  static const double dv3[10] = { 0.14610673144644903, 0.013016587083029408,
    0.99999999999999933, 0.38739409171004713, 0.99999999999999933,
    0.99999999999999933, -0.54651741023952471, -1.0000000000000002,
    -1.0000000000000002, -1.0000000000000002 };

  static const double dv[7] = { 30.628429042613643, 3.1464377246931821,
    2.3181818181818192, 8.6132319581628813, 20.389776918068183,
    68.704545454545467, 5.0995109865454546 };

  static const double dv1[7] = { 13.044451972189858, 1.6033404609993331,
    1.6720160723761401, 0.24874051196281469, 2.4519580696936125,
    17.064511296846668, 6.5857591797969661 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 2.276289713915868;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 10;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 70U * sizeof(double));
  *obj_Scale = 2.7539628001056671;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 10;
  memcpy(&obj_Alpha_data[0], &dv3[0], 10U * sizeof(double));
  obj_Prior[0] = 0.034090909090909095;
  obj_Prior[1] = 0.96590909090909094;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ob_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { 0.24830560073513178, -1.2167123713898766,
    -0.22738221059371311, 1.0316014698339286, 0.99059502655306431,
    -1.9107707842142863, 0.042140898835891095, 1.2112117760793937,
    -1.1624240178107392, -0.11146186793809519, -0.848835370866986,
    0.17246054327790786, 0.26499740802971722, 0.35334653955179252,
    0.236322897151243, -0.97310129090956454, 0.062418646045331413,
    0.02506577489162802, 0.639411534963307, 1.8968235522127197,
    -0.30887431870000059, 1.6964320390824044, -1.22894502084308,
    -0.57514323856056626, -2.3190199108238847, -2.0386714414853091,
    -0.27894464003128366, 0.20700023578168383, 0.59302304438927056,
    0.76864894050006727, -0.8649440951996108, -0.7193138750032867,
    -1.1691894420563507, 0.62762544007038445, -0.62615705685315914,
    0.8057908676060449, 0.59014124982177063, 0.29425933135656723,
    -0.041306766694870191, -0.65842438757211563, 0.083683392009383586,
    -0.14940096754582971, 0.36536856477969215, -0.094744976627751817,
    0.52610001666780248, 1.2824840600777236, 1.4785377025202195,
    -0.097630624010950032, -0.19032350280964414, -1.15502387054287,
    -0.50019900111826088, -1.7923068364445534, 0.51531295427714,
    0.68959030813787214, -0.46025865605161725, -0.23514344089334238,
    -1.2073371461156894, -0.28699295687104687, 1.3375424152571274,
    0.705125000287832, 0.87448797682819068, -0.6415726720719509,
    -0.28129481469123185 };

  static const double dv3[9] = { -0.99999999999999989, -0.60729444472954919,
    -0.99999999999999989, -0.065622159626876467, 0.12107519307738353,
    0.8362547646033649, 0.99999999999999989, 0.61774272336285752,
    0.097843923312819436 };

  static const double dv[7] = { 33.018545423076922, 1.6972296223461545,
    3.6923076923076943, 8.6380577869615411, 22.554095786153855,
    117.23076923076927, 16.758155614423082 };

  static const double dv1[7] = { 14.137443926074125, 1.1566878503409159,
    1.7253227122884758, 0.55033750594583142, 4.4833210492686053,
    33.091760536191117, 24.724077662281438 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.67095686836647361;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 2.896792261348522;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.30769230769230765;
  obj_Prior[1] = 0.69230769230769229;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int oc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -0.21673361757547524, -0.87879233989999128,
    -0.28795281224761948, 1.3588222644607328, 1.5388964384169606,
    -1.8694460622494664, -0.0033082858467464, 1.0255157910081421,
    -0.84380417428290688, -0.2141187578251528, -0.67316845614521936,
    0.60304052661793217, 0.11580639323669394, 0.26893687873608113,
    -0.23219255513499054, -0.72178804214435721, -0.10336767619145298,
    0.27116478625526264, 1.137181129443773, 1.6047457348513141,
    -0.31037918420611849, 1.6515005444372852, -0.88667612964101783,
    -0.50945497551501906, -2.2618425759615612, -1.9262513954445009,
    -0.38050672063484614, 0.14091197062603369, 1.0981666953544886,
    -1.8489133157269122, -0.80479119320488557, -0.56308403514439376,
    -0.52192911252308793, -0.049631311387152752, -0.573461970738679,
    -0.36511335223296487, 0.69930383127189188, 0.41347070476581327,
    0.71627777006346138, 0.32690367025683492, 0.612119507108234,
    -0.41873286836581358, -0.56558545254976278, 0.53220754212844545,
    -0.32486983945885262, 1.1681942549715234, 0.94148079699053722,
    -0.21506901601099945, -0.27554330617104955, -0.11546545249778617,
    0.89592211149581813, -0.73095713878241886, 0.81842084379698865,
    0.56764327954372562, -0.5459444252586928, 0.011596572008022514 };

  static const double dv3[8] = { -0.65934984776963512, -0.84779448875736907,
    -1.0, -0.35384581849160229, 1.0000000000000002, 0.73111839918947541,
    1.0000000000000002, 0.12987175582913102 };

  static const double dv[7] = { 38.903999697500005, 1.8670774373,
    4.0799999999999992, 8.5137505931500019, 20.963756709999995,
    121.79999999999995, 17.893550211749996 };

  static const double dv1[7] = { 10.958372743780375, 1.7947405327628252,
    2.7087771566170828, 0.50929116481958836, 3.9193635513280629,
    36.267427752591907, 28.262292341501279 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.2584008135512833;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 2.5800451118195311;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.4;
  obj_Prior[1] = 0.60000000000000009;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int od_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[70] = { -1.0867137533342281, 2.1477842545364432,
    -1.4156685543748233, 1.3022815562279098, 1.182758106978951,
    -1.4986665849341225, -0.49041476396370509, -1.0432573513128041,
    2.0425947523063384, -1.4156685543748233, 1.2504606987231797,
    1.3371139753376309, -1.4986665849341225, -0.55762868282931022,
    -1.0731736232534166, 2.0924261981796253, -1.4156685543748233,
    1.1848055718006918, 1.2313985931830154, -1.4986665849341225,
    -0.49815715306358277, -1.0780725023375544, 2.0726420189271448,
    -1.4156685543748233, 1.04287458908574, 1.2030642328717378,
    -1.4986665849341225, -0.50735221815272391, -1.0706791685341945,
    2.1144318145168719, -0.41637310422788826, 1.4385471204306444,
    1.5278296151445256, -1.4986665849341225, -0.49129487101364488,
    -1.070573336477745, -1.7253834769854561, -0.91602082930135564,
    2.7698581862348837, 3.5387437529404444, -0.032209016363942411,
    -0.39765174045971352, -0.12275626605024816, 0.91351832766790231,
    0.6661969667646247, 1.1139913636986878, 0.82594157256564515,
    -0.52102820588733578, -0.43659537229136858, -1.48727087408189,
    1.300917017132154, -1.1658446918380894, 0.52002567055112436,
    0.55953540324293449, -1.0098473954107292, -0.38985944091489333,
    -1.5251363983506898, 1.5357361355107355, -1.2491193126836675,
    0.7219274877937305, 1.0635402058112882, -1.0098473954107292,
    -0.16786950034882558, -1.4999441092686499, 1.6790404857293793,
    -1.3323939335292452, 0.58932009375335781, 0.70930518127198217,
    -1.2542569901724259, 0.58078254630919013 };

  static const double dv3[10] = { -0.43485892828617995, -0.16648655747824148,
    -1.0, -1.0, -0.88192761607451808, 0.056821748671980553, 0.42645135316695887,
    1.0, 1.0, 1.0 };

  static const double dv[7] = { 42.305459479689894, 2.3214537760697644,
    2.1999999999999984, 8.4319049300465032, 17.099770027829443,
    72.790697674418553, 22.159720732271296 };

  static const double dv1[7] = { 18.069572340868806, 1.2819363733181319,
    1.2008460559122467, 0.2652342447004965, 2.5714757347460595,
    24.548954413389936, 33.556062301764655 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 2.2281734242313087;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 10;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 70U * sizeof(double));
  *obj_Scale = 3.7362439308879418;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 10;
  memcpy(&obj_Alpha_data[0], &dv3[0], 10U * sizeof(double));
  obj_Prior[0] = 0.069767441860465115;
  obj_Prior[1] = 0.93023255813953487;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int oe_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[49] = { -2.5536296178154916, 1.7149377654782993,
    -1.7206896295659602, 1.0328217325000515, 0.18480455143246177,
    -0.37820603775770417, 5.8341447918003553, -1.6121204285265491,
    0.85840274185751686, 0.32427257874672516, -1.3098765880972869,
    -0.87649952833055089, 1.7706919040474269, 0.60793719319570261,
    -1.3044526111260581, 0.891236519423822, -2.0128270878963437,
    0.89814640267986512, 1.1045938403202391, 2.6302510807694794,
    -0.14709075982939726, 0.7096766769876286, 1.1160767104471754,
    1.7849598703986433, -0.370403742577604, -0.83213181660474744,
    -0.37820603775770417, -0.31600827500708423, 0.43710386502390414,
    1.3626533220292496, 0.17820384958153321, 0.560845231587439,
    0.22225618650570786, -0.37820603775770417, -0.3369913080126089,
    -0.48320552776204168, -1.303663976696583, -1.5746209004007683,
    0.18822911585326602, 0.37530789387895269, 0.051573550603322048,
    1.4934112317013455, -0.95687150292785972, -0.2964674915244167,
    -1.5746209004007683, 0.92945186385767276, 0.2699315204870697,
    -0.37820603775770417, -0.24287136312782751 };

  static const double dv[7] = { 97.0472237032, 0.0057563011000000492,
    2.1780000000000004, 8.0909156615600022, 15.990539355200001,
    77.280000000000015, 4.6747309075000016 };

  static const double dv1[7] = { 23.72986268660139, 0.73201132435839689,
    0.68460922862489038, 0.1923140491623877, 2.1942136795705167,
    13.960644391887316, 5.2187553615899169 };

  static const double dv3[7] = { 0.1079924267652486, 0.93632737057022453,
    0.55292927027206074, -0.33176930018587342, -0.26193323812662661,
    -0.58145917102916411, -0.42208735826586991 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.87288874935086114;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 7;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 49U * sizeof(double));
  *obj_Scale = 4.124693971009842;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 7;
  for (i = 0; i < 7; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.82;
  obj_Prior[1] = 0.18000000000000002;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int p_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { -0.81514438757847285, -2.4883864270228555,
    -0.36229535891929826, 0.08261884807653215, 0.94826950377815822,
    -0.27054087321448272, 4.0785131109046437, -0.71667710086229464,
    -2.3717225881570076, -0.23424828281170171, 0.32318299807391637,
    1.2088376058531849, 2.5183182775337984, 3.7361170596744855,
    0.43649858701585981, 0.043899165919627031, -0.938507201403483,
    0.6691026744473042, -0.096988030962638958, -0.66894932332138,
    0.897268265451073, 0.883713722699854, 0.57190628826038514,
    -0.74643658724208806, 0.25486379203630488, 0.33073802249068357,
    0.52627602699931186, -0.59326799841484534, 0.92088499297444748,
    0.58211118159414443, 0.91817540215666738, 0.12885595361057742,
    0.229526976509839, 0.52627602699931186, -0.58871211814896085,
    -0.41499800155360606, -1.1436471163795661, -0.49034243502689479,
    0.025132183474831989, 0.1085705819683933, -1.0673577734282773,
    -0.302060736987915, -0.40645488286435894, -0.9810836951639712,
    -1.0665542775110795, -0.14292463962906937, -0.38415072739939887,
    -1.0673577734282773, 0.0031534433232751295, -0.42474495029247356,
    -1.0569005519763333, -0.49034243502689479, 0.061081386433053365,
    -0.099160538130677808, -1.0673577734282773, -0.28605929171974032,
    1.287760256864998, -0.49962936954544546, 0.79012832604907091,
    -1.1423209785191042, -0.928537485188254, 2.5183182775337984,
    -0.61000684002079242, 1.1414012161456133, -1.5127058307583348,
    -0.81046012529588629, -0.93501534858197777, -1.1701883349640096,
    0.12786757689241457, -0.23497810200851638, 1.0676109399649416,
    -1.4232489663679222, -0.042177668650306956, -0.30384929567534807,
    -0.34532655915641919, 0.12786757689241457, -0.15238700476396114,
    1.3788997548149822, -1.6107613691142995, -0.042177668650306956,
    -0.30760920970990341, 0.19208069927184229, 0.12786757689241457,
    -0.22057459927640177 };

  static const double dv3[12] = { 0.0021994170067950996, 0.046723581527582596,
    0.11209683199256079, 0.28372257957861535, 0.011026109244271311,
    0.99999999999999933, 0.086382538003500611, 0.0778511597422789,
    0.5587462367899082, -0.33888481397534259, -0.99999999999999989,
    -0.83986363991016977 };

  static const double dv[7] = { 41.125653378479775, 2.6255949233209477,
    2.3658783783783792, 8.54233220247636, 19.834738471756769, 70.074324324324351,
    4.8806019788209518 };

  static const double dv1[7] = { 29.100320274481664, 1.8753521839066378,
    1.5619255517552166, 0.29162076311355151, 2.7789643637635355,
    15.059921541297969, 6.2701898058890286 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.0429036985571454;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 2.7660049546851626;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.13851351351351351;
  obj_Prior[1] = 0.86148648648648651;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int pb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { -0.89906054967380022, 2.6558297905585282,
    1.2752704559612189, 0.13789053563371895, 0.072387833016730477,
    -1.25846496803106, -0.99042765653002984, -0.92407136040409854,
    2.6597548020782673, -0.50077175974517341, 0.1777439538701383,
    0.15992135503655969, -1.25846496803106, -1.039741448057141,
    1.4493253754810169, -0.4192475927730388, -0.21431333785704559,
    -0.17619820568109529, -0.015282010678414613, -0.36429249074583525,
    -0.97392582104194647, 1.1791566751884954, -0.39080986831719988,
    -0.15702165347942, -1.4764067216437242, -1.4156776126092019,
    0.08279374789677714, -1.0404452838975058, 1.4403665741275935,
    -0.60666998628311752, -0.21431333785704559, -0.63812662998288872,
    -0.80635211736781032, 0.08279374789677714, -1.0133429723782748,
    -0.15888247346605988, 0.63219904462382648, -0.95910523476617771,
    -0.81466709193710218, -0.88932035953937749, 1.4240524638246144,
    -0.46900420406390142, -0.033223384699289808, 0.52654582849791909,
    -0.95910523476617771, -1.190445603364751, -0.92902064451557043,
    1.8711387024672268, -1.051974943740839, -0.080662236529961392,
    0.31496264263161583, -0.95910523476617771, -1.2656696930964093,
    -0.6847091100963294, 1.8711387024672268, -1.0600674290771597,
    -0.33807453784535879, 0.24791449900245874, 0.53047855905208674,
    -0.64693237257995906, -0.86784294440642351, -0.81137872938844768,
    1.3779870345619589, -0.90880282094107756, -1.2270717770739328,
    1.2752704559612189, 0.84974499765179268, 1.1332945367117888,
    -0.81137872938844768, 0.3432769976345319, -0.67297818141364107,
    0.17454688909515015, -1.8184805004305611, 0.93136466660026063,
    0.85966981778705875, -1.25846496803106, 0.92832821585054826,
    -0.740079796630917, 0.47276774309195724, 1.1033954028283424,
    1.0558948759000262, 0.92517884768913494, -0.36429249074583525,
    0.766501223476703 };

  static const double dv3[12] = { -0.049020474748427967, -0.66857899301353263,
    -0.53797213992155679, -0.89836503769174425, -0.33922533180077047,
    0.13507397473267999, 0.99999999999999978, 0.01098330829913946,
    0.74478447004877313, 0.093343719831189081, 0.31037846475812608,
    0.19859803950612404 };

  static const double dv[7] = { 40.034930579629652, 2.4299271026296307,
    3.7740740740740772, 8.6702023303703761, 21.290230008148161,
    106.88888888888893, 7.673254525592597 };

  static const double dv1[7] = { 26.501949382913732, 0.86764178471157483,
    1.7454540058705896, 0.41884587919100558, 4.5746943657686723,
    13.420229659084237, 6.2053276481847233 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.40502226077039205;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 3.3002205788910377;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.33333333333333331;
  obj_Prior[1] = 0.66666666666666663;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int pc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[77] = { -1.2294789210832788, 1.4249578484485403,
    0.68642829241156245, 0.51162062693269783, 0.66508925502089589,
    -1.3057418217096763, -0.73667808069400353, -1.2554021603252994,
    1.4274680296176534, -0.4742595474843519, 0.56277223066737725,
    0.78577072191899056, -1.3057418217096763, -0.78535046278440579,
    1.2045793278416475, -0.54166092512330921, -0.28705183137210766,
    0.10848976528485442, 0.54421984298626946, -0.44884875121270085,
    -0.72039087954404957, 0.924554504619721, -0.52347401278878936,
    -0.24961028814965877, -1.5603194291093934, -1.386489576433221,
    -0.02040221596421312, -0.78604514404679315, 1.1952936971873322,
    -0.66152405431238992, -0.28705183137210766, -0.48439237028257381,
    -0.54641947657500667, -0.02040221596421312, -0.75929534402235355,
    0.12880024736119358, -3.1343294068142677, -0.84867497970884043,
    -1.0235622483780127, -0.14959848391216796, 0.83649085453276228,
    -0.71140825982406974, -0.687720742936199, 0.067397478388038251,
    0.19968823051972748, 0.91172711787994054, 0.79729991725221339,
    -0.44884875121270085, 0.981004215784108, -0.58424711197619694,
    0.015643242993085206, -0.36193491781700526, 1.6783575638297106,
    1.5789661932631629, 0.40804431928427459, 0.62781994158699539,
    -0.44623787279538, 0.32143507545021727, -0.73635035004149374,
    -0.4659798411546423, -0.72337690638809615, 1.6933839250297378,
    -0.610363439599062, -0.778133068528188, 0.96612741247608291,
    -0.923558066153738, -0.43742635713759509, -0.85528047874918289,
    -0.44884875121270085, -0.243723312910407, -0.751078956420426,
    0.805971885035919, 0.64898674918911381, -0.18887743560568862,
    -0.56514404460861745, -0.44884875121270085, 0.0970717227819499 };

  static const double dv3[11] = { -0.66992157725636337, -0.69861550657869242,
    -0.21615119417085077, -0.59269686814148426, -1.0, 0.46776284285701991,
    0.41895125797635951, 0.23486678841061012, 0.055804256903401184, 1.0, 1.0 };

  static const double dv[7] = { 47.6448066, 2.8010290636190462,
    4.1666666666666661, 8.5609986819999957, 19.414516856190474,
    108.28571428571428, 6.1588966881428551 };

  static const double dv1[7] = { 25.569151825963377, 1.3566765785288197,
    2.67083008320135, 0.32633268130912757, 3.3181491764442823,
    14.004081037836279, 6.2871020660470638 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.36030676812415391;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 11;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 77U * sizeof(double));
  *obj_Scale = 2.7178307250057454;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 11;
  memcpy(&obj_Alpha_data[0], &dv3[0], 11U * sizeof(double));
  obj_Prior[0] = 0.4285714285714286;
  obj_Prior[1] = 0.5714285714285714;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int pd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[112] = { 1.2279045235220158, -0.73516037230826425,
    -0.010799410268404188, 0.072902009052021072, 0.39464140919046969,
    -0.12410208904811994, -0.49161172659190361, 1.7010841727203951,
    -0.50011022336384581, 1.0517425666953948, -1.1953565316841781,
    -1.0963117189560343, -0.12410208904811994, -0.49521656453577723,
    1.4995821069067603, -0.37209079418878693, -0.010799410268404188,
    -0.52196843171672724, -0.10884859964726913, -0.12410208904811994,
    -0.49875149685663872, 0.46907244487566813, -1.2334851418554615,
    -1.16993611241073, -0.25542819744435863, -0.0641993492115251,
    -0.12410208904811994, -0.48289546521796589, 0.40217667629223836,
    -1.1144972647295717, -0.010799410268404188, 0.43664286817812425,
    0.91417637083030168, -0.12410208904811994, -0.466178408189285,
    -0.14620858920257782, 0.0597650791087706, 0.085795314910123058,
    1.0878966246672208, 0.51490243456316331, -0.12410208904811994,
    0.24580730825267932, -0.87209806293555547, 0.1165950850660372,
    -1.4597202879463114, 0.94132422049342546, 1.4116419074219424,
    -1.0187484921860874, -0.25582552868897734, -0.27326198822388004,
    -0.20001381004189445, -1.2665308375892572, 1.2714978905911043,
    1.0191327998300417, -0.42231755676077581, 0.57155593070916011,
    -1.1189137413081722, -0.91834816092529781, -0.30058358580398553,
    1.7131210693050374, 1.9793721220458955, -0.7205330244734317,
    0.29369986511727131, -0.87773759702556775, -0.20442202802306014,
    -0.590367761339567, 0.41885073834875314, -0.18386586999352392,
    -1.0187484921860874, 0.51877232447411425, -0.86663642788268258,
    -0.39678378692097294, -1.4597202879463114, 0.16974366606680627,
    -0.46764259421570203, -1.0187484921860874, 0.71506555490481138,
    1.0574288772750451, 0.0991579507935327, 1.0517425666953948,
    0.023210253162420782, -0.31240924131278619, 1.0687597818025034,
    0.016976965045324921, 0.0569002748879301, -0.73211640194448313,
    -1.6529097383033657, -0.98059537589677548, -0.020941188641441413,
    -1.3169639598987435, 3.3253290761422338, 0.27590237416106761,
    -0.84941613313789, -0.68696248651809411, -0.64533923331247,
    -0.80742831946704308, 1.3669752495151595, -0.15207815726778742,
    0.10191604728619837, -0.88218783584607463, -0.68696248651809411,
    -1.6270447612742502, -1.5486125000435855, 1.0687597818025034,
    -0.10943484692971571, 0.22211172031490783, -0.71791651597005424,
    -0.68696248651809411, -0.65131047362107253, -0.53785435123242031,
    1.3669752495151595, -0.18233288731720104 };

  static const double dv3[16] = { -0.14180446168393923, -0.41748021857559681,
    -0.66548879047003329, -0.99999999999999989, -0.99999999999999989,
    0.2596069246667484, 0.35456940529766034, 0.051292051420268922,
    0.12247386426541834, 0.28879770381260034, 0.034046580062271889,
    0.937698498094844, 0.021516428672829761, 0.31990587608586069,
    0.077949783793619776, 0.75691635455744655 };

  static const double dv[7] = { 59.28380376186329, 1.5278513981180111,
    2.3111801242235996, 8.3375952233167627, 16.733241086086942,
    74.496894409937809, 18.366405340037247 };

  static const double dv1[7] = { 32.0994991980987, 1.4099178004705941,
    1.0352532171418178, 0.26595697341348307, 2.3429255581914927,
    20.119680732929897, 30.978051645784433 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.63529829229299328;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 16;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 112U * sizeof(double));
  *obj_Scale = 2.763847950674136;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 16;
  memcpy(&obj_Alpha_data[0], &dv3[0], 16U * sizeof(double));
  obj_Prior[0] = 0.25465838509316768;
  obj_Prior[1] = 0.74534161490683226;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int pe_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[42] = { -0.33720642220088004, 0.7922654798037887,
    0.18406707584592027, -0.63755047269580478, -0.47144855814456987,
    -0.757197610072975, -0.46850032228165184, -0.21908006837709698,
    0.62013409165321953, -0.7299211628372726, -0.28742736839181882,
    -0.68710010753361794, -0.64998378917768651, -0.4361175617865567,
    -0.0973161019388982, -0.83770352536683912, 0.69183831955880526,
    2.3615358106693827, 1.77651987734219, -0.757197610072975,
    -0.21248069247764031, 0.95184815346078533, -0.7731989380377251,
    0.89494681704395951, 0.15546178106824812, 0.8944551190372757,
    0.52936824067048693, -0.076164993455545088, -0.11037222786806371,
    -0.54824858375997265, 1.1996095632716903, 1.1806972903758362,
    1.3978943726577555, 1.4942926287280835, -0.36623396197405983,
    1.4805349237542518, -0.85223817143545455, 0.082512827103343636,
    -1.5693161333609775, -1.4894580878877568, 0.20772677798462147,
    -0.140268261801937 };

  static const double dv[7] = { 37.791640025625, 1.1053706161249996,
    2.6187500000000004, 8.0979843303125, 19.607808404375, 96.375,
    29.7934184075625 };

  static const double dv1[7] = { 12.975119948986501, 0.97349167865550623,
    0.9846953843702122, 0.46910253559673554, 4.1583789800748994,
    55.962934161818211, 56.444507017147366 };

  static const double dv3[6] = { 0.99999999999999989, 0.98620542058903826,
    -0.44098339535508679, -0.50379676835524179, -0.041425256878709654,
    -0.99999999999999989 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.16110223070860652;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 6;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 42U * sizeof(double));
  *obj_Scale = 3.6617137520726444;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 6;
  for (i = 0; i < 6; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.5;
  obj_Prior[1] = 0.5;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int q_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[147] = { -1.097914411274624, 2.0156081924986955,
    -1.3453288443356011, 0.7381217903118712, 0.582356058882603,
    -0.78118977490258712, -0.28572748618438565, -0.254253365997731,
    -1.5960518641108727, -1.3453288443356011, -0.92705481275931867,
    -0.91435716551940527, -0.78118977490258712, -0.186939155767341,
    0.2799554706270172, 1.0447494464864171, 0.20228559008805219,
    -1.9048112626295584, -2.1291292941243332, -0.78118977490258712,
    2.6560744186630707, -0.019341543775680432, -0.23204547266124276,
    -1.6947901682377167, 0.21477727676237515, -0.052912095177486171,
    -0.093742772988310644, -0.14056529223183531, -0.17323542466864836,
    -0.10665390369913955, 0.451900821446706, 0.37334846033375896,
    0.18367639643676711, 0.59370422892596575, -0.37600582945848365,
    -0.17323542466864836, -0.10665390369913955, 0.451900821446706,
    0.37334846033375896, 0.18367639643676711, 0.59370422892596575,
    -0.37600582945848365, -0.16011317676841949, -0.49220541097060239,
    0.4019777751749754, 1.214167427209, 1.6460977062073481, 0.24998072796882759,
    -0.52426528314146992, 3.5400610693933152, -1.0836435782423939,
    -0.147175733814063, -2.4087751376391289, -2.2816881690931425,
    0.937427729883104, -0.54167301864746586, -0.083112034059847836,
    0.78588202762817272, -0.346867918900986, 0.20214086630692957,
    0.095651091068741215, -1.1249132758597253, 0.71374704522445931,
    -0.193653536860904, 1.3354161258338382, -0.44671401144444761,
    0.39489095301837124, 0.14525912584087877, -1.4686367768168636,
    1.3157379285121806, -0.073344724992735824, 0.85446719141912386,
    2.3988996260442055, 0.46726422270743928, 0.31126708787262947,
    -0.78118977490258712, 1.2928795829976985, 0.44380783959922721,
    0.10877526133163587, -0.89602142789002437, -1.744278351775207,
    -1.5495671250757144, 1.9685982327545186, -0.58821734649851254,
    0.605846257980882, -0.16907913383226039, -0.89602142789002437,
    -2.399257395627997, -1.2628571399355479, 2.3123217337116571,
    -1.0311330734787323, 1.1149564198678561, -0.49550468282497206,
    0.15236254381632161, -0.75143598831408331, -0.82047208192269794,
    1.6248747317973804, 0.41426117978151966, 0.62825653116040525,
    -1.2952070886004641, 0.35205472890324441, 1.7746177763991451,
    2.1141209640876983, 1.2811512308402422, 0.29207978590328071,
    0.072599571305614, -0.22780386175739589, 0.4019777751749754,
    -1.5006816944099184, -1.5194720575250302, 0.24998072796882759,
    0.79583334818600215, -0.82501219682239524, 0.39025303512812609,
    0.9511312841640136, 0.76800514674769416, 0.69918794686125185,
    0.24998072796882759, 0.63455476938082667, -1.109701990808784,
    -1.5196840402002103, 1.0509773767074753, 0.6729029155028603,
    1.2846068923693168, 0.24998072796882759, 0.02046900673308652,
    -0.621175579981529, -0.29206355184150062, -1.6448671219659858,
    0.79143698291185394, 0.90119229854598093, -0.093742772988310644,
    0.45887961099796454, -0.76018103466385656, -0.03086409776820033,
    0.901208237892283, 0.972288883118827, 0.9929863374411827,
    0.59370422892596575, 0.33761386997562914, -0.57967795152072021,
    -0.37942438040782922, 0.901208237892283, 0.97552205985532836,
    1.0410697215471487, 0.937427729883104, 0.21286056250658197 };

  static const double dv3[21] = { 0.065642107112842421, 0.024694139558994507,
    0.098630616748008687, 0.43924674039202743, 1.0000000000000002,
    1.0000000000000002, 0.528820622687816, 0.20496709978805464,
    0.11622461605267882, 0.015843490089579276, 0.320372812520957,
    -0.072051941268305358, -0.0072642487489123567, -0.63821911507201579,
    -0.018473240753969011, -0.5077379243175334, -0.99999999999999989,
    -0.1438017943769366, -0.68647862759903133, -0.49433556363166631,
    -0.24607978918258952 };

  static const double dv[7] = { 30.146515962467532, 2.870694681,
    3.894805194805194, 8.8320445688571443, 22.280796962467537, 91.63636363636364,
    9.63389896620779 };

  static const double dv1[7] = { 12.793193001411669, 0.99061797398468954,
    2.0030828939344119, 0.28840706091729068, 3.264741301362049,
    17.455891096454852, 8.2809002900088871 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.84323828427272662;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 21;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 147U * sizeof(double));
  *obj_Scale = 1.815469863785516;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 21;
  memcpy(&obj_Alpha_data[0], &dv3[0], 21U * sizeof(double));
  obj_Prior[0] = 0.23376623376623376;
  obj_Prior[1] = 0.76623376623376627;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int qb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[70] = { 0.404108022137383, -1.2974749553657865,
    0.054346970541902337, -0.12086518172477191, 0.26996214222933473,
    0.87262749557539543, -0.46046809506540376, 0.5195642649657719,
    -0.67365825884641051, 0.054346970541902337, -0.6907515788281835,
    -0.48321076912825828, 0.87262749557539543, -0.66713594391071041,
    0.16704263074766088, -1.258177463759925, 0.054346970541902337,
    1.2791628921603355, 1.888544859695674, 0.46045025298446235,
    -0.32193700484005405, -0.26092664116357928, 1.4157471254645868,
    -0.22407674008046893, 0.15965889674151013, -0.45581373592883334,
    -0.36390423219740392, 0.32261051713861816, -0.38372795790129238,
    1.2109169005935885, -0.78092416132521192, 0.2168884233444143,
    -0.10862974941265974, 2.9335137085300609, 0.13823685513126366,
    -0.24127776920523247, 0.87482306175011415, -0.78092416132521192,
    -0.18089982493287365, 0.12157441329338305, 3.3456909511209942,
    -0.85730314973142863, -0.71006222104755334, 0.803789385166538,
    1.6320813307353406, 0.36483191639046, -0.084465924690266175,
    0.87262749557539543, 3.2491623684580206, -1.6986180213800566,
    -1.0600034089998829, -2.1730427144370692, 1.4649403850478957,
    1.9631054032298747, 1.2848047381663286, 1.8160956902328542,
    -1.7494396865950079, -0.75887428348813046, 2.8385840767656165,
    1.68491447868692, 2.1669751840192593, 0.87262749557539543,
    1.5063788698380536, -1.3199694405855584, 0.72606059519897526,
    -2.1730427144370692, 1.7569037422799136, 1.8591253004610417,
    0.46045025298446235, 2.4917927274074056 };

  static const double dv3[10] = { -0.058404573557237327, -0.20465021798830357,
    -0.6804971162725777, -0.81128199405855406, 0.038039870736158242,
    0.73826695693574518, 0.34417443847041629, 0.13746980154867691,
    0.26996071290775708, 0.22692212127791897 };

  static const double dv[7] = { 41.408388977387418, 1.9867563727927942,
    2.9414414414414436, 8.2259870025585649, 17.663560964054064,
    83.297297297297348, 4.2536413698018043 };

  static const double dv1[7] = { 14.552376370824273, 0.81896043958184117,
    1.0774944394261474, 0.4748772288223122, 4.0661034057636094,
    14.556844434894536, 3.6841723628231948 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.0450209827356562;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 10;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 70U * sizeof(double));
  *obj_Scale = 3.7962155815453844;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 10;
  memcpy(&obj_Alpha_data[0], &dv3[0], 10U * sizeof(double));
  obj_Prior[0] = 0.83783783783783783;
  obj_Prior[1] = 0.16216216216216214;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int qc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[70] = { 0.32000698058727584, -1.1369894132115002,
    0.019726444205463767, -0.023692111583906595, 0.50124934042217639,
    0.98053938866012247, -0.38317871563827083, 0.44562133527444647,
    -0.61438165265016176, 0.019726444205463767, -0.65404184831089507,
    -0.41243944617045419, 0.98053938866012247, -0.62667779246297406,
    0.062084018358685863, -1.1040676042916593, 0.019726444205463767,
    1.5248749927888805, 2.4647836853522693, 0.553333430945131,
    -0.21995936260459562, -0.46202170577755547, -4.5468558409179707,
    -0.26596688566679039, -0.32121530889941657, -0.10084577720023433,
    0.1261274732301394, -0.45806781519310386, 0.0901717873232055,
    1.1435917884192928, -0.48023688307098122, 0.20377533608904813,
    -0.58056327723161716, -0.30107848448485214, 0.620413770676569,
    -0.40353899690758033, 1.1360355370341111, -0.19454355319872677,
    0.2865947805152475, -0.37920356946440037, -0.30107848448485214,
    0.53945593807399861, 0.59281782990942444, -3.5669317605780417,
    -0.76593021294323538, 0.11230214937813532, 0.54805195545220065,
    2.6893632195200885, -0.66172746606581234, -1.1409047696238228,
    2.1237527213907383, -0.90877687787936245, 0.557825863223427,
    -0.15055053241855909, 1.4077453463751139, 0.27862000788355312,
    -1.0218768039190969, 1.9074575721329, -0.12312022073066346,
    0.71699537114365253, 0.29581967530289072, 0.553333430945131,
    2.9318787551229653, -1.0891872676313676, 1.9014861265036356,
    2.0910030857793069, 0.74674867148004775, 0.13667520976487774,
    1.4077453463751139, 0.96383716756038873 };

  static const double dv3[10] = { -0.99999999999999989, -0.048632519342654133,
    -0.19096578270773668, -0.25816793408564309, -0.23143903529323678,
    -0.99999999999999989, 0.92647483314333257, 1.0, 0.3422108468072883,
    0.46051959147864974 };

  static const double dv[7] = { 43.008847518476209, 2.0356527232857156,
    2.9723809523809543, 8.1787625398666677, 17.081180102571434,
    82.228571428571442, 3.7553633362666679 };

  static const double dv1[7] = { 13.375562881999162, 0.9775614419718095,
    1.4001026911578833, 0.429326859729, 3.3517746796704557, 14.044747952702645,
    3.1269111445056428 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.2905470917631299;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 10;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 70U * sizeof(double));
  *obj_Scale = 3.6925417701698491;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 10;
  memcpy(&obj_Alpha_data[0], &dv3[0], 10U * sizeof(double));
  obj_Prior[0] = 0.88571428571428568;
  obj_Prior[1] = 0.11428571428571431;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int qd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[140] = { -0.52299984640488006, -1.0145679841790223,
    2.0946068889790865, -0.15964328226092514, 0.12084928657102642,
    -0.083244607720761449, 0.45694379470228386, 0.42590773229686907,
    -0.091165191906196763, 0.67882700960967379, 0.50591061505120094,
    0.1226359122782377, 1.0227194662836141, -0.39419593297228361,
    0.1497744804844128, 0.24035060412462442, 0.550119747848818,
    1.1598111243870148, 0.5267852843011912, 0.28541008361403042,
    -0.21887185837398163, 0.87114452341486082, 0.95094980313288946,
    0.550119747848818, 0.63544732704906648, 0.25535491238113428,
    0.65406477494882231, -0.17755571573083526, -0.24553259152836368,
    0.44491264554019838, 0.67882700960967379, 1.3750108997654258,
    2.3194167612322172, 0.65406477494882231, -0.66863938308851689,
    -0.54515827928568528, 0.6953669083632531, 0.67882700960967379,
    -0.49867394060092163, -0.68793767630567915, 1.0227194662836141,
    -0.651889678229284, -0.49039386169440741, 0.35468138445082942,
    0.67882700960967379, -0.59908283830025433, -0.749765691042341,
    0.65406477494882231, -0.51010766870262059, -0.49652782030630249,
    0.41597971823164764, 0.550119747848818, -0.8406030206550309,
    -0.71164636833303319, 0.65406477494882231, -0.59237624829900248,
    1.0648786460658439, 0.49513371333867989, 1.0649487948922407,
    -2.2079047863070507, -1.3263121330167855, -2.2951727557295127,
    -1.2293645817311176, -0.40440700249647232, 1.1624547548358257,
    -0.60824560799888328, -1.3024220733348586, -0.910603932623288,
    -3.4011368297338884, -0.69551231172489414, -0.665867315085319,
    1.284565519552616, -1.3804891785640176, -0.88782190544115669,
    -0.888196234285632, -0.82055399039034516, 1.6125036449561403,
    -0.0083118794361302564, 0.5961970358421872, -0.73695286975973906,
    -1.2344408633062656, -0.74437982863148233, -1.5578633730599289,
    3.3324476493976292, 2.8582499757346715, -1.8574647173703305,
    0.035290700805395259, -1.51593393766531, -1.1952020323643164,
    1.7600288489531979, -0.70462014097531844, 0.90960083387021851,
    0.51502596250623212, 1.965899627218231, -1.1036385068211778,
    -1.2722178605279193, -0.82055399039034516, 0.47355081762899448,
    0.77789870608796052, 0.49502215923530191, 0.550119747848818,
    0.72178170312913592, 0.61677835335404008, -0.083244607720761449,
    0.040085466537249384, -1.9908623635755403, 0.59077619304058726,
    -0.99436739328145052, 0.13541902821163265, 0.083805712659333745,
    -1.1892086817251371, -0.55717965337257469, 0.45243845027228452,
    -0.061032829406327607, 0.42141248608796217, 0.22417902501156337,
    -0.0081698769718140871, 1.0227194662836141, -1.6588945400049284,
    0.43022088013758347, -0.059355595811074843, -0.86566013152059473,
    1.5785513400524809, 1.7746955222324008, 1.0227194662836141,
    -1.7552540651409991, 0.36564560059167922, -0.0011034727553518554,
    1.837192365457375, 1.7689278786228855, 2.2466448908066559, 1.391374157618406,
    -1.7360330020515755, 1.2439452516281682, 0.73338298733162421,
    0.29270522432710661, -1.8030494958800152, -1.9232205585891442,
    1.0227194662836141, -1.0771225902160835 };

  static const double dv3[20] = { 0.090733849010209852, 0.22994806158142037,
    0.37343245582528239, 1.0, 0.84280093307866311, 0.18501887325129512,
    0.66224253796632315, 0.90659267030666035, 0.47337763981767239,
    0.078821745220475969, 0.11040722320085881, 0.18451570179294272,
    0.36138870989617017, -1.0, -1.0, -1.0, -1.0, -0.10734960303546651,
    -0.56361116529084854, -0.82831963262165931 };

  static const double dv[7] = { 44.499513676290341, 1.9582773736451622,
    1.5725806451612909, 8.4204995241774228, 17.123744977741943,
    73.354838709677452, 27.818861382854852 };

  static const double dv1[7] = { 11.338707089599271, 1.1330824790173106,
    0.776956938030465, 0.18698141728653817, 2.1338996660645972,
    16.275393046744469, 14.0725596051365 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.2617931706600281;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 20;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 140U * sizeof(double));
  *obj_Scale = 2.2572159281553961;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 20;
  memcpy(&obj_Alpha_data[0], &dv3[0], 20U * sizeof(double));
  obj_Prior[0] = 0.19354838709677422;
  obj_Prior[1] = 0.80645161290322576;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int qe_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[49] = { -1.0314873123085129, 0.22730956269801997,
    -0.9737517677744526, 0.7017263899734737, 1.2303661485312618,
    -1.86617736777342, 3.8784436858429769, -0.8326176587249523,
    -0.0032281479481259057, -0.25052836743711659, -0.875546672032868,
    -0.3630716670012068, -0.99100453323140214, -0.22995976368834409,
    -0.56389143325715, -0.5285600405998987, -0.65231914540230329,
    -1.0792608730523157, -0.14745203518938263, -0.55341811596039336,
    -0.2047153107675, -0.4748796505341879, -0.63176686082230271,
    -0.73267730099534067, -0.72786319082104889, -0.42091963972973812,
    -0.77221132459589781, -0.19235762958369107, -1.1471996496650705,
    2.5849490774931931, 0.07090425493503269, 1.8855557993047181,
    1.7475017626538198, 0.3217547185816243, -0.27312670962734703,
    1.0322013191509698, -0.25247853103818563, 0.47269503290021941,
    1.3898002466475399, 1.4177889766266876, 0.75934113585263308,
    -0.26478759428777687, 0.78411556161254159, -0.22627199588584712,
    0.5530531884932568, -0.43136056736201095, -1.2175961004151257,
    0.97813434448813752, -0.27321588857342882 };

  static const double dv[7] = { 48.65454029764706, 2.303881849882353,
    2.8117647058823532, 8.18080645552941, 17.773803191176469, 81.17647058823529,
    14.597677690411764 };

  static const double dv1[7] = { 28.860976506847308, 0.941511644197585,
    1.2444287609889411, 0.29903288869971478, 2.4309092154346885,
    27.423154664711824, 48.974922802908637 };

  static const double dv3[7] = { 0.0065534213745027112, 0.19844360000333564,
    0.39480442568531537, 0.60099494725714331, -0.13072482591054418,
    -0.14860616721720171, -0.92146540119255127 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.015225697686846238;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 7;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 49U * sizeof(double));
  *obj_Scale = 2.9625686042537405;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 7;
  for (i = 0; i < 7; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.52941176470588236;
  obj_Prior[1] = 0.47058823529411759;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int r_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[273] = { -1.2611611480833806, 2.390233247153509,
    -1.1687360470144224, 1.3907547460571843, 1.3019690331650551,
    -1.1260177414365409, -0.776984184788167, -1.3766285838767749,
    1.986918136563296, -1.1088432880932415, 1.751622271079587,
    1.6403847773984435, -0.682954238827813, -0.538416896057385,
    -0.21760366578777623, 1.7503877349589765, 0.80772499738454651,
    0.10856055021588755, -0.076411279278637986, -1.5690812440452684,
    -0.60709368580271983, -0.3460831628654864, -2.694550218051921,
    -1.1088432880932415, 0.024755825628463665, 0.15400408599805157,
    -0.682954238827813, -0.44426108754352683, 0.88368728615207814,
    0.52339448027022839, -0.50991569888143273, -0.60438330351611491,
    -0.941769841480089, -1.1260177414365409, -0.39595958652159369,
    -0.061519636692550429, 0.75481747046170833, -0.45002293996025211,
    0.02481460936538895, -0.048155578368613672, -1.1260177414365409,
    -0.76412244477413527, 0.075969563260562339, 0.37957412277369185,
    -0.50991569888143273, 0.55429819932290425, 0.43988816817556786,
    -2.0121447466539961, 2.6670757632327242, 0.15754037605614171,
    0.719506694228346, -0.39013018103907116, -0.074955534376552085,
    -0.38079280716685787, -1.1260177414365409, -0.3828207488096958,
    -0.30888944278930575, 0.57419380059897407, -1.408307082699146,
    -0.56295302698438432, -0.5165216128996627, -2.0121447466539961,
    2.4299310308933966, 0.30646145031707056, 0.72848173196863542,
    0.74783223846336533, -0.98922359372574, -1.0523818849224149,
    -0.682954238827813, 2.265433879324577, 1.3257335090721896,
    -2.5015298697385795, -1.5879853594626885, -0.69093909476586279,
    -0.34372448770129171, -2.0121447466539961, 4.0843119385073949,
    -0.059134625786951445, -0.92651207022613913, -1.5280926005415076,
    1.208889399267234, 1.0095021856890338, 0.20317276638964235,
    -0.40006185270815908, 0.16838708688338688, -1.3864491217505659,
    -1.5879853594626885, 1.086492791812784, 0.88856593535509876,
    0.20317276638964235, -0.756664362563905, -0.26629550538234875,
    -0.4127910265039586, -0.090666386433166823, 1.0953760399768993,
    1.0321548118386279, 0.20317276638964235, -0.94137917029542162,
    -0.34085014260272156, -0.636134400666533, 0.92751051522690775,
    1.1874061008874033, 1.2327914899289036, 0.64623626899837006,
    -0.77612146492546785, 4.2887324294390359, -2.0303616905226169,
    0.32858292601509936, -1.5118578319611571, -1.2038875724237756,
    1.5323632742158255, -0.78236026915455092, -0.13703129664298763,
    0.39293530444482222, 0.089011890330375931, 1.1957848473739332,
    1.1570397686335148, -1.1260177414365409, 0.41418886412228523,
    -0.17038713605915873, 0.77628995576297211, 2.0055801758081637,
    1.4882228743612971, 1.5510573943349948, -1.1260177414365409,
    0.8884129468123565, -0.27205950516474842, 1.1052466654832906,
    -0.030773627511985906, 1.3956757517295915, 1.2063053352239916,
    -1.5690812440452684, 0.98795034075260013, -0.86153330416884732,
    -1.160113800537796, -0.2104519042755284, -0.12642934389195934,
    -0.16348666112574831, -3.3413352544801791, 8.4521439863653178,
    1.6351659589747887, -0.7826566714792047, -0.50991569888143273,
    -1.5100598291754519, -0.94416268802144876, 3.7476807872594642,
    -1.2060567414354775, 2.1301342880570462, -1.2595060867902559,
    0.80772499738454651, -1.7182818359930419, -1.3746241343498489,
    0.20317276638964235, 0.67047541494096208, 2.11508350129535,
    -0.717779986773246, 0.6879394795421846, -1.5452348228331505,
    -1.1748206587773218, 0.20317276638964235, -0.063207611215304715,
    0.56613613241113259, -2.1266259171038913, 1.1670815509116315,
    -0.7047088579243489, -0.46592266067874216, 1.0892997716070978,
    0.20118231807775233, -0.80330312530040726, 0.23542929873860549,
    -1.0489505291720607, 0.90974917407194655, 1.3388186076915756,
    -0.682954238827813, -0.40231791723452764, -0.70627070900103728,
    0.041308003536837508, -0.090666386433166823, 0.51462698332884793,
    1.0624154217065225, -0.23989073621908535, -0.669344060139328,
    -0.47146783991319047, -0.22729810665887845, -0.98905777025087982,
    0.87932561650837426, 0.81515820489796587, 0.20317276638964235,
    -0.68010150894590216, -0.67323408976749544, -0.091604786026036458,
    -0.929165011329699, 0.98104218585892866, 1.3776656568108352,
    0.20317276638964235, -0.31691383226301556, 0.86281228502222707,
    0.33356141500500458, -0.56980845780261369, -0.65082778462393009,
    -1.0758257447126169, -1.5690812440452684, 0.86721144606648992,
    0.80408033353450226, -0.28263625682091653, -1.1088432880932415,
    -1.1098764694332277, -1.2482176392154791, -1.1260177414365409,
    1.7851529713145116, 1.0052206874106415, 0.076394729050844767,
    -1.1687360470144224, 0.6411473806782767, 0.72100944136565537,
    -1.1260177414365409, 0.2085045540887078, 0.91563234224208578,
    -0.15787405686658973, -1.1687360470144224, 0.051102554124328924,
    -0.10202739424740886, -1.1260177414365409, 0.91812933915922679,
    0.95776995727865721, -0.035495859203833066, -0.98905777025087982,
    0.61370325747533749, 0.52599873734052194, -1.1260177414365409,
    1.2227376625699553, 0.72589902406165674, -0.14037281034284088,
    -1.1687360470144224, -0.69519007083399631, -0.9716139352618689,
    -1.1260177414365409, 0.21149998858745545, -0.62220322516861759,
    1.5365539568678133, 0.14890464925155658, -0.0076059663672713908,
    -0.33853610085453528, -1.5690812440452684, 1.6337943145836971,
    -0.60274980157227442, 1.1985429714310911, 0.32858292601509936,
    1.4655209461095877, 1.537048619960296, -0.682954238827813,
    0.91260480973320734, -0.97880018159000148, 1.6192217203247647,
    -0.090666386433166823, 0.25197662618860417, -0.013516732772787239,
    -1.1260177414365409, 0.488310897014783, -0.897479602486575,
    1.6925023816108269, -0.090666386433166823, 0.2890456298363015,
    0.04624231244273367, -1.1260177414365409, 0.80197968090384364,
    -0.57667696423507031, 1.3422032212935768, -0.33023742211789026,
    0.946030418831637, 0.88463137365595768, -0.682954238827813,
    -0.24776631498906521 };

  static const double dv3[39] = { 0.055220228051128278, 1.0000000000000002,
    0.15706139242571293, 0.13301256134453168, 1.0000000000000002,
    1.0000000000000002, 1.0000000000000002, 1.0000000000000002,
    1.0000000000000002, 1.0000000000000002, 0.30360603856295976,
    1.0000000000000002, 0.31543327613252964, 1.0000000000000002,
    0.77899956591926145, 0.30573329458260523, 1.0000000000000002,
    0.051765824828936109, 1.0000000000000002, -0.24356296523589913,
    -0.11261058645609205, -0.28291270657567158, -0.22158926478438903,
    -0.41781850959875161, -1.0000000000000002, -0.97853991393176709,
    -1.0000000000000002, -0.81568612704919763, -1.0000000000000002,
    -0.66830588454423845, -1.0000000000000002, -0.0053551487810760447,
    -1.0000000000000002, -0.26479691886576862, -1.0000000000000002,
    -1.0000000000000002, -1.0000000000000002, -0.089654156024814288,
    -1.0000000000000002 };

  static const double dv[7] = { 30.518405212486154, 3.348905827204415,
    3.05138121546961, 8.5577907176574488, 18.789378774696111, 87.248618784530322,
    11.945759401602198 };

  static const double dv1[7] = { 10.473209972063691, 0.76424213451594869,
    1.669650919430852, 0.2781041297461429, 3.2874360574452175,
    13.542076846033151, 8.6883255203484886 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -2.023952048061318;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 39;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 273U * sizeof(double));
  *obj_Scale = 2.0102116664450342;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 39;
  memcpy(&obj_Alpha_data[0], &dv3[0], 39U * sizeof(double));
  obj_Prior[0] = 0.67403314917127066;
  obj_Prior[1] = 0.32596685082872928;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int rb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[77] = { -0.54317306292627487, 1.4344360396611444,
    -0.28661345755793149, -1.3063748811615816, -1.5726224890880103,
    -1.2946072133492577, 0.019539888848617019, 0.525901187787118,
    -0.36725779178107471, -0.053543173389943438, 0.8229568450228516,
    0.403087098924651, 0.36668065580412446, 0.16714116088130598,
    0.530645786262152, -0.20005603154003454, 0.0629919686940507,
    0.39133209674793162, -0.086437743943841613, 0.36668065580412446,
    -0.34882329086660668, 0.69779206155647289, -0.17415983829524306,
    2.4519623814159281, 0.30517292642480542, 0.1038909898686422,
    0.36668065580412446, -0.59857455879679045, -0.35134269559909603,
    0.69281896092301942, -0.86928916797790168, 0.96664537177148635,
    0.55529809036404376, 0.36668065580412446, -0.10574562923387713,
    -0.13203078466674742, 0.74008582982160454, -0.46141617068392243,
    -0.86476613170730521, -0.83931596949008391, 2.0279685249575068,
    0.037721793145920807, 0.079391757989831974, 0.57600815588052923,
    -0.46141617068392243, -1.4607923227931454, -0.57348068405391861,
    2.3048498364830703, -0.78497790256887512, 0.74366240438015163,
    0.38324840211787947, 0.76220282119801508, 0.038713235756851518,
    -0.16330467252768033, 1.7510872134319428, 1.8997888372633933,
    0.1086319652478645, -0.088989262171456779, 0.99527310536600289,
    2.3374038854663448, 2.5576273509725684, 1.4742059019063793,
    1.6728413855416668, -2.1590006950570753, -0.22154666170492118,
    1.8110190999539613, 1.3348513330364926, 1.7885083057437567,
    0.64356196732968818, 1.1683343387956013, -1.521587068316292,
    0.50338379726259141, -1.3354297363138778, 1.4427164767762264,
    1.4330092534886048, 0.36668065580412446, 1.9826659345281741 };

  static const double dv3[11] = { -0.23365165432965321, -0.99999999999999978,
    -0.22391501685178522, -0.094430459034015257, -0.99999999999999978,
    0.99999999999999989, 0.25236208990148068, 0.29479503193552548,
    0.20964791282619505, 0.17942703494132939, 0.615765060610923 };

  static const double dv[7] = { 37.118791364189192, 1.7369226838108109,
    2.8918918918918921, 8.60305560827027, 20.177180755, 82.054054054054063,
    4.5947593353243246 };

  static const double dv1[7] = { 9.8049561506183629, 1.6775442471158453,
    1.7162205015878189, 0.31693335599206041, 3.5211049145120712,
    21.669934915221017, 4.4581771345050916 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.83780638179919786;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 11;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 77U * sizeof(double));
  *obj_Scale = 3.4499103231715962;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 11;
  memcpy(&obj_Alpha_data[0], &dv3[0], 11U * sizeof(double));
  obj_Prior[0] = 0.75675675675675669;
  obj_Prior[1] = 0.24324324324324326;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int rc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { 1.61009300011218, -1.3311000749517647,
    -0.87994818485875992, -0.8324305191022926, -0.35734807602639118,
    -0.38493259503700822, -0.78589057644235449, 1.5538415512027404,
    -1.238053997838741, -0.87994818485875992, -0.77897438186583767,
    -0.78167894241183333, -0.38493259503700822, -0.2110478025895548,
    -1.0076277441000359, 1.2609220768800165, -0.25665155391713845,
    -1.4120694350786627, -1.7300522351504448, -1.22031822681945,
    0.21405930677072177, 0.41611737067470755, -0.35881624259947964,
    -0.064867975165870312, 1.1332926643055017, 0.74642576835846142,
    0.45045303674543347, 0.3845042446956799, 0.42243601402047115,
    -0.20850041567007974, 0.031023814209763859, 0.617336760438951,
    0.13282470426968065, 0.45045303674543347, -0.211313987346259,
    0.64473047448482967, -0.21103032270571997, 0.75021223452701946,
    0.21545584981675225, 0.28768067630075772, 0.45045303674543347,
    -0.54330145739890823, -0.75215666885407961, 0.59420191619043516,
    -0.73611050079530893, 1.3050551593666606, 0.93721654777210217,
    0.45045303674543347, 0.069383843894374478, 1.592751748553719,
    -1.7372099861071308, -0.49638102735622364, -1.2689140444081894,
    -0.20703387833537742, 1.842762423049503, -0.5618855199064795,
    -0.88360619407724916, 0.55298780565350125, 0.12691560358539802,
    2.0566960061014914, 1.8347696172833803, 1.5643005457886892,
    1.6190447694684253, -1.5569570201967013, 1.244040391835965,
    -0.59227281673185772, -0.54747908469306239, -1.0405947990687392,
    1.0073767912670613, 0.19973842553762061, -1.3407151442428253,
    1.130727134438658, -0.064867975165870312, -0.2897364686082553,
    -0.50799325842683529, 0.45045303674543347, 2.3487157465160617,
    -1.4630001959807872, 1.1275987981909679, 1.4214547601564582,
    -0.24155705556575871, -0.69788179951663754, 1.0073767912670613,
    0.75472241932370154 };

  static const double dv3[12] = { -0.058634404618977287, -0.15404758487621487,
    -0.42078446536309527, -0.262578608075001, -0.015701115362256129,
    -0.31330714141415733, -1.0, 0.5212492421216266, 0.60426744289864975,
    1.0000000000000002, 0.00087354834399267856, 0.098663086345432444 };

  static const double dv[7] = { 39.211593733823534, 1.7903802524558823,
    2.9352941176470591, 8.5634062413823528, 19.499706171029413,
    80.29411764705884, 3.8554580746176477 };

  static const double dv1[7] = { 7.3624316889462591, 1.8659934667540972,
    2.0856843041748432, 0.2651317272946262, 2.8091025763778736,
    21.546935110188386, 3.860675617657312 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.0158456517890748;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 2.7824590795244024;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.82352941176470584;
  obj_Prior[1] = 0.17647058823529416;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int rd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[119] = { -1.0424263352746956, -0.3772180055527703,
    -0.74572965478229924, -0.14223110611539791, -0.032856755314239261,
    -0.37048642962062939, 0.50306466429979058, 2.4460950913833788,
    -1.744224852711139, 2.2393887568388822, -2.0052511725523265,
    -2.1043916618363703, 2.239507522333656, -0.76084841246940771,
    0.92172001772309, -0.902464296801622, 1.0712989435958111,
    -1.8825908864981158, -1.0929471205630639, 1.260759790350799,
    -1.3638456321123078, 1.5635667764768233, -0.88232989550009733,
    -1.005305168836315, -0.24227963791656765, 0.88588065633005553,
    1.9132582783393703, -1.633557355764053, 1.8477237356600655,
    -0.005273542975129321, -1.005305168836315, -1.7715693229651028,
    -1.1823753658770157, 1.5870090343450847, -1.3351774219641297,
    -1.0250876591935449, -0.1339854547332355, 0.55214791548777975,
    -0.0906703201844733, -0.10702372908944077, 0.60826130236222764,
    -0.33764245003763838, -0.28443591892177811, 0.19612186095143905,
    -1.264880682890331, -0.26855765145404153, -0.59670414603854993,
    0.60826130236222764, -0.30756934977605938, 0.25029361487422236,
    0.567729893421511, 0.68193567251478771, 1.8109243855264634, 2.26268059807424,
    -1.0229849176092007, 1.2322349985107743, -0.87094642481824325,
    0.11826896215643902, 0.55214791548777975, -0.61316099656581868,
    -0.75179633329558837, -0.044237185626343704, -0.15238193021537108,
    0.055247291112630541, 0.8719614932001637, -1.264880682890331,
    1.2759754178528246, 1.1150741651104752, -0.044237185626343704,
    0.099198009708966264, -1.0277886118432875, -2.2160408622359071,
    0.55214791548777975, 0.049103905321334761, -0.37503368791494507,
    0.28201205836794196, -0.87485198352900184, -2.1049214128667697,
    -1.7169295326201519, 1.4606622146768353, 0.67954327127902969,
    1.0736877812940417, -0.37048642962062939, 0.53109544498999406,
    -0.57951519305149868, 0.62912934096191675, 0.68193567251478771,
    1.356796622536016, 2.5514928338800957, 0.28201205836794196,
    -0.64088358234506693, -0.69590765465887794, 0.5605776324918692,
    0.68193567251478771, -0.10752716153256878, -0.212767601440711,
    0.60826130236222764, -0.62200353802818464, 0.72673149336972809,
    0.6767996025805898, 1.0712989435958111, -1.2310986408270796,
    -0.98996847262265075, -2.3279818935863434, -1.1810070225727707,
    -0.34304838001511645, 0.77272976167490093, -0.74572965478229924,
    -0.52797780402332206, -0.42467939086028889, -1.6754834055977721,
    3.2131984133783278, 2.5144034010095795, -1.5563066930798357,
    0.032996887379748256, -0.73129673687876617, -0.86260811154784656,
    1.260759790350799, -0.67554236133139589 };

  static const double dv3[17] = { -1.0000000000000002, -0.078198905217042217,
    -0.37656358139688595, -0.49677193369195266, -0.33460877828571722,
    0.086571279247648056, 0.89032259896556809, 0.011069549252772204,
    0.087964170410714138, 0.019479342393078882, 0.075928207298532363,
    0.0788409858931043, 0.029783429910195877, 0.10564848695240188,
    0.026981880682259329, 0.097503373552904782, 0.77604989403241831 };

  static const double dv[7] = { 48.307393957118634, 1.711400210915254,
    1.5745762711864404, 8.32636171837288, 16.468217314406775, 78.8135593220339,
    27.772270234881351 };

  static const double dv1[7] = { 11.374856942763262, 1.193713020817776,
    0.770488698554138, 0.25887394381230988, 2.1967258701133483,
    18.390847214055434, 14.609324817810913 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.1725083221519748;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 17;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 119U * sizeof(double));
  *obj_Scale = 2.3761468333106777;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 17;
  memcpy(&obj_Alpha_data[0], &dv3[0], 17U * sizeof(double));
  obj_Prior[0] = 0.15254237288135597;
  obj_Prior[1] = 0.84745762711864414;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int re_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[70] = { -0.77115026668225717, -0.14387216489175012,
    -0.99770200702930978, -0.62854720356554938, 0.23133477053103602,
    -1.0037367046256844, -0.025344345355816495, -0.69586944487144442,
    -0.056124960973548313, 0.14738779649296641, -0.782494508847368,
    0.30770110418759294, -2.1364451645943356, -0.086244922123349554,
    -0.58452401685862743, -0.26498962199008574, -1.1408382324695945,
    -0.35512665568299134, 0.012500727576148285, -1.57009093461001,
    0.0048026012257256058, 0.66306975390410949, 0.06743074931441409,
    -0.13888465438760234, -0.65426225884676914, -0.33834238398567346,
    0.12897175534296651, -0.14560651053807289, -0.50439642287187836,
    -5.4415534053852452, 0.0042515710526823585, -0.50552477605867618,
    -0.46738160985436117, 0.695325985327292, -0.13767072349651041,
    -1.2873199609932626, 0.10295032007364364, 0.86306892369438915,
    1.0669948911149822, 1.1331940364462552, -1.0037367046256844,
    -0.080835543041282931, -0.96474181080512655, 0.73522413371236328,
    1.006205149134674, 0.776198927811454, 0.31365270287527347,
    -1.0037367046256844, -0.059227947290587668, -1.057327943754899,
    -1.0478795622880186, 0.86306892369438915, 1.1948125951486706,
    0.967238063526142, -1.0037367046256844, -0.064832188995722073,
    0.21531972066046295, 1.8085463218440103, -2.2859280359918706,
    0.75456881144409826, 0.380154048370321, -1.0037367046256844,
    -0.033668129073042077, 0.37333209865896394, 1.3232713531724105,
    -2.1427918105515862, 0.049152200193575725, -0.77634086317185758,
    -0.437382474641359, 0.013223309518636516 };

  static const double dv3[10] = { 1.0000000000000004, 0.14635878481657336,
    0.3422388278770071, -0.69702951667685253, -0.0097061933200638661,
    -0.1887495310489386, -0.038319430127795089, -0.21523816372333779,
    -0.18588238654022987, -0.15367239125636259 };

  static const double dv[7] = { 42.995200355445533, 1.9216625451188114,
    2.6970297029702968, 8.0996317238415809, 16.712611000396034,
    76.63366336633662, 5.0805627781584137 };

  static const double dv1[7] = { 13.765303500594344, 0.80228255552878036,
    0.69863516166087047, 0.38431443727899628, 3.0378039496215017,
    10.594076431928578, 20.075548293522765 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.85808867627204988;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 10;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 70U * sizeof(double));
  *obj_Scale = 2.4511299669662145;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 10;
  memcpy(&obj_Alpha_data[0], &dv3[0], 10U * sizeof(double));
  obj_Prior[0] = 0.92079207920792083;
  obj_Prior[1] = 0.079207920792079223;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int s_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[98] = { 0.048615704427026826, 0.79890195378029993,
    -0.706635402734407, -1.0668532079266915, -1.4396752725916437,
    -1.0610654287910697, -0.085380202389112689, 0.17360029861293436,
    0.80512132394574309, 0.12155847935830809, -2.0479854216036166,
    -2.1836818715186497, -0.72171567453806984, 2.5984039698453034,
    -0.13323254848135815, -0.34172834679799835, -1.5348292848271219,
    0.31088454511313546, 0.10053537615337876, -0.043016166032069904,
    -0.10285261658334131, -0.15666406549050163, -0.18537349443419379,
    0.29591508611466932, 0.20246846846649463, 0.37669418974633678,
    0.63568334247393, -0.54892002246821014, -0.29100123761784991,
    -0.22909845031138937, 0.33950423780375943, 0.48735691017912747,
    0.36082582814467912, 0.63568334247393, -0.330263140512529,
    -0.29100123761784991, -0.22909845031138937, 0.33950423780375943,
    0.48735691017912747, 0.36082582814467912, 0.63568334247393,
    -0.330263140512529, 3.6467809378948233, -0.91468860874641411,
    1.385643878341926, -2.3278390908736286, -2.2332618607021693,
    0.97503309672693, -0.50536915307338737, -0.18859544569584097,
    0.634204962751276, 2.0394811536782793, 0.59187487069241451,
    0.50119883833264534, -0.72171567453806984, 1.2817027108017218,
    1.5527245205932947, -4.052139523828437, -0.92458116117985822,
    -2.2629435347729223, -0.974434866251328, 1.6537326052329298,
    -0.894110134718657, -0.12030725312582906, -0.11355876334476239,
    0.29591508611466932, 0.17404243701428551, 0.084368074894432168,
    0.63568334247393, 0.34699477097798437, 0.091707715742416041,
    -0.17722385506204841, -0.35792218922168467, 1.1394110660669088,
    0.95841174316668487, 1.3143828509799298, 0.08799246412993024,
    -0.20949303196451874, -0.10689977212537022, 0.38309338949284993,
    0.43075329669905815, 0.27657471917533077, 0.97503309672693,
    0.22884501802653279, 0.21522136813789461, 0.28952027946269859,
    4.567651951645515, 0.371443997755462, 0.22610431718266116,
    -0.043016166032069904, 1.5558436370317514, -0.17798021843809642,
    0.80028611618421008, -0.53227879597804584, -1.2611696408217921,
    -1.2593341323317977, -0.043016166032069904, 0.41657323828583681 };

  static const double dv3[14] = { 0.42976438851061877, 0.10333834874111478,
    0.32695921704294817, 0.18404023084269819, 1.0, 1.0, 0.029238800094901797,
    0.29224628842620004, -0.030930602814061476, -0.99999999999999989,
    -0.44569288093278669, -0.99999999999999989, -0.098551987189178958,
    -0.79041180272245481 };

  static const double dv[7] = { 31.561683690985909, 3.0177051972112663,
    4.02112676056338, 8.81342170709859, 21.809718448873237, 90.760563380281681,
    9.3516785726478862 };

  static const double dv1[7] = { 12.478991432176501, 1.1028611929406202,
    2.294148799069851, 0.25915133501439191, 2.9674550644901, 17.680873272496139,
    8.5733042574894043 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.64802258398419987;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 14;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 98U * sizeof(double));
  *obj_Scale = 1.5022991089144975;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 14;
  memcpy(&obj_Alpha_data[0], &dv3[0], 14U * sizeof(double));
  obj_Prior[0] = 0.16901408450704225;
  obj_Prior[1] = 0.83098591549295775;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int sb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[35] = { -0.29531677198658068, 1.2810384871041096,
    -0.98826618143430733, -0.17713718695012079, -0.57535438255696336,
    -1.3070649911807883, -0.57492480910000754, -0.28997541313690711,
    1.3016128300882466, -0.46075672050396915, 0.031997864488059878,
    -0.35912303733785961, -1.3070649911807883, -0.53239286868569369,
    1.2346199918670682, -0.19612493112781898, -0.2849202335271897,
    -1.4734876480896026, -1.4389634634261208, 1.1436818672831868,
    -0.7006338827748837, -0.688946651454171, 0.0072401009304007358,
    1.3415672710080195, 0.77805501384383513, 0.64362518878564734,
    0.32676624779519514, 1.1696120645877113, -0.379924642353227,
    -0.48572718636687928, -0.94430705969011242, 0.7990549443063244,
    0.83070290826073845, 0.16338312389759679, 0.90091461168451548 };

  static const double dv[7] = { 25.405738868888907, 3.2473593375925951,
    2.7481481481481502, 8.803159779074079, 22.294538040000013,
    84.000000000000057, 8.5562149621481538 };

  static const double dv1[7] = { 8.4386260628710552, 1.3711154723992762,
    2.2748407163800035, 0.32180616083810126, 3.525229791395919,
    36.723499079137127, 5.4140761450541364 };

  static const double dv3[5] = { -0.7306305391095399, -0.99999999999999978,
    0.59150352207210377, 0.23024433311388245, 0.90888268392355342 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.47766494566114825;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 5;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 35U * sizeof(double));
  *obj_Scale = 3.8641564312505139;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 5;
  for (i = 0; i < 5; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.33333333333333331;
  obj_Prior[1] = 0.66666666666666663;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int sc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[42] = { -0.83896498912306616, 0.75447037011277152,
    -0.721691455360866, -0.10992502435759333, -0.23742914315399985,
    -1.0716199492226188, -0.38851590065437092, -0.82031806064813051,
    0.79035203096356743, -0.35279440312772536, 0.3823801215879164,
    0.14957876887506272, -1.0716199492226188, -0.29156093010408862,
    0.17091755013580945, -0.64269126670973586, 0.56944822745512624,
    0.59379648107935323, 0.627602648695645, 0.57867477258021449,
    0.90553197703044, -0.045859710260796445, -0.19298288005444528,
    0.66167249051341126, 0.87177410365838193, 1.3096093240661573,
    1.1787819441448812, 0.099271512342959292, -0.15175578539906284,
    0.17396886490222033, -0.35279440312772536, -1.4715399416567687,
    -1.9135232744573794, 0.57867477258021449, -0.4799959404609293,
    0.070462705942067924, 0.032348188914134893, -0.014638771914013192,
    -1.1509744187283546, -1.2201969347615622, 0.27862118679788123,
    1.0128687130508527 };

  static const double dv[7] = { 28.835845829047607, 3.8520133657142837,
    2.8476190476190464, 8.7319439731904716, 20.705770039999997,
    78.857142857142847, 7.2941315351428537 };

  static const double dv1[7] = { 7.1644174631534119, 1.4930150313488737,
    3.2529400621005982, 0.21317247212283874, 2.1579049782767443,
    39.992856504988119, 5.5574390662164079 };

  static const double dv3[6] = { -1.0, -0.72662027309690591, 0.37732814687454364,
    0.46014027904995181, 0.58004524297380144, 0.30910660419860891 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.28564905526943307;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 6;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 42U * sizeof(double));
  *obj_Scale = 3.3550322667699048;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 6;
  for (i = 0; i < 6; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.4285714285714286;
  obj_Prior[1] = 0.5714285714285714;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int sd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { -2.2465189175476303, 0.56966743267708253,
    0.0095481467787126, 0.19741251576702251, 2.001458651062495,
    -2.5788870593218065, 6.2856103442773792, -1.7205577640816758,
    0.37893293599647737, 1.2555813014006241, -1.8426127486055026,
    -0.091873773177587673, -1.0905741295639473, -0.98552660011585236,
    -1.4859222623921242, 0.06127910677499581, -0.959588751260552,
    -0.94506044596138994, 1.3397930173183641, -0.71849589712448236,
    -0.92874057117065145, -1.0098432183140891, -0.055698404162017053,
    0.56334065994400651, -2.1060941500202346, 0.19139022506232534,
    -0.34641766468501756, -0.94084844799944212, -0.77442902077610842,
    -0.14108617371153226, 0.42489253165268287, -1.6516007798729861,
    -0.16786985900458631, -0.71849589712448236, -0.91897756961409838,
    -1.2588097192507939, -0.35767030920636367, 0.9786850448179768,
    0.40714883316717071, 0.24971696532767346, -0.34641766468501756,
    0.31754808648528327, -0.45814583235091261, -0.014974850947613961,
    0.56334065994400651, -0.76718153844948245, -1.2129729308646773,
    0.39773880019391211, -0.18289383179650642, 0.0054137521448914382,
    -0.56859260819745294, -0.82114062296922852, -1.2341059841850734,
    -1.6559621793896784, -0.34641766468501756, 0.35732821376234764,
    -1.744398921828979, -1.940036098222174, 1.5324775579832712,
    0.68024731663746074, 0.95417353227585511, 0.025660567754447278,
    0.17794209100284844, -0.15436793907028129, 0.52090043491684324,
    0.70178878823533009, 1.43856154766261, 2.7085684170777018, 0.769817032633377,
    -0.4407940210782138, 1.2072186832703304, 0.57090492955365835,
    1.1171331731093004, -1.4590805281846575, -1.4957219864363218,
    -2.2068088268823418, -0.72594748343176285, -0.31944685964148067,
    1.2353482180650763, -0.68269249467790494, -0.72678174195877276,
    -1.0163232027435773, -3.3230435242007363, -0.4544600889895421 };

  static const double dv3[12] = { -0.0963198323870406, -0.30150003707090556,
    -0.5471118915417873, -0.28617003021178677, -1.0, 0.73253608256793534,
    0.904007041541043, 0.022389235374190821, 0.043790762088261985,
    0.079064277848011913, 0.034728990362290942, 0.41458540142978589 };

  static const double dv[7] = { 43.400037930344816, 1.8696206407758615,
    1.5931034482758617, 8.345003692120688, 17.061212175344824, 71.5862068965517,
    30.607157522241373 };

  static const double dv1[7] = { 10.912540521629081, 1.1379899429701383,
    0.7222921771075107, 0.2312013131587729, 1.8504001682418634,
    16.125640999372809, 27.672253090921622 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.98035444514933612;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 3.3283643801739506;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.13793103448275862;
  obj_Prior[1] = 0.86206896551724133;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int se_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { -2.5500929407319588, 0.529592192826006,
    -0.62599556241058552, -0.23605991499168341, 0.6403485036200699,
    -2.4701709499369371, 7.8662650245926615, -1.49538080007192,
    0.19754647918634294, -1.1137277571235291, -1.1030100711892794,
    0.17794197926223543, -0.67775665519811645, -0.041441583436099064,
    -0.50875989549201117, 0.065374828989990558, -0.41696747896218134,
    -1.6391586483231086, -0.87569163111418491, -0.67775665519811645,
    -0.030740280875720952, 0.18679204258242985, -1.0782921863213901,
    -0.9743757014912594, 0.064899315670819163, 0.15008286938455312,
    0.0392090626974117, -0.15607718879011354, 0.52938237395864651,
    -0.80243368694115069, -0.9743757014912594, -0.074229706501178369,
    -0.13716454718367752, 0.0392090626974117, -0.11840328616629191,
    0.9774914724465521, -1.2732164780218758, 2.37007363368321,
    -0.43787794635011362, 0.0014992819666493503, 0.0392090626974117,
    -0.180143598581371, -0.88035267844321252, -1.0871382239231171,
    0.76752499391210993, 0.70112967639423407, 1.1074272801833329,
    0.0392090626974117, -0.17641396593382555, -0.81734395765254264,
    1.5292110251439237, -0.068587339881507475, 0.74055286839558532,
    1.7624080832481792, -1.0362395141458807, -0.089257275524033758,
    -1.2158397918869988, 1.5487456903622971, -0.69567159022672032,
    -1.1667713738999175, -1.3928774266617461, -1.3947223730936447,
    -0.12848001633099 };

  static const double dv3[9] = { 0.000632257563743826, 0.403120166211134,
    0.92526265627601445, -0.034792442667389477, -0.616981121229344,
    -0.031193761575241157, -0.055906816241353567, -0.0154502209540952,
    -0.57469071738346877 };

  static const double dv[7] = { 38.952728443125004, 1.5951599731093749,
    2.4984374999999996, 8.4625681536875, 19.0692159359375, 71.34375, 5.953044365
  };

  static const double dv1[7] = { 7.8694854264271887, 1.7423528696046768,
    1.43521384806674, 0.30467870282014015, 2.6477701665224256,
    16.737201933759078, 25.245922024510435 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.679053275756099;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 1.981935554873981;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.875;
  obj_Prior[1] = 0.125;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int t_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[133] = { -0.25153586989910276, 1.758320107072431,
    0.36431005723321253, -0.60440941722189834, -0.73547241758168713,
    -0.97713588301174914, -0.17435742275746785, -0.36646014594414988,
    -1.8386722965896627, -1.2007809975931143, -0.690261548845983,
    -0.50769910675865915, -0.22251609217099141, -0.00033106452838050114,
    0.7335634513575513, 0.76539614207749485, -0.711690042959887,
    -1.3347709794430229, -1.5909083583445331, -0.59982598759137029,
    0.051290873644377295, -0.11191947620234595, 0.9526713631382645,
    -0.66278094749656447, -0.6902013289819513, -0.70754071025751164,
    -0.59982598759137029, -0.34218096271922582, 0.084028624064073063,
    0.9240967024294956, -0.61387185203324179, -0.79240892592657919,
    -1.0363637590823642, -0.59982598759137029, 0.0653329272798845,
    -0.29509048010529909, 0.0078035295632381324, -0.36932637471662827,
    0.40651465338069609, 0.36038231648394536, 0.53210369866976626,
    -0.53162302004598017, -0.25424616549994239, -0.1503127640599993,
    0.46212824815985759, 0.86159814763376608, 0.9188084834985436,
    0.53210369866976626, -0.51541746079067308, -0.26143135689638719,
    -0.51226437133877145, 0.46212824815985759, 0.39089121229915108,
    0.35403326996836415, 0.53210369866976626, -0.41367609151636631,
    3.9189699847931161, -1.0770123507966989, 1.733764730206248,
    -1.9961659007811834, -1.7444930426360674, 1.6640333849309028,
    -0.37758544652399578, -0.58141332045250449, 1.2107307298048269,
    -0.22259908832666, 0.5454559216644167, 0.49067483683774316,
    -1.354445778432128, 0.36037859441557973, -0.19524020803332293,
    0.56980539832286026, 0.21758277084324407, -1.0372499598674987,
    -0.97056484961942546, -0.97713588301174914, -0.719471342004215,
    0.37149245356399641, 0.42931456394240713, -1.2985991885197596,
    -1.1936618955120888, -1.3404590158066927, -0.97713588301174914,
    -0.44721093302248988, 0.15577003555529192, -0.58532703996977831,
    0.31540096176988952, -0.81295237189256209, -0.841923457415667,
    -0.59982598759137029, -0.41879241146336105, 0.32274407765222907,
    0.068907426201190183, -1.2496900930564367, -1.229658919665682,
    -1.4067950273992764, -0.59982598759137029, -0.30356452528724859,
    0.13018628400181645, -0.2524816432029387, -1.2985991885197596,
    -0.8380530669459425, -1.00438946191973, -0.97713588301174914,
    -0.335645586495624, 0.38744385735512082, -0.545519784877001,
    1.733764730206248, -1.019520366982875, -1.1823665851376406,
    -0.59982598759137029, -0.15225952746797633, -0.34478476408885772,
    0.930274812472349, -1.3475082839830823, -1.4611036676504736,
    -1.5099497106760833, -1.354445778432128, -0.29365588375432661,
    -0.42932095906940293, 0.35152578047067767, -0.32041727925330549,
    1.0313335145445595, 1.3597670616489437, -0.97713588301174914,
    -0.60257059442244654, -0.25963973278210078, 0.5598558732982033,
    -0.80950823388653248, -0.216098609217847, -0.18888013350090446,
    -1.354445778432128, -0.4579130531516889 };

  static const double dv3[19] = { 0.076328500397656873, 1.0000000000000002,
    1.0000000000000002, 1.0000000000000002, 1.0000000000000002,
    0.05149399903231535, 0.17840632747700189, 0.63481122948813251,
    0.051353491052465734, 1.0000000000000002, -0.73101068700282257,
    -0.33306894820780086, -0.99999999999999978, -0.99999999999999978,
    -0.593344701562418, -0.24693311060035067, -0.08803610007418064,
    -0.99999999999999978, -0.99999999999999978 };

  static const double dv[7] = { 31.184508142307678, 3.0260638586282034,
    3.6551282051282032, 8.7520620187820466, 20.984045589102557,
    81.538461538461519, 8.0885658372179456 };

  static const double dv1[7] = { 11.708516218736648, 0.94440256964165648,
    2.0446094750411148, 0.27147188496205504, 3.3255686421862327,
    15.902047820174754, 8.1294732211636571 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.86690323563568561;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 19;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 133U * sizeof(double));
  *obj_Scale = 2.436503256380516;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 19;
  memcpy(&obj_Alpha_data[0], &dv3[0], 19U * sizeof(double));
  obj_Prior[0] = 0.24358974358974356;
  obj_Prior[1] = 0.7564102564102565;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int tb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { 0.91597024472456612, 0.17956416503168915,
    0.4617743532784182, -0.15983724140123542, -0.091699664060105379,
    -0.55709293516890879, -0.59265632400643486, 0.66891592383063814,
    0.31927830457479717, -0.324817655324451, -0.35607894491442621,
    -0.48294133050697147, -0.55709293516890879, -0.56857174304262148,
    0.11801597419529597, -1.1516385133482712, -1.1829180283457625,
    -0.53124029838040743, -0.4017931247506864, -0.2410498277173159,
    1.4678257385003444, -0.2196896126436344, -0.46957096091597328,
    -0.324817655324451, 0.26710975827195627, 0.096229324130366264,
    -0.55709293516890879, -0.35346102819273179, 0.0088202439685660626,
    -0.73458648870521637, -0.324817655324451, 0.26442959035863789,
    0.45709728881863332, -0.55709293516890879, -0.44460649217207177,
    -1.0848373654834882, 1.6004260045153946, -0.4678343841613361,
    -0.49954417406034946, -0.077070439234207588, 2.60333813934702,
    -0.95674642599607074, -1.2569254380704002, 1.556584474660849,
    1.3913830907181728, 0.13392604902296706, -0.27950865334500419,
    0.70707949463746278, 2.2684570805486577, -1.6198185793750386,
    0.40626350919604243, -1.5404598504379758, 1.4109013544475832,
    1.7322657736680191, 1.0231226020890558, 1.1429315756463216,
    -1.6384749199983835, 0.59211847519465111, 2.3209918281579274,
    1.6662411626694089, 1.932571377599992, 0.70707949463746278,
    0.899681079386557 };

  static const double dv3[9] = { -0.023042966300418896, -0.072859241969751229,
    -0.38475145676706146, -0.99999999999999978, -0.15401988677730116,
    0.458215450212638, 0.48442772459830313, 0.64742365956219172,
    0.044606717441399851 };

  static const double dv[7] = { 80.902425122711833, 0.57958034066101682,
    2.7542372881355925, 8.3444476103898282, 18.476847599152535,
    82.576271186440664, 5.5831371061186426 };

  static const double dv1[7] = { 39.642072093954248, 1.326910151014455,
    1.3984378025322182, 0.40910459174955477, 4.1384544102996017,
    18.984751948494864, 4.6908440786138605 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.60111425635239069;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 4.2723611039450047;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.69491525423728806;
  obj_Prior[1] = 0.30508474576271188;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int tc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[49] = { -0.0865208894040473, -0.92576764531526468,
    -0.88497546954557171, -0.43999298682040533, -0.21291862084090188,
    -0.12846453587571979, 1.8383093646355508, -0.41469640803021379,
    -0.46008241591681909, -0.88497546954557171, 0.017197340960649458,
    -0.29481969195869157, -0.45268455499063159, -0.31882335502321252,
    -0.4773918070142259, -0.35411875070137644, -0.25819996995650335,
    0.607533461843557, 0.51713458126767164, -0.45268455499063159,
    -0.19554028547780355, -0.21290741345404018, -0.57623140358450053,
    -0.25819996995650335, 0.60401677545684329, 1.0461324482332948,
    -0.45268455499063159, -0.29732336182463764, -1.0979851431378469,
    -1.2432874724947893, -0.4671251364861928, -0.11970695804447898,
    0.532379479937894, 2.1410755979286624, -0.72853808008186793,
    -1.7750502672409663, 2.2704477507592125, -0.5715877197510375,
    0.49376705086551059, -0.29703642494457644, 1.1684155405839274,
    -0.028545529585918279, -1.7285666576985235, 2.1368954712444443,
    0.002956488205608523, 0.71293912428281658, 0.23291666880729386,
    0.51997550235410372, 1.9465343308464094 };

  static const double dv[7] = { 88.5441678337736, 0.51714752196226421,
    2.79433962264151, 8.2643003474528314, 17.415144379433965, 80.377358490566039,
    4.7464914626603782 };

  static const double dv1[7] = { 34.250051914456854, 1.5832136955522278,
    1.9145611160403582, 0.31179038430634648, 2.8231410999187454,
    18.505951657085827, 4.2005918404656137 };

  static const double dv3[7] = { -0.46322020507632095, -0.4424341591311165, -1.0,
    -0.12503739827447713, 1.0, 0.20847748562788779, 0.82221427685402693 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.72988700538330531;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 7;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 49U * sizeof(double));
  *obj_Scale = 4.1428332770847973;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 7;
  for (i = 0; i < 7; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.7735849056603773;
  obj_Prior[1] = 0.22641509433962267;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int td_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -0.97904355222558148, -1.0434010177513993,
    1.559792874119545, 2.900474365776966, 3.1845552010921345, -0.91284408982612,
    -0.666382555079088, 0.42491984888288, -0.99405629509239757,
    1.7704284659680518, -0.720377199315367, 1.9509011070910902,
    1.3481505241204286, -0.26885167348645855, 0.68457278832977042,
    -1.1514188745972473, 1.8757462618923053, -2.2322494032009934,
    -0.367008587364161, 0.21765321714715422, 5.3558117878935, 1.1323942718077225,
    -1.0545197320769908, 0.92788609857402549, -3.5512725940754866,
    -1.383235371865253, 0.78290187063379135, -0.45579293528917697,
    -0.76860736570994959, -0.635710735407085, 1.454475078195292,
    0.048446467325209047, -0.048819928173875156, -0.34759543633948292,
    0.18347777506996832, 0.53768651360953224, -2.3068596678636806,
    0.40129711895275882, 0.17211730356961619, -0.13371589757054414,
    0.21765321714715422, -0.82612276687833019, -0.6911702826266245,
    0.62733628276715847, 0.29597932302850544, 1.1344923453813596,
    1.5560967195464805, 0.02923699931827518, -0.55164151699557928,
    3.1854386150183611, -1.3862160333784521, -0.23060965659276117,
    -0.838860876424657, -0.99334977685678383, 0.59448565280491228,
    -0.66106087349220566 };

  static const double dv3[8] = { -0.60653226247390268, -1.0,
    -0.085132969922760343, -0.5973813783011005, 0.81372761876903865,
    0.38883413188989857, 0.77809591827085023, 0.30838894176797621 };

  static const double dv[7] = { 46.02189971913792, 1.6176754186379307,
    1.818965517241379, 8.3768027210689642, 17.526778983103444,
    83.068965517241352, 30.697989117775858 };

  static const double dv1[7] = { 9.6961445357138221, 1.2725713230560531,
    0.9495071476042094, 0.28580981639152347, 2.9732479856682561,
    31.844392532330964, 19.355156508028784 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.3478723150094247;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 3.85838134773372;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.13793103448275862;
  obj_Prior[1] = 0.86206896551724133;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int te_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[35] = { -1.4437355310979194, -0.69951868733337252,
    0.52606305213799009, -0.0031784286584956014, 0.80404671265046035,
    -1.2330295985702149, 3.879316373556521, -0.17575441180058476,
    -0.83955269102762786, 1.6596918828015452, -1.1316622258496929,
    -1.4272242705093203, 0.7633040372101334, -0.26057576530989834,
    0.38990216587377258, -1.0727686968830517, -0.35564826060033078,
    -0.63516188913593541, 0.0987811217526123, 1.2623874461552205,
    -0.22824409054905448, -0.57323893361804423, 0.88792553101622174,
    -0.85948329645079991, 0.75734491674438853, 0.47496336337921241,
    -0.73394618962512781, -0.22354957637973594, -0.54372538458009922,
    0.92248782431380727, 0.6520218111006072, 1.0084381346947429,
    0.956024882942744, -0.73394618962512781, -0.21246326763349868 };

  static const double dv[7] = { 25.419941698235291, 3.602156576,
    1.1823529411764704, 8.39197416817647, 19.368880653529409, 44.8235294117647,
    16.000026619058822 };

  static const double dv1[7] = { 4.5265440570445135, 1.5500088069602491,
    0.79391064840261372, 0.41795595220237675, 1.7360072798126003,
    12.022038586059601, 48.602411617200914 };

  static const double dv3[5] = { 0.45697015324549867, 0.34700496507940193,
    0.99999999999999989, -1.0, -0.80397511832490065 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.053723549666268279;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 5;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 35U * sizeof(double));
  *obj_Scale = 4.3650575282392285;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 5;
  for (i = 0; i < 5; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.52941176470588236;
  obj_Prior[1] = 0.47058823529411759;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int u_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[315] = { -0.5803640622020938, -1.1018196953463002,
    -0.92894852334161337, 1.2456353184222226, 1.6236389475277175,
    0.2235713968948341, -0.44282918222390055, -0.7257658655185909,
    -0.983222909904453, -0.9890214227918116, 0.051173327582728224,
    0.20895159935201429, -0.056283708309192118, -0.36544359731602366,
    0.00850892274231621, 1.159582896248101, -0.38829242828982968,
    -0.48681602621103909, -0.79365619465823223, -0.33613881351321834,
    -0.35116087153564352, -0.555857877329142, 1.3136857704578568,
    -0.32821952883963168, 0.051223594722661185, 0.023980183217861512,
    -0.33613881351321834, -0.460026414752494, -0.47376544026953959,
    1.0638139735418779, -0.38829242828982968, 0.50399551942071408,
    0.47052892090255061, -0.89584902392127075, 0.5545769012156837,
    -0.42506091062208123, 1.2901725831827449, -0.26814662938943346,
    -0.034091835002110146, -0.28037518590342314, -0.33613881351321834,
    -0.34727572486024844, -0.70355813483568941, 1.1934097915971094,
    -1.2893859200428024, -0.45138817461784925, -0.40456390319896895,
    -0.89584902392127075, 0.48445334168642118, -0.33614269799314161,
    1.2961489950801768, 0.87323846016433193, -0.81590059503318191,
    -0.89486365550912772, -0.056283708309192118, 0.4358116295697686,
    0.27244712112356767, -0.85469207365761779, -1.4696046183933971,
    -0.56083160089779327, -0.24645853113087218, -0.89584902392127075,
    0.97365281457686947, -0.41858452610465741, -0.11216797050460417,
    -1.4696046183933971, 0.9590856761805735, 0.88105869816108673,
    0.50342650209886031, -0.45782106417740775, -0.68233661831091641,
    -0.35308698285085838, 0.1523636667619539, 1.1625976100197954,
    1.2201298860473913, 0.78328160730288654, -0.43803742947030089,
    -0.71900565029934815, -0.08306336538162426, 0.1523636667619539,
    1.0458778122968717, 1.2872153687150223, 0.78328160730288654,
    -0.48484147966689434, -0.44551268009873612, -0.11217086064361417,
    0.21243656621215212, 1.5164247179336869, 1.5054204013245196,
    1.0631367125069127, -0.46753663159157344, -0.67777428052021726,
    -0.18588807585350212, 1.0534571585149264, 1.3711315041819856,
    1.4597034743943518, 0.78328160730288654, -0.50572585414175875,
    2.13479395299136, -0.3564769573309654, 2.6153525442200793,
    -1.0389001532091191, -0.935812662843722, 1.342991817710939,
    -0.46982210533441593, 2.4095828981318639, -0.63014305263112991,
    0.39265526456274658, -0.78441835724552667, -0.43168642409599217,
    1.6228469229149651, -0.52190887896537086, 2.075581964093792,
    -0.589313070770015, 0.39265526456274658, -0.78546022889307276,
    -0.66128503982847942, 1.342991817710939, -0.52190260596854865,
    2.0416028254322409, -0.54094463398759707, 0.4527281640129448,
    -1.2628155031570345, -1.033487854640545, 1.342991817710939,
    -0.46541932882234716, -0.86924887541518947, 1.5260346861062444,
    0.21243656621215212, 1.0826599309916496, 1.1330366694536744,
    -0.89584902392127075, -0.26564267299215105, -0.94999646130391779,
    -2.0113657517910917, -1.0490943222420097, 1.9018784294589903,
    2.1304839102650419, -0.33613881351321834, -0.34059122043342088,
    -0.30988171777840856, 0.309886037081365, -0.087927931038838766,
    -0.86581043485384013, -0.49057379394442407, 0.2235713968948341,
    -0.33834395562772662, -0.32291157468388604, 0.078719782705106475,
    -0.0278550315886408, 0.71479999825050777, 0.92329126140033635,
    0.50342650209886031, -0.269609677179469, -0.23444247186053183,
    0.49633541853857394, 0.75309266126393548, -0.94969977585637244,
    -0.78291587180082156, 0.2235713968948341, -0.27273388757550932,
    -0.27231472386620775, 0.52946508985202523, 0.81316556071413393,
    -1.0059227201436931, -0.81410511326564117, 0.2235713968948341,
    -0.28321847266824007, 0.54359762788844856, 0.049154247896487417,
    -0.32821952883963168, 0.87329772980578291, 0.57964941702637729,
    -0.056283708309192118, 0.15085676675696991, 0.13401964560319779,
    0.59513914229867992, 0.1523636667619539, 0.55862360432415714,
    0.22046820785625607, -0.61599391871724452, 0.0061781949989868487,
    -0.93486833797374846, -0.14418565277432951, -1.2293130205926044,
    -0.094829249971827387, 0.034491761584443517, -0.61599391871724452,
    0.17951157936372453, -0.40137943204722681, 0.53261597917267256,
    -0.62858402609062247, 0.23633171640296777, -0.12357530734585863,
    -0.89584902392127075, 0.23483711913894462, 1.4406258133725305,
    1.0603760891481129, 0.512801063463143, 0.013083094818565528,
    0.098435830302174593, -0.056283708309192118, -0.3830579981383343,
    1.2335164549188462, 1.0486850882478922, 0.572873962913341,
    0.13393408704378265, -0.22902234552053635, -0.056283708309192118,
    -0.22713417203988595, 1.3049074927422843, 0.89412044179463768,
    0.69301976181373748, -0.14271675063150857, -0.32826496283616485,
    0.2235713968948341, -0.17749576116779089, -1.418266928981943,
    1.6311921081951122, -1.2893859200428024, 0.23169412382082177,
    0.35896354790660923, -1.4555592343293231, -0.078168255487959512,
    -0.73306259161120357, 0.85120006081240929, -1.1091672216922079,
    -0.31154161825507981, -0.2866196883993975, -0.89584902392127075,
    0.46081814768132195, -0.62275722589796811, 0.79398213078050084,
    -1.1091672216922079, -0.41958869238669644, -0.40247404147277988,
    -0.89584902392127075, 0.58875363333205455, -0.62637974580532318,
    0.79526477743559776, -1.1091672216922079, -0.26012407171840052,
    -0.2418953059306693, -0.61599391871724452, -0.19221342741122677,
    -0.29393868711270127, -0.57635479314298754, 1.0534571585149264,
    0.67173128925273762, 0.24659474975674092, 0.50342650209886031,
    -0.58071026294943207, 2.6282751405744382, -0.59441627382428575,
    0.33258236511254835, -1.4371078446937213, -1.451445593362664,
    1.0631367125069127, -0.48383979069423622, 2.9520779542665569,
    -0.75436344041127346, 0.33258236511254835, -1.0367921680415622,
    -0.98962746927660927, 0.78328160730288654, -0.046103374216875215,
    2.794912775749073, -0.80070680375305281, 0.33258236511254835,
    -1.4675118449503006, -1.4001319578917795, 1.342991817710939,
    -0.51593485977766573, -0.1249816087670079, -0.70518348448483426,
    -0.62858402609062247, 1.5388115951927581, 1.5293797487940033,
    1.342991817710939, -0.50532607632484627, -0.18967741420506129,
    -0.44023685841722154, -0.62858402609062247, 1.1577850848388658,
    1.2008129556964116, 1.6228469229149651, -0.4490583617643224,
    -0.080044261428145344, -0.05441537956813499, 1.4739674546663137,
    0.22240779243789544, -0.085034813673433546, 1.6228469229149651,
    -0.40194852472894738, 0.89266873409633762, -0.81887619457487293,
    -1.0490943222420097, -1.3582552907910543, -1.232403602958335,
    -2.574979655145428, 10.970755411318251, 1.2249317923650531,
    -1.6750348538993405, -1.3494588194930006, -1.4489581722661871,
    -0.51788952274868727, -1.4555592343293231, 3.4903741077307382,
    1.5272700743487615, -1.6575906196052035, -0.74872982499101881,
    -1.1796790100467227, -0.85496633677767775, 1.0631367125069127,
    -0.20779034497974591 };

  static const double dv3[45] = { 1.0000000000000002, 1.0000000000000002,
    1.0000000000000002, 1.0000000000000002, 1.0000000000000002,
    1.0000000000000002, 1.0000000000000002, 1.0000000000000002,
    1.0000000000000002, 0.9711409694759624, 1.0000000000000002,
    0.542640365025163, 1.0000000000000002, 0.30504679070464219,
    0.44674175939523209, 1.0000000000000002, 1.0000000000000002,
    1.0000000000000002, 0.15007881106950435, -0.73010230836137369,
    -0.45788820571105365, -1.0, -1.0, -0.11043530880252816, -0.17155985157651485,
    -1.0, -0.99007607508151718, -0.26271993462618776, -0.58851450328403587,
    -0.046962083585692344, -1.0, -1.0, -1.0, -0.2429111255675637, -1.0,
    -0.63619580244837948, -0.39262286823204828, -0.12086197780694645, -1.0, -1.0,
    -1.0, -0.92256344784888566, -0.014184298830272796, -0.060556308820530785,
    -0.66749459508697617 };

  static const double dv[7] = { 39.624195824189975, 2.4180576839944155,
    2.8463687150838011, 8.5480327024748668, 18.544911578882694,
    79.206703910614578, 18.823443524486045 };

  static const double dv1[7] = { 17.540632384375865, 1.1476956604927708,
    1.6646441392911675, 0.32522240220216464, 3.5929171322232762,
    21.439666057282558, 29.382288118734088 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.48674336939112367;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 45;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 315U * sizeof(double));
  *obj_Scale = 1.3710104986078366;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 45;
  memcpy(&obj_Alpha_data[0], &dv3[0], 45U * sizeof(double));
  obj_Prior[0] = 0.670391061452514;
  obj_Prior[1] = 0.32960893854748607;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ub_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[119] = { -1.2102661573450204, 0.6344544770591416,
    1.0129814166596542, 0.18090424508124753, -0.057275544391719259,
    0.024198953057214347, -0.25561485439156806, -1.1841552153836643,
    0.42460358917943242, 2.5013532349973051, 0.31851969680032083,
    -0.00730278902951902, 0.4295314167656118, 0.18514814424186318,
    -1.0406342506957251, -1.4758818646320215, -0.058646292543454111,
    0.35875370414179808, 0.30098435964125414, -3.2184607566099652,
    8.8998822733131533, 0.19148806707370822, 0.33314991495466767,
    0.71530705299212416, -0.60114999371187838, -0.63069612293436561,
    0.4295314167656118, -0.27582612437077419, -0.063589837011287717,
    0.47400710220453407, -0.8325996380790327, 0.16429905347055815,
    0.38182627524321122, 0.024198953057214347, -0.342058939208916,
    1.4468778097210675, -0.32202288288452341, -0.35632065621098424,
    0.40846481428144604, 0.83861068416709983, 1.6455288078908041,
    -0.39626586716390005, -0.66147258886821636, -0.22945665286970462,
    -0.8325996380790327, -0.4218256972505468, -0.251072884155913,
    0.024198953057214347, -0.97055703868708965, -0.566700910961648,
    -0.42023968716884791, -0.8325996380790327, 1.7467759284724935,
    1.6590123110639694, 0.024198953057214347, -0.846131834252321,
    -0.72620977354362515, 1.193345922794862, 0.47716756205810013,
    2.5557723314944316, 2.6607519569295763, -0.78646597435958054,
    0.853618600514794, -0.69453102213418083, 1.3559223245158896,
    -0.17771603801046629, 1.8388338866628469, 1.75541756318632,
    -0.78646597435958054, -0.38473984674347073, 2.3750528569027582,
    -7.2709655592830034, -0.5349252744115025, -1.1084133551341313,
    0.58219442520317521, 2.0508612715992016, -1.380528946116157,
    -0.047000050926451292, -0.83889911229726633, 1.1320511621266665,
    2.0256175755230146, 1.9084449314307574, 0.83486388047400928,
    -0.073545452331259711, 0.8321695126416796, 0.023742127713272127,
    -0.41585552894449035, 2.3831133151360708, 2.3847883886082331,
    0.83486388047400928, 0.65051856798617913, 0.66931256658811866,
    -0.3285536759365138, -0.35632065621098424, -0.20545768292516653,
    -0.22145454319238808, 2.8615261990159966, -1.3024960114327315,
    -0.31519087358236375, 0.966592380642536, -0.65399501987851449,
    -0.15921782668057707, -0.40620211421162433, 0.83486388047400928,
    -1.0193542828957356, -0.13049336858603661, 0.65349404778260867,
    0.00088858019005171008, 0.17989540228773385, 0.22533123453786616,
    0.024198953057214347, -0.0002737185102003357, -0.23494003903189337,
    0.64485007366806368, 1.8464696349287391, 0.24328529323717263,
    0.00017051476400576089, 0.83486388047400928, -0.75617170014286172 };

  static const double dv3[17] = { 0.47395810302785163, 0.20898943481047683,
    0.016707067420340612, 0.99999999999999989, 0.6754303872896994,
    0.75488944056621843, 0.16599607923367926, 0.066231309154925186,
    0.17712339321158904, 0.056036053652794945, -0.030634125009075249,
    -0.0053321623587115506, -0.4355208004143486, -0.22563074941025282,
    -0.9709203312848339, -0.99999999999999989, -0.92732309989035344 };

  static const double dv[7] = { 30.465504217462705, 3.4589916137313454,
    2.798507462686568, 8.450336637716422, 17.538880652462694, 89.64179104477617,
    12.925316077910455 };

  static const double dv1[7] = { 8.6198567762551086, 0.67532074051187607,
    1.6796878099937607, 0.20151306160452495, 2.36904727669966,
    14.802663337414035, 8.1411662982724611 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.4980803899107504;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 17;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 119U * sizeof(double));
  *obj_Scale = 1.8283397987793333;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 17;
  memcpy(&obj_Alpha_data[0], &dv3[0], 17U * sizeof(double));
  obj_Prior[0] = 0.089552238805970144;
  obj_Prior[1] = 0.91044776119402981;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int uc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[154] = { -0.53438316831079336, 0.65207836107311368,
    0.62089363854745327, 0.25594055245508723, 0.40267144891133017,
    -0.37533464632614127, -0.55050518208635579, -0.58120507703892443,
    -0.972787725461207, -0.9829900171339746, 0.47291572508382218,
    0.48069879734265636, -0.37533464632614127, -0.46343026165725615,
    -0.52413954633545923, 0.21197578111886992, 1.46102317247582,
    0.44810788906733012, 0.50430056142279922, -0.10074772085596312,
    -0.49715263797670273, -0.72306500760773817, 0.97646375615469061,
    0.62089363854745327, -0.14535461390076912, -0.12240349619908535,
    -0.37533464632614127, -0.53000963147609059, -0.54153406089842793,
    0.5030049774470754, -1.0593654293092809, 0.420671119017108,
    0.28212134184882753, -0.37533464632614127, -0.47643916838559452,
    -0.86446913927161251, 1.5371687786917168, -1.1357408414845869,
    -0.26036564210958685, -0.40925395145753657, -0.64992157179631938,
    -0.46597872769878518, -0.80657862685266257, 1.2132864981501759,
    -0.29561130755621995, 1.100509721179572, 1.3973652767044868,
    -0.64992157179631938, -0.50689834050124583, -0.7748480459322542,
    0.91327610090216282, -1.0593654293092809, 0.23860213264197574,
    -0.0089349024118796031, -0.64992157179631938, -0.46070551839509694,
    -0.45559864438878539, 0.49012929189206511, 0.23901657767092283,
    -0.618565530303798, -0.07216955485636907, 0.44842613008439314,
    -0.36850565565584986, -0.46887048371771667, 0.24449555205358925,
    0.31539198984622863, 1.4512310974184552, 2.0167907229457791,
    0.72301305555457129, -0.30661803766972784, -0.41733397955857737,
    0.72345064784767177, 1.3846477603005141, -0.80204143905496494,
    -0.55018128032626956, 0.44842613008439314, -0.31887125332098887,
    -0.67511983981218726, -1.086564748392423, -0.9829900171339746,
    0.24506606762269728, 0.46654515896177606, -0.10074772085596312,
    0.050201985046374194, -0.11306952005202399, 1.1556370654414951,
    0.46814281419684095, 1.2373134785185287, 0.93175934927787774,
    -0.64992157179631938, -0.41057443070095184, -0.62392873387918457,
    -0.51114251570634228, -1.2121162536598928, 0.67591906171342409,
    1.2677078883732562, -0.92450849726649753, -0.32072238889567339,
    -0.67274072867299117, 0.57738400902680809, 1.0027706994239838,
    0.2431037970447496, -0.039326842202831953, -0.92450849726649753,
    -0.46126810810890417, -0.56789997796594294, 0.3281382505930181,
    0.23901657767092283, 0.44319334033851993, 0.55559440779884639,
    -0.64992157179631938, -0.281775616575598, -0.8069787791560088,
    0.32720366038386878, 0.23901657767092283, 0.20784204701614631,
    -0.26142824647435187, -0.92450849726649753, -0.48502292508317452,
    -1.5448363140448298, 1.615429120176006, -1.2121162536598928,
    0.60298627855676312, 0.650049696201144, -1.1990954227366757,
    -0.36251632256230848, -0.777974477551695, 1.0058853461353507,
    -1.0593654293092809, 0.17457588241793265, 0.29524845398462329,
    -0.37533464632614127, -0.23693127223985255, -0.43935952964282521,
    -0.45157671149041212, 1.6901494090017382, 1.3948329699754671,
    1.0169837557907306, 0.72301305555457129, -0.5867297176356987,
    0.76928482885227811, -0.70927625758255342, -0.9829900171339746,
    -1.2634181016968451, -1.168209801456666, -2.2974431246173883,
    9.814087908856779, 1.1077184706237355, -1.6190174045004195,
    -1.364867078010505, -1.3821927942269983, -0.11252805457005481,
    -1.1990954227366757, 3.078831629772512 };

  static const double dv3[22] = { 0.19015989888708534, 0.52558174257417067, 1.0,
    1.0, 0.11491738305121039, 0.11693640022956028, 0.79850383306388217, 1.0,
    -0.096447520479672311, -0.12614241652905517, -0.441403170708963,
    -0.29348265453910671, -0.45280919318003288, -0.0079956276597474753,
    -0.73024439320198309, -1.0000000000000002, -0.041409885604018287,
    -0.35016494523703934, -1.0000000000000002, -0.18167494396642653,
    -0.0013364771360486949, -0.02298802956381361 };

  static const double dv[7] = { 42.034455879496377, 2.244324884330934,
    2.3870503597122292, 8.4200772630359673, 16.957821351870496,
    74.20143884892083, 20.907519786172649 };

  static const double dv1[7] = { 17.22081802947854, 1.0800979831779696,
    1.309321902845747, 0.24835769616925882, 2.43178390416533, 21.851003975248041,
    32.632866455659652 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.6592579444394604;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 22;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 154U * sizeof(double));
  *obj_Scale = 0.97247495655777882;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 22;
  memcpy(&obj_Alpha_data[0], &dv3[0], 22U * sizeof(double));
  obj_Prior[0] = 0.86330935251798568;
  obj_Prior[1] = 0.1366906474820144;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ud_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -2.1045463211454303, 2.2419218292011807,
    0.93545729276973533, 1.8012837176852485, 2.3722086558951627,
    0.61136894687571353, -1.5496752425153113, 1.850830551020789,
    0.09008905836325623, 1.3977016836693532, 1.0355003540028176,
    1.9910441614035157, 1.2732178985393303, -1.5244429567756355,
    1.400581752510613, 0.10996342660488548, 1.4901505618492767,
    -1.7776091441842108, -1.0555929823522945, 1.6041423743711385,
    -1.5499450779304447, 1.8359002887768547, -0.040895460849287336,
    1.3977016836693532, 0.036079705750970505, 0.27002792354053734,
    1.6041423743711385, -1.5395546387677048, -0.6094823679977005,
    0.37187644427963418, 0.19586626733034704, 1.576075213814377,
    2.4348018038776651, 0.28044447104390519, -0.38819825742294006,
    -0.45885781331499315, 0.40924657960728855, 0.19586626733034704,
    1.4549383607009778, 2.3966175367899809, 0.28044447104390519,
    -0.4877593766682447, -0.672497675534734, 0.63783171402875938,
    0.19586626733034704, -0.35479409136869294, -0.65525591524056326,
    0.61136894687571353, -0.47319663622345515, 1.7542090468507887,
    -1.6920921361233221, -0.26637812356927076, -1.3373330911077157,
    -1.1700294989901896, 1.2732178985393303, -0.51904222269543754 };

  static const double dv3[8] = { -1.0000000000000002, -0.566859281464739,
    -0.9075074482156, -0.40992839450471874, 0.48375627862482867, 1.0,
    0.80486757764621542, 0.59567126791401337 };

  static const double dv[7] = { 49.012392006101692, 1.9543260317118643,
    1.8881355932203385, 8.3959409878135585, 17.033608488135592,
    78.915254237288138, 26.3042236448644 };

  static const double dv1[7] = { 15.902312773941086, 1.2414864060090174,
    1.0816788907419783, 0.19358897310999493, 2.1027715371783295,
    18.131025167958526, 16.185910948123425 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.4967483801350048;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 3.9740797999633584;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.15254237288135597;
  obj_Prior[1] = 0.84745762711864414;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ue_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[49] = { -1.8096772633924909, 1.6810155255155703,
    -0.3612117411617301, -1.4482678304611887, 0.37756132034026457,
    -0.347512244835554, -0.10383756884469876, -1.732003772037032,
    1.5818988922606039, -0.53139804228600629, -0.83978980909238032,
    0.034982049024769396, -1.1215167901511023, -0.082799542806407583,
    0.54954617118893978, 0.54282536426678307, 2.0213964745781348,
    0.18717982102482422, -0.37050736846185683, -0.347512244835554,
    -0.14735756589952698, 0.45916633572293419, 0.86192986982341158,
    0.14934716221109781, 0.52461767886875821, -0.10537811789645911,
    0.42649230047999437, -0.1613918079167046, 0.7031717723067018,
    0.60946739462082178, 0.14934716221109781, -0.27846186556832003,
    -0.82317377717819229, 0.42649230047999437, -0.18853607780794859,
    -0.39550243202168295, -1.2502962342390631, 0.14934716221109781,
    -0.825086107068283, -0.74906006744027243, 0.42649230047999437,
    -0.15030983737999007, -0.54098249410795762, -0.37689027719927171,
    -1.8928884512802147, 0.93510637685687292, -0.051469385844702689,
    0.42649230047999437, -0.1443175103970489 };

  static const double dv[7] = { 92.233206972449, 0.1582285668571429,
    2.2122448979591844, 8.1081766497346948, 16.682703109795924,
    68.693877551020421, 7.5589334246326558 };

  static const double dv1[7] = { 33.073921683828871, 0.98036444347378071,
    0.58759135923035577, 0.17269229176695233, 1.9404995446667905,
    7.7518924615021518, 28.767740894437939 };

  static const double dv3[7] = { 0.2315029821210326, 1.0, -0.085082594193522335,
    -0.63064869295506654, -0.0048880916393075442, -0.24000122599957591,
    -0.27088237733356019 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.82825474022438261;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 7;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 49U * sizeof(double));
  *obj_Scale = 3.7522162545202242;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 7;
  for (i = 0; i < 7; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.83673469387755106;
  obj_Prior[1] = 0.163265306122449;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int v_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[161] = { -0.79686601335988383, -0.94525291576596837,
    -0.84182384504880869, -0.23163914902337004, -0.10893099674178354,
    -0.1832620225851565, -0.71481083963355352, 0.1348874118763288,
    1.0012947064913575, -0.32805677276258144, -0.79925300533744359,
    -1.1143438409000734, -0.55317980891445362, -0.68768097876833323,
    -0.47709164123020326, 0.91429719685017241, -0.32805677276258144,
    0.24611779676236278, 0.15337815385389242, -1.2930153815730479,
    1.0327567116949798, -0.768685651646083, 1.0320234185943862,
    -1.0987073811919221, -0.76187431127607019, -0.72416296485541121,
    -1.2930153815730479, 0.899557878177065, -0.30245611845794285,
    1.1253528055497333, 0.75085407903849544, -1.14645868858261,
    -1.215834455347758, -0.1832620225851565, 0.80716354797269685,
    0.4698101469669177, -0.82849413484207024, -1.2528375028777905,
    -0.87734426398223053, -0.56561525282150171, -1.2930153815730479,
    1.8287862228875895, -0.407070163436354, -0.15397732920749013,
    -1.2528375028777905, 0.72626759345901382, 0.5650564925133621,
    0.55657355007343767, -0.89028069472756821, -0.44124047694895113,
    -0.15397995464055633, 0.18571029952364576, 1.3142966325710885,
    1.1911650062425554, 1.2964091227320318, -0.90873529479662918,
    2.7578868901156843, -0.58742102145742858, 0.3398404212095138,
    -1.1143421169617092, -0.98160234411839264, 1.6663269090613289,
    -1.012002790324378, 2.7147692734677507, -0.5434826182009197,
    0.39121712843813655, -1.6179830647725402, -1.3548464909119451,
    1.6663269090613289, -0.90471350438897735, -0.59651741138997194,
    -0.80833906749138829, -0.27668006553395891, -0.63890253432080435,
    -0.60360634187486473, -0.92309759524375068, 1.3092048117034778,
    1.1001337211250488, -2.8489432053116763, -0.79044713782018594,
    -0.14814856700110585, -0.13684910030186603, 0.18665576374414056,
    0.051961626962082959, -0.97986437282537142, -2.2336210266815151,
    -0.071173236619467853, -0.43406551917771624, -0.23978679114478188,
    -0.55317980891445362, 1.059458291239104, 0.10209898908787511,
    -0.053707005625055863, -0.37943347999120419, 0.21078409155589331,
    0.68868785419243062, 0.18665576374414056, 0.056755947612043216,
    0.27538088920359061, -0.016985361437180567, -0.37943347999120419,
    0.13470667483051563, 0.66627781061896907, 0.18665576374414056,
    -0.047422473758862771, -0.11314749869937596, 0.36989449290703486,
    -0.37943347999120419, -0.95540234161917936, -0.94803274620488143,
    0.18665576374414056, 0.030539408874010205, 0.029604751681529061,
    0.2076330912193505, -0.37943347999120419, -1.0018571897488155,
    -1.1248425186947255, 0.55657355007343767, -0.03218436352192941,
    0.056763609968105019, 0.00047136464229128179, -0.37943347999120419,
    -0.096663123823218872, 0.25431296047907959, 0.18665576374414056,
    0.071162895675276019, 0.065569760857517825, -0.044969000826834561,
    -0.43081018721982695, -0.65082408308858186, -0.54050400667543952,
    0.18665576374414056, 0.08263490942523824, 0.20883180657620942,
    -0.088873543357816623, -0.37943347999120419, -0.57414707244520069,
    -0.54274704318943734, -1.6629331679023449, 1.3383196018981411,
    0.14505982303899492, 0.62653811661899372, -0.89320055227743134,
    -1.4894050762492435, -1.2574581004713639, -3.8824398858781275,
    -0.071870226862084691, -0.069410125196701117, 0.73605244755601262,
    -1.2014607956491679, -1.2379115705514703, -1.2441125222033889,
    -1.2930153815730479, 2.0278564174029534, 2.8213431423067594,
    -2.0818591426183666, -0.63631701613431779, -1.6189198507881186,
    -1.4269590531251295, 1.2964091227320318, -0.0801561105420367 };

  static const double dv3[23] = { 1.0000000000000002, 1.0000000000000002,
    0.91665967436869444, 1.0000000000000002, 1.0000000000000002,
    1.0000000000000002, 0.367862489208275, 0.7742249806530469,
    0.27876279866030074, 0.15039948885915902, -0.066116209455833172,
    -0.025347332546482186, -0.199912236080124, -0.99999999999999989,
    -0.99999999999999989, -0.99999999999999989, -0.9369871829311317,
    -0.99999999999999989, -0.26933802326644846, -0.51014238622151087,
    -0.36179961605716782, -0.9899830967767842, -0.1282833484139945 };

  static const double dv[7] = { 37.90889662220183, 2.4838595829082561,
    2.8385321100917427, 8.6360778638807325, 19.685945474220183,
    80.972477064220186, 19.142949938110085 };

  static const double dv1[7] = { 13.823017743921712, 1.263410613169623,
    1.9464073389329344, 0.308248623696717, 3.5828930781322552, 16.21982024583933,
    15.468533586841627 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.35849178033603296;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 23;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 161U * sizeof(double));
  *obj_Scale = 2.1899204539037376;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 23;
  memcpy(&obj_Alpha_data[0], &dv3[0], 23U * sizeof(double));
  obj_Prior[0] = 0.4587155963302752;
  obj_Prior[1] = 0.54128440366972486;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int vb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { -0.822237269875747, -0.62867078508335583,
    -0.96456364277825413, 0.036730127327237419, 0.25367031191413009,
    -0.041995259002870169, -0.66872808454749588, -1.1953079120462469,
    0.26007013034240239, -0.040337214543783952, -0.094575456488112455,
    0.32606906512304257, -0.46494751038894588, -0.32534927010312953,
    -0.873316595536505, -0.10807427418892536, 0.17294580735647827,
    1.5611365296567938, 2.4015232520958207, -0.041995259002870169,
    -0.71594731048009153, 1.3263907008165343, -0.1848815256097206,
    -1.035657983411675, -0.10307659689495217, -0.65481817058606762,
    -0.46494751038894588, -0.44901677873479395, 1.3039420044438266,
    -0.060746767016560531, -1.1067523240450956, 1.7672585964730658,
    1.8611398947862441, -0.88789976177502161, 0.20661857627941077,
    0.99774272742897763, -0.57497622163224016, -1.035657983411675,
    -0.74265224572573518, -0.8272597189440799, -0.88789976177502161,
    -0.015802147281171502, 0.63440093963506516, -0.017999411441052302,
    -1.1778466646785166, -0.037504154635506687, -0.36972241902672615,
    -1.3108520131610975, -0.91883393093682331, 0.32760286821134943,
    -1.7092565353725622, 1.1682665762243691, 0.56794141113945507,
    0.42852143441864804, -0.88789976177502161, -0.89088883754796211,
    0.565071530791868, -0.61874467643942332, -1.1067523240450956,
    -0.094750525694687032, -0.47593813949962382, -0.88789976177502161,
    -0.77758054902588847, 0.0743674796942756, -0.48918700766686629,
    -1.2489410053119374, -0.012457629774282475, -0.19415689871553113,
    -1.3108520131610975, -0.88370232167928975, -0.088498970773289984,
    -0.25187377917876314, 0.38622882925674079, -0.29548913678901939,
    -0.30525035814515306, -1.3108520131610975, -1.0205842831172252,
    -0.50450716659735051, -0.14766178059806784, 0.24404014798989912,
    3.5009248084253652, 3.9538184657966973, -1.3108520131610975,
    -1.07160543376291 };

  static const double dv3[12] = { 0.94314317745752319, 0.47450452605783855,
    0.0060890507481515671, 1.0, 0.26887433139825995, 1.0, -1.0,
    -0.22277017312304753, -1.0, -0.79590515726521516, -0.5849184421010698,
    -0.08901731317244134 };

  static const double dv[7] = { 30.311274171489341, 3.4417077178085096,
    2.6567375886524811, 8.4344184802482225, 17.294152861773043,
    84.595744680851027, 12.049158234645384 };

  static const double dv1[7] = { 8.23274220166678, 0.56657862630165323,
    1.4065817209786589, 0.17070392095069672, 2.0769520652669251,
    14.185998491170414, 8.2671976359215211 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.4525300054115653;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 2.39749336593227;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.13475177304964539;
  obj_Prior[1] = 0.86524822695035464;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int vc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { -0.5896353153739613, 1.0416735846634195,
    -0.68077347364462271, -0.0076148677463234319, -0.317588376866262,
    -0.4337801616507711, -1.165345756070421, -0.92138513697601554,
    -0.80919969624559351, -0.6058558186502383, 0.61618241002991436,
    0.49703732684256091, -0.4337801616507711, -1.0839953629567758,
    -0.82846361981690575, 0.24915835117849114, 1.7915091411700603,
    0.5810875339581, 0.52624967677182588, 0.0063791200242767354,
    -1.1512305530722446, -0.64360509779539188, 0.76016714355622472,
    -0.6058558186502383, -0.063278131359898945, -0.42987094120141067,
    0.0063791200242767354, -1.0939979837761076, 0.41867377885836049,
    0.048459423214251063, 0.068403076299220752, 1.1848413762887,
    0.55866154466794926, 0.44653840169932457, 0.07406519909321635,
    -0.48729632796541772, -2.5688023043005246, 0.068403076299220752,
    -0.51424225097161957, -0.76644692770797, 0.88669768337437249,
    -0.52148245290349349, -1.6458171629995544, -2.0760426383055379,
    0.59282666125991135, 0.41538505484449839, 0.853339704982562,
    0.0063791200242767354, 0.7334561244241502, -0.51297665168955786,
    0.6444182373454993, 0.14332073129360517, -0.49998511367604542,
    -0.43822152739924286, 0.88669768337437249, -0.23896307506107373,
    -0.29089468586396094, 0.2584012693484441, 0.14332073129360517,
    1.0078006951756773, 1.7543827389278894, 0.88669768337437249,
    -0.20057029289657216, -0.27938462441939149, 0.21091980226904775,
    0.068403076299220752, 0.034797468020744828, 0.30495013111447966,
    0.88669768337437249, -0.18972822690048582, -0.092134261621348176,
    0.16504314460358102, 0.14332073129360517, 0.16942798927490826,
    0.30085971734847289, -1.3140987250008669, 0.9970046870233169,
    -0.17548730180578176, 0.91258984302274526, -0.6058558186502383,
    -1.4375942602918836, -1.0024913111252682, -3.955054415051154,
    -0.33574922381281835 };

  static const double dv3[12] = { 0.26732359697675362, 0.46109366425390491,
    0.57510869962486755, 1.0, -0.30413235717862264, -0.028176137151664421,
    -0.121059548530434, -1.0, -0.15784160295494049, -0.51220932193386781,
    -0.033789782426582954, -0.14631721067941378 };

  static const double dv[7] = { 41.7699716889855, 2.1720221452753621,
    1.9086956521739127, 8.4293532316231872, 17.1502326373913, 71.91304347826086,
    23.526527574623184 };

  static const double dv1[7] = { 10.575754142254143, 1.2090999611280315,
    1.3347988535879263, 0.17555887609898016, 1.9647303328549084,
    13.631429007169187, 16.367289229198157 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.73022474856460584;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 2.3917925491379832;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.72463768115942029;
  obj_Prior[1] = 0.27536231884057971;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int vd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[133] = { 0.20229585680067752, -0.982947648686917,
    0.7289844571731835, -0.12005095655386275, 0.74344310002457414,
    1.6756048930404759, -0.65737784306829461, -0.078649219313574159,
    -0.95018381253520268, 0.7289844571731835, 1.7087121047881424,
    3.13912265594049, 1.1454909556405031, -0.62431827489836633,
    -0.649536438067181, -4.376452094588613, 0.28061982329892515,
    -0.47140766018431274, 0.0088356470257560365, 0.61537701824053,
    -0.67254639536249927, 0.976101286339694, -0.35218512850409373,
    0.50480214023605408, -0.98351606801456448, -1.1438028729408829,
    0.61537701824053, -0.42232485532593028, -1.3326495507672858,
    -0.8233270037649022, 1.0652579325788771, 0.95333019982914757,
    1.0672809381539954, -0.97496479395938873, -0.57823375909613128,
    -1.6087054469831696, 0.304913560214267, 1.0652579325788771,
    0.8851262585205909, 0.86722250542710833, -0.44485085655941581,
    -0.6053358721463814, 0.43699590639508462, 0.9987150112914388,
    -1.2886563952609795, -0.059791832412812884, -0.52967632554416866,
    0.085263080840557129, -0.44315564556721732, 0.16908450772384759,
    1.0320226687784992, -1.2886563952609795, 0.019293346376267718,
    -0.26566006642885681, 0.085263080840557129, -0.54509245929223238,
    0.14268579322959471, 0.90140218312835463, -1.2886563952609795,
    0.10786713967543822, -0.19138338768754762, 0.085263080840557129,
    -0.50272153260320573, -0.04805434586208672, 1.2866903594445065,
    -0.055653652106768967, 0.14857419038836825, -0.57646066337883373,
    0.085263080840557129, -0.45410333180792967, -0.58583358294767074,
    1.2791703661504548, 0.39271098176748986, 0.24637889016522729,
    -0.33078462693532612, 0.085263080840557129, -0.47050108695196652,
    0.77952178526677574, 1.1667625902017134, -0.39192712751246261,
    0.89969453713545477, 0.34572086770212268, 0.61537701824053,
    0.817104210597098, 0.52366603961471025, -3.265550975528503,
    -0.16774481057533319, 0.58798571187915, 0.14935899255038573,
    1.1454909556405031, 0.12971146161806793, -0.52731965203856823,
    0.5657854738989786, -0.39192712751246261, 0.23550846558990488,
    -0.21570747219978828, 0.61537701824053, 0.48991333285732575,
    -0.25160128017749805, 0.58303405524411944, -0.2798359690438979,
    1.2800707154950342, 1.9490109676703646, 0.61537701824053, 0.369454228680686,
    -0.68896723221940126, 1.0806423701198229, -0.2798359690438979,
    0.35577608607822048, -0.1563973952239211, 0.61537701824053,
    0.44757048947046707, -0.35941900081782047, 0.49972634339916483,
    -0.2798359690438979, 0.23735766767722641, -0.26138577123648016,
    1.1454909556405031, 0.38732087903730178, -0.48336654718805516,
    0.54965908461903967, -0.39192712751246261, 0.1405246550064109,
    -0.405411459504363, 0.61537701824053, 0.43897230305099416,
    0.95841299719887951, 0.6409655132213804, 0.056437506361795745,
    -0.56271309151046278, -0.88286204358226761, -3.6255344809592533,
    -0.14167786899833165 };

  static const double dv3[19] = { -0.56233213190458819, -0.17336792657795747,
    -0.21519463949504042, -0.13105032800012836, -0.034963779700676531,
    -0.12547456901468354, -0.15755098058038311, -0.067954745728013091,
    -0.99999999999999989, -0.7177389354909981, -0.99999999999999989,
    0.065069604415745885, 0.50631259254874372, 0.720898021948199,
    0.37520349863789737, 1.0000000000000002, 0.232897733506722,
    1.0000000000000002, 0.28524658543516057 };

  static const double dv[7] = { 44.80502922517482, 1.8897004299300693,
    2.3496503496503487, 8.2122350534615354, 16.718894808321675,
    77.034965034965012, 12.7057728314965 };

  static const double dv1[7] = { 12.279499066917431, 0.98227481211219914,
    0.89213102412572964, 0.36354706963083405, 2.7471640285730237,
    11.3183215469262, 15.437963719811849 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.034810412566211188;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 19;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 133U * sizeof(double));
  *obj_Scale = 2.4251779423673563;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 19;
  memcpy(&obj_Alpha_data[0], &dv3[0], 19U * sizeof(double));
  obj_Prior[0] = 0.65034965034965031;
  obj_Prior[1] = 0.34965034965034969;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ve_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -0.872159725597833, -0.76446512586262694,
    -0.41617367314244846, 1.9583484656219572, 1.6694721688207925,
    -1.720630094597382, 0.09076259319305563, -0.3086899637849882,
    -0.72288243332394508, -0.12138398799988136, -0.25296513760211403,
    0.86722910497962757, 0.14643660379552131, 0.33220001149566342,
    0.33283288191480537, -0.93513038891481082, -0.26877883057116492,
    -0.096804715694260648, 0.84219672818372193, 2.0135033021884245,
    -0.33254696600838107, -0.024750621591733728, -0.77383484270999,
    -1.3005427285701485, -1.9818395151348469, -1.3009539190539039,
    -0.32033007080270454, 0.21866262933542149, -1.74071627845229,
    2.1808510169872983, -1.0057530434275821, 0.97299385662792182,
    0.58170125461397382, -0.78709674540093033, -0.42945895620178637,
    1.0124673728184939, 0.14991429800756767, 0.026010854571402214,
    -0.11723469934326278, -0.65552897844252711, -0.1647411792699626,
    -0.43121538750325944, 0.86282164776844938, 0.4118004458472887,
    -0.26877883057116492, 0.656220228706966, 0.40639962136167634,
    -0.4759189623354465, -0.41664359769250303, 0.56645549580817645,
    0.42813943044004138, -0.12138398799988136, -0.50744947703653753,
    -0.99478143024650978, -0.32033007080270454, -0.42959600433207124 };

  static const double dv3[8] = { 0.32969958395591548, 0.99999999999999989,
    0.26802991087462696, 0.59023178584258917, -0.12099350180875171,
    -0.066967778864380045, -1.0, -1.0 };

  static const double dv[7] = { 57.59971581235294, 1.4443040331764707,
    3.5823529411764712, 8.2892972601764683, 19.362207594117645,
    120.35294117647061, 14.907573722235293 };

  static const double dv1[7] = { 24.1592947529304, 1.5101157516816794,
    0.67844979007076023, 0.46799102555655775, 4.5721299632529036,
    38.563164380776932, 31.868599673130682 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.15497804042292654;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 3.0070394776868037;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.52941176470588236;
  obj_Prior[1] = 0.47058823529411759;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int w_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[147] = { -0.21838098554725985, -1.8066227041606888,
    -1.0882110248035077, 0.64320507786463932, 0.91787605138143857,
    0.014848033824152106, -0.474935887482443, -0.39920452741455592,
    -1.6677020973169825, -1.1369266507562497, -0.76849720036848213,
    -0.61699951985483015, -0.33655543334743215, -0.23510037437068348,
    0.51394898848913373, 0.84231435742828387, -0.64977039122882818,
    -1.4043322476453286, -1.7047863107255186, -0.68795890051901643,
    -0.19083496150018708, -0.18790478067697863, 1.0228256986237489,
    -0.60105476527608626, -0.7684377909971436, -0.81768563496528224,
    -0.68795890051901643, -0.52823401907255052, -0.025244000370231917,
    0.99528307819842587, -0.552339139323344, -0.86926978685349521,
    -1.1478982587236435, -0.68795890051901643, -0.17879400907323223,
    -0.37158670956551371, 0.88193813653844388, -1.3805047805199604,
    -1.3624610293139188, -1.2826377321810862, -1.390765834862185,
    2.3989233743729557, 0.842185906992028, -1.5171450505722819,
    -1.5266516583781868, -1.4918092508579535, -1.1111001316070241,
    -1.390765834862185, 3.915063708963106, -0.18613381513161509,
    -0.2886215786325107, -1.4779360324254447, 0.42823908878972444,
    0.23226282260712824, 0.36625150099573639, -0.19459444107351417,
    -0.017189885770387537, -0.64737527880494294, -1.5266516583781868,
    0.30453981611351871, 0.1122080810661913, 0.36625150099573639,
    -0.52139913648560909, -0.21556671541073719, -0.43560342442757743,
    0.421973379731499, 0.41787554405586169, 0.2571997963563048,
    0.36625150099573639, -0.398867763576177, -0.31381709572293204,
    -0.55165663837536749, 0.5681202575897254, 1.4756842175807319,
    1.907244888750014, 0.71765496816732066, -0.52974284262971538,
    3.4999552869823134, -1.2541152715530537, -0.016467253843180419,
    -1.7560603829488219, -1.3120645131647921, 1.7718653696820736,
    -0.72002183814484289, 3.084587454519558, -1.2062882934740833,
    -0.016467253843180419, -1.7572917428328092, -1.561169240744281,
    1.4204619025104892, -0.72000239670218391, 1.4743770456500294,
    -0.41277875599471425, -0.74720164313431259, -0.80198901541620293,
    -0.87541717769778571, -0.68795890051901643, 1.90582549220675,
    -0.9164572532835592, 0.19951967398508716, -1.3805047805199604,
    -1.1146517641701945, -1.351187918059229, -2.0935727692053536,
    0.99091188101707361, -0.84351386506022141, -0.12929984114857648,
    -1.3805047805199604, -0.78395746809185951, -0.7520338953521909,
    -2.0935727692053536, 0.724722087869594, 1.2161169698419763,
    -1.0558719217775534, -0.26004538360689111, 0.10251461847569503,
    0.53400330198864254, 0.36625150099573639, -0.810224893762693,
    1.212738678539288, -1.0558310324016837, -0.79591726908705474,
    -1.1401095010817166, -1.2781189508113202, 0.36625150099573639,
    -0.61608212345365276, 1.1948779146907409, -1.0538913881155525,
    -1.2830735286144761, -0.21981496676379675, -0.12928289905075438,
    0.36625150099573639, -0.75911489567364954, 1.1429656753490538,
    -0.98652546010179709, -0.26004538360689111, -0.09045431315104567,
    0.17483004714571543, 0.71765496816732066, -0.73058380925729938,
    1.8490331057798408, -0.13712531120136762, -0.84463289503979677,
    -2.5176091050466405, -2.5121320540846481, 0.36625150099573639,
    0.24748019340735294 };

  static const double dv3[21] = { 0.35475903540676113, 1.0, 1.0,
    0.041818781215648887, 1.0, 0.6439908153823255, 0.46761822660213703,
    0.011822745361651598, 1.0, 0.36013642983500832, 0.21756256917269148,
    0.26827981228527781, 1.0, -0.99999999999999989, -0.68950256344844874,
    -0.99999999999999989, -0.99999999999999989, -0.99999999999999989,
    -0.676485851813054, -0.99999999999999989, -0.99999999999999989 };

  static const double dv[7] = { 32.5244145984507, 2.9236147903521119,
    3.5338028169014084, 8.7761469715774627, 21.338897078732387,
    83.746478873239425, 10.314748428042252 };

  static const double dv1[7] = { 14.104577057072204, 0.97978996127720019,
    2.0527294485963825, 0.27517544172713382, 3.311574244357804,
    17.074390438698497, 9.4805207223021277 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.67695677003483179;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 21;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 147U * sizeof(double));
  *obj_Scale = 2.2394383498634163;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 21;
  memcpy(&obj_Alpha_data[0], &dv3[0], 21U * sizeof(double));
  obj_Prior[0] = 0.16901408450704225;
  obj_Prior[1] = 0.83098591549295775;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int wb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[329] = { -0.9890657473664346, -0.32426366805349954,
    0.18165557076757713, 0.48587464237372235, 0.5362572384565335,
    -2.0176532039412414, 2.6387618653492821, 0.68782478954292081,
    -0.061669703221681381, -0.22239450391766538, -1.268712773038674,
    -0.59004489142514627, 2.8742398490709489, -0.663950052319797,
    -0.40123070045759723, 0.95065775548506282, 0.98975572013806212,
    -0.64014444097642442, -0.74272045421087374, 0.12255000675159182,
    -0.15133357212915949, 1.020266793816514, -0.39341010220835976,
    1.5554258246974018, -1.5327599421780576, -1.2110831033445182,
    0.4282933225648537, -0.022252360231661213, 1.0101580385225541,
    -0.016535502406422712, 1.3938057948233047, -1.3133183247849292,
    -0.922821299033772, 0.4282933225648537, -0.27314212143768818,
    0.44218325660702423, -0.15110163986836017, 1.3129957798862557,
    -0.73536547953623355, -0.62734920997303079, 0.4282933225648537,
    -0.21835280037122975, 0.39989119681370544, -0.088568944449616535,
    0.10084555583052855, -1.2232519773842028, -0.98775364889994777,
    0.12255000675159182, -0.11602583606338393, -0.1878338171334866,
    0.027086056471756957, 1.2321857649492076, -0.97154616830403229,
    -0.5123928383632006, 0.12255000675159182, -0.22829056536587408,
    0.36204274191670011, -0.41396232266497457, -1.6769747727845385,
    -0.30124641490909437, 0.20634610006700091, 1.3455232700046393,
    -0.20777008990977858, 0.24270467750183636, -0.22856617003910906,
    1.3129957798862557, -1.1624504285136195, -0.86998293347326561,
    0.4282933225648537, -0.10497018498355498, -0.012414729172886245,
    -0.60642267307729314, 0.18165557076757713, -0.35125484411477931,
    -0.1586078283947128, 0.73403663837811561, -0.067129250180059788,
    -0.85163896153080876, -0.041381795708470143, -0.788064608477005,
    -0.20699841401996541, 0.011279831337097658, 0.12255000675159182,
    0.036888168179400639, -1.0547840984634242, 0.70142963241072409,
    0.10084555583052855, 0.01002981058744822, 0.41313742041860474,
    -0.18319330906167006, -0.35332163801194683, -0.89473057853112425,
    0.53970013285145069, 0.34327560064167389, -0.048161402424829865,
    -0.043770554817113283, 0.12255000675159182, -0.4078877954403376,
    -0.98568066470434579, 0.6872310078463677, 0.10084555583052855,
    0.0039755130568262338, 0.055048696105055035, -0.18319330906167006,
    -0.2198391621752443, 0.16907886522703997, 0.71487446664979315,
    -0.30320451885471394, -0.17911714160079675, -0.77999869565257818,
    -0.79467994068819381, 0.045023362539649274, 0.12963196222279966,
    0.28619057831399486, -1.0304946532881505, -0.76123863573871908,
    -1.0287130807029241, -0.48893662487493195, 0.35892203793509225,
    0.23285651933394824, 0.458124214968949, -0.86887462341405364,
    1.4244397881318562, 1.5309962160358075, -0.48893662487493195,
    0.16659887182782307, 0.10306469252729844, 0.2707474544020641,
    -1.0304946532881505, -0.494419362099729, -0.63811341107616271,
    -0.48893662487493195, -0.2525998390189248, 0.077122034433930037,
    0.38516214246086827, -1.111304668225199, -0.23537313619689509,
    -0.62964953812825875, -0.48893662487493195, -0.17920329273522914,
    -0.82832137955341578, 1.5517869446807118, 0.66651566038986787,
    0.63655504807387353, 0.28370874201414409, -0.79467994068819381,
    0.30716353202743224, -0.10235174241526337, 0.17599318902824418,
    0.18165557076757713, -1.1465205696906797, -0.70643078612175647,
    0.12255000675159182, -0.30149293813398775, -0.062502506204090369,
    0.23858596082542188, 0.18165557076757713, -1.2972450825043755,
    -0.94168237577677438, 0.12255000675159182, -0.27034915590621506,
    -0.17504997167378006, -0.040781954061404814, 0.18165557076757713,
    -0.68225227067428351, -0.10869526850611795, 0.12255000675159182,
    -0.37210774168293981, -0.18970692022091468, -0.28229317092614886,
    0.26246558570462536, 1.6617214995246516, 2.1206734821467976,
    0.4282933225648537, -0.29262050974215065, -0.1019085438902267,
    0.12097579858225956, 0.18165557076757713, -1.0623379917700764,
    -0.92356056875613546, 0.12255000675159182, -0.24126241069930265,
    -0.090190317889851282, 0.15401125708833671, 1.3129957798862557,
    -0.80665636847782385, -0.56965743063768914, 0.12255000675159182,
    -0.29623347902019176, -0.06759449875935658, 0.1073229909830594,
    0.18165557076757713, -0.74677993815704424, -0.63401081783881474,
    0.12255000675159182, -0.2755089246983814, -0.13279183324325153,
    0.18862352026156559, 1.3938057948233047, -0.890032451497855,
    -0.61883632505578634, 0.12255000675159182, -0.3083582974642553,
    -0.096718265637207715, 0.23008146654857811, 0.18165557076757713,
    -1.0532702340459226, -0.65191287850121415, 0.12255000675159182,
    -0.38153700295150905, -0.020919007533982896, 0.095699437934725629,
    0.18165557076757713, -0.84270122331258357, -0.59033693570449264,
    0.12255000675159182, -0.27438203575314435, 0.095984634279027425,
    0.11207800229074029, 0.18165557076757713, -1.2509048303113719,
    -1.1018758690917532, 0.12255000675159182, -0.052401819191884164,
    -0.35349263528857217, -1.3677942448004543, -0.14158448898061718,
    -0.13614602903667372, -0.007599041209601344, -0.48893662487493195,
    0.48536465694147235, -0.1072891024229755, -1.2469856344119619,
    0.18165557076757713, 0.27645771966025218, -0.11501201520045216,
    -1.1004232565014558, 0.73196012120550491, -0.27797338057589405,
    0.19191541559503006, -0.5456345636658595, 0.9521746820206668,
    0.4699843971853499, -1.1004232565014558, 0.2907431394585086,
    -0.2971961625109279, -0.21100641338046452, 0.10084555583052855,
    0.58865612262438582, 0.022160694795260907, -1.1004232565014558,
    0.48917462842947323, 1.6413845866459207, 0.56959762922712887,
    1.2321857649492076, 0.39006295242899391, 0.14723172725623318,
    0.12255000675159182, -0.18609607430334024, -1.3050547543097424,
    0.80000291700432469, 1.7170458545714982, 0.33034521287278673,
    0.1761633022924026, -1.7119098881279795, 1.4705728986579691,
    -1.4218437875126806, 1.3396541218982563, -1.4345447279733932,
    0.94529734201218052, 1.2308469991777071, -1.7119098881279795,
    -0.071229538124943023, -0.65107517585628449, 0.52475651058165151,
    -1.1921146831622476, 0.13970331087598012, 0.21289759338024944,
    -1.1004232565014558, 0.55207717591730543, -0.52699552698062324,
    0.46497801070599143, -1.1921146831622476, -0.020525612334303223,
    0.030219569482185068, -1.1004232565014558, 0.7000271922840674,
    -0.53107040579765419, 0.466318057311478, -1.1921146831622476,
    0.21595320641365109, 0.2834185672816229, -0.79467994068819381,
    -0.20311620715015224, 3.1300065771962942, -0.9855528597877472,
    0.74732567532691641, -1.5294604856784346, -1.6237886325501967,
    1.0397799541913775, -0.54036529016446644, 0.024579083096957857,
    -0.57517578765307364, -0.5456345636658595, 1.2055290702766621,
    0.69300516575066884, 1.6512665858179012, -0.49277610186926046,
    0.0834882299632589, -0.42138628871210709, 2.2827159591308379,
    0.93152613265719486, 0.53075467501578233, 1.6512665858179012,
    -0.44566276038366859, 1.1776678844257851, -1.2200576266885592,
    -1.111304668225199, -1.4125257152947903, -1.2784053396806005,
    -2.934883151381027, 12.706213944614689, 1.5514219927392014,
    -2.1145303956515717, -1.5153547429104415, -1.5470339853949777,
    -0.15176644560843686, -1.7119098881279795, 4.0555840535711969 };

  static const double dv3[47] = { 0.99999999999999978, 0.14825748535696318,
    0.40157081049111448, 0.19874714057495466, 0.99999999999999978,
    0.99999999999999978, 0.99999999999999978, 0.99999999999999978,
    0.017337057486699586, 0.99999999999999978, 0.99999999999999978,
    0.99999999999999978, 0.99999999999999978, 0.76488183471271853,
    0.99999999999999978, 0.99999999999999978, 0.99999999999999978,
    0.88738911834456791, 0.99999999999999978, 0.94782537065031891,
    0.38088016495982691, -1.0, -0.58595482377905328, -1.0, -0.16594999841607919,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.44364201739826203,
    -0.17949268746434333, -1.0, -0.54520012699036113, -0.43785012996482275,
    -0.63809117827220907, -0.1449912887402901, -1.0, -0.69748816963313653, -1.0,
    -0.34625265131788163, -0.3235056881117272, -0.17057752025275602,
    -0.023196764584084335, -0.0446959376521541 };

  static const double dv[7] = { 36.918301965330635, 2.8185129449297563,
    2.4752066115702518, 8.416074471045464, 17.029996570991756,
    81.595041322314145, 18.336444490351266 };

  static const double dv1[7] = { 15.593418320669702, 1.0985349270488884,
    1.2374703813370238, 0.21930702831899523, 2.2786270680937144,
    19.624304734317089, 25.407481474564339 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.57692039495195724;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 47;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 329U * sizeof(double));
  *obj_Scale = 1.3215328575690191;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 47;
  memcpy(&obj_Alpha_data[0], &dv3[0], 47U * sizeof(double));
  obj_Prior[0] = 0.49586776859504128;
  obj_Prior[1] = 0.50413223140495866;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int wc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[84] = { -0.19721825675104443, -2.5761120250001026,
    -0.71302387773551468, 0.23884839770051147, 0.12404858962562938,
    -0.090624515706875478, -0.34350957494601936, -0.10686730123542258,
    -0.52005082509398781, 1.0959778785653287, 0.20275971585417443,
    0.14785668258206028, 0.37760214877862674, -0.47403814160461305,
    0.072877332843789416, 0.47268065493390066, -0.71302387773551468,
    -0.45985289576409866, -0.6313825297848481, 0.37760214877862674,
    -0.36292839054146137, -0.1344077620376066, -0.014993203647205905,
    -0.76955518261991607, 0.16284664707319216, -0.076264848954423467,
    -0.090624515706875478, -0.39386290511943745, 0.14252551337325403,
    -0.45964753344934756, 2.7353857202129683, -0.12570778588056078,
    -0.3217839380452005, 0.37760214877862674, -0.2170308895093267,
    -0.73670751718230043, 0.90152406142553565, 0.36107091506811112,
    3.1353920306412673, 3.1850843943633036, -0.090624515706875478,
    -0.65124826700961647, -0.50381011794496444, 0.69699913380489542,
    -0.76955518261991607, -0.10201441211025, -0.36986553470734296,
    -0.55885118019237767, -0.33296296253788948, -1.2452089232752062,
    -3.6922408172245924E-5, -0.93914909727312013, 0.37293357695740204,
    0.42342274639309352, -1.4953045091633821, 1.0088003481608785,
    -1.1460537101529522, -0.57377820204161023, -0.88261779238871874,
    -0.44541959494764033, -0.51917902801495408, -1.4953045091633821,
    1.1212219711093563, -1.1258062594647413, -0.2719790580260884,
    -0.88261779238871874, -0.29832836289214404, -0.21784207544663331,
    -1.0270778446778799, 1.3400183207583793, 1.4212913471882873,
    -1.458630320894936, -0.26077343866030384, -0.20111628196686676,
    -0.29925657191031535, 1.7822821422351334, -0.49895102271773994,
    1.3981299258049655, -1.4555768323800622, -0.82608648750431746,
    1.2822248158193779, 1.2788913836595903, 1.7822821422351334,
    -0.65979319234550049 };

  static const double dv3[12] = { 0.82415781233174323, 0.15726234377539139,
    0.38715748830581831, 1.0, 0.072862406176560035, 0.026653397377620128,
    0.50368737604378278, -0.63789566100715966, -0.28153914919447942,
    -0.778933914386894, -1.0000000000000002, -0.27341209942238265 };

  static const double dv[7] = { 34.170701651935509, 2.7969510839354852,
    2.3612903225806465, 8.49675228390323, 17.827731867096791, 67.1612903225807,
    8.6805160576129126 };

  static const double dv1[7] = { 10.876643355809129, 0.62238452535286048,
    1.7689313948171914, 0.17072435691153065, 2.4107092535732, 12.814306520951625,
    8.4307813314025122 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.74884250448297729;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 12;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 84U * sizeof(double));
  *obj_Scale = 2.7621018465561491;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 12;
  memcpy(&obj_Alpha_data[0], &dv3[0], 12U * sizeof(double));
  obj_Prior[0] = 0.38709677419354843;
  obj_Prior[1] = 0.61290322580645162;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int wd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[147] = { 1.0944882820403665, -1.5037205523054031,
    2.8428898893015684, -0.37575060462897136, 0.10680867181939296,
    -0.12667096159769592, -0.84433537973790551, 0.23814260044229182,
    -1.5516659516230369, -0.77665455958685847, -0.21103241454631338,
    0.008409994980071547, -0.12667096159769592, -0.77070963276807669,
    0.88376857122033237, -1.3862515267945703, -0.77665455958685847,
    -0.49736976185934989, -0.31886254438469924, -0.12667096159769592,
    -0.76474561641188521, 0.88376857122033237, -1.3862515267945703,
    -0.77665455958685847, -0.49736976185934989, -0.31886254438469924,
    -0.12667096159769592, -0.76474561641188521, 0.26606053636672033,
    -1.6172834786708861, 2.1497856331314447, -0.3328619866853596,
    0.074041171674681883, -0.12667096159769592, -0.85314422302452,
    -1.6671600129733635, 1.6175865898613975, -0.4686082235112477,
    -1.2772533197523388, -1.367166067214389, -1.6611991820954917,
    -0.60695086496943418, -1.2092818651245847, 1.6236367712309103,
    0.22449603265887658, 0.950750129067693, 2.1224716271881743,
    -1.2775671269710427, -0.72553761079992918, -1.2932819812993985,
    1.5503749259716624, 0.22449603265887658, -1.2310097593004969,
    -1.3300766564678304, -1.2775671269710427, -0.66709908255500572,
    -0.083208882062329056, -0.35303121051082864, 0.53254236873448735,
    1.7185938343501417, 1.310496970590096, 1.024225203775651, -0.627948108517265,
    0.1611295913599321, -0.17041118064429983, -0.54561980753015049,
    1.0428536411536431, 0.4892552971638347, 1.024225203775651,
    -0.7584968951948613, 0.1698596255744719, -0.16457885475171569,
    0.76357712079119566, 1.0376224036158941, 0.82234850560066775,
    1.024225203775651, -0.769343349646101, -1.0761513498540287,
    0.76689081010475613, -0.54561980753015049, 1.9176347774086444,
    1.5139298699300694, 1.024225203775651, -0.70033084267605861,
    0.95115577422762632, -1.888894613317345, 0.070472864621071371,
    -0.19526550121664488, -0.38516701664744124, 1.024225203775651,
    -0.0705593157589049, 1.1682622047331483, -1.7614039820736971,
    -0.62263139154905311, 0.52334864180761609, 0.39919234148837945,
    0.640593148651202, 0.24111378159713234, -0.73646154976853873,
    -1.6470336018812244, -0.083550303416734181, -0.575177114585043,
    -0.94877234703674151, 0.640593148651202, -0.053720485284524014,
    -0.42433739362049344, 0.46262028834497843, -0.0065387193978314034,
    1.0069266045279621, 1.5218997161285617, 0.640593148651202,
    0.24552614600221218, -0.14782528871314096, 0.49183779344621803,
    -0.0065387193978314034, 0.90443004615685285, 1.4914226780638689,
    0.640593148651202, 0.14964746124252559, -0.76781388696585717,
    0.79965800051639035, -0.0065387193978314034, -0.564237361922178,
    -0.70399493133420554, 0.640593148651202, 0.22139823908946685,
    -0.49668067412935923, 0.50572720375335012, -0.0065387193978314034,
    0.59271325694687349, 0.93116190133350785, 0.640593148651202,
    0.25878531439358154, 1.5674318139350294, 0.5276741588310927,
    0.22449603265887658, -2.0236801379220117, -1.4615169920039981,
    -2.42846329234439, -0.31983386339105052, -0.35578325948145983,
    1.0038560028346153, -0.77665455958685847, -1.2836813811364181,
    -1.1248048360203451, -3.5793594577177368, 0.12714742349938235 };

  static const double dv3[21] = { -0.016551512542545478, -0.32135864023062749,
    -1.0, -1.0, -0.18442547359450662, -0.0028417207276686652,
    -0.24299923014903993, -1.0, -0.48988903618696172, -1.0, -0.96825112948284975,
    -0.31423059075726312, 0.9523529330120698, 0.99999999999999978,
    0.54958449794945774, 0.99999999999999978, 0.99999999999999978,
    0.99999999999999978, 0.32210250741615648, 0.35910466505840927,
    0.35740273023537006 };

  static const double dv[7] = { 42.996024185471704, 1.6814102141698115,
    2.108490566037736, 8.47067141861321, 18.14394402311321, 73.9811320754717,
    15.894184091226414 };

  static const double dv1[7] = { 8.6624734956994445, 1.5879013228282732,
    1.2985059491238971, 0.22879557492156075, 2.6345339015413081,
    15.639986074817497, 16.807566916870858 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.4180618108869088;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 21;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 147U * sizeof(double));
  *obj_Scale = 2.5898354028283563;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 21;
  memcpy(&obj_Alpha_data[0], &dv3[0], 21U * sizeof(double));
  obj_Prior[0] = 0.52830188679245282;
  obj_Prior[1] = 0.47169811320754712;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int we_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { -0.59731017083929749, -1.604094667030769,
    0.72342862618284476, 2.6148643369557076, 2.8262814075071239,
    -1.2975911774884727, 0.93697368729733732, 0.4226764117263157,
    -1.5363601011800954, 1.029145325950491, 0.1274372620771714,
    1.7911949619126326, 1.8989139182758146, 1.5061017144513247,
    -0.61000320074333536, -1.300145667201666, 1.4877203756019597,
    1.2834268298613787, 2.3819714810926791, 4.29629274009903,
    0.29504252628858985, 0.93666019386903976, -1.6193571155172277,
    -0.19372147312009269, -1.8173112934731079, -1.0062824621982234,
    1.0997876443347427, 1.2384658741935477, 0.20891933331257775,
    -0.91989330345068565, 0.26485357653137603, 0.1218585843537883,
    0.50267398504761585, 0.56703679504069493, -0.1905058626110967,
    1.1104158267102784, -0.28510236477972517, 0.26485357653137603,
    -1.2208252763458627, -1.0461145545532182, 0.300661370393671,
    -0.21401214750035433, -0.049569428937894934, -0.88517845608889356,
    0.26485357653137603, 1.7198726000073348, 2.3599027516588031,
    0.300661370393671, -0.15275476298001203, -0.57482487246175062,
    -4.5154731468957428, -0.34657982300391582, -0.1851647522195464,
    -0.0668237553773421, 0.034285945746647069, -0.20782700625019337,
    -1.4633390756948066, -0.79527505873207716, 0.87628697606666794,
    1.6711826585682452, 1.8679594531634467, -0.49846490354740081,
    -0.13378877286930158 };

  static const double dv3[9] = { 1.0000000000000004, 0.92115915658432579,
    0.15218558648725727, 1.0000000000000004, -0.78173896472208959,
    -0.49786381262727, -0.99999999999999989, -0.35076631186560242,
    -0.44297565385662097 };

  static const double dv[7] = { 44.500823956930681, 1.7769811304257419,
    2.826732673267327, 8.1178925523465324, 16.979966196930686,
    83.227722772277218, 5.1327234963861388 };

  static const double dv1[7] = { 13.34628542442058, 0.92706992672597466,
    0.6542004416245697, 0.41604231595434177, 3.5436262986646954,
    22.524600412934657, 13.519405235543223 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.2421439288554554;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 4.1298226398242583;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.92079207920792083;
  obj_Prior[1] = 0.079207920792079223;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int x_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[77] = { 0.0685220813079606, -1.2299203648879393,
    -1.2825437599283975, -1.0450963659518777, -1.1475776077665263,
    -1.0707586395500721, 2.8199267349290729, 1.3998127593600547,
    -1.7471627250053039, -0.5977531489066169, -2.1645259280484686,
    -1.7336225575796136, 0.82537645131984916, -0.18212868932943632,
    1.8348539696866866, -1.7273351404563697, -1.3803709900743664,
    -1.1094493149254292, -0.63967617035264279, 1.5838304876678178,
    -0.61583433899612194, 2.0274544397519163, -0.86364375358846923,
    -1.3803709900743664, -2.0931149349596092, -1.7830607689386857,
    1.2046034694938335, -0.13602922973326728, 2.0394780985675762,
    -0.95085172327160572, -0.49992591876064824, -2.4834968360417231,
    -2.1576236131784712, 1.2046034694938335, -0.23932378783868857,
    1.7104637818693702, -0.87882623211986255, -0.5977531489066169,
    -2.4516933831589371, -2.3077453086613646, 0.44614943314586492,
    0.27206471046761738, -0.50090170343447771, -1.2064034468911629,
    -1.1847165297824287, -0.36147903861180075, -0.41786329861706423,
    -0.69153162137608781, -0.15588074271918922, 0.54242798376750012,
    -1.084710549395602, -1.5760254503663036, -0.856022843991766,
    -0.82964027813322483, -1.8292126758980405, 4.1748638252650805,
    2.7761568888929768, -0.87210770795740356, -0.059703383103789268,
    -1.0366969532531105, -0.9971213620661743, 1.5838304876678178,
    -0.661901939223775, 2.4270599579791425, -0.83344991234617638,
    -0.059703383103789268, -1.0375388601484916, -1.2047219799689155,
    1.2046034694938335, -0.66188165185187875, 2.3915450482499052,
    -0.78765471337867377, -0.010789768030804895, -1.4232761032109227,
    -1.5412637927042048, 1.2046034694938335, -0.47921022990617695 };

  static const double dv3[11] = { -0.99999999999999989, -0.99999999999999989,
    -0.99999999999999989, -0.68681733452848959, -0.65803554821228027,
    -0.10017405514979957, 0.88124789432676032, 0.72499754145716633,
    0.83878150210664271, 0.99999999999999989, 0.99999999999999989 };

  static const double dv[7] = { 35.299997529852938, 2.7520009616617642,
    3.6220588235294109, 8.7101589098088219, 20.956093022352938,
    88.941176470588218, 9.5020834781176458 };

  static const double dv1[7] = { 16.782122903985176, 1.2121848196225311,
    2.0444205534755371, 0.40246730589836344, 3.9736336448982681,
    15.821657509769731, 9.0852083228065634 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.810487367010482;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 11;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 77U * sizeof(double));
  *obj_Scale = 4.0894421166931352;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 11;
  memcpy(&obj_Alpha_data[0], &dv3[0], 11U * sizeof(double));
  obj_Prior[0] = 0.13235294117647056;
  obj_Prior[1] = 0.86764705882352944;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int xb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[189] = { -1.1552282110307217, -0.51219832990056668,
    0.30277632009655192, 0.59997201221040108, 0.55283798154684138,
    -2.8084187597511314, 5.2602713004606825, -1.1906141633181613,
    0.21812111142858706, 0.7003146945744656, 0.28594272093009859,
    0.050466535303049474, -0.383073019112495, 0.9322757905654484,
    0.71640297399948816, 0.1993796860474627, -0.094762054381361718,
    0.65750576361251367, 1.1841350888608633, 2.0422727215261416,
    -0.67805036203603208, 0.79287317389288547, -0.33848776499935118,
    1.4158837686347097, -0.93825220103805118, -0.76135431664532294,
    0.42537556110038388, -0.43564166379345209, 0.73530861313098739,
    -0.2757569806591974, 0.22326864520096912, -1.55277412088214,
    -1.1683997902341479, 0.021151270993944447, -0.23164373203846383,
    0.68379233106030857, -0.60218112882446806, -1.5259002025018511,
    -0.39145354558782425, 0.18023203926757103, 1.6380484314197021,
    -0.41454408642368751, 0.52135892644987647, -0.41619768464397949,
    1.4158837686347097, -1.4761909715097874, -1.0353880083080396,
    0.42537556110038388, -0.209603305355768, 0.14992801887870386,
    -1.1867232198643307, 2.1314528426949546, -0.32368615496008823,
    0.060038382997283972, 1.2338241413132627, -0.364627456689083,
    0.17411084586841227, -0.79525114851414791, 0.30277632009655192,
    -0.45444212194609213, -0.23195168713465572, 0.82959985120682334,
    -0.1341640261022107, -0.96817388919802172, -0.22842035409151626,
    -0.651315778650441, -0.27274261035324715, -0.0400783486199361,
    0.021151270993944447, 0.07320397660708397, 0.42114537418855652,
    0.53023155083927731, -0.17426972927694451, -0.23762449757435528,
    -0.933758636571365, -1.1915215993253738, 0.089422212290523675,
    0.36745341271982196, 0.10018969242882125, -0.88983880333718912,
    -0.97084097259067559, -1.2146599066905728, -0.78729730921893437,
    0.71520722403635728, 0.70984052738856818, 0.2510665416757607,
    -0.81033112844160637, 0.66826675814133207, 0.20240613005519506,
    -0.78729730921893437, -0.030483281422971006, 0.46943276129534689,
    0.18726072625592219, -0.96934647823277176, 0.88353520882545278,
    0.652981820539424, -0.78729730921893437, 0.12413428648119951,
    0.50795440318904117, 0.27266797454341912, -0.73082345354602374,
    1.7821503627368447, 1.6763091558520109, -0.78729730921893437,
    0.33179383559241044, 0.33129217540628686, 0.08469764832020886,
    -0.88983880333718912, -0.63476630561120284, -0.77351154575403047,
    -0.78729730921893437, -0.50391619045530944, 1.0651141689424928,
    -0.083341620132018013, -1.3668848527106854, 1.2140376221128795,
    0.39244908381615184, 0.021151270993944447, 0.4655803917372735,
    0.31421646053558544, -0.52757706485854761, -0.25377740417252731,
    -0.69100163267422754, -0.50073426532625764, 0.021151270993944447,
    0.15130432962949697, 0.14095383704900638, -0.065750148254347149,
    -0.17426972927694451, -0.43988504796831684, -0.41997495060386636,
    0.021151270993944447, 0.10001298427244508, 0.31319654974335642,
    -0.25295601006277307, -0.17426972927694451, -0.52212791091680766,
    -0.73396772887250006, 0.42537556110038388, 0.023883064638921033,
    0.36739876513349884, -0.60546882011613956, -0.17426972927694451,
    -0.62995718363170672, -0.79936187048712481, 0.021151270993944447,
    0.18043854704134277, 0.34596601861322862, -0.49196472781208739,
    -0.17426972927694451, 1.0804120715185888, 1.7152456515421244,
    0.021151270993944447, 0.14931905543620838, 0.49418146392795437,
    -0.58683214093156444, -0.17426972927694451, -0.68714053264818731,
    -0.56293192744341713, 0.42537556110038388, 0.027030554913097898,
    0.36132777669795108, -0.54204244483457609, -0.25377740417252731,
    -0.88932608624897369, -0.75904389492017, 0.021151270993944447,
    0.089597704763313982, 0.3565913874851096, -0.54439064482044019,
    -0.25377740417252731, 0.099335054603530051, 0.30374681741387066,
    0.021151270993944447, 0.16324301841640446, 0.45250289785252584,
    0.23034732320168341, -0.96934647823277176, -1.3852742912124907,
    -0.96947696785503235, -4.42531592017689, -0.024284981881007674,
    0.19372669238491355, 0.35669730224906565, -1.4463925276062681,
    -0.94003452067619875, -0.945776834435067, -1.5957458894318133,
    2.5242227780032556 };

  static const double dv3[27] = { 0.0051047895595827267, 0.23836942039961678,
    0.42668927976725907, 0.22579244278554841, 1.0, 0.63638357832954906,
    0.039191102957205529, 0.13232579652485324, 1.0, 1.0, 0.54797737550744763,
    1.0, 1.0, 1.0, 0.22373140807159009, 0.66980538653040511, -1.0000000000000002,
    -1.0000000000000002, -1.0000000000000002, -1.0000000000000002,
    -0.8911379562580668, -0.94243920348703258, -1.0000000000000002,
    -1.0000000000000002, -0.81321070556070874, -0.35171785354930912,
    -0.1468648615779399 };

  static const double dv[7] = { 34.730045086627889, 3.0231889638081375,
    2.3191860465116263, 8.4181666012383669, 17.136558454941849,
    83.686046511627865, 18.340725110674409 };

  static const double dv1[7] = { 11.456315678803943, 1.095066014598336,
    1.2577402135244151, 0.17411411138458061, 2.0175321021492549,
    14.843244572017415, 12.744592200682572 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.25538055416774041;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 27;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 189U * sizeof(double));
  *obj_Scale = 1.8554728383576942;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 27;
  memcpy(&obj_Alpha_data[0], &dv3[0], 27U * sizeof(double));
  obj_Prior[0] = 0.29069767441860467;
  obj_Prior[1] = 0.70930232558139539;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int xc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[42] = { -0.287060028804377, -0.94842195612179192,
    -0.79770647020033969, -0.051328350976225907, -0.045439648528290633,
    -0.3010050279407952, 4.4833086703637317, 1.0957930923520212,
    -1.4863304282566174, -0.027507119662081529, -1.4101428949798194,
    -0.88639793293751035, 1.2040201117631701, 0.20630529297588848,
    1.5476839569467322, -1.4657106443154466, -0.90773494884866224,
    -0.12944288892983205, 0.683384858180252, 1.8060301676447563,
    -0.41159153645215851, -0.56090341593218485, -1.006323950473526,
    -0.74269223087617831, 0.696605182481344, 0.57957005408943629,
    -0.60201005588158829, -0.11719414491611593, -0.37907211462750162,
    0.62159259794189681, -0.74269223087617831, 0.336839411452724,
    -0.078080828765521748, -0.3010050279407952, -0.14286714131860878,
    -0.3321841986930969, 0.12377177318968176, 2.6131763678976609,
    0.5088928686555807, 0.19144445548160083, -0.3010050279407952,
    0.050019288892401217 };

  static const double dv[7] = { 41.087790955357157, 2.3666035314285727,
    2.4500000000000015, 8.3065604173571455, 16.521868600357152,
    78.000000000000043, 6.5318048538214306 };

  static const double dv1[7] = { 16.156367902121673, 1.1656134258522064,
    1.8177112185586783, 0.33156386350748995, 2.7691360834098355,
    19.9332218503014, 6.3769645519096194 };

  static const double dv3[6] = { -0.38289564811052612, -0.48239066409940135,
    -0.82538364706883283, 1.0000000000000002, 0.55712633428186076,
    0.13354362499689945 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.59769335594596118;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 6;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 42U * sizeof(double));
  *obj_Scale = 4.0763113405130369;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 6;
  for (i = 0; i < 6; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.32142857142857145;
  obj_Prior[1] = 0.6785714285714286;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int xd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[35] = { -1.6117350649765612, 1.650730469317891,
    -1.1975574660410337, 1.204557196409819, 1.2266299061181123,
    -1.6454443794984197, -1.3846602739744509, -1.6006888445690217,
    1.6841007481989068, 0.366779592920317, 1.7067453539182118, 1.60600395233192,
    -1.6454443794984197, -1.350076594893002, 0.54721994012163921,
    0.26402954621955693, -1.0671960444609212, 0.95652792719987556,
    0.64711992082324865, 0.48486448800266957, 0.16130682598623705,
    -0.24784465016868035, 0.054566885728163282, 0.88822527924076744,
    1.1688632935832037, 2.1170110184316884, 0.78919432621711094,
    -0.42922429273540791, -0.19874243506294062, 0.5899110541094813,
    -0.41538893656035819, -1.3389740270983559, -1.0505479717049295,
    -2.5584338941417437, -0.55692841076688193 };

  static const double dv[7] = { 42.317677155423723, 2.3284051900847458,
    1.41864406779661, 8.4567859219661, 17.493207078983048, 68.440677966101688,
    26.708290285322025 };

  static const double dv1[7] = { 12.094125870313057, 1.6053764246626498,
    0.76709810914838639, 0.20897725968029282, 2.2013269182081623,
    19.71545095677471, 15.580220361489252 };

  static const double dv3[5] = { -0.82743423060227672, -0.89590484476356491,
    0.0414958570086863, 1.0, 0.68184321835715522 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.1830875747389991;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 5;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 35U * sizeof(double));
  *obj_Scale = 4.8186201374229505;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 5;
  for (i = 0; i < 5; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.15254237288135597;
  obj_Prior[1] = 0.84745762711864414;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int xe_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[63] = { -0.61299635353461313, -0.60133827391994654,
    0.41877781942017528, 2.1387207421649741, 2.3486561961365755,
    -0.88695856180983779, 0.69372329569530544, 1.1255493418395417,
    -0.56627588123677475, 0.55910127723635972, -0.95941217519183553,
    1.2006493504258187, 1.414339328291363, 1.1474280716840011,
    -0.6346313562671132, -0.44400089301519691, 0.76958646396063612,
    0.48039258059108841, 1.8558752894674022, 3.1403127458672637,
    0.18198038424168431, 2.0016238973387837, -0.60923878904716589,
    -0.0021925540283774438, -3.3816297255200762, -1.9020125067256894,
    0.83901485576606283, 0.93407070188810681, 1.10977038526745,
    -0.90291821233267144, -1.124780216557852, 1.0617561839324365,
    1.5902866323813913, -0.31163408928453762, -0.1656845431290343,
    0.440572645696094, -1.0686561343096486, 2.2429827710305719,
    -0.42193089058587585, 0.22701158503092664, -0.31163408928453762,
    -0.28788530981740434, -1.188229241361181, -0.93015514372618369,
    0.629263006144452, 0.55324495829726283, 0.7856775690074409,
    -0.31163408928453762, -0.26747522629787557, 0.47420913455550295,
    0.036044454284478972, 0.13813090378780668, 0.97913204503121443,
    1.4852673948071315, 0.45546520741586266, -0.23301412416944528,
    0.44897342992264239, 0.028922951389933241, 0.13813090378780668,
    1.3269291479690974, 1.3883114137002577, 0.2636903832407626,
    -0.23709486555638723 };

  static const double dv3[9] = { 0.99999999999999989, 0.99999999999999989,
    0.45893320748193128, 0.091100101631881814, -0.024342123468289317,
    -0.24467788874764362, -0.51418528616276282, -0.99999999999999989,
    -0.76682801073511742 };

  static const double dv[7] = { 41.328790689218749, 1.3668346155468749,
    2.7031249999999996, 8.4913860236718737, 19.491135855468752, 81.75,
    6.0353604984531248 };

  static const double dv1[7] = { 7.8301261199063985, 1.7909410680389288,
    1.4252784467582642, 0.334031801928921, 3.1950676633196258,
    31.286692743994895, 16.958764459185925 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -1.0903734602981243;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 9;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 63U * sizeof(double));
  *obj_Scale = 3.4896081209119396;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 9;
  memcpy(&obj_Alpha_data[0], &dv3[0], 9U * sizeof(double));
  obj_Prior[0] = 0.875;
  obj_Prior[1] = 0.125;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int y_CompactClassificationSVM_Comp(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[70] = { -0.94235332659451765, -0.377202553128587,
    -1.0292257179491493, -0.92325520158273311, -0.24739732436176753,
    -2.9693161439887605, 7.589361743751792, -0.28907975681865566,
    -0.94167612791068511, -1.3774990669521445, -1.6376211906450524,
    -0.6399055650416392, -1.2833485029103957, -0.266671987506879,
    -0.091192470816016655, -0.97750146780451108, -1.3277457313802881,
    -2.184769877984813, -1.2474002207870949, -1.2833485029103957,
    -0.29523045959265576, 0.11982272061434222, -1.0715585630562254,
    -0.83021237566172357, -2.3635928487225497, -1.3211523105157736,
    -0.94615497469472265, -0.2798568034238903, 0.32201907811753644,
    -1.1663662859416006, -0.87996571123358014, -2.079407037098338,
    -1.5342698374842914, -1.2833485029103957, -0.25604061256469557,
    -0.31198730484781267, -1.5756163555432325, -1.2282390602365754,
    -0.45259455280592026, -0.71835553471575531, -0.27176791826337665,
    -0.141571089578833, 0.7017342258044057, 0.823874926865529,
    -0.73070570451801065, -0.9257879515840659, -1.8731981951427379,
    -0.60896144647904971, -0.12505686195468491, -0.28132786358672457,
    0.861753926571357, -1.4770057380958574, -0.89462706449852769,
    -1.4250265574346688, -1.2833485029103957, 0.84111188869644749,
    1.0661207453175339, -1.4316888842766027, -1.6262657448114268,
    -0.99088901929398354, -1.2429146392970638, -1.2833485029103957,
    1.4067428174946277, 3.5085731585095261, -1.0803578190887542,
    -0.034159006512020473, -1.6083253054494369, -2.1494456310027497,
    1.4141997228149883, -0.25716681075791725 };

  static const double dv3[10] = { -0.188689551837037, -0.99999999999999989,
    -0.99999999999999989, -0.020831938564482788, -0.99999999999999989,
    1.0000000000000002, 0.19020575475977544, 1.0000000000000002,
    1.0000000000000002, 0.019315735641743614 };

  static const double dv[7] = { 30.857698336119391, 2.9044992554328348,
    3.66865671641791, 8.7320250541194, 21.536415076716406, 82.83582089552236,
    11.683475655880594 };

  static const double dv1[7] = { 12.705307858770015, 1.0249209668022672,
    2.0099154931145193, 0.36975619366581924, 3.1192878852155661,
    17.793935820032491, 25.411976481803457 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 1.2872364900315365;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 10;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 70U * sizeof(double));
  *obj_Scale = 3.7662230600369888;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 10;
  memcpy(&obj_Alpha_data[0], &dv3[0], 10U * sizeof(double));
  obj_Prior[0] = 0.11940298507462685;
  obj_Prior[1] = 0.88059701492537323;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int yb_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[119] = { -0.95567222469502955, -1.5614382937637497,
    0.12275656977118132, 0.522664011296499, 0.44595231165417887,
    -3.0168469366762385, 8.5109580784805239, 2.2028476154022312,
    -1.6867039439592819, 1.4294830461204944, -1.9911853112179594,
    -1.3987800616449848, 0.27985022552246169, 0.51287680045711115,
    1.1681688429523511, -1.7239363376456136, -1.6451674864661245,
    -0.45755487117480614, 0.097652817422937188, 1.5161116613469743,
    -0.044724833617589693, 0.57954982272148448, -2.0725974251756711,
    0.12275656977118132, -0.51983145002705888, -0.28764265735680333,
    0.69193737079729922, 0.37799251090249841, 0.80283655291563638,
    -0.45553964518574586, -1.0302373799488007, -1.0303931359820204,
    -1.2062452264797388, -0.9564112103020509, 1.6585541847911911,
    1.1982512851186558, -0.18307431666867252, -0.95337111663413521,
    0.5901867809169925, 0.11838041118894985, -0.9564112103020509,
    0.534307653350295, 1.4482469217498621, -0.68029335475547537,
    -1.0302373799488007, -0.55447744765536133, -0.9373550634429002,
    -0.54432406502721331, -0.56279691903044626, 0.92061007615772017,
    -0.29829989664623618, -1.107103643263466, 0.803021923708281,
    0.539563401853456, -0.9564112103020509, 0.76741812363718254,
    0.9650978038228003, -0.14406474341669495, -0.87650485331946981,
    1.6914794937299655, 1.4961353532885087, -0.9564112103020509,
    1.0804977808135241, 0.76107480033830877, -0.48351640178241562,
    -1.0302373799488007, -0.69811732172408325, -0.7938745861855051,
    -0.9564112103020509, -0.17946743424012915, 2.4029960000502166,
    -1.4302581033363633, 0.43022162302984307, -1.2290809073560263,
    -1.3345776333867065, -1.780585500851726, 2.4898552227485067,
    2.2524577754946833, -1.4676366522617306, -0.415307273431477,
    0.70908203261604152, 0.53303884122691159, -0.9564112103020509,
    1.7682419973169881, -1.1469245122042133, -0.4782991543154807,
    -1.414568696522128, 0.2205255309442295, -0.19694767668481603,
    -2.6047597914014009, 0.74214296076667574, -0.9122927313059549,
    -1.2887133350846716, -1.3377024332074625, 0.086504064149850582,
    0.0060984074850161524, -2.1926726461265633, 0.77394243327951773,
    1.8804500494320995, -2.50666549675852, -0.49217353674614256,
    0.1807461106725784, -0.084836198521646367, 0.27985022552246169,
    -1.0601419539646775, 1.7812440478659368, -2.3946831722322841,
    0.35335535971517756, 1.8209026967088939, 2.1444584800797037,
    0.69193737079729922, -1.1885585258131761, 2.7851585048394196,
    -1.0222422562951907, -0.5690398000608079, -1.9716893497376,
    -1.9782122552997357, 0.27985022552246169, -0.091634708586588551 };

  static const double dv3[17] = { 0.1480887590634942, 0.98796351701526819,
    0.1990037060192841, 0.25962276761980485, 0.65443083523829437,
    0.64184829874548666, 0.99999999999999989, 0.99999999999999989,
    0.13732253870761726, 0.46328144870084564, -0.62929756552403193,
    -0.99999999999999989, -0.99999999999999989, -0.75389916006320279,
    -0.99999999999999989, -0.10836514552286068, -0.99999999999999989 };

  static const double dv[7] = { 30.975607907238825, 3.409137741440301,
    2.5402985074626878, 8.4305865912835856, 17.289415598134337, 85.9253731343284,
    13.435599359500008 };

  static const double dv1[7] = { 9.9199512576229942, 0.6063894841198,
    1.300960859650905, 0.17610472832842358, 2.1583277106365966,
    14.560027093294449, 8.4532361312422868 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 2.075753534605342;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 17;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 119U * sizeof(double));
  *obj_Scale = 3.2441754507170657;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 17;
  memcpy(&obj_Alpha_data[0], &dv3[0], 17U * sizeof(double));
  obj_Prior[0] = 0.089552238805970144;
  obj_Prior[1] = 0.91044776119402981;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int yc_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[56] = { -2.8646457203941713, -0.29794645598751668,
    -0.520100451221789, 0.15573216646967564, 1.5515855696411942,
    -3.9584211632593211, 5.0009695469217359, -0.777848392106635,
    -1.1077669818534426, -0.914875492510618, -0.7630206212601186,
    0.91131990516746864, -0.29823721093048938, -0.17978918556018156,
    0.52833731157964814, -1.2941024750090102, -0.29451471334245849,
    -1.6966995685837647, -0.19994058558310782, 0.43379957953527692,
    -0.1884840756962094, 1.174227239090271, -1.4301181246925647,
    -0.35091114781229121, -1.3312055351882002, -0.54758127404137835,
    -0.29823721093048938, -0.17277819369658351, 0.43922048231225796,
    -2.1516224625413294, -0.8020826235709525, 0.66663267669191117,
    0.1720909614000658, 0.43379957953527692, -0.15701345950348272,
    -1.0022746280290789, 1.2549354813756151, 0.26944963135586825,
    0.31725942282328584, -0.30887684869190335, -0.29823721093048938,
    -0.23104297076887756, 0.95835631872201332, -0.85226774093204893,
    -0.85847905804078517, 0.32439595979212138, -0.25028207485212134,
    0.43379957953527692, -0.21924024280693169, -0.39918768745649275,
    0.69988378703329968, -0.85847905804078517, 0.46422007460723141,
    -0.45057088560493336, -0.29823721093048938, -0.154706008996781 };

  static const double dv3[8] = { -0.00044487145229014946, -0.99999999999999978,
    -0.056539615673910304, -0.99999999999999978, 0.60594408824233537,
    0.40579090093120179, 1.0000000000000002, 0.045249497952662657 };

  static const double dv[7] = { 30.278670490370349, 2.7307512444814797,
    2.5222222222222204, 8.3458727572222156, 17.797696497407397,
    62.444444444444379, 11.834878827370359 };

  static const double dv1[7] = { 3.9774067694495114, 0.71440619683154738,
    1.7731617422284303, 0.28749980683344123, 1.9122471622874957,
    8.1963093633346418, 38.534383615922771 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.57087545403657036;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 8;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 56U * sizeof(double));
  *obj_Scale = 2.9599490251773877;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 8;
  memcpy(&obj_Alpha_data[0], &dv3[0], 8U * sizeof(double));
  obj_Prior[0] = 0.29629629629629628;
  obj_Prior[1] = 0.70370370370370372;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int yd_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[77] = { 1.2730476913085735, -0.070048692702169985,
    2.0196581138773135, -1.2038252161414607, -1.3281176719880052,
    -0.0865388775917618, -0.90893607312269609, 0.40545625417721276,
    -1.3213426415019267, -1.0568662182516668, -0.70925186541316787,
    0.056257304899010194, 0.43846364646490193, -0.35058201042764087,
    0.060955730589824481, -0.8005021754782875, -1.0568662182516668,
    -0.053026560037692239, -0.0645606649028823, -0.0865388775917618,
    -0.88636734777771531, -0.0048584345463504345, -0.68198829251988557,
    0.54827691155475755, 0.794308734829, 1.1332095904103272, -0.0865388775917618,
    -0.85574648685248278, 0.27278266569052728, -0.93040771906435815,
    0.54827691155475755, 0.78926108080440271, 1.9135711588738171,
    -0.0865388775917618, -0.881027212233925, 0.0981060338719618,
    0.72122058393616206, -0.521818508316192, -0.03495927328040524,
    0.57489871192657693, -0.61154140164842552, 0.99105177736228767,
    -0.73006581121807235, -1.5792661222494047, 0.28075305658702049,
    0.30555181779820029, -0.36963192388281479, 0.96346617052156569,
    0.15196360032419831, -0.58957024296927441, -1.4393068326132206,
    -0.78934236328392948, 1.4235585269863393, 1.30070142745467,
    0.96346617052156569, 0.09160191387215573, -1.0952742430069289,
    -1.3110118143652967, 0.14699112910315162, 0.26651129698690784,
    -0.55492980875541087, 0.96346617052156569, -0.20141067538577334,
    -0.483590744582817, 1.1284674579336567, 0.68203883903862639,
    -1.2591574468224762, -1.260782853349433, -3.2365540219317444,
    -0.46587983217637757, 0.13965056410933385, -0.75467009747573477,
    -0.38805658083232319, -0.66352346277479779, -1.1145922314154741,
    2.5384737426915569, -0.029238929046105984 };

  static const double dv3[11] = { -0.23108577415405165, -1.0, -1.0, -1.0,
    -0.048030941512320693, 1.0, 0.23865045534404533, 0.69557438329493637,
    0.80681088756209873, 0.2052635459230529, 0.332817443542239 };

  static const double dv[7] = { 72.351989944505533, 0.92189499119780272,
    1.8901098901098907, 8.2811809271868189, 16.706381306923085,
    72.989010989011035, 18.397542990296714 };

  static const double dv1[7] = { 32.627028931492426, 1.4155567416425314,
    0.74759688261863366, 0.21722348533700245, 1.9137739226965427,
    11.428516483384406, 16.912060613333882 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = 0.15464899657440628;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 11;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 77U * sizeof(double));
  *obj_Scale = 2.9837440238479918;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 11;
  memcpy(&obj_Alpha_data[0], &dv3[0], 11U * sizeof(double));
  obj_Prior[0] = 0.45054945054945056;
  obj_Prior[1] = 0.5494505494505495;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * Arguments    : double obj_Alpha_data[]
 *                double *obj_Bias
 *                double obj_SupportVectorsT_data[]
 *                int obj_SupportVectorsT_size[2]
 *                double *obj_Scale
 *                double *obj_Order
 *                double obj_Mu[7]
 *                double obj_Sigma[7]
 *                d_classreg_learning_coderutils_ *obj_KernelFunction
 *                int obj_ClassNamesLength[2]
 *                c_classreg_learning_coderutils_ *obj_ScoreTransform
 *                double obj_Prior[2]
 *                boolean_T obj_ClassLogicalIndices[2]
 *                double obj_Cost[4]
 * Return Type  : int
 */
int ye_CompactClassificationSVM_Com(double obj_Alpha_data[], double *obj_Bias,
  double obj_SupportVectorsT_data[], int obj_SupportVectorsT_size[2], double
  *obj_Scale, double *obj_Order, double obj_Mu[7], double obj_Sigma[7],
  d_classreg_learning_coderutils_ *obj_KernelFunction, int obj_ClassNamesLength
  [2], c_classreg_learning_coderutils_ *obj_ScoreTransform, double obj_Prior[2],
  boolean_T obj_ClassLogicalIndices[2], double obj_Cost[4])
{
  static const double dv2[35] = { 0.14831226810889134, -0.987584949794385,
    0.90609967595437158, 1.395108004122255, 1.699331784482212,
    -0.48001536073732015, 0.047640862371317996, 0.13670102538390028,
    -0.87412508539227707, 1.2424248831863431, 0.29944040466160643,
    1.2562117044672243, 1.5360491543594206, -0.22982025798436834,
    1.5515471436452279, -0.99328220603372575, 0.50250942727600567,
    -2.2522214480710119, -2.1229686136012891, 0.38401228858985448,
    0.17795446145452035, -0.75556303172032546, 0.87540671642403523,
    -0.97732148454466994, 0.42339135693206886, 0.056907059364872045,
    -0.76802457717971173, -0.478455584115407, -0.781808772917994,
    0.92184670374376321, -0.17014098718793788, 0.619089798569452,
    0.020055985327696892, -0.76802457717971173, -0.34004739454847316 };

  static const double dv[7] = { 34.365117212941172, 2.7425787592941178,
    1.9529411764705871, 8.50046497282353, 20.957285056470585, 84.000000000000057,
    16.309922650882353 };

  static const double dv1[7] = { 14.589721704411746, 2.4835388133494445,
    1.4866563351439126, 0.50556787868207353, 3.5531414869458176,
    62.497999967998986, 31.278355280461334 };

  static const double dv3[5] = { 0.99999999999999989, 0.22668467624741923,
    0.4305504099497261, -0.65723508619714521, -1.0 };

  int i;
  int obj_Alpha_size;
  for (i = 0; i < 7; i++) {
    obj_Mu[i] = dv[i];
    obj_Sigma[i] = dv1[i];
  }

  obj_ClassNamesLength[0] = 1;
  obj_ClassLogicalIndices[0] = true;
  obj_ClassNamesLength[1] = 1;
  obj_ClassLogicalIndices[1] = true;
  *obj_ScoreTransform = Identity;
  *obj_Bias = -0.0633620096518656;
  obj_SupportVectorsT_size[0] = 7;
  obj_SupportVectorsT_size[1] = 5;
  memcpy(&obj_SupportVectorsT_data[0], &dv2[0], 35U * sizeof(double));
  *obj_Scale = 4.154081868296136;
  *obj_Order = 2.0;
  *obj_KernelFunction = polynomial;
  obj_Alpha_size = 5;
  for (i = 0; i < 5; i++) {
    obj_Alpha_data[i] = dv3[i];
  }

  obj_Prior[0] = 0.52941176470588236;
  obj_Prior[1] = 0.47058823529411759;
  obj_Cost[0] = 0.0;
  obj_Cost[1] = 1.0;
  obj_Cost[2] = 1.0;
  obj_Cost[3] = 0.0;
  return obj_Alpha_size;
}

/*
 * File trailer for CompactClassificationSVM.c
 *
 * [EOF]
 */
