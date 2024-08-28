/* Include files */

#include "untitled_sfun.h"
#include "c1_untitled.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtRSInfo c1_emlrtRSI = { 3,  /* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#untitled:18"                       /* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 119,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 135,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 141,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 745,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 746,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 751,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 752,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 109,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 121,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_k_emlrtRSI = { 877,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_l_emlrtRSI = { 137,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c1_m_emlrtRSI = { 1251,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c1_n_emlrtRSI = { 1253,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c1_o_emlrtRSI = { 91,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c1_p_emlrtRSI = { 950,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_q_emlrtRSI = { 1021,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_r_emlrtRSI = { 1049,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_s_emlrtRSI = { 1061,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c1_t_emlrtRSI = { 761,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_u_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c1_v_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c1_w_emlrtRSI = { 311,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c1_x_emlrtRSI = { 452,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c1_y_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c1_ab_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c1_bb_emlrtRSI = { 801,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_cb_emlrtRSI = { 807,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_db_emlrtRSI = { 911,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c1_eb_emlrtRSI = { 80,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRTEInfo c1_emlrtRTEI = { 776,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 777,/* lineNo */
  37,                                  /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c1_c_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c1_d_emlrtRTEI = { 777,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c1_e_emlrtRTEI = { 773,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c1_f_emlrtRTEI = { 774,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtBCInfo c1_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  145,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_c_emlrtBCI = { 1,/* iFirst */
  695,                                 /* iLast */
  156,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_d_emlrtBCI = { 1,/* iFirst */
  751,                                 /* iLast */
  156,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  801,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  806,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static real_T c1_dv[13] = { 3.4813359214923059E-5, 0.00054457256285105158,
  0.0051667606200595222, 0.029732654490475543, 0.10377716120747747,
  0.21969625200024598, 0.28209557151935094, 0.21969625200024598,
  0.10377716120747747, 0.029732654490475543, 0.0051667606200595222,
  0.00054457256285105158, 3.4813359214923059E-5 };

static real_T c1_dv1[13] = { 0.0020299751839417137, 0.0102182810143517,
  0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
  0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
  -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
  -0.0020299751839417137 };

static real_T c1_dv2[12] = { 0.0020299751839417137, 0.0102182810143517,
  0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
  0.35505190018248872, -0.35505190018248872, -0.37823877042972087,
  -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
  -0.0020299751839417137 };

static boolean_T c1_bv[13] = { true, true, true, true, true, true, false, true,
  true, true, true, true, true };

/* Function Declarations */
static void initialize_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void initialize_params_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance);
static void mdl_start_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void mdl_terminate_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c1_untitled(SFc1_untitledInstanceStruct *
  chartInstance);
static void mdl_cleanup_runtime_resources_c1_untitled
  (SFc1_untitledInstanceStruct *chartInstance);
static void enable_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void disable_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void sf_gateway_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void ext_mode_exec_c1_untitled(SFc1_untitledInstanceStruct *chartInstance);
static void c1_update_jit_animation_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance);
static void c1_do_animation_call_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance);
static void set_sim_state_c1_untitled(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_st);
static void c1_edge(SFc1_untitledInstanceStruct *chartInstance, const emlrtStack
                    *c1_sp, boolean_T c1_varargin_1[521945], boolean_T
                    c1_varargout_1[521945]);
static void c1_imfilter(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_varargin_1[521945], real32_T c1_b[521945]);
static void c1_padImage(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_a_tmp[521945], real32_T c1_b_a[530957]);
static void c1_b_imfilter(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_varargin_1[521945], real32_T c1_b[521945]);
static void c1_b_padImage(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_a_tmp[521945], real32_T c1_b_a[530285]);
static void c1_c_imfilter(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_varargin_1[521945], real32_T c1_b[521945]);
static void c1_d_imfilter(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_varargin_1[521945], real32_T c1_b[521945]);
static void c1_imhist(SFc1_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c1_sp, real32_T c1_varargin_1[521945], real_T
                      c1_yout[64]);
static void c1_warning(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp);
static void c1_b_warning(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp);
static void c1_thinAndThreshold(SFc1_untitledInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, boolean_T c1_E[521945], real32_T c1_c_dx[521945],
  real32_T c1_c_dy[521945], real32_T c1_magGrad[521945], real_T
  c1_lowThresh_data[], int32_T c1_lowThresh_size[1], real_T c1_highThresh_data[],
  int32_T c1_highThresh_size[1], boolean_T c1_H[521945]);
static void c1_imreconstruct(SFc1_untitledInstanceStruct *chartInstance,
  boolean_T c1_b_marker[521945], boolean_T c1_mask[521945], boolean_T c1_im
  [521945]);
static void c1_emlrt_marshallIn(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_nullptr, const char_T *c1_identifier, boolean_T c1_y[521945]);
static void c1_b_emlrt_marshallIn(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T c1_y
  [521945]);
static void c1_slStringInitializeDynamicBuffers(SFc1_untitledInstanceStruct
  *chartInstance);
static void c1_chart_data_browse_helper(SFc1_untitledInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig);
static const mxArray *c1_feval(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1);
static void c1_b_feval(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1);
static const mxArray *c1_c_feval(SFc1_untitledInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1);
static void c1_d_feval(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1);
static void init_dsm_address_info(SFc1_untitledInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc1_untitledInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c1_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_doneDoubleBufferReInit = false;
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c1_untitled(SFc1_untitledInstanceStruct *
  chartInstance)
{
  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber, &chartInstance->c1_IsHeatMapPresent, 0);
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c1_JITStateAnimation[0],
                        &chartInstance->c1_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    8U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, "c1_untitled",
                     0, -1, 189);
}

static void mdl_cleanup_runtime_resources_c1_untitled
  (SFc1_untitledInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void enable_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  emlrtStack c1_b_st;
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  for (c1_i = 0; c1_i < 521945; c1_i++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                      (*chartInstance->c1_BW)[c1_i]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  chartInstance->c1_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  c1_b_st.site = &c1_emlrtRSI;
  for (c1_i1 = 0; c1_i1 < 521945; c1_i1++) {
    chartInstance->c1_b_bv[c1_i1] = (*chartInstance->c1_BW)[c1_i1];
  }

  c1_edge(chartInstance, &c1_b_st, chartInstance->c1_b_bv, chartInstance->c1_bv1);
  for (c1_i2 = 0; c1_i2 < 521945; c1_i2++) {
    (*chartInstance->c1_I)[c1_i2] = chartInstance->c1_bv1[c1_i2];
  }

  (*chartInstance->c1_I)[260972] = true;
  for (c1_i3 = 0; c1_i3 < 521945; c1_i3++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                      (*chartInstance->c1_I)[c1_i3]);
  }
}

static void ext_mode_exec_c1_untitled(SFc1_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_update_jit_animation_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_do_animation_call_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c1_untitled(SFc1_untitledInstanceStruct
  *chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_st = NULL;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(1, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", *chartInstance->c1_I, 11, 0U, 1, 0U,
    2, 695, 751), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_untitled(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_st)
{
  const mxArray *c1_u;
  int32_T c1_i;
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)), "I",
                      chartInstance->c1_d_bv);
  for (c1_i = 0; c1_i < 521945; c1_i++) {
    (*chartInstance->c1_I)[c1_i] = chartInstance->c1_d_bv[c1_i];
  }

  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void c1_edge(SFc1_untitledInstanceStruct *chartInstance, const emlrtStack
                    *c1_sp, boolean_T c1_varargin_1[521945], boolean_T
                    c1_varargout_1[521945])
{
  emlrtStack c1_b_st;
  emlrtStack c1_st;
  real_T c1_counts[64];
  real_T c1_b_data[1];
  real_T c1_highThresh_data[1];
  real_T c1_lowThresh_data[1];
  real_T c1_b_idx;
  real_T c1_highThreshTemp;
  real_T c1_sum;
  int32_T c1_highThresh_size[1];
  int32_T c1_lowThresh_size[1];
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_idx;
  int32_T c1_loop_ub;
  real32_T c1_b;
  real32_T c1_b_a;
  real32_T c1_b_b;
  real32_T c1_b_r;
  real32_T c1_b_varargin_1;
  real32_T c1_b_x;
  real32_T c1_b_x1;
  real32_T c1_b_x2;
  real32_T c1_b_y;
  real32_T c1_c_a;
  real32_T c1_c_b;
  real32_T c1_c_x;
  real32_T c1_c_y;
  real32_T c1_d_a;
  real32_T c1_d_b;
  real32_T c1_d_x;
  real32_T c1_d_y;
  real32_T c1_e_a;
  real32_T c1_e_b;
  real32_T c1_e_x;
  real32_T c1_e_y;
  real32_T c1_f_a;
  real32_T c1_f_x;
  real32_T c1_f_y;
  real32_T c1_g_x;
  real32_T c1_g_y;
  real32_T c1_h_x;
  real32_T c1_h_y;
  real32_T c1_i_x;
  real32_T c1_i_y;
  real32_T c1_j_y;
  real32_T c1_k_y;
  real32_T c1_magmax;
  real32_T c1_r;
  real32_T c1_varargin_2;
  real32_T c1_x;
  real32_T c1_x1;
  real32_T c1_x2;
  real32_T c1_y;
  int8_T c1_c_idx;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  for (c1_i = 0; c1_i < 521945; c1_i++) {
    chartInstance->c1_a[c1_i] = (real32_T)c1_varargin_1[c1_i];
  }

  c1_st.site = &c1_b_emlrtRSI;
  c1_b_st.site = &c1_e_emlrtRSI;
  c1_imfilter(chartInstance, &c1_b_st, chartInstance->c1_a, chartInstance->c1_dx);
  for (c1_i1 = 0; c1_i1 < 521945; c1_i1++) {
    chartInstance->c1_b_dx[c1_i1] = chartInstance->c1_dx[c1_i1];
  }

  c1_b_st.site = &c1_f_emlrtRSI;
  c1_b_imfilter(chartInstance, &c1_b_st, chartInstance->c1_b_dx,
                chartInstance->c1_dx);
  c1_b_st.site = &c1_g_emlrtRSI;
  c1_c_imfilter(chartInstance, &c1_b_st, chartInstance->c1_a,
                chartInstance->c1_dy);
  for (c1_i2 = 0; c1_i2 < 521945; c1_i2++) {
    chartInstance->c1_b_dy[c1_i2] = chartInstance->c1_dy[c1_i2];
  }

  c1_b_st.site = &c1_h_emlrtRSI;
  c1_d_imfilter(chartInstance, &c1_b_st, chartInstance->c1_b_dy,
                chartInstance->c1_dy);
  c1_x = chartInstance->c1_dx[0];
  c1_y = chartInstance->c1_dy[0];
  c1_b_a = c1_x;
  c1_b = c1_y;
  c1_b_x = c1_b_a;
  c1_b_y = c1_b;
  c1_x1 = c1_b_x;
  c1_x2 = c1_b_y;
  c1_c_a = c1_x1;
  c1_b_b = c1_x2;
  c1_r = muSingleScalarHypot(c1_c_a, c1_b_b);
  chartInstance->c1_a[0] = c1_r;
  c1_magmax = chartInstance->c1_a[0];
  for (c1_idx = 0; c1_idx < 521944; c1_idx++) {
    c1_b_idx = (real_T)c1_idx + 2.0;
    c1_c_x = chartInstance->c1_dx[(int32_T)c1_b_idx - 1];
    c1_e_y = chartInstance->c1_dy[(int32_T)c1_b_idx - 1];
    c1_d_a = c1_c_x;
    c1_c_b = c1_e_y;
    c1_d_x = c1_d_a;
    c1_f_y = c1_c_b;
    c1_b_x1 = c1_d_x;
    c1_b_x2 = c1_f_y;
    c1_e_a = c1_b_x1;
    c1_d_b = c1_b_x2;
    c1_b_r = muSingleScalarHypot(c1_e_a, c1_d_b);
    chartInstance->c1_a[(int32_T)c1_b_idx - 1] = c1_b_r;
    c1_b_varargin_1 = chartInstance->c1_a[(int32_T)c1_b_idx - 1];
    c1_varargin_2 = c1_magmax;
    c1_e_x = c1_b_varargin_1;
    c1_g_y = c1_varargin_2;
    c1_f_x = c1_e_x;
    c1_h_y = c1_g_y;
    c1_g_x = c1_f_x;
    c1_i_y = c1_h_y;
    c1_f_a = c1_g_x;
    c1_e_b = c1_i_y;
    c1_h_x = c1_f_a;
    c1_j_y = c1_e_b;
    c1_i_x = c1_h_x;
    c1_k_y = c1_j_y;
    c1_magmax = muSingleScalarMax(c1_i_x, c1_k_y);
  }

  if (c1_magmax > 0.0F) {
    c1_c_y = c1_magmax;
    c1_d_y = c1_c_y;
    for (c1_i3 = 0; c1_i3 < 521945; c1_i3++) {
      chartInstance->c1_a[c1_i3] /= c1_d_y;
    }
  }

  c1_st.site = &c1_c_emlrtRSI;
  c1_b_st.site = &c1_t_emlrtRSI;
  c1_imhist(chartInstance, &c1_b_st, chartInstance->c1_a, c1_counts);
  c1_sum = 0.0;
  c1_c_idx = 1;
  while ((!(c1_sum > 365361.49999999994)) && ((real_T)c1_c_idx <= 64.0)) {
    c1_sum += c1_counts[c1_c_idx - 1];
    c1_i5 = c1_c_idx + 1;
    if (c1_i5 > 127) {
      c1_i5 = 127;
    } else if (c1_i5 < -128) {
      c1_i5 = -128;
    }

    c1_c_idx = (int8_T)c1_i5;
  }

  c1_i4 = c1_c_idx - 1;
  if (c1_i4 > 127) {
    c1_i4 = 127;
  } else if (c1_i4 < -128) {
    c1_i4 = -128;
  }

  c1_highThreshTemp = (real_T)(int8_T)c1_i4 / 64.0;
  if (((real_T)c1_c_idx > 64.0) && (!(c1_sum > 365361.49999999994))) {
    c1_highThresh_size[0] = 0;
    c1_lowThresh_size[0] = 0;
  } else {
    c1_highThresh_size[0] = 1;
    c1_highThresh_data[0] = c1_highThreshTemp;
    c1_loop_ub = c1_highThresh_size[0] - 1;
    for (c1_i6 = 0; c1_i6 <= c1_loop_ub; c1_i6++) {
      c1_b_data[c1_i6] = c1_highThresh_data[c1_i6];
    }

    c1_b_data[0] *= 0.4;
    c1_lowThresh_size[0] = 1;
    c1_lowThresh_data[0] = c1_b_data[0];
  }

  for (c1_i7 = 0; c1_i7 < 521945; c1_i7++) {
    chartInstance->c1_c_bv[c1_i7] = false;
  }

  c1_st.site = &c1_d_emlrtRSI;
  c1_thinAndThreshold(chartInstance, &c1_st, chartInstance->c1_c_bv,
                      chartInstance->c1_dx, chartInstance->c1_dy,
                      chartInstance->c1_a, c1_lowThresh_data, c1_lowThresh_size,
                      c1_highThresh_data, c1_highThresh_size, c1_varargout_1);
  c1_i8 = 1;
  if ((c1_i8 < 1) || (c1_i8 > c1_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c1_i8, 1, c1_lowThresh_size[0], &c1_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  c1_i9 = 1;
  if ((c1_i9 < 1) || (c1_i9 > c1_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c1_i9, 1, c1_highThresh_size[0],
      &c1_b_emlrtBCI, (emlrtConstCTX)c1_sp);
  }
}

static void c1_imfilter(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_varargin_1[521945], real32_T c1_b[521945])
{
  emlrtStack c1_st;
  real_T c1_connDimsT[2];
  real_T c1_outSizeT[2];
  real_T c1_padSizeT[2];
  real_T c1_startT[2];
  int32_T c1_b_i;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  boolean_T c1_conn[13];
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  boolean_T c1_modeFlag;
  boolean_T c1_tooBig;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_i_emlrtRSI;
  c1_padImage(chartInstance, &c1_st, c1_varargin_1, chartInstance->c1_aTmp);
  c1_tooBig = true;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_padSizeT[c1_i1] = 707.0 + 44.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_outSizeT[c1_i3] = 695.0 + 56.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_connDimsT[c1_i5] = 13.0 + -12.0 * (real_T)c1_i5;
    }

    ippfilter_real32(&chartInstance->c1_aTmp[0], &c1_b[0], &c1_outSizeT[0], 2.0,
                     &c1_padSizeT[0], &c1_dv[0], &c1_connDimsT[0], true);
  } else {
    for (c1_b_i = 0; c1_b_i < 13; c1_b_i++) {
      c1_conn[c1_b_i] = true;
    }

    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_padSizeT[c1_i2] = 707.0 + 44.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_outSizeT[c1_i4] = 695.0 + 56.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_connDimsT[c1_i6] = 13.0 + -12.0 * (real_T)c1_i6;
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_startT[c1_i7] = 6.0 + -6.0 * (real_T)c1_i7;
    }

    imfilter_real32(&chartInstance->c1_aTmp[0], &c1_b[0], 2.0, &c1_outSizeT[0],
                    2.0, &c1_padSizeT[0], &c1_dv[0], 13.0, &c1_conn[0], 2.0,
                    &c1_connDimsT[0], &c1_startT[0], 2.0, true, true);
  }
}

static void c1_padImage(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_a_tmp[521945], real32_T c1_b_a[530957])
{
  static int32_T c1_idxA[1502] = { 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66,
    67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
    86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103,
    104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
    119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133,
    134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
    149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163,
    164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178,
    179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193,
    194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208,
    209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223,
    224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238,
    239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253,
    254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268,
    269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283,
    284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298,
    299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313,
    314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328,
    329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343,
    344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358,
    359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373,
    374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388,
    389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403,
    404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418,
    419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433,
    434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448,
    449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463,
    464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478,
    479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493,
    494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508,
    509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523,
    524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538,
    539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553,
    554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568,
    569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583,
    584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598,
    599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613,
    614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628,
    629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643,
    644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658,
    659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673,
    674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688,
    689, 690, 691, 692, 693, 694, 695, 695, 695, 695, 695, 695, 695, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
    12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
    31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
    50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68,
    69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87,
    88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105,
    106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
    121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
    136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150,
    151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165,
    166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180,
    181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195,
    196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210,
    211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225,
    226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240,
    241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
    256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270,
    271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285,
    286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300,
    301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315,
    316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330,
    331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345,
    346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360,
    361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375,
    376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390,
    391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405,
    406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420,
    421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435,
    436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450,
    451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465,
    466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480,
    481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495,
    496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510,
    511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525,
    526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540,
    541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555,
    556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570,
    571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585,
    586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600,
    601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615,
    616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630,
    631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645,
    646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660,
    661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675,
    676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690,
    691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705,
    706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720,
    721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735,
    736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750,
    751 };

  emlrtStack c1_st;
  real_T c1_b_i;
  real_T c1_b_j;
  int32_T c1_c_i;
  int32_T c1_i;
  int32_T c1_j;
  (void)chartInstance;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_k_emlrtRSI;
  for (c1_j = 0; c1_j < 751; c1_j++) {
    c1_b_j = (real_T)c1_j + 1.0;
    for (c1_i = 0; c1_i < 707; c1_i++) {
      c1_b_i = (real_T)c1_i + 1.0;
      if ((c1_idxA[(int32_T)c1_b_i - 1] < 1) || (c1_idxA[(int32_T)c1_b_i - 1] >
           695)) {
        emlrtDynamicBoundsCheckR2012b(c1_idxA[(int32_T)c1_b_i - 1], 1, 695,
          &c1_c_emlrtBCI, &c1_st);
      }

      c1_c_i = c1_idxA[(int32_T)c1_b_j + 750];
      if ((c1_c_i < 1) || (c1_c_i > 751)) {
        emlrtDynamicBoundsCheckR2012b(c1_c_i, 1, 751, &c1_d_emlrtBCI, &c1_st);
      }

      c1_b_a[((int32_T)c1_b_i + 707 * ((int32_T)c1_b_j - 1)) - 1] = c1_a_tmp
        [(c1_idxA[(int32_T)c1_b_i - 1] + 695 * (c1_c_i - 1)) - 1];
    }
  }
}

static void c1_b_imfilter(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_varargin_1[521945], real32_T c1_b[521945])
{
  emlrtStack c1_st;
  real_T c1_connDimsT[2];
  real_T c1_outSizeT[2];
  real_T c1_padSizeT[2];
  real_T c1_startT[2];
  int32_T c1_b_i;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  boolean_T c1_modeFlag;
  boolean_T c1_tooBig;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_i_emlrtRSI;
  c1_b_padImage(chartInstance, &c1_st, c1_varargin_1, chartInstance->c1_d_aTmp);
  c1_tooBig = true;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_padSizeT[c1_i1] = 695.0 + 68.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_outSizeT[c1_i3] = 695.0 + 56.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_connDimsT[c1_i5] = 1.0 + 12.0 * (real_T)c1_i5;
    }

    ippfilter_real32(&chartInstance->c1_d_aTmp[0], &c1_b[0], &c1_outSizeT[0],
                     2.0, &c1_padSizeT[0], &c1_dv1[0], &c1_connDimsT[0], true);
  } else {
    for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
      c1_padSizeT[c1_b_i] = 695.0 + 68.0 * (real_T)c1_b_i;
    }

    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_outSizeT[c1_i2] = 695.0 + 56.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_connDimsT[c1_i4] = 1.0 + 12.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_startT[c1_i6] = 6.0 * (real_T)c1_i6;
    }

    imfilter_real32(&chartInstance->c1_d_aTmp[0], &c1_b[0], 2.0, &c1_outSizeT[0],
                    2.0, &c1_padSizeT[0], &c1_dv2[0], 12.0, &c1_bv[0], 2.0,
                    &c1_connDimsT[0], &c1_startT[0], 2.0, true, true);
  }
}

static void c1_b_padImage(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_a_tmp[521945], real32_T c1_b_a[530285])
{
  static int32_T c1_idxA[1526] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
    34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71,
    72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
    91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107,
    108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122,
    123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
    138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152,
    153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167,
    168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182,
    183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197,
    198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212,
    213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227,
    228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242,
    243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257,
    258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272,
    273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287,
    288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302,
    303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317,
    318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332,
    333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347,
    348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362,
    363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377,
    378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392,
    393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407,
    408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422,
    423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437,
    438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452,
    453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467,
    468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482,
    483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497,
    498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512,
    513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527,
    528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542,
    543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556, 557,
    558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571, 572,
    573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586, 587,
    588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602,
    603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617,
    618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632,
    633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646, 647,
    648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662,
    663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677,
    678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692,
    693, 694, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
    1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
    22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
    41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
    60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78,
    79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97,
    98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113,
    114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
    129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158,
    159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173,
    174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188,
    189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203,
    204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218,
    219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233,
    234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248,
    249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263,
    264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278,
    279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293,
    294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308,
    309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323,
    324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338,
    339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353,
    354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368,
    369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383,
    384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398,
    399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413,
    414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428,
    429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443,
    444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458,
    459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473,
    474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488,
    489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503,
    504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518,
    519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533,
    534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548,
    549, 550, 551, 552, 553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563,
    564, 565, 566, 567, 568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578,
    579, 580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593,
    594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608,
    609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623,
    624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638,
    639, 640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653,
    654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668,
    669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683,
    684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698,
    699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713,
    714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728,
    729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743,
    744, 745, 746, 747, 748, 749, 750, 751, 751, 751, 751, 751, 751, 751 };

  emlrtStack c1_st;
  real_T c1_b_i;
  real_T c1_b_j;
  int32_T c1_c_i;
  int32_T c1_i;
  int32_T c1_j;
  (void)chartInstance;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_k_emlrtRSI;
  for (c1_j = 0; c1_j < 763; c1_j++) {
    c1_b_j = (real_T)c1_j + 1.0;
    for (c1_i = 0; c1_i < 695; c1_i++) {
      c1_b_i = (real_T)c1_i + 1.0;
      if ((c1_idxA[(int32_T)c1_b_i - 1] < 1) || (c1_idxA[(int32_T)c1_b_i - 1] >
           695)) {
        emlrtDynamicBoundsCheckR2012b(c1_idxA[(int32_T)c1_b_i - 1], 1, 695,
          &c1_c_emlrtBCI, &c1_st);
      }

      c1_c_i = c1_idxA[(int32_T)c1_b_j + 762];
      if ((c1_c_i < 1) || (c1_c_i > 751)) {
        emlrtDynamicBoundsCheckR2012b(c1_c_i, 1, 751, &c1_d_emlrtBCI, &c1_st);
      }

      c1_b_a[((int32_T)c1_b_i + 695 * ((int32_T)c1_b_j - 1)) - 1] = c1_a_tmp
        [(c1_idxA[(int32_T)c1_b_i - 1] + 695 * (c1_c_i - 1)) - 1];
    }
  }
}

static void c1_c_imfilter(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_varargin_1[521945], real32_T c1_b[521945])
{
  emlrtStack c1_st;
  real_T c1_connDimsT[2];
  real_T c1_outSizeT[2];
  real_T c1_padSizeT[2];
  real_T c1_startT[2];
  int32_T c1_b_i;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  boolean_T c1_conn[13];
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  boolean_T c1_modeFlag;
  boolean_T c1_tooBig;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_i_emlrtRSI;
  c1_b_padImage(chartInstance, &c1_st, c1_varargin_1, chartInstance->c1_c_aTmp);
  c1_tooBig = true;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_padSizeT[c1_i1] = 695.0 + 68.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_outSizeT[c1_i3] = 695.0 + 56.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_connDimsT[c1_i5] = 1.0 + 12.0 * (real_T)c1_i5;
    }

    ippfilter_real32(&chartInstance->c1_c_aTmp[0], &c1_b[0], &c1_outSizeT[0],
                     2.0, &c1_padSizeT[0], &c1_dv[0], &c1_connDimsT[0], true);
  } else {
    for (c1_b_i = 0; c1_b_i < 13; c1_b_i++) {
      c1_conn[c1_b_i] = true;
    }

    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_padSizeT[c1_i2] = 695.0 + 68.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_outSizeT[c1_i4] = 695.0 + 56.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_connDimsT[c1_i6] = 1.0 + 12.0 * (real_T)c1_i6;
    }

    for (c1_i7 = 0; c1_i7 < 2; c1_i7++) {
      c1_startT[c1_i7] = 6.0 * (real_T)c1_i7;
    }

    imfilter_real32(&chartInstance->c1_c_aTmp[0], &c1_b[0], 2.0, &c1_outSizeT[0],
                    2.0, &c1_padSizeT[0], &c1_dv[0], 13.0, &c1_conn[0], 2.0,
                    &c1_connDimsT[0], &c1_startT[0], 2.0, true, true);
  }
}

static void c1_d_imfilter(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, real32_T c1_varargin_1[521945], real32_T c1_b[521945])
{
  emlrtStack c1_st;
  real_T c1_connDimsT[2];
  real_T c1_outSizeT[2];
  real_T c1_padSizeT[2];
  real_T c1_startT[2];
  int32_T c1_b_i;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  boolean_T c1_b_modeFlag;
  boolean_T c1_c_modeFlag;
  boolean_T c1_modeFlag;
  boolean_T c1_tooBig;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_st.site = &c1_i_emlrtRSI;
  c1_padImage(chartInstance, &c1_st, c1_varargin_1, chartInstance->c1_b_aTmp);
  c1_tooBig = true;
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_tooBig = false;
  }

  if (!c1_tooBig) {
    c1_modeFlag = true;
  } else {
    c1_modeFlag = false;
  }

  if (c1_modeFlag) {
    c1_b_modeFlag = true;
  } else {
    c1_b_modeFlag = false;
  }

  c1_c_modeFlag = c1_b_modeFlag;
  if (c1_c_modeFlag) {
    for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
      c1_padSizeT[c1_i1] = 707.0 + 44.0 * (real_T)c1_i1;
    }

    for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
      c1_outSizeT[c1_i3] = 695.0 + 56.0 * (real_T)c1_i3;
    }

    for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
      c1_connDimsT[c1_i5] = 13.0 + -12.0 * (real_T)c1_i5;
    }

    ippfilter_real32(&chartInstance->c1_b_aTmp[0], &c1_b[0], &c1_outSizeT[0],
                     2.0, &c1_padSizeT[0], &c1_dv1[0], &c1_connDimsT[0], true);
  } else {
    for (c1_b_i = 0; c1_b_i < 2; c1_b_i++) {
      c1_padSizeT[c1_b_i] = 707.0 + 44.0 * (real_T)c1_b_i;
    }

    for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
      c1_outSizeT[c1_i2] = 695.0 + 56.0 * (real_T)c1_i2;
    }

    for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
      c1_connDimsT[c1_i4] = 13.0 + -12.0 * (real_T)c1_i4;
    }

    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_startT[c1_i6] = 6.0 + -6.0 * (real_T)c1_i6;
    }

    imfilter_real32(&chartInstance->c1_b_aTmp[0], &c1_b[0], 2.0, &c1_outSizeT[0],
                    2.0, &c1_padSizeT[0], &c1_dv2[0], 12.0, &c1_bv[0], 2.0,
                    &c1_connDimsT[0], &c1_startT[0], 2.0, true, true);
  }
}

static void c1_imhist(SFc1_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c1_sp, real32_T c1_varargin_1[521945], real_T
                      c1_yout[64])
{
  emlrtStack c1_b_st;
  emlrtStack c1_st;
  real_T c1_c_i;
  real_T c1_numCores;
  int32_T c1_b_c;
  int32_T c1_b_i;
  int32_T c1_c;
  int32_T c1_i;
  real32_T c1_b_a;
  real32_T c1_b_x;
  real32_T c1_c_a;
  real32_T c1_idx;
  real32_T c1_x;
  boolean_T c1_b;
  boolean_T c1_b_b;
  boolean_T c1_b_nanFlag;
  boolean_T c1_b_rngFlag;
  boolean_T c1_c_nanFlag;
  boolean_T c1_nanFlag;
  boolean_T c1_rngFlag;
  boolean_T c1_useParallel;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_st.site = &c1_u_emlrtRSI;
  c1_b_st.site = &c1_v_emlrtRSI;
  c1_numCores = 1.0;
  getnumcores(&c1_numCores);
  if (c1_numCores > 1.0) {
    c1_useParallel = true;
  } else {
    c1_useParallel = false;
  }

  if (c1_useParallel) {
    c1_b_st.site = &c1_w_emlrtRSI;
    c1_nanFlag = false;
    c1_rngFlag = false;
    tbbhist_real32_scaled(&c1_varargin_1[0], 521945.0, 695.0, 751.0, &c1_yout[0],
                          64.0, 1.0, 64.0, &c1_rngFlag, &c1_nanFlag);
    c1_b_rngFlag = c1_rngFlag;
    c1_c_nanFlag = c1_nanFlag;
  } else {
    for (c1_i = 0; c1_i < 64; c1_i++) {
      c1_yout[c1_i] = 0.0;
    }

    c1_b_nanFlag = false;
    for (c1_b_i = 0; c1_b_i < 521945; c1_b_i++) {
      c1_c_i = (real_T)c1_b_i + 1.0;
      c1_x = c1_varargin_1[(int32_T)c1_c_i - 1];
      c1_b = muSingleScalarIsNaN(c1_x);
      if (c1_b) {
        c1_b_nanFlag = true;
        c1_idx = 0.0F;
      } else {
        c1_idx = c1_varargin_1[(int32_T)c1_c_i - 1] * 63.0F + 0.5F;
      }

      if (c1_idx > 63.0F) {
        c1_yout[63]++;
      } else {
        c1_b_x = c1_varargin_1[(int32_T)c1_c_i - 1];
        c1_b_b = muSingleScalarIsInf(c1_b_x);
        if (c1_b_b) {
          c1_yout[63]++;
        } else {
          c1_b_a = c1_idx;
          c1_c = (int32_T)c1_b_a;
          c1_c_a = c1_idx;
          c1_b_c = (int32_T)c1_c_a;
          c1_yout[c1_c] = c1_yout[c1_b_c] + 1.0;
        }
      }
    }

    c1_b_rngFlag = false;
    c1_c_nanFlag = c1_b_nanFlag;
  }

  if (c1_b_rngFlag) {
    c1_b_st.site = &c1_x_emlrtRSI;
    c1_warning(chartInstance, &c1_b_st);
  }

  if (c1_c_nanFlag) {
    c1_b_st.site = &c1_y_emlrtRSI;
    c1_b_warning(chartInstance, &c1_b_st);
  }
}

static void c1_warning(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp)
{
  static char_T c1_msgID[25] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'o', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g',
    'e' };

  static char_T c1_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c1_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c1_st;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_y = NULL;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv, 10, 0U, 1, 0U, 2, 1, 7), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv1, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_msgID, 10, 0U, 1, 0U, 2, 1, 25),
                false);
  c1_st.site = &c1_ab_emlrtRSI;
  c1_b_feval(chartInstance, &c1_st, c1_y, c1_feval(chartInstance, &c1_st, c1_b_y,
              c1_c_y));
}

static void c1_b_warning(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp)
{
  static char_T c1_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c1_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c1_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c1_st;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_y = NULL;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv, 10, 0U, 1, 0U, 2, 1, 7), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv1, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_msgID, 10, 0U, 1, 0U, 2, 1, 27),
                false);
  c1_st.site = &c1_ab_emlrtRSI;
  c1_d_feval(chartInstance, &c1_st, c1_y, c1_c_feval(chartInstance, &c1_st,
              c1_b_y, c1_c_y));
}

static void c1_thinAndThreshold(SFc1_untitledInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, boolean_T c1_E[521945], real32_T c1_c_dx[521945],
  real32_T c1_c_dy[521945], real32_T c1_magGrad[521945], real_T
  c1_lowThresh_data[], int32_T c1_lowThresh_size[1], real_T c1_highThresh_data[],
  int32_T c1_highThresh_size[1], boolean_T c1_H[521945])
{
  real_T c1_szT[2];
  real_T c1_b_lowThresh;
  real_T c1_highThresh;
  real_T c1_lowThresh;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  c1_i = 1;
  if ((c1_i < 1) || (c1_i > c1_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c1_i, 1, c1_lowThresh_size[0], &c1_e_emlrtBCI,
      (emlrtConstCTX)c1_sp);
  }

  c1_lowThresh = c1_lowThresh_data[0];
  c1_b_lowThresh = c1_lowThresh;
  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_szT[c1_i1] = 695.0 + 56.0 * (real_T)c1_i1;
  }

  cannythresholding_real32_tbb(&c1_c_dx[0], &c1_c_dy[0], &c1_magGrad[0],
    &c1_szT[0], c1_b_lowThresh, &c1_E[0]);
  c1_i2 = 1;
  if ((c1_i2 < 1) || (c1_i2 > c1_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c1_i2, 1, c1_highThresh_size[0],
      &c1_f_emlrtBCI, (emlrtConstCTX)c1_sp);
  }

  c1_highThresh = c1_highThresh_data[0];
  for (c1_i3 = 0; c1_i3 < 521945; c1_i3++) {
    chartInstance->c1_marker[c1_i3] = ((real_T)c1_magGrad[c1_i3] > c1_highThresh);
  }

  c1_imreconstruct(chartInstance, chartInstance->c1_marker, c1_E, c1_H);
}

static void c1_imreconstruct(SFc1_untitledInstanceStruct *chartInstance,
  boolean_T c1_b_marker[521945], boolean_T c1_mask[521945], boolean_T c1_im
  [521945])
{
  real_T c1_imSizeT[2];
  int32_T c1_i;
  int32_T c1_i1;
  (void)chartInstance;
  for (c1_i = 0; c1_i < 521945; c1_i++) {
    c1_im[c1_i] = c1_b_marker[c1_i];
  }

  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    c1_imSizeT[c1_i1] = 695.0 + 56.0 * (real_T)c1_i1;
  }

  ippreconstruct_uint8((uint8_T *)&c1_im[0], (uint8_T *)&c1_mask[0],
                       &c1_imSizeT[0], 2.0);
}

const mxArray *sf_c1_untitled_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static void c1_emlrt_marshallIn(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_nullptr, const char_T *c1_identifier, boolean_T c1_y[521945])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_nullptr);
}

static void c1_b_emlrt_marshallIn(SFc1_untitledInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T c1_y
  [521945])
{
  int32_T c1_i;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), chartInstance->c1_e_bv, 1, 11, 0U,
                1, 0U, 2, 695, 751);
  for (c1_i = 0; c1_i < 521945; c1_i++) {
    c1_y[c1_i] = chartInstance->c1_e_bv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_slStringInitializeDynamicBuffers(SFc1_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_chart_data_browse_helper(SFc1_untitledInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig)
{
  (void)chartInstance;
  *c1_mxData = NULL;
  *c1_isValueTooBig = 0U;
  switch (c1_ssIdNumber) {
   case 5U:
    *c1_isValueTooBig = 1U;
    break;

   case 10U:
    *c1_isValueTooBig = 1U;
    break;
  }
}

static const mxArray *c1_feval(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1)
{
  const mxArray *c1_m = NULL;
  (void)chartInstance;
  c1_m = NULL;
  sf_mex_assign(&c1_m, sf_mex_call(c1_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c1_input0), 14, sf_mex_dup(c1_input1)), false);
  sf_mex_destroy(&c1_input0);
  sf_mex_destroy(&c1_input1);
  return c1_m;
}

static void c1_b_feval(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1)
{
  (void)chartInstance;
  sf_mex_call(c1_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c1_input0), 14,
              sf_mex_dup(c1_input1));
  sf_mex_destroy(&c1_input0);
  sf_mex_destroy(&c1_input1);
}

static const mxArray *c1_c_feval(SFc1_untitledInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1)
{
  const mxArray *c1_m = NULL;
  (void)chartInstance;
  c1_m = NULL;
  sf_mex_assign(&c1_m, sf_mex_call(c1_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c1_input0), 14, sf_mex_dup(c1_input1)), false);
  sf_mex_destroy(&c1_input0);
  sf_mex_destroy(&c1_input1);
  return c1_m;
}

static void c1_d_feval(SFc1_untitledInstanceStruct *chartInstance, const
  emlrtStack *c1_sp, const mxArray *c1_input0, const mxArray *c1_input1)
{
  (void)chartInstance;
  sf_mex_call(c1_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c1_input0), 14,
              sf_mex_dup(c1_input1));
  sf_mex_destroy(&c1_input0);
  sf_mex_destroy(&c1_input1);
}

static void init_dsm_address_info(SFc1_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_untitledInstanceStruct *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_I = (boolean_T (*)[521945])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_BW = (boolean_T (*)[521945])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_untitled_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3421402395U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3120965358U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4192816159U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3292546755U);
}

mxArray *sf_c1_untitled_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,6);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.TbbhistBuildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.CannyThresholdingTbbBuildable"));
  mxSetCell(mxcell3p, 5, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  return(mxcell3p);
}

mxArray *sf_c1_untitled_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_real32");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_untitled_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_untitled(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCWYGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYeAD/aU6RdxAOk3QNLPQkC/AJDlCQ0XEAAAKgwMhA=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_untitled_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sgfmSui07658hXbU2l6Sdw";
}

static void sf_opaque_initialize_c1_untitled(void *chartInstanceVar)
{
  initialize_params_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
  initialize_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_untitled(void *chartInstanceVar)
{
  enable_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_untitled(void *chartInstanceVar)
{
  disable_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_untitled(void *chartInstanceVar)
{
  sf_gateway_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_untitled(SimStruct* S)
{
  return get_sim_state_c1_untitled((SFc1_untitledInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_untitled(SimStruct* S, const mxArray *st)
{
  set_sim_state_c1_untitled((SFc1_untitledInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_untitled(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_untitledInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_untitled((SFc1_untitledInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_untitled(void *chartInstanceVar)
{
  mdl_start_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc1_untitledInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c1_untitled(void *chartInstanceVar)
{
  mdl_terminate_c1_untitled((SFc1_untitledInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_untitled(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_untitled((SFc1_untitledInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_untitled_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [20] = {
    "eNrdWFtvG0UUHkcholCqVEItEkjlkRekNlUvD4g29aVYSojFOgUhJDTePd4dMjuznYsd8xN4o4+",
    "8VuJ38MhPgH/BI4+cWW8cyzH2zFpqAiut12fX35yZb75zWZNG95DgcQPPL24TsoPXt/HcItPjrc",
    "puzJ3T+9vks8ruvUNInFFlumIoSfgRywRSEJEdDtlpIFbYvEcVzXUNv4Lm8BVoya1hUoRNnokhK",
    "BAxDlBIZYL8apZbzsRJx4rYedZfZyzOokxanjzDAWlyJPjk3/wW1vTQY4spiE0HIDGZkjbNOpym",
    "q1lQZtzMID7RNg/mSoOJbOGWqg8tN6zg0D6FuCu0ociCXrPeyFADTXMarBCmozO0zAvOqPDnOqM",
    "6ggLVYeC4SPDzyBpkz9Mv+hswQY1UjPJ2zptO4Z7YHsd5HqKseTDPJjctGNg0ZSJ17Cqbg8D1o0",
    "48uBo25QgUTeFIBMagW137tNzgmS79Y7DrZFkrBm0+3RVdC1v6bY+QIV3TbycWTcq5DsP2ZXEAI",
    "+Cl/xY1tAZ26j8ArDVL+vIFVS4KAiPJCvbSQoVtSpEw/x0eLaDKhPslJk8POMudpCBBmmdTnw20",
    "TpNWG5k3MYxaBwee/i5iu8KAGtIYvHOfokwDTrjUVaDfhGk64A6NLJlyld4jgKgNJXpoRWss1Ql",
    "yHJpkz7lykRCGhiSFFhgoE0Yb1f2Ccus551xjhnPyONaYscL8ItbFTy1wTOMMEldPGIdD0G4A7Z",
    "2fsY7s42pHzExaoGPFCt9IshoSLCSOpf6kgGNxIuRYdJTMo6ojWKErAMwaVAksC8+wLKlJByfvN",
    "2sFL/tOWXXas5waTgdOG89BYGVxa3WVkMYYVW2BrRtOaBNsxH7E0i400wbbqUm7jIGk7Ec/aIT1",
    "ozcr+/4slrq6r3CnKJZhgZ3S/qBs9qDPcihvRBR7iqlZHc7vXXLu99rWar9b+K1RE0c2xD2dw20",
    "v4efdOdxuZcf3vrcCk4vjeJn/6x48++DIBdw5v2fXT+bwjSV+ydx1k32Z5+m9BT/bC7idiqtf0z",
    "8//K7x2y83X//w6qe9n59u4v/3QB3fqOyPzvqyWeUaXUju5XvbGh3cWtCBs3U6zCPL7j56+OBx9",
    "s3geI8/jJIxqRV3Z/c/xtNgYivzpIq7SfWO5Wxqp72/G//x3Hx31ox/bU5PhPz1ZDP8+xf2cXsN",
    "fhe/dRd0e9Xzw2Xlo8ucp0/earxhHHnDuE3XF5qP/+u/X5UHyMLvd6/wOsiK/BRSl6/auv4gYXX",
    "oTmV/PntXbmaMJ0u69eoxNtTDZU//J/r+O5C/25XddvxVf/Z9e39fUD7B9nz6+lPd7in3P9PskQ",
    "Kql78DXUYd8u2Pry/Et7PHTCRyrD+9t/dgb5O69g/r3fpJ",
    ""
  };

  static char newstr [1397] = "";
  newstr[0] = '\0';
  for (i = 0; i < 20; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_untitled(SimStruct *S)
{
  const char* newstr = sf_c1_untitled_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(467232678U));
  ssSetChecksum1(S,(2596274524U));
  ssSetChecksum2(S,(2456462097U));
  ssSetChecksum3(S,(1083257482U));
}

static void mdlRTW_c1_untitled(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_untitled(SimStruct *S)
{
  SFc1_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc1_untitledInstanceStruct *)utMalloc(sizeof
    (SFc1_untitledInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_untitledInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_untitled;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c1_untitled;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_untitled;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c1_untitled;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_untitled;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_untitled;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_untitled;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c1_untitled;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c1_untitled;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c1_untitled;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_untitled;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_untitled;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_untitled(chartInstance);
}

void c1_untitled_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_untitled(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_untitled(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_untitled(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_untitled_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
