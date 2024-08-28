/* Include files */

#include "untitled_sfun.h"
#include "c8_untitled.h"
#include <string.h>
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
static emlrtMCInfo c8_emlrtMCI = { 87, /* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c8_b_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c8_c_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnegative",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnegative.m"/* pName */
};

static emlrtMCInfo c8_d_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c8_e_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo c8_f_emlrtMCI = { 28,/* lineNo */
  19,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pName */
};

static emlrtMCInfo c8_g_emlrtMCI = { 18,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pName */
};

static emlrtMCInfo c8_h_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c8_i_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo c8_j_emlrtMCI = { 57,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c8_k_emlrtMCI = { 58,/* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c8_l_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c8_m_emlrtMCI = { 1499,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtMCInfo c8_n_emlrtMCI = { 21,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ind2sub.m"/* pName */
};

static emlrtMCInfo c8_o_emlrtMCI = { 288,/* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo c8_p_emlrtMCI = { 46,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

static emlrtMCInfo c8_q_emlrtMCI = { 81,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtMCInfo c8_r_emlrtMCI = { 296,/* lineNo */
  1,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtMCInfo c8_s_emlrtMCI = { 392,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo c8_t_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtMCInfo c8_u_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validatenonempty",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonempty.m"/* pName */
};

static emlrtMCInfo c8_v_emlrtMCI = { 18,/* lineNo */
  23,                                  /* colNo */
  "validatencols",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatencols.m"/* pName */
};

static emlrtMCInfo c8_w_emlrtMCI = { 72,/* lineNo */
  1,                                   /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtMCInfo c8_x_emlrtMCI = { 47,/* lineNo */
  19,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtRSInfo c8_emlrtRSI = { 6,  /* lineNo */
  "MATLAB Function6",                  /* fcnName */
  "#untitled:53"                       /* pathName */
};

static emlrtRSInfo c8_b_emlrtRSI = { 205,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_c_emlrtRSI = { 109,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_d_emlrtRSI = { 121,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_e_emlrtRSI = { 877,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_f_emlrtRSI = { 137,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c8_g_emlrtRSI = { 1251,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c8_h_emlrtRSI = { 1253,/* lineNo */
  "padarray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo c8_i_emlrtRSI = { 950,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_j_emlrtRSI = { 1021,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_k_emlrtRSI = { 1049,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_l_emlrtRSI = { 1061,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c8_m_emlrtRSI = { 163,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_n_emlrtRSI = { 164,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_o_emlrtRSI = { 33,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c8_p_emlrtRSI = { 43,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c8_q_emlrtRSI = { 51,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c8_r_emlrtRSI = { 69,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c8_s_emlrtRSI = { 24,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_t_emlrtRSI = { 28,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_u_emlrtRSI = { 31,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_v_emlrtRSI = { 32,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_w_emlrtRSI = { 78,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_x_emlrtRSI = { 139,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_y_emlrtRSI = { 179,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_ab_emlrtRSI = { 184,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_bb_emlrtRSI = { 43,/* lineNo */
  "graythresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\graythresh.m"/* pathName */
};

static emlrtRSInfo c8_cb_emlrtRSI = { 45,/* lineNo */
  "graythresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\graythresh.m"/* pathName */
};

static emlrtRSInfo c8_db_emlrtRSI = { 48,/* lineNo */
  "graythresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\graythresh.m"/* pathName */
};

static emlrtRSInfo c8_eb_emlrtRSI = { 41,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c8_fb_emlrtRSI = { 197,/* lineNo */
  "im2uint8",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo c8_gb_emlrtRSI = { 19,/* lineNo */
  "grayto8",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\grayto8.m"/* pathName */
};

static emlrtRSInfo c8_hb_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c8_ib_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c8_jb_emlrtRSI = { 196,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c8_kb_emlrtRSI = { 207,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c8_lb_emlrtRSI = { 452,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c8_mb_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c8_nb_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c8_ob_emlrtRSI = { 37,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c8_pb_emlrtRSI = { 85,/* lineNo */
  "otsuthresh",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\otsuthresh.m"/* pathName */
};

static emlrtRSInfo c8_qb_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c8_rb_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c8_sb_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c8_tb_emlrtRSI = { 35,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c8_ub_emlrtRSI = { 138,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c8_vb_emlrtRSI = { 255,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c8_wb_emlrtRSI = { 254,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c8_xb_emlrtRSI = { 253,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c8_yb_emlrtRSI = { 42,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c8_ac_emlrtRSI = { 16,/* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c8_bc_emlrtRSI = { 28,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c8_cc_emlrtRSI = { 125,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c8_dc_emlrtRSI = { 328,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo c8_ec_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c8_fc_emlrtRSI = { 150,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_gc_emlrtRSI = { 29,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c8_hc_emlrtRSI = { 34,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c8_ic_emlrtRSI = { 35,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c8_jc_emlrtRSI = { 36,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c8_kc_emlrtRSI = { 48,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c8_lc_emlrtRSI = { 53,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c8_mc_emlrtRSI = { 55,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c8_nc_emlrtRSI = { 62,/* lineNo */
  "medfilt2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\medfilt2.m"/* pathName */
};

static emlrtRSInfo c8_oc_emlrtRSI = { 25,/* lineNo */
  "ordfilt2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\ordfilt2.m"/* pathName */
};

static emlrtRSInfo c8_pc_emlrtRSI = { 155,/* lineNo */
  "ordfilt2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\ordfilt2.m"/* pathName */
};

static emlrtRSInfo c8_qc_emlrtRSI = { 179,/* lineNo */
  "ordfilt2",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\ordfilt2.m"/* pathName */
};

static emlrtRSInfo c8_rc_emlrtRSI = { 66,/* lineNo */
  "imhmax",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\imhmax.m"/* pathName */
};

static emlrtRSInfo c8_sc_emlrtRSI = { 10,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c8_tc_emlrtRSI = { 14,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c8_uc_emlrtRSI = { 80,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c8_vc_emlrtRSI = { 14,/* lineNo */
  "imregionalmax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imregionalmax.m"/* pathName */
};

static emlrtRSInfo c8_wc_emlrtRSI = { 35,/* lineNo */
  "imregionalmax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imregionalmax.m"/* pathName */
};

static emlrtRSInfo c8_xc_emlrtRSI = { 37,/* lineNo */
  "imregionalmax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imregionalmax.m"/* pathName */
};

static emlrtRSInfo c8_yc_emlrtRSI = { 41,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_ad_emlrtRSI = { 107,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_bd_emlrtRSI = { 109,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_cd_emlrtRSI = { 314,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_dd_emlrtRSI = { 316,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_ed_emlrtRSI = { 378,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_fd_emlrtRSI = { 26,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c8_gd_emlrtRSI = { 101,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c8_hd_emlrtRSI = { 100,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c8_id_emlrtRSI = { 93,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c8_jd_emlrtRSI = { 85,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c8_kd_emlrtRSI = { 84,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c8_ld_emlrtRSI = { 83,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c8_md_emlrtRSI = { 71,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c8_nd_emlrtRSI = { 58,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c8_od_emlrtRSI = { 39,/* lineNo */
  "bwconncomp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pathName */
};

static emlrtRSInfo c8_pd_emlrtRSI = { 51,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c8_qd_emlrtRSI = { 114,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c8_rd_emlrtRSI = { 149,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c8_sd_emlrtRSI = { 150,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c8_td_emlrtRSI = { 153,/* lineNo */
  "intermediateLabelRuns",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pathName */
};

static emlrtRSInfo c8_ud_emlrtRSI = { 20,/* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo c8_vd_emlrtRSI = { 99,/* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

static emlrtRSInfo c8_wd_emlrtRSI = { 86,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo c8_xd_emlrtRSI = { 107,/* lineNo */
  "blockedSummation",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pathName */
};

static emlrtRSInfo c8_yd_emlrtRSI = { 22,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c8_ae_emlrtRSI = { 42,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c8_be_emlrtRSI = { 57,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c8_ce_emlrtRSI = { 178,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c8_de_emlrtRSI = { 189,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c8_ee_emlrtRSI = { 210,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRSInfo c8_fe_emlrtRSI = { 14,/* lineNo */
  "cumsum",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"/* pathName */
};

static emlrtRSInfo c8_ge_emlrtRSI = { 16,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c8_he_emlrtRSI = { 32,/* lineNo */
  "useConstantDim",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pathName */
};

static emlrtRSInfo c8_ie_emlrtRSI = { 100,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c8_je_emlrtRSI = { 125,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c8_ke_emlrtRSI = { 290,/* lineNo */
  "cumop",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pathName */
};

static emlrtRSInfo c8_le_emlrtRSI = { 38,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c8_me_emlrtRSI = { 149,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c8_ne_emlrtRSI = { 1511,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_oe_emlrtRSI = { 1696,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_pe_emlrtRSI = { 2068,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_qe_emlrtRSI = { 485,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_re_emlrtRSI = { 1381,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_se_emlrtRSI = { 1372,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_te_emlrtRSI = { 1367,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_ue_emlrtRSI = { 1364,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_ve_emlrtRSI = { 1001,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_we_emlrtRSI = { 999,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_xe_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c8_ye_emlrtRSI = { 39,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c8_af_emlrtRSI = { 113,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo c8_bf_emlrtRSI = { 1350,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_cf_emlrtRSI = { 22,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c8_df_emlrtRSI = { 26,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c8_ef_emlrtRSI = { 273,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c8_ff_emlrtRSI = { 274,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo c8_gf_emlrtRSI = { 16,/* lineNo */
  "round",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elfun\\round.m"/* pathName */
};

static emlrtRSInfo c8_hf_emlrtRSI = { 33,/* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRSInfo c8_if_emlrtRSI = { 37,/* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pathName */
};

static emlrtRSInfo c8_jf_emlrtRSI = { 72,/* lineNo */
  "sort",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pathName */
};

static emlrtRSInfo c8_kf_emlrtRSI = { 104,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_lf_emlrtRSI = { 105,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_mf_emlrtRSI = { 301,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_nf_emlrtRSI = { 309,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_of_emlrtRSI = { 310,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_pf_emlrtRSI = { 318,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_qf_emlrtRSI = { 326,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_rf_emlrtRSI = { 333,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_sf_emlrtRSI = { 381,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_tf_emlrtRSI = { 409,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_uf_emlrtRSI = { 416,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_vf_emlrtRSI = { 576,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_wf_emlrtRSI = { 578,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_xf_emlrtRSI = { 606,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_yf_emlrtRSI = { 488,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_ag_emlrtRSI = { 495,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_bg_emlrtRSI = { 496,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_cg_emlrtRSI = { 503,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_dg_emlrtRSI = { 550,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_eg_emlrtRSI = { 519,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_fg_emlrtRSI = { 347,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_gg_emlrtRSI = { 356,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c8_hg_emlrtRSI = { 39,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c8_ig_emlrtRSI = { 144,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c8_jg_emlrtRSI = { 382,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c8_kg_emlrtRSI = { 402,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c8_lg_emlrtRSI = { 6,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c8_mg_emlrtRSI = { 14,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c8_ng_emlrtRSI = { 16,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c8_og_emlrtRSI = { 32,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c8_pg_emlrtRSI = { 35,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c8_qg_emlrtRSI = { 44,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c8_rg_emlrtRSI = { 72,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c8_sg_emlrtRSI = { 73,/* lineNo */
  "chradiiphcode",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pathName */
};

static emlrtRSInfo c8_tg_emlrtRSI = { 13,/* lineNo */
  "all",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\all.m"/* pathName */
};

static emlrtRSInfo c8_ug_emlrtRSI = { 143,/* lineNo */
  "allOrAny",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo c8_vg_emlrtRSI = { 9,/* lineNo */
  "angle",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elfun\\angle.m"/* pathName */
};

static emlrtRSInfo c8_wg_emlrtRSI = { 74,/* lineNo */
  "applyScalarFunction",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

static emlrtRSInfo c8_xg_emlrtRSI = { 10,/* lineNo */
  "exp",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elfun\\exp.m"/* pathName */
};

static emlrtRTEInfo c8_emlrtRTEI = { 8,/* lineNo */
  1,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c8_b_emlrtRTEI = { 9,/* lineNo */
  1,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c8_c_emlrtRTEI = { 128,/* lineNo */
  57,                                  /* colNo */
  "allOrAny",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pName */
};

static emlrtRTEInfo c8_d_emlrtRTEI = { 43,/* lineNo */
  6,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c8_e_emlrtRTEI = { 51,/* lineNo */
  21,                                  /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c8_f_emlrtRTEI = { 369,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c8_g_emlrtRTEI = { 39,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c8_h_emlrtRTEI = { 51,/* lineNo */
  5,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c8_i_emlrtRTEI = { 52,/* lineNo */
  5,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c8_j_emlrtRTEI = { 69,/* lineNo */
  21,                                  /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c8_k_emlrtRTEI = { 57,/* lineNo */
  9,                                   /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c8_l_emlrtRTEI = { 36,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c8_m_emlrtRTEI = { 37,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c8_n_emlrtRTEI = { 32,/* lineNo */
  35,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_o_emlrtRTEI = { 32,/* lineNo */
  39,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_p_emlrtRTEI = { 16,/* lineNo */
  1,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c8_q_emlrtRTEI = { 32,/* lineNo */
  1,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_r_emlrtRTEI = { 320,/* lineNo */
  20,                                  /* colNo */
  "colon",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pName */
};

static emlrtRTEInfo c8_s_emlrtRTEI = { 78,/* lineNo */
  23,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_t_emlrtRTEI = { 79,/* lineNo */
  31,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_u_emlrtRTEI = { 80,/* lineNo */
  31,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_v_emlrtRTEI = { 81,/* lineNo */
  33,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_w_emlrtRTEI = { 93,/* lineNo */
  25,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_x_emlrtRTEI = { 94,/* lineNo */
  25,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_y_emlrtRTEI = { 96,/* lineNo */
  24,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_ab_emlrtRTEI = { 97,/* lineNo */
  29,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_bb_emlrtRTEI = { 100,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_cb_emlrtRTEI = { 123,/* lineNo */
  29,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_db_emlrtRTEI = { 124,/* lineNo */
  29,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_eb_emlrtRTEI = { 125,/* lineNo */
  28,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_fb_emlrtRTEI = { 195,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c8_gb_emlrtRTEI = { 197,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c8_hb_emlrtRTEI = { 253,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c8_ib_emlrtRTEI = { 254,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c8_jb_emlrtRTEI = { 33,/* lineNo */
  1,                                   /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c8_kb_emlrtRTEI = { 35,/* lineNo */
  23,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c8_lb_emlrtRTEI = { 10,/* lineNo */
  1,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_mb_emlrtRTEI = { 11,/* lineNo */
  1,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_nb_emlrtRTEI = { 40,/* lineNo */
  5,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_ob_emlrtRTEI = { 42,/* lineNo */
  21,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_pb_emlrtRTEI = { 48,/* lineNo */
  13,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_qb_emlrtRTEI = { 26,/* lineNo */
  13,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo c8_rb_emlrtRTEI = { 53,/* lineNo */
  44,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_sb_emlrtRTEI = { 53,/* lineNo */
  64,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_tb_emlrtRTEI = { 53,/* lineNo */
  18,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_ub_emlrtRTEI = { 53,/* lineNo */
  9,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_vb_emlrtRTEI = { 55,/* lineNo */
  33,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_wb_emlrtRTEI = { 38,/* lineNo */
  5,                                   /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"/* pName */
};

static emlrtRTEInfo c8_xb_emlrtRTEI = { 55,/* lineNo */
  10,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_yb_emlrtRTEI = { 56,/* lineNo */
  19,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_ac_emlrtRTEI = { 56,/* lineNo */
  9,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_bc_emlrtRTEI = { 477,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_cc_emlrtRTEI = { 478,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_dc_emlrtRTEI = { 17,/* lineNo */
  25,                                  /* colNo */
  "cumop",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\cumop.m"/* pName */
};

static emlrtRTEInfo c8_ec_emlrtRTEI = { 485,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_fc_emlrtRTEI = { 488,/* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_gc_emlrtRTEI = { 48,/* lineNo */
  27,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_hc_emlrtRTEI = { 49,/* lineNo */
  25,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_ic_emlrtRTEI = { 50,/* lineNo */
  28,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_jc_emlrtRTEI = { 55,/* lineNo */
  1,                                   /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_kc_emlrtRTEI = { 37,/* lineNo */
  5,                                   /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_lc_emlrtRTEI = { 38,/* lineNo */
  5,                                   /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_mc_emlrtRTEI = { 39,/* lineNo */
  5,                                   /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_nc_emlrtRTEI = { 40,/* lineNo */
  5,                                   /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_oc_emlrtRTEI = { 53,/* lineNo */
  35,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_pc_emlrtRTEI = { 69,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_qc_emlrtRTEI = { 83,/* lineNo */
  32,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_rc_emlrtRTEI = { 84,/* lineNo */
  46,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_sc_emlrtRTEI = { 84,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_tc_emlrtRTEI = { 100,/* lineNo */
  23,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_uc_emlrtRTEI = { 101,/* lineNo */
  46,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_vc_emlrtRTEI = { 101,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_wc_emlrtRTEI = { 103,/* lineNo */
  5,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_xc_emlrtRTEI = { 46,/* lineNo */
  5,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_yc_emlrtRTEI = { 47,/* lineNo */
  5,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_ad_emlrtRTEI = { 48,/* lineNo */
  5,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_bd_emlrtRTEI = { 26,/* lineNo */
  20,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_cd_emlrtRTEI = { 26,/* lineNo */
  37,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_dd_emlrtRTEI = { 26,/* lineNo */
  54,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_ed_emlrtRTEI = { 32,/* lineNo */
  9,                                   /* colNo */
  "useConstantDim",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\useConstantDim.m"/* pName */
};

static emlrtRTEInfo c8_fd_emlrtRTEI = { 41,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c8_gd_emlrtRTEI = { 1,/* lineNo */
  14,                                  /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c8_hd_emlrtRTEI = { 102,/* lineNo */
  25,                                  /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c8_id_emlrtRTEI = { 157,/* lineNo */
  25,                                  /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c8_jd_emlrtRTEI = { 63,/* lineNo */
  9,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c8_kd_emlrtRTEI = { 1968,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_ld_emlrtRTEI = { 1972,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_md_emlrtRTEI = { 1991,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_nd_emlrtRTEI = { 1995,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_od_emlrtRTEI = { 2012,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_pd_emlrtRTEI = { 2063,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_qd_emlrtRTEI = { 2068,/* lineNo */
  1,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_rd_emlrtRTEI = { 1359,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_sd_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "round",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elfun\\round.m"/* pName */
};

static emlrtRTEInfo c8_td_emlrtRTEI = { 1,/* lineNo */
  20,                                  /* colNo */
  "sort",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"/* pName */
};

static emlrtRTEInfo c8_ud_emlrtRTEI = { 561,/* lineNo */
  20,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c8_vd_emlrtRTEI = { 471,/* lineNo */
  32,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c8_wd_emlrtRTEI = { 509,/* lineNo */
  32,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c8_xd_emlrtRTEI = { 72,/* lineNo */
  30,                                  /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c8_yd_emlrtRTEI = { 73,/* lineNo */
  9,                                   /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c8_ae_emlrtRTEI = { 14,/* lineNo */
  62,                                  /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c8_be_emlrtRTEI = { 14,/* lineNo */
  82,                                  /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c8_ce_emlrtRTEI = { 14,/* lineNo */
  18,                                  /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c8_de_emlrtRTEI = { 30,/* lineNo */
  21,                                  /* colNo */
  "applyScalarFunction",               /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pName */
};

static emlrtRTEInfo c8_ee_emlrtRTEI = { 998,/* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_fe_emlrtRTEI = { 1003,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_ge_emlrtRTEI = { 999,/* lineNo */
  41,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_he_emlrtRTEI = { 13,/* lineNo */
  1,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c8_ie_emlrtRTEI = { 25,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c8_je_emlrtRTEI = { 26,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c8_ke_emlrtRTEI = { 21,/* lineNo */
  5,                                   /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtRTEInfo c8_le_emlrtRTEI = { 121,/* lineNo */
  9,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c8_me_emlrtRTEI = { 128,/* lineNo */
  30,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c8_ne_emlrtRTEI = { 39,/* lineNo */
  5,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c8_oe_emlrtRTEI = { 1001,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_pe_emlrtRTEI = { 1349,/* lineNo */
  57,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_qe_emlrtRTEI = { 1349,/* lineNo */
  47,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_re_emlrtRTEI = { 1350,/* lineNo */
  33,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_se_emlrtRTEI = { 1351,/* lineNo */
  27,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_te_emlrtRTEI = { 1371,/* lineNo */
  9,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_ue_emlrtRTEI = { 1381,/* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_ve_emlrtRTEI = { 61,/* lineNo */
  5,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c8_we_emlrtRTEI = { 296,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c8_xe_emlrtRTEI = { 298,/* lineNo */
  24,                                  /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtRTEInfo c8_ye_emlrtRTEI = { 6,/* lineNo */
  6,                                   /* colNo */
  "MATLAB Function6",                  /* fName */
  "#untitled:53"                       /* pName */
};

static emlrtRTEInfo c8_af_emlrtRTEI = { 1,/* lineNo */
  43,                                  /* colNo */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pName */
};

static emlrtRTEInfo c8_bf_emlrtRTEI = { 31,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c8_cf_emlrtRTEI = { 79,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_df_emlrtRTEI = { 80,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_ef_emlrtRTEI = { 81,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_ff_emlrtRTEI = { 93,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_gf_emlrtRTEI = { 94,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_hf_emlrtRTEI = { 96,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_if_emlrtRTEI = { 97,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_jf_emlrtRTEI = { 123,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_kf_emlrtRTEI = { 124,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_lf_emlrtRTEI = { 125,/* lineNo */
  5,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_mf_emlrtRTEI = { 78,/* lineNo */
  17,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_nf_emlrtRTEI = { 1,/* lineNo */
  39,                                  /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_of_emlrtRTEI = { 32,/* lineNo */
  8,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtRTEInfo c8_pf_emlrtRTEI = { 16,/* lineNo */
  14,                                  /* colNo */
  "sub2ind",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\sub2ind.m"/* pName */
};

static emlrtRTEInfo c8_qf_emlrtRTEI = { 36,/* lineNo */
  1,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_rf_emlrtRTEI = { 1,/* lineNo */
  30,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_sf_emlrtRTEI = { 53,/* lineNo */
  21,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_tf_emlrtRTEI = { 53,/* lineNo */
  58,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_uf_emlrtRTEI = { 35,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_vf_emlrtRTEI = { 109,/* lineNo */
  2,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_wf_emlrtRTEI = { 402,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_xf_emlrtRTEI = { 415,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_yf_emlrtRTEI = { 416,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_ag_emlrtRTEI = { 1,/* lineNo */
  15,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_bg_emlrtRTEI = { 53,/* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtRTEInfo c8_cg_emlrtRTEI = { 51,/* lineNo */
  48,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_dg_emlrtRTEI = { 51,/* lineNo */
  57,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_eg_emlrtRTEI = { 51,/* lineNo */
  64,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_fg_emlrtRTEI = { 114,/* lineNo */
  55,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m"/* pName */
};

static emlrtRTEInfo c8_gg_emlrtRTEI = { 1947,/* lineNo */
  5,                                   /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_hg_emlrtRTEI = { 14,/* lineNo */
  30,                                  /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c8_ig_emlrtRTEI = { 14,/* lineNo */
  76,                                  /* colNo */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m"/* pName */
};

static emlrtRTEInfo c8_jg_emlrtRTEI = { 999,/* lineNo */
  17,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_kg_emlrtRTEI = { 998,/* lineNo */
  13,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_lg_emlrtRTEI = { 1001,/* lineNo */
  34,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtRTEInfo c8_mg_emlrtRTEI = { 116,/* lineNo */
  1,                                   /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtRTEInfo c8_ng_emlrtRTEI = { 298,/* lineNo */
  1,                                   /* colNo */
  "sortIdx",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pName */
};

static emlrtBCInfo c8_emlrtBCI = { 1,  /* iFirst */
  695,                                 /* iLast */
  156,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_b_emlrtBCI = { 1,/* iFirst */
  751,                                 /* iLast */
  156,                                 /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "imfindcircles",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c8_og_emlrtRTEI = { 77,/* lineNo */
  9,                                   /* colNo */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pName */
};

static emlrtBCInfo c8_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  85,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  85,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_k_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_l_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  110,                                 /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_o_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_p_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  104,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  132,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_t_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  110,                                 /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_u_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  64,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  24,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_y_emlrtBCI = { 1,/* iFirst */
  695,                                 /* iLast */
  151,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_bb_emlrtBCI = { 1,/* iFirst */
  751,                                 /* iLast */
  151,                                 /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_cb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  43,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_db_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_eb_emlrtBCI = { 1,/* iFirst */
  695,                                 /* iLast */
  151,                                 /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_fb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_gb_emlrtBCI = { 1,/* iFirst */
  751,                                 /* iLast */
  151,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c8_hb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ib_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_jb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  105,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_kb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_lb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  38,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_mb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  61,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_nb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  84,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ob_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  107,                                 /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_pb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_qb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  111,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_rb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "chaccum",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_sb_emlrtBCI = { 1,/* iFirst */
  521945,                              /* iLast */
  1055,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_tb_emlrtBCI = { 1,/* iFirst */
  521945,                              /* iLast */
  1056,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ub_emlrtBCI = { 1,/* iFirst */
  521945,                              /* iLast */
  1057,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_vb_emlrtBCI = { 1,/* iFirst */
  521945,                              /* iLast */
  1058,                                /* lineNo */
  48,                                  /* colNo */
  "",                                  /* aName */
  "imhist",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imhist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_wb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c8_emlrtECI = { -1, /* nDims */
  42,                                  /* lineNo */
  9,                                   /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtRTEInfo c8_pg_emlrtRTEI = { 46,/* lineNo */
  15,                                  /* colNo */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pName */
};

static emlrtBCInfo c8_xb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_yb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ac_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_bc_emlrtBCI = { 1,/* iFirst */
  521945,                              /* iLast */
  53,                                  /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_cc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "chcenters",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_dc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  488,                                 /* lineNo */
  73,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ec_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  488,                                 /* lineNo */
  59,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_fc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2124,                                /* lineNo */
  56,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_gc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2126,                                /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_hc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2127,                                /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ic_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  2127,                                /* lineNo */
  55,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_jc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  488,                                 /* lineNo */
  68,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_kc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  488,                                 /* lineNo */
  82,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_lc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  488,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_mc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  51,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_nc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo c8_qg_emlrtRTEI = { 102,/* lineNo */
  9,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m"/* pName */
};

static emlrtBCInfo c8_oc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_pc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_qc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  234,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_rc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_emlrtDCI = { 69, /* lineNo */
  1,                                   /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c8_sc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_tc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_uc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  238,                                 /* lineNo */
  16,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_vc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  86,                                  /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_wc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  44,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_xc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_yc_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ad_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  62,                                  /* lineNo */
  26,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_bd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  130,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_cd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_dd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ed_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_fd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  66,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_gd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  80,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_hd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_id_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_jd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_kd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  58,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ld_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_md_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_nd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_od_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  62,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_pd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  76,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_qd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_rd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  181,                                 /* lineNo */
  23,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_sd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_td_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ud_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_vd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_b_emlrtDCI = { 83,/* lineNo */
  38,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c8_c_emlrtDCI = { 83,/* lineNo */
  38,                                  /* colNo */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c8_wd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  170,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_xd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  167,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_yd_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  171,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ae_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  168,                                 /* lineNo */
  12,                                  /* colNo */
  "",                                  /* aName */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_be_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  82,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ce_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  90,                                  /* lineNo */
  52,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_de_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ee_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_fe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  46,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ge_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  60,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_he_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  94,                                  /* lineNo */
  63,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ie_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  94,                                  /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_je_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ke_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c8_d_emlrtDCI = { 48,/* lineNo */
  33,                                  /* colNo */
  "intermediateLabelRuns",             /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\+images\\+internal\\+coder\\intermediateLabelRuns.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo c8_le_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  5,                                   /* colNo */
  "",                                  /* aName */
  "bwconncomp",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\bwconncomp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_me_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  72,                                  /* colNo */
  "",                                  /* aName */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ne_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  92,                                  /* colNo */
  "",                                  /* aName */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_oe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  72,                                  /* lineNo */
  40,                                  /* colNo */
  "",                                  /* aName */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_pe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  73,                                  /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_qe_emlrtBCI = { 1,/* iFirst */
  521945,                              /* iLast */
  14,                                  /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "chradiiphcode",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chradiiphcode.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c8_b_emlrtECI = { 1,/* nDims */
  1381,                                /* lineNo */
  21,                                  /* colNo */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pName */
};

static emlrtBCInfo c8_re_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1373,                                /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_se_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1352,                                /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_te_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1349,                                /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ue_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1003,                                /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ve_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1381,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_we_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1001,                                /* lineNo */
  19,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_xe_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1385,                                /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ye_emlrtBCI = { 1,/* iFirst */
  695,                                 /* iLast */
  1352,                                /* lineNo */
  45,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_af_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1352,                                /* lineNo */
  47,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_bf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1352,                                /* lineNo */
  54,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_cf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1352,                                /* lineNo */
  34,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_df_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  998,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ef_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1349,                                /* lineNo */
  57,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_ff_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  999,                                 /* lineNo */
  41,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_gf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1371,                                /* lineNo */
  9,                                   /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_hf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1371,                                /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_if_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1350,                                /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_jf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1351,                                /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c8_kf_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1001,                                /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "regionprops",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo c8_yg_emlrtRSI = { 1995,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_ah_emlrtRSI = { 56,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c8_bh_emlrtRSI = { 40,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c8_ch_emlrtRSI = { 11,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c8_dh_emlrtRSI = { 10,/* lineNo */
  "chcenters",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chcenters.m"/* pathName */
};

static emlrtRSInfo c8_eh_emlrtRSI = { 57,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c8_fh_emlrtRSI = { 52,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c8_gh_emlrtRSI = { 9,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c8_hh_emlrtRSI = { 8,/* lineNo */
  "imfindcircles",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\imfindcircles.m"/* pathName */
};

static emlrtRSInfo c8_ih_emlrtRSI = { 125,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_jh_emlrtRSI = { 41,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c8_kh_emlrtRSI = { 97,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_lh_emlrtRSI = { 35,/* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c8_mh_emlrtRSI = { 33,/* lineNo */
  "sub2ind",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\sub2ind.m"/* pathName */
};

static emlrtRSInfo c8_nh_emlrtRSI = { 124,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_oh_emlrtRSI = { 123,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_ph_emlrtRSI = { 1371,/* lineNo */
  "regionprops",                       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\regionprops.m"/* pathName */
};

static emlrtRSInfo c8_qh_emlrtRSI = { 81,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_rh_emlrtRSI = { 80,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_sh_emlrtRSI = { 79,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_th_emlrtRSI = { 100,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_uh_emlrtRSI = { 94,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_vh_emlrtRSI = { 93,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_wh_emlrtRSI = { 96,/* lineNo */
  "chaccum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\images\\images\\eml\\private\\chaccum.m"/* pathName */
};

static emlrtRSInfo c8_xh_emlrtRSI = { 102,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c8_yh_emlrtRSI = { 63,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static creal_T c8_dc = { 0.0,          /* re */
  0.0                                  /* im */
};

static char_T c8_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
  't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F', 'a',
  'i', 'l', 'e', 'd' };

static char_T c8_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o',
  'n', 'N', 'a', 'N' };

static char_T c8_cv2[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
  'x', 's', 'i', 'z', 'e' };

static char_T c8_cv3[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
  'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

static char_T c8_cv4[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
  'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n', 'p',
  'u', 't' };

/* Function Declarations */
static void initialize_c8_untitled(SFc8_untitledInstanceStruct *chartInstance);
static void initialize_params_c8_untitled(SFc8_untitledInstanceStruct
  *chartInstance);
static void mdl_start_c8_untitled(SFc8_untitledInstanceStruct *chartInstance);
static void mdl_terminate_c8_untitled(SFc8_untitledInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c8_untitled(SFc8_untitledInstanceStruct *
  chartInstance);
static void mdl_cleanup_runtime_resources_c8_untitled
  (SFc8_untitledInstanceStruct *chartInstance);
static void enable_c8_untitled(SFc8_untitledInstanceStruct *chartInstance);
static void disable_c8_untitled(SFc8_untitledInstanceStruct *chartInstance);
static void sf_gateway_c8_untitled(SFc8_untitledInstanceStruct *chartInstance);
static void ext_mode_exec_c8_untitled(SFc8_untitledInstanceStruct *chartInstance);
static void c8_update_jit_animation_c8_untitled(SFc8_untitledInstanceStruct
  *chartInstance);
static void c8_do_animation_call_c8_untitled(SFc8_untitledInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c8_untitled(SFc8_untitledInstanceStruct
  *chartInstance);
static void set_sim_state_c8_untitled(SFc8_untitledInstanceStruct *chartInstance,
  const mxArray *c8_st);
static void c8_imfilter(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_b_varargin_1[521945], real32_T c8_b[521945]);
static void c8_padImage(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_a_tmp[521945], real32_T c8_a[527745]);
static void c8_b_imfilter(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_b_varargin_1[521945], real32_T c8_b[521945]);
static void c8_b_padImage(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_a_tmp[521945], real32_T c8_a[524841]);
static void c8_c_imfilter(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_b_varargin_1[521945], real32_T c8_b[521945]);
static void c8_imfindcircles(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, boolean_T c8_b_varargin_1[521945], c8_coder_array_real_T_2D
  *c8_centers, c8_coder_array_real_T_2D *c8_r_estimated);
static void c8_chaccum(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, boolean_T c8_b_varargin_1[521945], creal_T
  c8_c_accumMatrix[521945], real32_T c8_b_gradientImg[521945]);
static real_T c8_graythresh(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_c_I[521945]);
static void c8_warning(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp);
static void c8_b_warning(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp);
static void c8_eml_find(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, boolean_T c8_c_x[521945], c8_coder_array_int32_T *c8_i,
  c8_coder_array_int32_T *c8_j);
static void c8_indexShapeCheck(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, int32_T c8_matrixSize, int32_T c8_indexSize[2]);
static void c8_sub2ind(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_real_T *c8_b_varargin_1,
  c8_coder_array_real_T *c8_b_varargin_2, c8_coder_array_int32_T *c8_idx);
static boolean_T c8_allinrange(SFc8_untitledInstanceStruct *chartInstance,
  c8_coder_array_real_T *c8_c_x, int32_T c8_hi);
static void c8_check_forloop_overflow_error(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp);
static void c8_chcenters(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, creal_T c8_b_varargin_1[521945], c8_coder_array_real_T_2D
  *c8_centers, c8_coder_array_real_T_2D *c8_metric);
static void c8_medfilt2(SFc8_untitledInstanceStruct *chartInstance, real_T
  c8_b_varargin_1[521945], real_T c8_b[521945]);
static void c8_imhmax(SFc8_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c8_sp, real_T c8_c_I[521945], real_T c8_J
                      [521945]);
static void c8_validateattributes(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, real_T c8_a[521945]);
static void c8_imregionalmax(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_b_varargin_1[521945], boolean_T c8_BW[521945]);
static void c8_regionprops(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, boolean_T c8_b_varargin_1[521945], real_T c8_b_varargin_2
  [521945], c8_coder_array_sOA5t73y81YtFHGIDxk *c8_outstats);
static void c8_bwconncomp(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, boolean_T c8_b_varargin_1[521945],
  c8_s_sEiEW7j64quwNy6wT5PWYC *c8_CC);
static real_T c8_sumColumnB(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T *c8_c_x, int32_T c8_vlen);
static real_T c8_sumColumnB4(SFc8_untitledInstanceStruct *chartInstance,
  c8_coder_array_int32_T *c8_c_x, int32_T c8_vstart);
static real_T c8_b_sumColumnB(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T *c8_c_x, int32_T c8_vlen, int32_T
  c8_vstart);
static void c8_useConstantDim(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T *c8_b_varargin_2, int32_T
  c8_varargin_3, c8_coder_array_int32_T *c8_varargout_1);
static void c8_repmat(SFc8_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c8_sp, c8_cell_wrap_37 c8_a[1], real_T
                      c8_b_varargin_2, c8_coder_array_cell_wrap_37_2D *c8_b);
static void c8_b_repmat(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_b_varargin_1, c8_coder_array_sOA5t73y81YtFHGIDxk *
  c8_b);
static void c8_assertValidSizeArg(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, real_T c8_b_varargin_1);
static void c8_initializeStatsStruct(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, real_T c8_numObjs, c8_coder_array_s_R6Og1x0kmqQXSF9Pw
  *c8_stats, c8_sHtk0WM4OMtyqkehwQYcq2 *c8_statsAlreadyComputed);
static void c8_ComputeWeightedCentroid(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, real_T c8_c_I[521945],
  c8_coder_array_s_R6Og1x0kmqQXSF9Pw *c8_stats, c8_sHtk0WM4OMtyqkehwQYcq2
  c8_statsAlreadyComputed, c8_coder_array_s_R6Og1x0kmqQXSF9Pw *c8_b_stats,
  c8_sHtk0WM4OMtyqkehwQYcq2 *c8_b_statsAlreadyComputed);
static real_T c8_sum(SFc8_untitledInstanceStruct *chartInstance, const
                     emlrtStack *c8_sp, c8_coder_array_real_T *c8_c_x);
static real_T c8_c_sumColumnB(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_real_T *c8_c_x, int32_T c8_vlen);
static real_T c8_b_sumColumnB4(SFc8_untitledInstanceStruct *chartInstance,
  c8_coder_array_real_T *c8_c_x, int32_T c8_vstart);
static real_T c8_d_sumColumnB(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_real_T *c8_c_x, int32_T c8_vlen, int32_T
  c8_vstart);
static void c8_round(SFc8_untitledInstanceStruct *chartInstance, const
                     emlrtStack *c8_sp, c8_coder_array_real_T *c8_c_x,
                     c8_coder_array_real_T *c8_y);
static void c8_sort(SFc8_untitledInstanceStruct *chartInstance, const emlrtStack
                    *c8_sp, c8_coder_array_real_T_2D *c8_c_x,
                    c8_coder_array_real_T_2D *c8_d_x, c8_coder_array_int32_T_2D *
                    c8_idx);
static void c8_merge_pow2_block(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx,
  c8_coder_array_real_T_2D *c8_c_x, int32_T c8_offset, c8_coder_array_int32_T_2D
  *c8_b_idx, c8_coder_array_real_T_2D *c8_d_x);
static void c8_merge_block(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx, c8_coder_array_real_T_2D
  *c8_c_x, int32_T c8_offset, int32_T c8_n, int32_T c8_preSortLevel,
  c8_coder_array_int32_T *c8_iwork, c8_coder_array_real_T *c8_xwork,
  c8_coder_array_int32_T_2D *c8_b_idx, c8_coder_array_real_T_2D *c8_d_x,
  c8_coder_array_int32_T *c8_b_iwork, c8_coder_array_real_T *c8_b_xwork);
static void c8_merge(SFc8_untitledInstanceStruct *chartInstance, const
                     emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx,
                     c8_coder_array_real_T_2D *c8_c_x, int32_T c8_offset,
                     int32_T c8_np, int32_T c8_nq, c8_coder_array_int32_T
                     *c8_iwork, c8_coder_array_real_T *c8_xwork,
                     c8_coder_array_int32_T_2D *c8_b_idx,
                     c8_coder_array_real_T_2D *c8_d_x, c8_coder_array_int32_T
                     *c8_b_iwork, c8_coder_array_real_T *c8_b_xwork);
static void c8_chradiiphcode(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_real_T_2D *c8_b_varargin_1, creal_T
  c8_b_varargin_2[521945], c8_coder_array_real_T *c8_r_estimated);
static boolean_T c8_all(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_boolean_T *c8_c_x);
static void c8_angle(SFc8_untitledInstanceStruct *chartInstance, const
                     emlrtStack *c8_sp, c8_coder_array_creal_T *c8_c_x,
                     c8_coder_array_real_T *c8_y);
static real_T c8_emlrt_marshallIn(SFc8_untitledInstanceStruct *chartInstance,
  const mxArray *c8_nullptr, const char_T *c8_identifier);
static real_T c8_b_emlrt_marshallIn(SFc8_untitledInstanceStruct *chartInstance,
  const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_slStringInitializeDynamicBuffers(SFc8_untitledInstanceStruct
  *chartInstance);
static void c8_chart_data_browse_helper(SFc8_untitledInstanceStruct
  *chartInstance, int32_T c8_ssIdNumber, const mxArray **c8_mxData, uint8_T
  *c8_isValueTooBig);
static const mxArray *c8_feval(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, const mxArray *c8_input0, const mxArray *c8_input1);
static void c8_b_feval(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, const mxArray *c8_input0, const mxArray *c8_input1);
static const mxArray *c8_c_feval(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, const mxArray *c8_input0, const mxArray *c8_input1);
static void c8_d_feval(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, const mxArray *c8_input0, const mxArray *c8_input1);
static void c8_b_ComputeWeightedCentroid(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, real_T c8_c_I[521945],
  c8_coder_array_s_R6Og1x0kmqQXSF9Pw *c8_stats, c8_sHtk0WM4OMtyqkehwQYcq2
  *c8_statsAlreadyComputed);
static void c8_b_sort(SFc8_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c8_sp, c8_coder_array_real_T_2D *c8_c_x,
                      c8_coder_array_int32_T_2D *c8_idx);
static void c8_b_merge_pow2_block(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx,
  c8_coder_array_real_T_2D *c8_c_x, int32_T c8_offset);
static void c8_b_merge_block(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx, c8_coder_array_real_T_2D
  *c8_c_x, int32_T c8_offset, int32_T c8_n, int32_T c8_preSortLevel,
  c8_coder_array_int32_T *c8_iwork, c8_coder_array_real_T *c8_xwork);
static void c8_b_merge(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx, c8_coder_array_real_T_2D
  *c8_c_x, int32_T c8_offset, int32_T c8_np, int32_T c8_nq,
  c8_coder_array_int32_T *c8_iwork, c8_coder_array_real_T *c8_xwork);
static real_T c8_binary_expand_op(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, emlrtRSInfo c8_in1, c8_coder_array_real_T *c8_in2,
  c8_coder_array_real_T *c8_in3);
static void c8_array_real_T_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_real_T_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1);
static void c8_array_creal_T_SetSize(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_creal_T *c8_coderArray, const
  emlrtRTEInfo *c8_srcLocation, int32_T c8_size0);
static void c8_array_boolean_T_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_boolean_T_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1);
static void c8_array_int32_T_SetSize(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_int32_T *c8_coderArray, const
  emlrtRTEInfo *c8_srcLocation, int32_T c8_size0);
static void c8_array_real_T_SetSize(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_real_T *c8_coderArray, const
  emlrtRTEInfo *c8_srcLocation, int32_T c8_size0);
static void c8_array_boolean_T_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_boolean_T
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0);
static void c8_array_real32_T_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_real32_T_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1);
static void c8_array_creal_T_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_creal_T_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1);
static void c8_array_cell_wrap_37_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_cell_wrap_37_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1);
static void c8_array_real_T_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real_T *c8_coderArray);
static void c8_array_cell_wrap_37_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 *c8_pStruct);
static void c8_array_cell_wrap_37_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 *c8_pStruct);
static void c8_array_real_T_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real_T *c8_coderArray);
static void c8_array_sOA5t73y81YtFHGIDxk0fKF_S(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_sOA5t73y81YtFHGIDxk
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0);
static void c8_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_s_R6Og1x0kmqQXSF9Pw
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0);
static void c8_b_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, c8_s_R6Og1x0kmqQXSF9Pwa49FD *c8_pStruct);
static void c8_array_real_T_2D_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real_T_2D *c8_coderArray);
static void c8_c_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, c8_s_R6Og1x0kmqQXSF9Pwa49FD *c8_pStruct);
static void c8_array_boolean_T_0x0_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_boolean_T_0x0 *c8_pArray);
static void c8_array_real_T_2D_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real_T_2D *c8_coderArray);
static void c8_array_real_T_1x0_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real_T_1x0 *c8_pArray);
static void c8_array_int32_T_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_int32_T_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1);
static void c8_array_boolean_T_2D_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_boolean_T_2D *c8_coderArray);
static void c8_array_int32_T_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_int32_T *c8_coderArray);
static void c8_array_creal_T_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_creal_T *c8_coderArray);
static void c8_array_boolean_T_2D_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_boolean_T_2D *c8_coderArray);
static void c8_array_int32_T_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_int32_T *c8_coderArray);
static void c8_array_creal_T_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_creal_T *c8_coderArray);
static void c8_array_real32_T_2D_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real32_T_2D *c8_coderArray);
static void c8_array_creal_T_2D_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_creal_T_2D *c8_coderArray);
static void c8_array_boolean_T_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_boolean_T *c8_coderArray);
static void c8_array_real32_T_2D_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real32_T_2D *c8_coderArray);
static void c8_array_creal_T_2D_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_creal_T_2D *c8_coderArray);
static void c8_array_boolean_T_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_boolean_T *c8_coderArray);
static void c8_array_sOA5t73y81YtFHGIDxk0fKF_C(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_sOA5t73y81YtFHGIDxk *c8_coderArray);
static void c8_array_int32_T_2D_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_int32_T_2D *c8_coderArray);
static void c8_array_sOA5t73y81YtFHGIDxk0fKF_D(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_sOA5t73y81YtFHGIDxk *c8_coderArray);
static void c8_array_int32_T_2D_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_int32_T_2D *c8_coderArray);
static void c8_array_s_sEiEW7j64quwNy6wT5PWYC_(SFc8_untitledInstanceStruct
  *chartInstance, c8_s_sEiEW7j64quwNy6wT5PWYC *c8_pStruct);
static void c8_array_cell_wrap_37_2D_Construct(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_cell_wrap_37_2D *c8_coderArray);
static void c8_d_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_s_R6Og1x0kmqQXSF9Pw *c8_coderArray);
static void c8_b_array_s_sEiEW7j64quwNy6wT5PWYC_(SFc8_untitledInstanceStruct
  *chartInstance, c8_s_sEiEW7j64quwNy6wT5PWYC *c8_pStruct);
static void c8_array_cell_wrap_37_2D_Destructo(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_cell_wrap_37_2D *c8_coderArray);
static void c8_e_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_s_R6Og1x0kmqQXSF9Pw *c8_coderArray);
static void c8_array_cell_wrap_37_Copy(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_cell_wrap_37 *c8_dst, const
  c8_cell_wrap_37 *c8_src, const emlrtRTEInfo *c8_srcLocation);
static void c8_array_real_T_Copy(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_real_T *c8_dst, const
  c8_coder_array_real_T *c8_src, const emlrtRTEInfo *c8_srcLocation);
static void c8_array_cell_wrap_37_1s_Construct(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 c8_pMatrix[1]);
static void c8_array_cell_wrap_37_1s_Destructo(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 c8_pMatrix[1]);
static void c8_f_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_s_R6Og1x0kmqQXSF9Pwa49FD *c8_dst,
  const c8_s_R6Og1x0kmqQXSF9Pwa49FD *c8_src, const emlrtRTEInfo *c8_srcLocation);
static void c8_array_real_T_1x2s_Copy(SFc8_untitledInstanceStruct *chartInstance,
  real_T c8_dst[2], const real_T c8_src[2]);
static void c8_array_real_T_1x4s_Copy(SFc8_untitledInstanceStruct *chartInstance,
  real_T c8_dst[4], const real_T c8_src[4]);
static void c8_array_boolean_T_0x0_Copy(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_boolean_T_0x0 *c8_dst,
  const c8_coder_array_boolean_T_0x0 *c8_src, const emlrtRTEInfo *c8_srcLocation);
static void c8_array_boolean_T_0x0_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, int32_T c8_size[2], const
  emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T c8_size1);
static void c8_array_real_T_8x2s_Copy(SFc8_untitledInstanceStruct *chartInstance,
  real_T c8_dst[16], const real_T c8_src[16]);
static void c8_array_real_T_2D_Copy(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_real_T_2D *c8_dst, const
  c8_coder_array_real_T_2D *c8_src, const emlrtRTEInfo *c8_srcLocation);
static void c8_array_real_T_1x0_Copy(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_real_T_1x0 *c8_dst, const
  c8_coder_array_real_T_1x0 *c8_src, const emlrtRTEInfo *c8_srcLocation);
static void c8_array_real_T_1x0_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, int32_T c8_size[2], const
  emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T c8_size1);
static void c8_array_cell_wrap_37_2s_Construct(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 c8_pMatrix[2]);
static void c8_array_cell_wrap_37_2s_Destructo(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 c8_pMatrix[2]);
static int32_T c8_div_nzp_s32(SFc8_untitledInstanceStruct *chartInstance,
  int32_T c8_numerator, int32_T c8_denominator, int32_T c8_EMLOvCount_src_loc,
  uint32_T c8_ssid_src_loc, int32_T c8_offset_src_loc, int32_T c8_length_src_loc);
static void init_dsm_address_info(SFc8_untitledInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc8_untitledInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c8_untitled(SFc8_untitledInstanceStruct *chartInstance)
{
  emlrtStack c8_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c8_st.tls = chartInstance->c8_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c8_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c8_doneDoubleBufferReInit = false;
  chartInstance->c8_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c8_untitled(SFc8_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c8_untitled(SFc8_untitledInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c8_untitled(SFc8_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c8_untitled(SFc8_untitledInstanceStruct *
  chartInstance)
{
  static const int32_T c8_postfixPredicateTree[2] = { 0, -1 };

  static const int32_T c8_condTxtEndIdx[1] = { 351 };

  static const int32_T c8_condTxtStartIdx[1] = { 335 };

  static const uint32_T c8_decisionTxtEndIdx = 0U;
  static const uint32_T c8_decisionTxtStartIdx = 0U;
  setDataBrowseFcn(chartInstance->S, (void *)&c8_chart_data_browse_helper);
  chartInstance->c8_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c8_RuntimeVar,
    &chartInstance->c8_IsDebuggerActive,
    &chartInstance->c8_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c8_mlFcnLineNumber, &chartInstance->c8_IsHeatMapPresent, 0);
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c8_JITStateAnimation[0],
                        &chartInstance->c8_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c8_covrtInstance, 1U, 0U, 1U,
    25U);
  covrtChartInitFcn(chartInstance->c8_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c8_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c8_decisionTxtStartIdx, &c8_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c8_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c8_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 1U, 1U);
  covrtEmlFcnInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, "c8_untitled",
                     0, -1, 426);
  covrtEmlIfInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, 331, 351, 383,
                    422, false);
  covrtEmlMCDCInitFcn(chartInstance->c8_covrtInstance, 4U, 0U, 0U, 334, 351, 1U,
                      0U, &c8_condTxtStartIdx[0], &c8_condTxtEndIdx[0], 2U,
                      &c8_postfixPredicateTree[0], false);
}

static void mdl_cleanup_runtime_resources_c8_untitled
  (SFc8_untitledInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c8_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c8_covrtInstance);
}

static void enable_c8_untitled(SFc8_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c8_untitled(SFc8_untitledInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c8_untitled(SFc8_untitledInstanceStruct *chartInstance)
{
  c8_coder_array_real_T_2D c8_a__1;
  c8_coder_array_real_T_2D c8_centers;
  emlrtStack c8_b_st;
  emlrtStack c8_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c8_b_circle_detect;
  int32_T c8_i;
  int32_T c8_i1;
  boolean_T c8_b;
  boolean_T c8_b1;
  c8_st.tls = chartInstance->c8_fEmlrtCtx;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  for (c8_i = 0; c8_i < 521945; c8_i++) {
    covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 0U, (real_T)
                      (*chartInstance->c8_image)[c8_i]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c8_JITTransitionAnimation[0] = 0U;
  chartInstance->c8_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c8_covrtInstance, 4U, 0, 0);
  c8_array_real_T_2D_Constructor(chartInstance, &c8_centers);
  c8_array_real_T_2D_Constructor(chartInstance, &c8_a__1);
  c8_b_st.site = &c8_emlrtRSI;
  for (c8_i1 = 0; c8_i1 < 521945; c8_i1++) {
    chartInstance->c8_bv[c8_i1] = (*chartInstance->c8_image)[c8_i1];
  }

  c8_imfindcircles(chartInstance, &c8_b_st, chartInstance->c8_bv, &c8_centers,
                   &c8_a__1);
  c8_array_real_T_2D_Destructor(chartInstance, &c8_a__1);
  c8_b = (c8_centers.size[0] == 0);
  c8_b1 = (c8_centers.size[1] == 0);
  c8_array_real_T_2D_Destructor(chartInstance, &c8_centers);
  if (covrtEmlIfEval(chartInstance->c8_covrtInstance, 4U, 0, 0, covrtEmlMcdcEval
                     (chartInstance->c8_covrtInstance, 4U, 0, 0,
                      !covrtEmlCondEval(chartInstance->c8_covrtInstance, 4U, 0,
         0, c8_b || c8_b1)))) {
    c8_b_circle_detect = 1.0;
  } else {
    c8_b_circle_detect = 0.0;
  }

  *chartInstance->c8_circle_detect = c8_b_circle_detect;
  covrtSigUpdateFcn(chartInstance->c8_covrtInstance, 1U,
                    *chartInstance->c8_circle_detect);
}

static void ext_mode_exec_c8_untitled(SFc8_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c8_update_jit_animation_c8_untitled(SFc8_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c8_do_animation_call_c8_untitled(SFc8_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c8_untitled(SFc8_untitledInstanceStruct
  *chartInstance)
{
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_st = NULL;
  const mxArray *c8_y = NULL;
  c8_st = NULL;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_createcellmatrix(1, 1), false);
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", chartInstance->c8_circle_detect, 0,
    0U, 0, 0U, 0), false);
  sf_mex_setcell(c8_y, 0, c8_b_y);
  sf_mex_assign(&c8_st, c8_y, false);
  return c8_st;
}

static void set_sim_state_c8_untitled(SFc8_untitledInstanceStruct *chartInstance,
  const mxArray *c8_st)
{
  const mxArray *c8_u;
  chartInstance->c8_doneDoubleBufferReInit = true;
  c8_u = sf_mex_dup(c8_st);
  *chartInstance->c8_circle_detect = c8_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c8_u, 0)), "circle_detect");
  sf_mex_destroy(&c8_u);
  sf_mex_destroy(&c8_st);
}

static void c8_imfilter(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_b_varargin_1[521945], real32_T c8_b[521945])
{
  static real_T c8_kernel[25] = { 0.014418818362460822, 0.028084023356349175,
    0.0350727008055935, 0.028084023356349175, 0.014418818362460822,
    0.028084023356349175, 0.054700208300935887, 0.068312293270780214,
    0.054700208300935887, 0.028084023356349175, 0.0350727008055935,
    0.068312293270780214, 0.085311730190125085, 0.068312293270780214,
    0.0350727008055935, 0.028084023356349175, 0.054700208300935887,
    0.068312293270780214, 0.054700208300935887, 0.028084023356349175,
    0.014418818362460822, 0.028084023356349175, 0.0350727008055935,
    0.028084023356349175, 0.014418818362460822 };

  static real_T c8_nonZeroKernel[25] = { 0.014418818362460822,
    0.028084023356349175, 0.0350727008055935, 0.028084023356349175,
    0.014418818362460822, 0.028084023356349175, 0.054700208300935887,
    0.068312293270780214, 0.054700208300935887, 0.028084023356349175,
    0.0350727008055935, 0.068312293270780214, 0.085311730190125085,
    0.068312293270780214, 0.0350727008055935, 0.028084023356349175,
    0.054700208300935887, 0.068312293270780214, 0.054700208300935887,
    0.028084023356349175, 0.014418818362460822, 0.028084023356349175,
    0.0350727008055935, 0.028084023356349175, 0.014418818362460822 };

  emlrtStack c8_st;
  real_T c8_connDimsT[2];
  real_T c8_outSizeT[2];
  real_T c8_padSizeT[2];
  real_T c8_startT[2];
  int32_T c8_b_i;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  boolean_T c8_conn[25];
  boolean_T c8_b_modeFlag;
  boolean_T c8_c_modeFlag;
  boolean_T c8_modeFlag;
  boolean_T c8_tooBig;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_c_emlrtRSI;
  c8_padImage(chartInstance, &c8_st, c8_b_varargin_1, chartInstance->c8_aTmp);
  c8_tooBig = true;
  for (c8_i = 0; c8_i < 2; c8_i++) {
    c8_tooBig = false;
  }

  if (!c8_tooBig) {
    c8_modeFlag = true;
  } else {
    c8_modeFlag = false;
  }

  if (c8_modeFlag) {
    c8_b_modeFlag = true;
  } else {
    c8_b_modeFlag = false;
  }

  c8_c_modeFlag = c8_b_modeFlag;
  if (c8_c_modeFlag) {
    for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
      c8_padSizeT[c8_i1] = 699.0 + 56.0 * (real_T)c8_i1;
    }

    for (c8_i3 = 0; c8_i3 < 2; c8_i3++) {
      c8_outSizeT[c8_i3] = 695.0 + 56.0 * (real_T)c8_i3;
    }

    for (c8_i5 = 0; c8_i5 < 2; c8_i5++) {
      c8_connDimsT[c8_i5] = 5.0;
    }

    ippfilter_real32(&chartInstance->c8_aTmp[0], &c8_b[0], &c8_outSizeT[0], 2.0,
                     &c8_padSizeT[0], &c8_kernel[0], &c8_connDimsT[0], false);
  } else {
    for (c8_b_i = 0; c8_b_i < 25; c8_b_i++) {
      c8_conn[c8_b_i] = true;
    }

    for (c8_i2 = 0; c8_i2 < 2; c8_i2++) {
      c8_padSizeT[c8_i2] = 699.0 + 56.0 * (real_T)c8_i2;
    }

    for (c8_i4 = 0; c8_i4 < 2; c8_i4++) {
      c8_outSizeT[c8_i4] = 695.0 + 56.0 * (real_T)c8_i4;
    }

    for (c8_i6 = 0; c8_i6 < 2; c8_i6++) {
      c8_connDimsT[c8_i6] = 5.0;
    }

    for (c8_i7 = 0; c8_i7 < 2; c8_i7++) {
      c8_startT[c8_i7] = 2.0;
    }

    imfilter_real32(&chartInstance->c8_aTmp[0], &c8_b[0], 2.0, &c8_outSizeT[0],
                    2.0, &c8_padSizeT[0], &c8_nonZeroKernel[0], 25.0, &c8_conn[0],
                    2.0, &c8_connDimsT[0], &c8_startT[0], 2.0, true, false);
  }
}

static void c8_padImage(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_a_tmp[521945], real32_T c8_a[527745])
{
  static int32_T c8_idxA[1510] = { 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88,
    89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105,
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
    691, 692, 693, 694, 695, 695, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8,
    9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27,
    28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46,
    47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65,
    66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84,
    85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102,
    103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117,
    118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132,
    133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147,
    148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162,
    163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177,
    178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192,
    193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207,
    208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222,
    223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237,
    238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252,
    253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267,
    268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282,
    283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297,
    298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312,
    313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327,
    328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342,
    343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357,
    358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372,
    373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387,
    388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402,
    403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417,
    418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432,
    433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447,
    448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462,
    463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477,
    478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492,
    493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507,
    508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522,
    523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537,
    538, 539, 540, 541, 542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552,
    553, 554, 555, 556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567,
    568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582,
    583, 584, 585, 586, 587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597,
    598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612,
    613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627,
    628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642,
    643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657,
    658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672,
    673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687,
    688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702,
    703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717,
    718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732,
    733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747,
    748, 749, 750, 751, 751, 751 };

  emlrtStack c8_st;
  real_T c8_b_i;
  real_T c8_b_j;
  int32_T c8_c_i;
  int32_T c8_i;
  int32_T c8_j;
  (void)chartInstance;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_e_emlrtRSI;
  for (c8_j = 0; c8_j < 755; c8_j++) {
    c8_b_j = (real_T)c8_j + 1.0;
    for (c8_i = 0; c8_i < 699; c8_i++) {
      c8_b_i = (real_T)c8_i + 1.0;
      if ((c8_idxA[(int32_T)c8_b_i - 1] < 1) || (c8_idxA[(int32_T)c8_b_i - 1] >
           695)) {
        emlrtDynamicBoundsCheckR2012b(c8_idxA[(int32_T)c8_b_i - 1], 1, 695,
          &c8_emlrtBCI, &c8_st);
      }

      c8_c_i = c8_idxA[(int32_T)c8_b_j + 754];
      if ((c8_c_i < 1) || (c8_c_i > 751)) {
        emlrtDynamicBoundsCheckR2012b(c8_c_i, 1, 751, &c8_b_emlrtBCI, &c8_st);
      }

      c8_a[((int32_T)c8_b_i + 699 * ((int32_T)c8_b_j - 1)) - 1] = c8_a_tmp
        [(c8_idxA[(int32_T)c8_b_i - 1] + 695 * (c8_c_i - 1)) - 1];
    }
  }
}

static void c8_b_imfilter(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_b_varargin_1[521945], real32_T c8_b[521945])
{
  static real_T c8_kernel[9] = { -1.0, -2.0, -1.0, -0.0, -0.0, -0.0, 1.0, 2.0,
    1.0 };

  static real_T c8_nonZeroKernel[6] = { -1.0, -2.0, -1.0, 1.0, 2.0, 1.0 };

  static boolean_T c8_conn[9] = { true, true, true, false, false, false, true,
    true, true };

  emlrtStack c8_st;
  real_T c8_connDimsT[2];
  real_T c8_outSizeT[2];
  real_T c8_padSizeT[2];
  real_T c8_startT[2];
  int32_T c8_b_i;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  boolean_T c8_b_modeFlag;
  boolean_T c8_c_modeFlag;
  boolean_T c8_modeFlag;
  boolean_T c8_tooBig;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_c_emlrtRSI;
  c8_b_padImage(chartInstance, &c8_st, c8_b_varargin_1, chartInstance->c8_c_aTmp);
  c8_tooBig = true;
  for (c8_i = 0; c8_i < 2; c8_i++) {
    c8_tooBig = false;
  }

  if (!c8_tooBig) {
    c8_modeFlag = true;
  } else {
    c8_modeFlag = false;
  }

  if (c8_modeFlag) {
    c8_b_modeFlag = true;
  } else {
    c8_b_modeFlag = false;
  }

  c8_c_modeFlag = c8_b_modeFlag;
  if (c8_c_modeFlag) {
    for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
      c8_padSizeT[c8_i1] = 697.0 + 56.0 * (real_T)c8_i1;
    }

    for (c8_i3 = 0; c8_i3 < 2; c8_i3++) {
      c8_outSizeT[c8_i3] = 695.0 + 56.0 * (real_T)c8_i3;
    }

    for (c8_i5 = 0; c8_i5 < 2; c8_i5++) {
      c8_connDimsT[c8_i5] = 3.0;
    }

    ippfilter_real32(&chartInstance->c8_c_aTmp[0], &c8_b[0], &c8_outSizeT[0],
                     2.0, &c8_padSizeT[0], &c8_kernel[0], &c8_connDimsT[0], true);
  } else {
    for (c8_b_i = 0; c8_b_i < 2; c8_b_i++) {
      c8_padSizeT[c8_b_i] = 697.0 + 56.0 * (real_T)c8_b_i;
    }

    for (c8_i2 = 0; c8_i2 < 2; c8_i2++) {
      c8_outSizeT[c8_i2] = 695.0 + 56.0 * (real_T)c8_i2;
    }

    for (c8_i4 = 0; c8_i4 < 2; c8_i4++) {
      c8_connDimsT[c8_i4] = 3.0;
    }

    for (c8_i6 = 0; c8_i6 < 2; c8_i6++) {
      c8_startT[c8_i6] = 1.0;
    }

    imfilter_real32(&chartInstance->c8_c_aTmp[0], &c8_b[0], 2.0, &c8_outSizeT[0],
                    2.0, &c8_padSizeT[0], &c8_nonZeroKernel[0], 6.0, &c8_conn[0],
                    2.0, &c8_connDimsT[0], &c8_startT[0], 2.0, true, true);
  }
}

static void c8_b_padImage(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_a_tmp[521945], real32_T c8_a[524841])
{
  static int32_T c8_idxA[1506] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
    52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
    90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136,
    137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151,
    152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166,
    167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181,
    182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196,
    197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211,
    212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226,
    227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241,
    242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256,
    257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271,
    272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286,
    287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301,
    302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316,
    317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331,
    332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346,
    347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361,
    362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376,
    377, 378, 379, 380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391,
    392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406,
    407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421,
    422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436,
    437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451,
    452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466,
    467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 481,
    482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496,
    497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511,
    512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526,
    527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541,
    542, 543, 544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 556,
    557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 568, 569, 570, 571,
    572, 573, 574, 575, 576, 577, 578, 579, 580, 581, 582, 583, 584, 585, 586,
    587, 588, 589, 590, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601,
    602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616,
    617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631,
    632, 633, 634, 635, 636, 637, 638, 639, 640, 641, 642, 643, 644, 645, 646,
    647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661,
    662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676,
    677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691,
    692, 693, 694, 695, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
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
    751, 751 };

  emlrtStack c8_st;
  real_T c8_b_i;
  real_T c8_b_j;
  int32_T c8_c_i;
  int32_T c8_i;
  int32_T c8_j;
  (void)chartInstance;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_e_emlrtRSI;
  for (c8_j = 0; c8_j < 753; c8_j++) {
    c8_b_j = (real_T)c8_j + 1.0;
    for (c8_i = 0; c8_i < 697; c8_i++) {
      c8_b_i = (real_T)c8_i + 1.0;
      if ((c8_idxA[(int32_T)c8_b_i - 1] < 1) || (c8_idxA[(int32_T)c8_b_i - 1] >
           695)) {
        emlrtDynamicBoundsCheckR2012b(c8_idxA[(int32_T)c8_b_i - 1], 1, 695,
          &c8_emlrtBCI, &c8_st);
      }

      c8_c_i = c8_idxA[(int32_T)c8_b_j + 752];
      if ((c8_c_i < 1) || (c8_c_i > 751)) {
        emlrtDynamicBoundsCheckR2012b(c8_c_i, 1, 751, &c8_b_emlrtBCI, &c8_st);
      }

      c8_a[((int32_T)c8_b_i + 697 * ((int32_T)c8_b_j - 1)) - 1] = c8_a_tmp
        [(c8_idxA[(int32_T)c8_b_i - 1] + 695 * (c8_c_i - 1)) - 1];
    }
  }
}

static void c8_c_imfilter(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_b_varargin_1[521945], real32_T c8_b[521945])
{
  static real_T c8_kernel[9] = { -1.0, -0.0, 1.0, -2.0, -0.0, 2.0, -1.0, -0.0,
    1.0 };

  static real_T c8_nonZeroKernel[6] = { -1.0, 1.0, -2.0, 2.0, -1.0, 1.0 };

  static boolean_T c8_conn[9] = { true, false, true, true, false, true, true,
    false, true };

  emlrtStack c8_st;
  real_T c8_connDimsT[2];
  real_T c8_outSizeT[2];
  real_T c8_padSizeT[2];
  real_T c8_startT[2];
  int32_T c8_b_i;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  boolean_T c8_b_modeFlag;
  boolean_T c8_c_modeFlag;
  boolean_T c8_modeFlag;
  boolean_T c8_tooBig;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_c_emlrtRSI;
  c8_b_padImage(chartInstance, &c8_st, c8_b_varargin_1, chartInstance->c8_b_aTmp);
  c8_tooBig = true;
  for (c8_i = 0; c8_i < 2; c8_i++) {
    c8_tooBig = false;
  }

  if (!c8_tooBig) {
    c8_modeFlag = true;
  } else {
    c8_modeFlag = false;
  }

  if (c8_modeFlag) {
    c8_b_modeFlag = true;
  } else {
    c8_b_modeFlag = false;
  }

  c8_c_modeFlag = c8_b_modeFlag;
  if (c8_c_modeFlag) {
    for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
      c8_padSizeT[c8_i1] = 697.0 + 56.0 * (real_T)c8_i1;
    }

    for (c8_i3 = 0; c8_i3 < 2; c8_i3++) {
      c8_outSizeT[c8_i3] = 695.0 + 56.0 * (real_T)c8_i3;
    }

    for (c8_i5 = 0; c8_i5 < 2; c8_i5++) {
      c8_connDimsT[c8_i5] = 3.0;
    }

    ippfilter_real32(&chartInstance->c8_b_aTmp[0], &c8_b[0], &c8_outSizeT[0],
                     2.0, &c8_padSizeT[0], &c8_kernel[0], &c8_connDimsT[0], true);
  } else {
    for (c8_b_i = 0; c8_b_i < 2; c8_b_i++) {
      c8_padSizeT[c8_b_i] = 697.0 + 56.0 * (real_T)c8_b_i;
    }

    for (c8_i2 = 0; c8_i2 < 2; c8_i2++) {
      c8_outSizeT[c8_i2] = 695.0 + 56.0 * (real_T)c8_i2;
    }

    for (c8_i4 = 0; c8_i4 < 2; c8_i4++) {
      c8_connDimsT[c8_i4] = 3.0;
    }

    for (c8_i6 = 0; c8_i6 < 2; c8_i6++) {
      c8_startT[c8_i6] = 1.0;
    }

    imfilter_real32(&chartInstance->c8_b_aTmp[0], &c8_b[0], 2.0, &c8_outSizeT[0],
                    2.0, &c8_padSizeT[0], &c8_nonZeroKernel[0], 6.0, &c8_conn[0],
                    2.0, &c8_connDimsT[0], &c8_startT[0], 2.0, true, true);
  }
}

static void c8_imfindcircles(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, boolean_T c8_b_varargin_1[521945], c8_coder_array_real_T_2D
  *c8_centers, c8_coder_array_real_T_2D *c8_r_estimated)
{
  c8_coder_array_boolean_T_2D c8_f_x;
  c8_coder_array_creal_T c8_c_x;
  c8_coder_array_int32_T c8_ii;
  c8_coder_array_real_T c8_idx2Keep;
  c8_coder_array_real_T_2D c8_b_centers;
  c8_coder_array_real_T_2D c8_metric;
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_e_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  creal_T c8_e_x;
  real_T c8_b_k;
  int32_T c8_iv[2];
  int32_T c8_b_ii;
  int32_T c8_b_loop_ub;
  int32_T c8_b_metric;
  int32_T c8_b_nx;
  int32_T c8_c_b;
  int32_T c8_c_centers;
  int32_T c8_c_ii;
  int32_T c8_c_k;
  int32_T c8_c_loop_ub;
  int32_T c8_d_b;
  int32_T c8_d_loop_ub;
  int32_T c8_e_loop_ub;
  int32_T c8_f_loop_ub;
  int32_T c8_g_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_idx;
  int32_T c8_k;
  int32_T c8_loop_ub;
  int32_T c8_nx;
  boolean_T c8_b;
  boolean_T c8_b1;
  boolean_T c8_b2;
  boolean_T c8_b3;
  boolean_T c8_b4;
  boolean_T c8_b5;
  boolean_T c8_b6;
  boolean_T c8_b7;
  boolean_T c8_b_b;
  boolean_T c8_d_x;
  boolean_T c8_exitg1;
  boolean_T c8_overflow;
  boolean_T c8_y;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_e_st.prev = &c8_d_st;
  c8_e_st.tls = c8_d_st.tls;
  c8_st.site = &c8_hh_emlrtRSI;
  c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_centers, &c8_emlrtRTEI, 0,
    0);
  c8_st.site = &c8_gh_emlrtRSI;
  c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_r_estimated,
    &c8_b_emlrtRTEI, 0, 0);
  c8_st.site = &c8_o_emlrtRSI;
  c8_chaccum(chartInstance, &c8_st, c8_b_varargin_1,
             chartInstance->c8_accumMatrix, chartInstance->c8_gradientImg);
  for (c8_i = 0; c8_i < 521945; c8_i++) {
    chartInstance->c8_x[c8_i] = chartInstance->c8_accumMatrix[c8_i];
  }

  c8_array_creal_T_Constructor(chartInstance, &c8_c_x);
  c8_array_creal_T_SetSize(chartInstance, c8_sp, &c8_c_x, &c8_c_emlrtRTEI,
    521945);
  for (c8_i1 = 0; c8_i1 < 521945; c8_i1++) {
    c8_c_x.vector.data[c8_i1] = chartInstance->c8_x[c8_i1];
  }

  c8_y = false;
  c8_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_k < 521945)) {
    c8_b_k = (real_T)c8_k + 1.0;
    c8_d_x = ((c8_c_x.vector.data[(int32_T)c8_b_k - 1].re == c8_dc.re) &&
              (c8_c_x.vector.data[(int32_T)c8_b_k - 1].im == c8_dc.im));
    if (c8_d_x) {
      c8_b = true;
    } else {
      c8_e_x = c8_c_x.vector.data[(int32_T)c8_b_k - 1];
      c8_b1 = muDoubleScalarIsNaN(c8_e_x.re);
      c8_b2 = muDoubleScalarIsNaN(c8_e_x.im);
      c8_b_b = (c8_b1 || c8_b2);
      if (c8_b_b) {
        c8_b = true;
      } else {
        c8_b = false;
      }
    }

    if (!c8_b) {
      c8_y = true;
      c8_exitg1 = true;
    } else {
      c8_k++;
    }
  }

  c8_array_creal_T_Destructor(chartInstance, &c8_c_x);
  c8_array_real_T_Constructor(chartInstance, &c8_idx2Keep);
  c8_array_real_T_2D_Constructor(chartInstance, &c8_b_centers);
  c8_array_real_T_2D_Constructor(chartInstance, &c8_metric);
  c8_array_boolean_T_2D_Constructor(chartInstance, &c8_f_x);
  c8_array_int32_T_Constructor(chartInstance, &c8_ii);
  if (!c8_y) {
  } else {
    c8_st.site = &c8_p_emlrtRSI;
    for (c8_i2 = 0; c8_i2 < 521945; c8_i2++) {
      chartInstance->c8_b_accumMatrix[c8_i2] = chartInstance->
        c8_accumMatrix[c8_i2];
    }

    c8_chcenters(chartInstance, &c8_st, chartInstance->c8_b_accumMatrix,
                 &c8_b_centers, &c8_metric);
    c8_st.site = &c8_p_emlrtRSI;
    c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_centers,
      &c8_d_emlrtRTEI, c8_b_centers.size[0], c8_b_centers.size[1]);
    c8_loop_ub = c8_b_centers.size[0] * c8_b_centers.size[1] - 1;
    for (c8_i3 = 0; c8_i3 <= c8_loop_ub; c8_i3++) {
      c8_centers->vector.data[c8_i3] = c8_b_centers.vector.data[c8_i3];
    }

    c8_b3 = (c8_b_centers.size[0] == 0);
    c8_b4 = (c8_b_centers.size[1] == 0);
    if (c8_b3 || c8_b4) {
    } else {
      c8_st.site = &c8_q_emlrtRSI;
      c8_b_st.site = &c8_q_emlrtRSI;
      c8_array_boolean_T_2D_SetSize(chartInstance, &c8_b_st, &c8_f_x,
        &c8_e_emlrtRTEI, c8_metric.size[0], c8_metric.size[1]);
      c8_b_loop_ub = c8_metric.size[0] * c8_metric.size[1] - 1;
      for (c8_i4 = 0; c8_i4 <= c8_b_loop_ub; c8_i4++) {
        c8_f_x.vector.data[c8_i4] = (c8_metric.vector.data[c8_i4] >=
          0.099999999999999978);
      }

      c8_b_st.site = &c8_hg_emlrtRSI;
      c8_nx = c8_f_x.size[0] * c8_f_x.size[1];
      c8_c_st.site = &c8_ig_emlrtRSI;
      c8_c_k = c8_nx;
      c8_b_nx = c8_nx;
      c8_idx = 0;
      c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_ii, &c8_f_emlrtRTEI,
        c8_c_k);
      c8_d_st.site = &c8_jg_emlrtRSI;
      c8_c_b = c8_b_nx;
      c8_d_b = c8_c_b;
      if (c8_d_b < 1) {
        c8_overflow = false;
      } else {
        c8_overflow = (c8_d_b > 2147483646);
      }

      if (c8_overflow) {
        c8_e_st.site = &c8_ec_emlrtRSI;
        c8_check_forloop_overflow_error(chartInstance, &c8_e_st);
      }

      c8_b_ii = 1;
      c8_exitg1 = false;
      while ((!c8_exitg1) && (c8_b_ii - 1 <= c8_b_nx - 1)) {
        c8_c_ii = c8_b_ii;
        if (c8_f_x.vector.data[c8_c_ii - 1]) {
          c8_idx++;
          c8_ii.vector.data[c8_idx - 1] = c8_c_ii;
          if (c8_idx >= c8_c_k) {
            c8_exitg1 = true;
          } else {
            c8_b_ii++;
          }
        } else {
          c8_b_ii++;
        }
      }

      if (c8_idx > c8_c_k) {
        c8_b_y = NULL;
        sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv, 10, 0U, 1, 0U, 2, 1, 30),
                      false);
        c8_c_y = NULL;
        sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_cv, 10, 0U, 1, 0U, 2, 1, 30),
                      false);
        sf_mex_call(&c8_c_st, &c8_s_emlrtMCI, "error", 0U, 2U, 14, c8_b_y, 14,
                    sf_mex_call(&c8_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_c_st, NULL, "message", 1U, 1U, 14, c8_c_y)));
      }

      if (c8_c_k == 1) {
        if (c8_idx == 0) {
          c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_ii,
            &c8_g_emlrtRTEI, 0);
        }
      } else {
        c8_b5 = (c8_idx < 1);
        if (c8_b5) {
          c8_i5 = 0;
        } else {
          c8_i5 = c8_idx;
        }

        c8_iv[0] = 1;
        c8_iv[1] = c8_i5;
        c8_d_st.site = &c8_kg_emlrtRSI;
        c8_indexShapeCheck(chartInstance, &c8_d_st, c8_ii.size[0], c8_iv);
        c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_ii,
          &c8_g_emlrtRTEI, c8_i5);
      }

      c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_idx2Keep,
        &c8_h_emlrtRTEI, c8_ii.size[0]);
      c8_c_loop_ub = c8_ii.size[0] - 1;
      for (c8_i6 = 0; c8_i6 <= c8_c_loop_ub; c8_i6++) {
        c8_idx2Keep.vector.data[c8_i6] = (real_T)c8_ii.vector.data[c8_i6];
      }

      c8_c_centers = c8_b_centers.size[0];
      c8_st.site = &c8_fh_emlrtRSI;
      c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_centers,
        &c8_i_emlrtRTEI, c8_idx2Keep.size[0], c8_b_centers.size[1]);
      c8_d_loop_ub = c8_b_centers.size[1] - 1;
      for (c8_i7 = 0; c8_i7 <= c8_d_loop_ub; c8_i7++) {
        c8_e_loop_ub = c8_idx2Keep.size[0] - 1;
        for (c8_i8 = 0; c8_i8 <= c8_e_loop_ub; c8_i8++) {
          c8_i10 = (int32_T)c8_idx2Keep.vector.data[c8_i8];
          if ((c8_i10 < 1) || (c8_i10 > c8_c_centers)) {
            emlrtDynamicBoundsCheckR2012b(c8_i10, 1, c8_c_centers,
              &c8_c_emlrtBCI, (emlrtConstCTX)c8_sp);
          }

          c8_centers->vector.data[c8_i8 + c8_centers->size[0] * c8_i7] =
            c8_b_centers.vector.data[(c8_i10 + c8_b_centers.size[0] * c8_i7) - 1];
        }
      }

      c8_b_metric = c8_metric.size[0];
      c8_f_loop_ub = c8_idx2Keep.size[0] - 1;
      for (c8_i9 = 0; c8_i9 <= c8_f_loop_ub; c8_i9++) {
        c8_i11 = (int32_T)c8_idx2Keep.vector.data[c8_i9];
        if ((c8_i11 < 1) || (c8_i11 > c8_b_metric)) {
          emlrtDynamicBoundsCheckR2012b(c8_i11, 1, c8_b_metric, &c8_d_emlrtBCI,
            (emlrtConstCTX)c8_sp);
        }
      }

      c8_b6 = (c8_centers->size[0] == 0);
      c8_b7 = (c8_centers->size[1] == 0);
      if (c8_b6 || c8_b7) {
        c8_st.site = &c8_eh_emlrtRSI;
        c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_centers,
          &c8_k_emlrtRTEI, 0, 0);
      } else {
        c8_st.site = &c8_r_emlrtRSI;
        c8_chradiiphcode(chartInstance, &c8_st, c8_centers,
                         chartInstance->c8_accumMatrix, &c8_idx2Keep);
        c8_st.site = &c8_r_emlrtRSI;
        c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_r_estimated,
          &c8_j_emlrtRTEI, c8_idx2Keep.size[0], 1);
        c8_g_loop_ub = c8_idx2Keep.size[0] - 1;
        for (c8_i12 = 0; c8_i12 <= c8_g_loop_ub; c8_i12++) {
          c8_r_estimated->vector.data[c8_i12] = c8_idx2Keep.vector.data[c8_i12];
        }
      }
    }
  }

  c8_array_int32_T_Destructor(chartInstance, &c8_ii);
  c8_array_boolean_T_2D_Destructor(chartInstance, &c8_f_x);
  c8_array_real_T_2D_Destructor(chartInstance, &c8_metric);
  c8_array_real_T_2D_Destructor(chartInstance, &c8_b_centers);
  c8_array_real_T_Destructor(chartInstance, &c8_idx2Keep);
}

static void c8_chaccum(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, boolean_T c8_b_varargin_1[521945], creal_T
  c8_c_accumMatrix[521945], real32_T c8_b_gradientImg[521945])
{
  static real_T c8_dv[61] = { -3.1415926535897931, -2.9722705648392442,
    -2.8070289261828467, -2.6456756892075508, -2.4880320526369637,
    -2.3339312713148521, -2.183217596103034, -2.0357453277967075,
    -1.891377970650908, -1.7499874731919216, -1.6114535457308732,
    -1.4756630454641972, -1.3425094212849553, -1.2118922114793269,
    -1.083716588375967, -0.95789294477804354, -0.834336517659986,
    -0.71296704517085141, -0.59370845346824241, -0.47648857032260894,
    -0.36123886279198825, -0.24789419657960021, -0.1363926149585728,
    -0.026675135385044957, 0.0813144378719528, 0.18762968657396462,
    0.29232173816083806, 0.39543941339344846, 0.49702936305866707,
    0.59713619469477131, 0.69580259019893376, 0.79306941509289963,
    0.8889758201468938, 0.9835593359943422, 1.0768559613095539,
    1.1689002450669319, 1.2597253633520102, 1.3493631911517641,
    1.4378443695128471, 1.5251983684219201, 1.611453545730873,
    1.6966372024218357, 1.7807756344814223, 1.8638941816308394,
    1.9460172731378194, 2.0271684709175863, 2.1073705101131157,
    2.1866453373295602, 2.2650141466836997, 2.3424974138165719,
    2.419114928005814, 2.4948858225037718, 2.5698286032176325,
    2.6439611758392321, 2.7173008715239586, 2.7898644712109295,
    2.861668228669755, 2.9327278923531388, 3.0030587261287414,
    3.0726755289586407, 3.1415926535897931 };

  static real_T c8_dv1[61] = { 125.66370614359172, 128.80529879718151,
    131.94689145077132, 135.0884841043611, 138.23007675795088,
    141.37166941154069, 144.51326206513048, 147.65485471872029,
    150.79644737231007, 153.93804002589985, 157.07963267948966,
    160.22122533307945, 163.36281798666926, 166.50441064025904,
    169.64600329384882, 172.78759594743863, 175.92918860102841,
    179.0707812546182, 182.212373908208, 185.35396656179779, 188.49555921538757,
    191.63715186897738, 194.77874452256717, 197.92033717615698,
    201.06192982974676, 204.20352248333654, 207.34511513692635,
    210.48670779051614, 213.62830044410595, 216.76989309769573,
    219.91148575128551, 223.05307840487532, 226.1946710584651,
    229.33626371205489, 232.4778563656447, 235.61944901923448,
    238.76104167282426, 241.90263432641407, 245.04422698000386,
    248.18581963359367, 251.32741228718345, 254.46900494077323, 257.610597594363,
    260.75219024795285, 263.89378290154264, 267.03537555513242,
    270.1769682087222, 273.318560862312, 276.46015351590177, 279.60174616949161,
    282.74333882308139, 285.88493147667117, 289.02652413026095,
    292.16811678385073, 295.30970943744057, 298.45130209103036,
    301.59289474462014, 304.73448739820992, 307.8760800517997,
    311.01767270538954, 314.15926535897933 };

  c8_coder_array_boolean_T c8_c_x;
  c8_coder_array_boolean_T c8_rows_to_keep;
  c8_coder_array_boolean_T_2D c8_inside;
  c8_coder_array_creal_T c8_wkeep;
  c8_coder_array_creal_T_2D c8_w;
  c8_coder_array_int32_T c8_ii;
  c8_coder_array_int32_T c8_jj;
  c8_coder_array_int32_T c8_r;
  c8_coder_array_int32_T c8_xckeep;
  c8_coder_array_int32_T c8_yckeep;
  c8_coder_array_real32_T_2D c8_xc;
  c8_coder_array_real32_T_2D c8_yc;
  c8_coder_array_real_T c8_Ex;
  c8_coder_array_real_T c8_Ex_chunk;
  c8_coder_array_real_T c8_Ey;
  c8_coder_array_real_T c8_Ey_chunk;
  c8_coder_array_real_T c8_b_varargin_2;
  c8_coder_array_real_T c8_idxE;
  c8_coder_array_real_T c8_idxE_chunk;
  c8_coder_array_real_T c8_ndx;
  c8_coder_array_real_T_2D c8_r1;
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_e_st;
  emlrtStack c8_st;
  creal_T c8_Opca[61];
  creal_T c8_b_dc;
  creal_T c8_i_x;
  real_T c8_a1;
  real_T c8_ab_x;
  real_T c8_ai;
  real_T c8_apnd;
  real_T c8_ar;
  real_T c8_b1;
  real_T c8_b_d;
  real_T c8_b_idx1;
  real_T c8_b_idx2;
  real_T c8_b_k;
  real_T c8_b_r;
  real_T c8_b_s;
  real_T c8_bb_x;
  real_T c8_bi;
  real_T c8_bim;
  real_T c8_br;
  real_T c8_brm;
  real_T c8_c;
  real_T c8_c_a;
  real_T c8_c_d;
  real_T c8_c_i;
  real_T c8_c_idx;
  real_T c8_c_varargin_2;
  real_T c8_cb_x;
  real_T c8_cdiff;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d2;
  real_T c8_d3;
  real_T c8_d4;
  real_T c8_d_a;
  real_T c8_d_b;
  real_T c8_d_varargin_1;
  real_T c8_d_y;
  real_T c8_db_x;
  real_T c8_dim1;
  real_T c8_e_a;
  real_T c8_e_y;
  real_T c8_eb_x;
  real_T c8_edgeThresh;
  real_T c8_f_a;
  real_T c8_f_y;
  real_T c8_fb_x;
  real_T c8_g_a;
  real_T c8_g_b;
  real_T c8_g_y;
  real_T c8_gb_x;
  real_T c8_h_a;
  real_T c8_h_b;
  real_T c8_h_y;
  real_T c8_hb_x;
  real_T c8_i_a;
  real_T c8_i_y;
  real_T c8_j_x;
  real_T c8_j_y;
  real_T c8_k_a;
  real_T c8_k_x;
  real_T c8_k_y;
  real_T c8_kd;
  real_T c8_l_x;
  real_T c8_l_y;
  real_T c8_lenE;
  real_T c8_m_b;
  real_T c8_m_x;
  real_T c8_minval;
  real_T c8_n_b;
  real_T c8_n_x;
  real_T c8_ndbl;
  real_T c8_ni;
  real_T c8_nr;
  real_T c8_o_b;
  real_T c8_o_x;
  real_T c8_p_x;
  real_T c8_q_x;
  real_T c8_r_x;
  real_T c8_s_x;
  real_T c8_sgnbi;
  real_T c8_sgnbr;
  real_T c8_sizeChunk;
  real_T c8_t_x;
  real_T c8_thresh;
  real_T c8_u_x;
  real_T c8_v_x;
  real_T c8_w_x;
  real_T c8_x_x;
  real_T c8_y_x;
  int32_T c8_b_i;
  int32_T c8_b_idx;
  int32_T c8_b_loop_ub;
  int32_T c8_c_idx1;
  int32_T c8_c_idx2;
  int32_T c8_c_k;
  int32_T c8_c_loop_ub;
  int32_T c8_d_idx;
  int32_T c8_d_k;
  int32_T c8_d_loop_ub;
  int32_T c8_e_idx;
  int32_T c8_e_k;
  int32_T c8_e_loop_ub;
  int32_T c8_f_k;
  int32_T c8_f_loop_ub;
  int32_T c8_first;
  int32_T c8_g_k;
  int32_T c8_g_loop_ub;
  int32_T c8_h_k;
  int32_T c8_h_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i100;
  int32_T c8_i101;
  int32_T c8_i102;
  int32_T c8_i103;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i20;
  int32_T c8_i21;
  int32_T c8_i22;
  int32_T c8_i23;
  int32_T c8_i24;
  int32_T c8_i25;
  int32_T c8_i26;
  int32_T c8_i27;
  int32_T c8_i28;
  int32_T c8_i29;
  int32_T c8_i3;
  int32_T c8_i30;
  int32_T c8_i31;
  int32_T c8_i32;
  int32_T c8_i33;
  int32_T c8_i34;
  int32_T c8_i35;
  int32_T c8_i36;
  int32_T c8_i37;
  int32_T c8_i38;
  int32_T c8_i39;
  int32_T c8_i4;
  int32_T c8_i40;
  int32_T c8_i41;
  int32_T c8_i42;
  int32_T c8_i43;
  int32_T c8_i44;
  int32_T c8_i45;
  int32_T c8_i46;
  int32_T c8_i47;
  int32_T c8_i48;
  int32_T c8_i49;
  int32_T c8_i5;
  int32_T c8_i50;
  int32_T c8_i51;
  int32_T c8_i52;
  int32_T c8_i53;
  int32_T c8_i54;
  int32_T c8_i55;
  int32_T c8_i56;
  int32_T c8_i57;
  int32_T c8_i58;
  int32_T c8_i59;
  int32_T c8_i6;
  int32_T c8_i60;
  int32_T c8_i61;
  int32_T c8_i62;
  int32_T c8_i63;
  int32_T c8_i64;
  int32_T c8_i65;
  int32_T c8_i66;
  int32_T c8_i67;
  int32_T c8_i68;
  int32_T c8_i69;
  int32_T c8_i7;
  int32_T c8_i70;
  int32_T c8_i71;
  int32_T c8_i72;
  int32_T c8_i73;
  int32_T c8_i74;
  int32_T c8_i75;
  int32_T c8_i76;
  int32_T c8_i77;
  int32_T c8_i78;
  int32_T c8_i79;
  int32_T c8_i8;
  int32_T c8_i80;
  int32_T c8_i81;
  int32_T c8_i82;
  int32_T c8_i83;
  int32_T c8_i84;
  int32_T c8_i85;
  int32_T c8_i86;
  int32_T c8_i87;
  int32_T c8_i88;
  int32_T c8_i89;
  int32_T c8_i9;
  int32_T c8_i90;
  int32_T c8_i91;
  int32_T c8_i92;
  int32_T c8_i93;
  int32_T c8_i94;
  int32_T c8_i95;
  int32_T c8_i96;
  int32_T c8_i97;
  int32_T c8_i98;
  int32_T c8_i99;
  int32_T c8_i_k;
  int32_T c8_idx;
  int32_T c8_idx1;
  int32_T c8_idx2;
  int32_T c8_idxEdge;
  int32_T c8_idxkeep;
  int32_T c8_j_a;
  int32_T c8_j_k;
  int32_T c8_k;
  int32_T c8_loop_ub;
  int32_T c8_n;
  int32_T c8_nm1;
  int32_T c8_nm1d2;
  int32_T c8_p_b;
  int32_T c8_q_b;
  int32_T c8_q_y;
  int32_T c8_s_b;
  int32_T c8_szxc;
  int32_T c8_t_b;
  int32_T c8_u_b;
  real32_T c8_Gmax;
  real32_T c8_a;
  real32_T c8_b_a;
  real32_T c8_b_b;
  real32_T c8_b_y;
  real32_T c8_b_z;
  real32_T c8_c_y;
  real32_T c8_c_z;
  real32_T c8_d_x;
  real32_T c8_e_x;
  real32_T c8_ex;
  real32_T c8_f_x;
  real32_T c8_g_x;
  real32_T c8_h_x;
  real32_T c8_ib_x;
  real32_T c8_jb_x;
  real32_T c8_kb_x;
  real32_T c8_lb_x;
  real32_T c8_m_y;
  real32_T c8_mb_x;
  real32_T c8_n_y;
  real32_T c8_nb_x;
  real32_T c8_o_y;
  real32_T c8_ob_x;
  real32_T c8_p_y;
  real32_T c8_pb_x;
  real32_T c8_r_b;
  real32_T c8_r_y;
  real32_T c8_s_y;
  real32_T c8_t;
  real32_T c8_t_y;
  real32_T c8_u_y;
  real32_T c8_v_b;
  real32_T c8_x1;
  real32_T c8_x2;
  real32_T c8_y;
  real32_T c8_z;
  boolean_T c8_b;
  boolean_T c8_b2;
  boolean_T c8_b3;
  boolean_T c8_b4;
  boolean_T c8_b5;
  boolean_T c8_b_b1;
  boolean_T c8_b_overflow;
  boolean_T c8_b_p;
  boolean_T c8_c_b;
  boolean_T c8_c_varargin_1;
  boolean_T c8_e_b;
  boolean_T c8_exitg1;
  boolean_T c8_f_b;
  boolean_T c8_flat;
  boolean_T c8_guard1;
  boolean_T c8_guard2;
  boolean_T c8_guard3;
  boolean_T c8_i_b;
  boolean_T c8_j_b;
  boolean_T c8_k_b;
  boolean_T c8_l_b;
  boolean_T c8_overflow;
  boolean_T c8_p;
  boolean_T c8_w_b;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_e_st.prev = &c8_d_st;
  c8_e_st.tls = c8_d_st.tls;
  c8_c_varargin_1 = c8_b_varargin_1[0];
  for (c8_i = 0; c8_i < 521945; c8_i++) {
    chartInstance->c8_b_x[c8_i] = ((int32_T)c8_b_varargin_1[c8_i] == (int32_T)
      c8_c_varargin_1);
  }

  c8_array_boolean_T_Constructor(chartInstance, &c8_c_x);
  c8_array_boolean_T_SetSize(chartInstance, c8_sp, &c8_c_x, &c8_c_emlrtRTEI,
    521945);
  for (c8_i1 = 0; c8_i1 < 521945; c8_i1++) {
    c8_c_x.vector.data[c8_i1] = chartInstance->c8_b_x[c8_i1];
  }

  c8_flat = true;
  c8_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_k < 521945)) {
    c8_b_k = (real_T)c8_k + 1.0;
    if (!c8_c_x.vector.data[(int32_T)c8_b_k - 1]) {
      c8_flat = false;
      c8_exitg1 = true;
    } else {
      c8_k++;
    }
  }

  c8_array_boolean_T_Destructor(chartInstance, &c8_c_x);
  if (c8_flat) {
    for (c8_i2 = 0; c8_i2 < 521945; c8_i2++) {
      c8_c_accumMatrix[c8_i2].re = 0.0;
      c8_c_accumMatrix[c8_i2].im = 0.0;
    }

    for (c8_i4 = 0; c8_i4 < 521945; c8_i4++) {
      c8_b_gradientImg[c8_i4] = 0.0F;
    }
  } else {
    c8_st.site = &c8_s_emlrtRSI;
    for (c8_i3 = 0; c8_i3 < 521945; c8_i3++) {
      chartInstance->c8_s[c8_i3] = (real32_T)c8_b_varargin_1[c8_i3];
    }

    c8_b_st.site = &c8_b_emlrtRSI;
    c8_imfilter(chartInstance, &c8_b_st, chartInstance->c8_s,
                chartInstance->c8_A);
    c8_st.site = &c8_t_emlrtRSI;
    c8_b_st.site = &c8_m_emlrtRSI;
    c8_b_imfilter(chartInstance, &c8_b_st, chartInstance->c8_A,
                  chartInstance->c8_Gx);
    c8_b_st.site = &c8_n_emlrtRSI;
    c8_c_imfilter(chartInstance, &c8_b_st, chartInstance->c8_A,
                  chartInstance->c8_Gy);
    for (c8_c_k = 0; c8_c_k < 521945; c8_c_k++) {
      c8_d_k = c8_c_k;
      c8_d_x = chartInstance->c8_Gx[c8_d_k];
      c8_y = chartInstance->c8_Gy[c8_d_k];
      c8_x1 = c8_d_x;
      c8_x2 = c8_y;
      c8_a = c8_x1;
      c8_b_b = c8_x2;
      c8_z = muSingleScalarHypot(c8_a, c8_b_b);
      c8_b_gradientImg[c8_d_k] = c8_z;
    }

    c8_st.site = &c8_u_emlrtRSI;
    for (c8_i5 = 0; c8_i5 < 521945; c8_i5++) {
      chartInstance->c8_s[c8_i5] = c8_b_gradientImg[c8_i5];
    }

    c8_e_x = chartInstance->c8_s[0];
    c8_f_x = c8_e_x;
    c8_b = muSingleScalarIsNaN(c8_f_x);
    c8_p = !c8_b;
    if (c8_p) {
      c8_idx = 1;
    } else {
      c8_idx = 0;
      c8_e_k = 2;
      c8_exitg1 = false;
      while ((!c8_exitg1) && (c8_e_k < 521946)) {
        c8_g_x = chartInstance->c8_s[c8_e_k - 1];
        c8_h_x = c8_g_x;
        c8_c_b = muSingleScalarIsNaN(c8_h_x);
        c8_b_p = !c8_c_b;
        if (c8_b_p) {
          c8_idx = c8_e_k;
          c8_exitg1 = true;
        } else {
          c8_e_k++;
        }
      }
    }

    if (c8_idx == 0) {
      c8_Gmax = chartInstance->c8_s[0];
    } else {
      c8_first = c8_idx - 1;
      c8_ex = chartInstance->c8_s[c8_first];
      c8_i6 = c8_first;
      for (c8_f_k = c8_i6 + 2; c8_f_k < 521946; c8_f_k++) {
        if (c8_ex < chartInstance->c8_s[c8_f_k - 1]) {
          c8_ex = chartInstance->c8_s[c8_f_k - 1];
        }
      }

      c8_Gmax = c8_ex;
    }

    c8_b_y = c8_Gmax;
    c8_c_y = c8_b_y;
    for (c8_i7 = 0; c8_i7 < 521945; c8_i7++) {
      chartInstance->c8_s[c8_i7] = c8_b_gradientImg[c8_i7] / c8_c_y;
    }

    c8_b_st.site = &c8_y_emlrtRSI;
    c8_edgeThresh = c8_graythresh(chartInstance, &c8_b_st, chartInstance->c8_s);
    c8_b_a = c8_Gmax;
    c8_d_b = c8_edgeThresh;
    c8_t = c8_b_a * (real32_T)c8_d_b;
    c8_b_st.site = &c8_ab_emlrtRSI;
    for (c8_i8 = 0; c8_i8 < 521945; c8_i8++) {
      chartInstance->c8_b_x[c8_i8] = (c8_b_gradientImg[c8_i8] > c8_t);
    }

    c8_array_int32_T_Constructor(chartInstance, &c8_ii);
    c8_array_int32_T_Constructor(chartInstance, &c8_jj);
    c8_c_st.site = &c8_tb_emlrtRSI;
    c8_eml_find(chartInstance, &c8_c_st, chartInstance->c8_b_x, &c8_ii, &c8_jj);
    c8_array_real_T_Constructor(chartInstance, &c8_Ey);
    c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_Ey, &c8_l_emlrtRTEI,
      c8_ii.size[0]);
    c8_loop_ub = c8_ii.size[0] - 1;
    for (c8_i9 = 0; c8_i9 <= c8_loop_ub; c8_i9++) {
      c8_Ey.vector.data[c8_i9] = (real_T)c8_ii.vector.data[c8_i9];
    }

    c8_array_int32_T_Destructor(chartInstance, &c8_ii);
    c8_array_real_T_Constructor(chartInstance, &c8_Ex);
    c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_Ex, &c8_m_emlrtRTEI,
      c8_jj.size[0]);
    c8_b_loop_ub = c8_jj.size[0] - 1;
    for (c8_i10 = 0; c8_i10 <= c8_b_loop_ub; c8_i10++) {
      c8_Ex.vector.data[c8_i10] = (real_T)c8_jj.vector.data[c8_i10];
    }

    c8_array_int32_T_Destructor(chartInstance, &c8_jj);
    c8_array_real_T_Constructor(chartInstance, &c8_ndx);
    c8_st.site = &c8_v_emlrtRSI;
    c8_b_st.site = &c8_v_emlrtRSI;
    c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_ndx, &c8_n_emlrtRTEI,
      c8_Ey.size[0]);
    c8_c_loop_ub = c8_Ey.size[0] - 1;
    for (c8_i11 = 0; c8_i11 <= c8_c_loop_ub; c8_i11++) {
      c8_ndx.vector.data[c8_i11] = c8_Ey.vector.data[c8_i11];
    }

    c8_array_real_T_Constructor(chartInstance, &c8_b_varargin_2);
    c8_b_st.site = &c8_v_emlrtRSI;
    c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_b_varargin_2,
      &c8_o_emlrtRTEI, c8_Ex.size[0]);
    c8_d_loop_ub = c8_Ex.size[0] - 1;
    for (c8_i12 = 0; c8_i12 <= c8_d_loop_ub; c8_i12++) {
      c8_b_varargin_2.vector.data[c8_i12] = c8_Ex.vector.data[c8_i12];
    }

    c8_array_int32_T_Constructor(chartInstance, &c8_r);
    c8_b_st.site = &c8_ac_emlrtRSI;
    c8_sub2ind(chartInstance, &c8_b_st, &c8_ndx, &c8_b_varargin_2, &c8_r);
    c8_array_real_T_Destructor(chartInstance, &c8_b_varargin_2);
    c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_ndx, &c8_p_emlrtRTEI,
      c8_r.size[0]);
    c8_e_loop_ub = c8_r.size[0] - 1;
    for (c8_i13 = 0; c8_i13 <= c8_e_loop_ub; c8_i13++) {
      c8_ndx.vector.data[c8_i13] = (real_T)c8_r.vector.data[c8_i13];
    }

    c8_array_int32_T_Destructor(chartInstance, &c8_r);
    c8_array_real_T_Constructor(chartInstance, &c8_idxE);
    c8_st.site = &c8_v_emlrtRSI;
    c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_idxE, &c8_q_emlrtRTEI,
      c8_ndx.size[0]);
    c8_f_loop_ub = c8_ndx.size[0] - 1;
    for (c8_i14 = 0; c8_i14 <= c8_f_loop_ub; c8_i14++) {
      c8_idxE.vector.data[c8_i14] = c8_ndx.vector.data[c8_i14];
    }

    c8_array_real_T_Destructor(chartInstance, &c8_ndx);
    for (c8_i15 = 0; c8_i15 < 61; c8_i15++) {
      c8_Opca[c8_i15].re = -0.0;
      c8_Opca[c8_i15].im = c8_dv[c8_i15];
    }

    for (c8_g_k = 0; c8_g_k < 61; c8_g_k++) {
      c8_h_k = c8_g_k;
      c8_i_x = c8_Opca[c8_h_k];
      if (c8_i_x.re == 0.0) {
        c8_d = c8_i_x.im;
        c8_d2 = c8_i_x.im;
        c8_i_x.re = muDoubleScalarCos(c8_d);
        c8_i_x.im = muDoubleScalarSin(c8_d2);
      } else if (c8_i_x.im == 0.0) {
        c8_d1 = c8_i_x.re;
        c8_i_x.re = muDoubleScalarExp(c8_d1);
        c8_i_x.im = 0.0;
      } else {
        c8_j_x = c8_i_x.im;
        c8_e_b = muDoubleScalarIsInf(c8_j_x);
        c8_guard1 = false;
        if (c8_e_b) {
          c8_k_x = c8_i_x.re;
          c8_f_b = muDoubleScalarIsInf(c8_k_x);
          if (c8_f_b && (c8_i_x.re < 0.0)) {
            c8_i_x = c8_dc;
          } else {
            c8_guard1 = true;
          }
        } else {
          c8_guard1 = true;
        }

        if (c8_guard1) {
          c8_b_r = muDoubleScalarExp(c8_i_x.re / 2.0);
          c8_d3 = c8_i_x.im;
          c8_d4 = c8_i_x.im;
          c8_i_x.re = c8_b_r * (c8_b_r * muDoubleScalarCos(c8_d3));
          c8_i_x.im = c8_b_r * (c8_b_r * muDoubleScalarSin(c8_d4));
        }
      }

      c8_Opca[c8_h_k] = c8_i_x;
    }

    for (c8_i16 = 0; c8_i16 < 61; c8_i16++) {
      c8_ar = c8_Opca[c8_i16].re;
      c8_ai = c8_Opca[c8_i16].im;
      c8_br = c8_dv1[c8_i16];
      c8_bi = 0.0;
      if (c8_bi == 0.0) {
        if (c8_ai == 0.0) {
          c8_b_dc.re = c8_ar / c8_br;
          c8_b_dc.im = 0.0;
        } else if (c8_ar == 0.0) {
          c8_b_dc.re = 0.0;
          c8_b_dc.im = c8_ai / c8_br;
        } else {
          c8_b_dc.re = c8_ar / c8_br;
          c8_b_dc.im = c8_ai / c8_br;
        }
      } else if (c8_br == 0.0) {
        if (c8_ar == 0.0) {
          c8_b_dc.re = c8_ai / c8_bi;
          c8_b_dc.im = 0.0;
        } else if (c8_ai == 0.0) {
          c8_b_dc.re = 0.0;
          c8_b_dc.im = -(c8_ar / c8_bi);
        } else {
          c8_b_dc.re = c8_ai / c8_bi;
          c8_b_dc.im = -(c8_ar / c8_bi);
        }
      } else {
        c8_brm = muDoubleScalarAbs(c8_br);
        c8_bim = muDoubleScalarAbs(c8_bi);
        if (c8_brm > c8_bim) {
          c8_b_s = c8_bi / c8_br;
          c8_b_d = c8_br + c8_b_s * c8_bi;
          c8_nr = c8_ar + c8_b_s * c8_ai;
          c8_ni = c8_ai - c8_b_s * c8_ar;
          c8_b_dc.re = c8_nr / c8_b_d;
          c8_b_dc.im = c8_ni / c8_b_d;
        } else if (c8_bim == c8_brm) {
          if (c8_br > 0.0) {
            c8_sgnbr = 0.5;
          } else {
            c8_sgnbr = -0.5;
          }

          if (c8_bi > 0.0) {
            c8_sgnbi = 0.5;
          } else {
            c8_sgnbi = -0.5;
          }

          c8_nr = c8_ar * c8_sgnbr + c8_ai * c8_sgnbi;
          c8_ni = c8_ai * c8_sgnbr - c8_ar * c8_sgnbi;
          c8_b_dc.re = c8_nr / c8_brm;
          c8_b_dc.im = c8_ni / c8_brm;
        } else {
          c8_b_s = c8_br / c8_bi;
          c8_b_d = c8_bi + c8_b_s * c8_br;
          c8_nr = c8_b_s * c8_ar + c8_ai;
          c8_ni = c8_b_s * c8_ai - c8_ar;
          c8_b_dc.re = c8_nr / c8_b_d;
          c8_b_dc.im = c8_ni / c8_b_d;
        }
      }

      c8_Opca[c8_i16] = c8_b_dc;
    }

    c8_lenE = (real_T)c8_Ex.size[0];
    for (c8_i17 = 0; c8_i17 < 521945; c8_i17++) {
      c8_c_accumMatrix[c8_i17].re = 0.0;
      c8_c_accumMatrix[c8_i17].im = 0.0;
    }

    c8_i18 = (int32_T)((c8_lenE + 16392.0) / 16393.0);
    emlrtForLoopVectorCheckR2021a(1.0, 16393.0, c8_lenE, mxDOUBLE_CLASS, c8_i18,
      &c8_og_emlrtRTEI, (emlrtConstCTX)c8_sp);
    c8_array_real_T_Constructor(chartInstance, &c8_Ex_chunk);
    c8_array_real_T_Constructor(chartInstance, &c8_Ey_chunk);
    c8_array_real_T_Constructor(chartInstance, &c8_idxE_chunk);
    c8_array_real32_T_2D_Constructor(chartInstance, &c8_xc);
    c8_array_real32_T_2D_Constructor(chartInstance, &c8_yc);
    c8_array_creal_T_2D_Constructor(chartInstance, &c8_w);
    c8_array_boolean_T_2D_Constructor(chartInstance, &c8_inside);
    c8_array_boolean_T_Constructor(chartInstance, &c8_rows_to_keep);
    c8_array_int32_T_Constructor(chartInstance, &c8_xckeep);
    c8_array_int32_T_Constructor(chartInstance, &c8_yckeep);
    c8_array_creal_T_Constructor(chartInstance, &c8_wkeep);
    c8_array_real_T_2D_Constructor(chartInstance, &c8_r1);
    for (c8_b_i = 0; c8_b_i < c8_i18; c8_b_i++) {
      c8_c_i = (real_T)c8_b_i * 16393.0 + 1.0;
      c8_d_varargin_1 = (c8_c_i + 16393.0) - 1.0;
      c8_c_varargin_2 = c8_lenE;
      c8_l_x = c8_d_varargin_1;
      c8_d_y = c8_c_varargin_2;
      c8_m_x = c8_l_x;
      c8_e_y = c8_d_y;
      c8_n_x = c8_m_x;
      c8_f_y = c8_e_y;
      c8_c_a = c8_n_x;
      c8_g_b = c8_f_y;
      c8_o_x = c8_c_a;
      c8_g_y = c8_g_b;
      c8_p_x = c8_o_x;
      c8_h_y = c8_g_y;
      c8_minval = muDoubleScalarMin(c8_p_x, c8_h_y);
      c8_st.site = &c8_w_emlrtRSI;
      c8_d_a = c8_c_i;
      c8_c_d = c8_minval;
      c8_b_st.site = &c8_bc_emlrtRSI;
      c8_e_a = c8_d_a;
      c8_h_b = c8_c_d;
      c8_q_x = c8_e_a;
      c8_i_b = muDoubleScalarIsNaN(c8_q_x);
      c8_guard1 = false;
      c8_guard2 = false;
      c8_guard3 = false;
      if (c8_i_b) {
        c8_guard2 = true;
      } else {
        c8_r_x = c8_h_b;
        c8_j_b = muDoubleScalarIsNaN(c8_r_x);
        if (c8_j_b) {
          c8_guard2 = true;
        } else if (c8_h_b < c8_e_a) {
          c8_array_real_T_2D_SetSize(chartInstance, &c8_b_st, &c8_r1,
            &c8_s_emlrtRTEI, 1, 0);
        } else {
          c8_s_x = c8_e_a;
          c8_k_b = muDoubleScalarIsInf(c8_s_x);
          if (c8_k_b) {
            c8_guard3 = true;
          } else {
            c8_t_x = c8_h_b;
            c8_l_b = muDoubleScalarIsInf(c8_t_x);
            if (c8_l_b) {
              c8_guard3 = true;
            } else {
              c8_guard1 = true;
            }
          }
        }
      }

      if (c8_guard3) {
        if (c8_e_a == c8_h_b) {
          c8_array_real_T_2D_SetSize(chartInstance, &c8_b_st, &c8_r1,
            &c8_s_emlrtRTEI, 1, 1);
          c8_r1.vector.data[0] = rtNaN;
        } else {
          c8_guard1 = true;
        }
      }

      if (c8_guard2) {
        c8_array_real_T_2D_SetSize(chartInstance, &c8_b_st, &c8_r1,
          &c8_s_emlrtRTEI, 1, 1);
        c8_r1.vector.data[0] = rtNaN;
      }

      if (c8_guard1) {
        c8_u_x = c8_e_a;
        c8_v_x = c8_u_x;
        c8_i_y = c8_v_x;
        c8_i_y = muDoubleScalarFloor(c8_i_y);
        if (c8_i_y == c8_e_a) {
          c8_array_real_T_2D_SetSize(chartInstance, &c8_b_st, &c8_r1,
            &c8_s_emlrtRTEI, 1, (int32_T)(c8_h_b - c8_e_a) + 1);
          c8_g_loop_ub = (int32_T)(c8_h_b - c8_e_a);
          for (c8_i19 = 0; c8_i19 <= c8_g_loop_ub; c8_i19++) {
            c8_r1.vector.data[c8_i19] = c8_e_a + (real_T)c8_i19;
          }
        } else {
          c8_c_st.site = &c8_cc_emlrtRSI;
          c8_f_a = c8_e_a;
          c8_m_b = c8_h_b;
          c8_g_a = c8_f_a;
          c8_n_b = c8_m_b;
          c8_a1 = c8_g_a;
          c8_w_x = (c8_n_b - c8_g_a) + 0.5;
          c8_x_x = c8_w_x;
          c8_ndbl = c8_x_x;
          c8_ndbl = muDoubleScalarFloor(c8_ndbl);
          c8_apnd = c8_g_a + c8_ndbl;
          c8_cdiff = c8_apnd - c8_n_b;
          c8_h_a = c8_g_a;
          c8_o_b = c8_n_b;
          c8_y_x = c8_h_a;
          c8_ab_x = c8_y_x;
          c8_bb_x = c8_ab_x;
          c8_j_y = muDoubleScalarAbs(c8_bb_x);
          c8_cb_x = c8_o_b;
          c8_db_x = c8_cb_x;
          c8_eb_x = c8_db_x;
          c8_k_y = muDoubleScalarAbs(c8_eb_x);
          c8_c = muDoubleScalarMax(c8_j_y, c8_k_y);
          c8_thresh = 4.4408920985006262E-16 * c8_c;
          c8_fb_x = c8_cdiff;
          c8_gb_x = c8_fb_x;
          c8_hb_x = c8_gb_x;
          c8_l_y = muDoubleScalarAbs(c8_hb_x);
          if (c8_l_y < c8_thresh) {
            c8_ndbl++;
            c8_b1 = c8_n_b;
          } else if (c8_cdiff > 0.0) {
            c8_b1 = c8_g_a + (c8_ndbl - 1.0);
          } else {
            c8_ndbl++;
            c8_b1 = c8_apnd;
          }

          if (c8_ndbl >= 0.0) {
            c8_n = (int32_T)muDoubleScalarFloor(c8_ndbl);
          } else {
            c8_n = 0;
          }

          c8_array_real_T_2D_SetSize(chartInstance, &c8_c_st, &c8_r1,
            &c8_r_emlrtRTEI, 1, c8_n);
          if (c8_n > 0) {
            c8_r1.vector.data[0] = c8_a1;
            if (c8_n > 1) {
              c8_r1.vector.data[c8_n - 1] = c8_b1;
              c8_nm1 = c8_n - 1;
              c8_j_a = c8_nm1;
              c8_nm1d2 = (int32_T)((uint32_T)c8_j_a >> 1);
              c8_i41 = c8_nm1d2 - 2;
              c8_d_st.site = &c8_dc_emlrtRSI;
              c8_s_b = c8_i41 + 1;
              c8_t_b = c8_s_b;
              if (c8_t_b < 1) {
                c8_b_overflow = false;
              } else {
                c8_b_overflow = (c8_t_b > 2147483646);
              }

              if (c8_b_overflow) {
                c8_e_st.site = &c8_ec_emlrtRSI;
                c8_check_forloop_overflow_error(chartInstance, &c8_e_st);
              }

              for (c8_i_k = 0; c8_i_k <= c8_i41; c8_i_k++) {
                c8_j_k = c8_i_k + 1;
                c8_kd = (real_T)c8_j_k;
                c8_r1.vector.data[c8_j_k] = c8_a1 + c8_kd;
                c8_r1.vector.data[(c8_n - c8_j_k) - 1] = c8_b1 - c8_kd;
              }

              c8_u_b = c8_nm1d2;
              c8_q_y = c8_u_b << 1;
              if (c8_q_y == c8_nm1) {
                c8_r1.vector.data[c8_nm1d2] = (c8_a1 + c8_b1) / 2.0;
              } else {
                c8_kd = (real_T)c8_nm1d2;
                c8_r1.vector.data[c8_nm1d2] = c8_a1 + c8_kd;
                c8_r1.vector.data[c8_nm1d2 + 1] = c8_b1 - c8_kd;
              }
            }
          }
        }
      }

      c8_sizeChunk = (real_T)c8_r1.size[1];
      c8_st.site = &c8_sh_emlrtRSI;
      c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_Ex_chunk,
        &c8_t_emlrtRTEI, (int32_T)c8_sizeChunk);
      c8_st.site = &c8_rh_emlrtRSI;
      c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_Ey_chunk,
        &c8_u_emlrtRTEI, (int32_T)c8_sizeChunk);
      c8_st.site = &c8_qh_emlrtRSI;
      c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_idxE_chunk,
        &c8_v_emlrtRTEI, (int32_T)c8_sizeChunk);
      c8_idxEdge = (int32_T)c8_c_i;
      c8_i20 = (int32_T)c8_sizeChunk - 1;
      for (c8_b_idx = 0; c8_b_idx <= c8_i20; c8_b_idx++) {
        c8_c_idx = (real_T)c8_b_idx + 1.0;
        c8_i21 = c8_Ex.size[0];
        if ((c8_idxEdge < 1) || (c8_idxEdge > c8_i21)) {
          emlrtDynamicBoundsCheckR2012b(c8_idxEdge, 1, c8_i21, &c8_e_emlrtBCI,
            (emlrtConstCTX)c8_sp);
        }

        c8_i22 = c8_Ex_chunk.size[0];
        c8_i23 = (int32_T)c8_c_idx;
        if ((c8_i23 < 1) || (c8_i23 > c8_i22)) {
          emlrtDynamicBoundsCheckR2012b(c8_i23, 1, c8_i22, &c8_f_emlrtBCI,
            (emlrtConstCTX)c8_sp);
        }

        c8_Ex_chunk.vector.data[c8_i23 - 1] = c8_Ex.vector.data[c8_idxEdge - 1];
        c8_i24 = c8_Ey.size[0];
        if ((c8_idxEdge < 1) || (c8_idxEdge > c8_i24)) {
          emlrtDynamicBoundsCheckR2012b(c8_idxEdge, 1, c8_i24, &c8_g_emlrtBCI,
            (emlrtConstCTX)c8_sp);
        }

        c8_i26 = c8_Ey_chunk.size[0];
        c8_i27 = (int32_T)c8_c_idx;
        if ((c8_i27 < 1) || (c8_i27 > c8_i26)) {
          emlrtDynamicBoundsCheckR2012b(c8_i27, 1, c8_i26, &c8_h_emlrtBCI,
            (emlrtConstCTX)c8_sp);
        }

        c8_Ey_chunk.vector.data[c8_i27 - 1] = c8_Ey.vector.data[c8_idxEdge - 1];
        c8_i29 = c8_idxE.size[0];
        if ((c8_idxEdge < 1) || (c8_idxEdge > c8_i29)) {
          emlrtDynamicBoundsCheckR2012b(c8_idxEdge, 1, c8_i29, &c8_i_emlrtBCI,
            (emlrtConstCTX)c8_sp);
        }

        c8_i30 = c8_idxE_chunk.size[0];
        c8_i32 = (int32_T)c8_c_idx;
        if ((c8_i32 < 1) || (c8_i32 > c8_i30)) {
          emlrtDynamicBoundsCheckR2012b(c8_i32, 1, c8_i30, &c8_j_emlrtBCI,
            (emlrtConstCTX)c8_sp);
        }

        c8_idxE_chunk.vector.data[c8_i32 - 1] = c8_idxE.vector.data[c8_idxEdge -
          1];
        c8_idxEdge++;
      }

      c8_dim1 = (real_T)c8_idxE_chunk.size[0];
      c8_st.site = &c8_vh_emlrtRSI;
      c8_array_real32_T_2D_SetSize(chartInstance, &c8_st, &c8_xc,
        &c8_w_emlrtRTEI, (int32_T)c8_dim1, 61);
      c8_st.site = &c8_uh_emlrtRSI;
      c8_array_real32_T_2D_SetSize(chartInstance, &c8_st, &c8_yc,
        &c8_x_emlrtRTEI, (int32_T)c8_dim1, 61);
      c8_st.site = &c8_wh_emlrtRSI;
      c8_array_creal_T_2D_SetSize(chartInstance, &c8_st, &c8_w, &c8_y_emlrtRTEI,
        (int32_T)c8_dim1, 61);
      c8_st.site = &c8_kh_emlrtRSI;
      c8_array_boolean_T_2D_SetSize(chartInstance, &c8_st, &c8_inside,
        &c8_ab_emlrtRTEI, (int32_T)c8_dim1, 61);
      c8_st.site = &c8_th_emlrtRSI;
      c8_array_boolean_T_SetSize(chartInstance, &c8_st, &c8_rows_to_keep,
        &c8_bb_emlrtRTEI, (int32_T)c8_dim1);
      c8_h_loop_ub = (int32_T)c8_dim1 - 1;
      for (c8_i25 = 0; c8_i25 <= c8_h_loop_ub; c8_i25++) {
        c8_rows_to_keep.vector.data[c8_i25] = false;
      }

      for (c8_idx2 = 0; c8_idx2 < 61; c8_idx2++) {
        c8_b_idx2 = (real_T)c8_idx2 + 1.0;
        c8_i28 = (int32_T)c8_dim1 - 1;
        for (c8_idx1 = 0; c8_idx1 <= c8_i28; c8_idx1++) {
          c8_b_idx1 = (real_T)c8_idx1 + 1.0;
          c8_i31 = c8_idxE_chunk.size[0];
          c8_i33 = (int32_T)c8_b_idx1;
          if ((c8_i33 < 1) || (c8_i33 > c8_i31)) {
            emlrtDynamicBoundsCheckR2012b(c8_i33, 1, c8_i31, &c8_k_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_ib_x = chartInstance->c8_Gx[(int32_T)
            c8_idxE_chunk.vector.data[c8_i33 - 1] - 1];
          c8_i34 = c8_idxE_chunk.size[0];
          c8_i36 = (int32_T)c8_b_idx1;
          if ((c8_i36 < 1) || (c8_i36 > c8_i34)) {
            emlrtDynamicBoundsCheckR2012b(c8_i36, 1, c8_i34, &c8_l_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_m_y = c8_b_gradientImg[(int32_T)c8_idxE_chunk.vector.data[c8_i36 -
            1] - 1];
          c8_jb_x = c8_ib_x;
          c8_n_y = c8_m_y;
          c8_b_z = c8_jb_x / c8_n_y;
          c8_i_a = -(20.0 + 0.5 * (real_T)((int32_T)c8_b_idx2 - 1));
          c8_r_b = c8_b_z;
          c8_o_y = (real32_T)c8_i_a * c8_r_b;
          c8_i43 = c8_Ex_chunk.size[0];
          c8_i44 = (int32_T)c8_b_idx1;
          if ((c8_i44 < 1) || (c8_i44 > c8_i43)) {
            emlrtDynamicBoundsCheckR2012b(c8_i44, 1, c8_i43, &c8_m_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_kb_x = (real32_T)c8_Ex_chunk.vector.data[c8_i44 - 1] + c8_o_y;
          c8_lb_x = c8_kb_x;
          c8_p_y = c8_lb_x;
          c8_p_y = muSingleScalarRound(c8_p_y);
          c8_i50 = c8_xc.size[0];
          c8_i52 = (int32_T)c8_b_idx1;
          if ((c8_i52 < 1) || (c8_i52 > c8_i50)) {
            emlrtDynamicBoundsCheckR2012b(c8_i52, 1, c8_i50, &c8_p_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_xc.vector.data[(c8_i52 + c8_xc.size[0] * ((int32_T)c8_b_idx2 - 1))
            - 1] = c8_p_y;
          c8_i56 = c8_idxE_chunk.size[0];
          c8_i58 = (int32_T)c8_b_idx1;
          if ((c8_i58 < 1) || (c8_i58 > c8_i56)) {
            emlrtDynamicBoundsCheckR2012b(c8_i58, 1, c8_i56, &c8_q_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_mb_x = chartInstance->c8_Gy[(int32_T)
            c8_idxE_chunk.vector.data[c8_i58 - 1] - 1];
          c8_i61 = c8_idxE_chunk.size[0];
          c8_i63 = (int32_T)c8_b_idx1;
          if ((c8_i63 < 1) || (c8_i63 > c8_i61)) {
            emlrtDynamicBoundsCheckR2012b(c8_i63, 1, c8_i61, &c8_t_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_r_y = c8_b_gradientImg[(int32_T)c8_idxE_chunk.vector.data[c8_i63 -
            1] - 1];
          c8_nb_x = c8_mb_x;
          c8_s_y = c8_r_y;
          c8_c_z = c8_nb_x / c8_s_y;
          c8_k_a = -(20.0 + 0.5 * (real_T)((int32_T)c8_b_idx2 - 1));
          c8_v_b = c8_c_z;
          c8_t_y = (real32_T)c8_k_a * c8_v_b;
          c8_i71 = c8_Ey_chunk.size[0];
          c8_i73 = (int32_T)c8_b_idx1;
          if ((c8_i73 < 1) || (c8_i73 > c8_i71)) {
            emlrtDynamicBoundsCheckR2012b(c8_i73, 1, c8_i71, &c8_ib_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_ob_x = (real32_T)c8_Ey_chunk.vector.data[c8_i73 - 1] + c8_t_y;
          c8_pb_x = c8_ob_x;
          c8_u_y = c8_pb_x;
          c8_u_y = muSingleScalarRound(c8_u_y);
          c8_i77 = c8_yc.size[0];
          c8_i79 = (int32_T)c8_b_idx1;
          if ((c8_i79 < 1) || (c8_i79 > c8_i77)) {
            emlrtDynamicBoundsCheckR2012b(c8_i79, 1, c8_i77, &c8_jb_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_yc.vector.data[(c8_i79 + c8_yc.size[0] * ((int32_T)c8_b_idx2 - 1))
            - 1] = c8_u_y;
          c8_i81 = c8_w.size[0];
          c8_i82 = (int32_T)c8_b_idx1;
          if ((c8_i82 < 1) || (c8_i82 > c8_i81)) {
            emlrtDynamicBoundsCheckR2012b(c8_i82, 1, c8_i81, &c8_kb_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_w.vector.data[(c8_i82 + c8_w.size[0] * ((int32_T)c8_b_idx2 - 1)) -
            1].re = c8_Opca[(int32_T)c8_b_idx2 - 1].re;
          c8_i85 = c8_w.size[0];
          c8_i86 = (int32_T)c8_b_idx1;
          if ((c8_i86 < 1) || (c8_i86 > c8_i85)) {
            emlrtDynamicBoundsCheckR2012b(c8_i86, 1, c8_i85, &c8_kb_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_w.vector.data[(c8_i86 + c8_w.size[0] * ((int32_T)c8_b_idx2 - 1)) -
            1].im = c8_Opca[(int32_T)c8_b_idx2 - 1].im;
          c8_i88 = c8_xc.size[0];
          c8_i90 = (int32_T)c8_b_idx1;
          if ((c8_i90 < 1) || (c8_i90 > c8_i88)) {
            emlrtDynamicBoundsCheckR2012b(c8_i90, 1, c8_i88, &c8_lb_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_w_b = (c8_xc.vector.data[(c8_i90 + c8_xc.size[0] * ((int32_T)
                      c8_b_idx2 - 1)) - 1] >= 1.0F);
          c8_i92 = c8_xc.size[0];
          c8_i93 = (int32_T)c8_b_idx1;
          if ((c8_i93 < 1) || (c8_i93 > c8_i92)) {
            emlrtDynamicBoundsCheckR2012b(c8_i93, 1, c8_i92, &c8_mb_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_b_b1 = (c8_xc.vector.data[(c8_i93 + c8_xc.size[0] * ((int32_T)
            c8_b_idx2 - 1)) - 1] <= 751.0F);
          c8_b2 = (c8_w_b && c8_b_b1);
          c8_i94 = c8_yc.size[0];
          c8_i95 = (int32_T)c8_b_idx1;
          if ((c8_i95 < 1) || (c8_i95 > c8_i94)) {
            emlrtDynamicBoundsCheckR2012b(c8_i95, 1, c8_i94, &c8_nb_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_b3 = (c8_yc.vector.data[(c8_i95 + c8_yc.size[0] * ((int32_T)
                     c8_b_idx2 - 1)) - 1] >= 1.0F);
          c8_b4 = (c8_b2 && c8_b3);
          c8_i96 = c8_yc.size[0];
          c8_i97 = (int32_T)c8_b_idx1;
          if ((c8_i97 < 1) || (c8_i97 > c8_i96)) {
            emlrtDynamicBoundsCheckR2012b(c8_i97, 1, c8_i96, &c8_ob_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_b5 = (c8_yc.vector.data[(c8_i97 + c8_yc.size[0] * ((int32_T)
                     c8_b_idx2 - 1)) - 1] <= 695.0F);
          c8_i98 = c8_inside.size[0];
          c8_i99 = (int32_T)c8_b_idx1;
          if ((c8_i99 < 1) || (c8_i99 > c8_i98)) {
            emlrtDynamicBoundsCheckR2012b(c8_i99, 1, c8_i98, &c8_pb_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_inside.vector.data[(c8_i99 + c8_inside.size[0] * ((int32_T)
            c8_b_idx2 - 1)) - 1] = (c8_b4 && c8_b5);
          c8_i100 = c8_inside.size[0];
          c8_i101 = (int32_T)c8_b_idx1;
          if ((c8_i101 < 1) || (c8_i101 > c8_i100)) {
            emlrtDynamicBoundsCheckR2012b(c8_i101, 1, c8_i100, &c8_qb_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          if (c8_inside.vector.data[(c8_i101 + c8_inside.size[0] * ((int32_T)
                c8_b_idx2 - 1)) - 1]) {
            c8_i102 = c8_rows_to_keep.size[0];
            c8_i103 = (int32_T)c8_b_idx1;
            if ((c8_i103 < 1) || (c8_i103 > c8_i102)) {
              emlrtDynamicBoundsCheckR2012b(c8_i103, 1, c8_i102, &c8_rb_emlrtBCI,
                (emlrtConstCTX)c8_sp);
            }

            c8_rows_to_keep.vector.data[c8_i103 - 1] = true;
          }
        }
      }

      c8_dim1 = (real_T)c8_idxE_chunk.size[0];
      c8_st.site = &c8_oh_emlrtRSI;
      c8_array_int32_T_SetSize(chartInstance, &c8_st, &c8_xckeep,
        &c8_cb_emlrtRTEI, c8_xc.size[0] * 61);
      c8_st.site = &c8_nh_emlrtRSI;
      c8_array_int32_T_SetSize(chartInstance, &c8_st, &c8_yckeep,
        &c8_db_emlrtRTEI, c8_yc.size[0] * 61);
      c8_st.site = &c8_ih_emlrtRSI;
      c8_array_creal_T_SetSize(chartInstance, &c8_st, &c8_wkeep,
        &c8_eb_emlrtRTEI, c8_w.size[0] * 61);
      c8_idxkeep = 0;
      for (c8_c_idx2 = 0; c8_c_idx2 < 61; c8_c_idx2++) {
        c8_b_idx2 = (real_T)c8_c_idx2 + 1.0;
        c8_i35 = (int32_T)c8_dim1 - 1;
        for (c8_c_idx1 = 0; c8_c_idx1 <= c8_i35; c8_c_idx1++) {
          c8_b_idx1 = (real_T)c8_c_idx1 + 1.0;
          c8_i38 = c8_rows_to_keep.size[0];
          c8_i39 = (int32_T)c8_b_idx1;
          if ((c8_i39 < 1) || (c8_i39 > c8_i38)) {
            emlrtDynamicBoundsCheckR2012b(c8_i39, 1, c8_i38, &c8_n_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          if (c8_rows_to_keep.vector.data[c8_i39 - 1]) {
            c8_i40 = c8_inside.size[0];
            c8_i42 = (int32_T)c8_b_idx1;
            if ((c8_i42 < 1) || (c8_i42 > c8_i40)) {
              emlrtDynamicBoundsCheckR2012b(c8_i42, 1, c8_i40, &c8_o_emlrtBCI,
                (emlrtConstCTX)c8_sp);
            }

            if (c8_inside.vector.data[(c8_i42 + c8_inside.size[0] * ((int32_T)
                  c8_b_idx2 - 1)) - 1]) {
              c8_idxkeep++;
              c8_i47 = c8_xc.size[0];
              c8_i48 = (int32_T)c8_b_idx1;
              if ((c8_i48 < 1) || (c8_i48 > c8_i47)) {
                emlrtDynamicBoundsCheckR2012b(c8_i48, 1, c8_i47, &c8_r_emlrtBCI,
                  (emlrtConstCTX)c8_sp);
              }

              c8_i51 = c8_xckeep.size[0];
              if ((c8_idxkeep < 1) || (c8_idxkeep > c8_i51)) {
                emlrtDynamicBoundsCheckR2012b(c8_idxkeep, 1, c8_i51,
                  &c8_s_emlrtBCI, (emlrtConstCTX)c8_sp);
              }

              c8_xckeep.vector.data[c8_idxkeep - 1] = (int32_T)
                c8_xc.vector.data[(c8_i48 + c8_xc.size[0] * ((int32_T)c8_b_idx2
                - 1)) - 1];
              c8_i55 = c8_yc.size[0];
              c8_i57 = (int32_T)c8_b_idx1;
              if ((c8_i57 < 1) || (c8_i57 > c8_i55)) {
                emlrtDynamicBoundsCheckR2012b(c8_i57, 1, c8_i55, &c8_u_emlrtBCI,
                  (emlrtConstCTX)c8_sp);
              }

              c8_i60 = c8_yckeep.size[0];
              if ((c8_idxkeep < 1) || (c8_idxkeep > c8_i60)) {
                emlrtDynamicBoundsCheckR2012b(c8_idxkeep, 1, c8_i60,
                  &c8_v_emlrtBCI, (emlrtConstCTX)c8_sp);
              }

              c8_yckeep.vector.data[c8_idxkeep - 1] = (int32_T)
                c8_yc.vector.data[(c8_i57 + c8_yc.size[0] * ((int32_T)c8_b_idx2
                - 1)) - 1];
              c8_i64 = c8_wkeep.size[0];
              if ((c8_idxkeep < 1) || (c8_idxkeep > c8_i64)) {
                emlrtDynamicBoundsCheckR2012b(c8_idxkeep, 1, c8_i64,
                  &c8_x_emlrtBCI, (emlrtConstCTX)c8_sp);
              }

              c8_i66 = c8_w.size[0];
              c8_i68 = (int32_T)c8_b_idx1;
              if ((c8_i68 < 1) || (c8_i68 > c8_i66)) {
                emlrtDynamicBoundsCheckR2012b(c8_i68, 1, c8_i66, &c8_w_emlrtBCI,
                  (emlrtConstCTX)c8_sp);
              }

              c8_wkeep.vector.data[c8_idxkeep - 1].re = c8_w.vector.data[(c8_i68
                + c8_w.size[0] * ((int32_T)c8_b_idx2 - 1)) - 1].re;
              c8_i70 = c8_w.size[0];
              c8_i72 = (int32_T)c8_b_idx1;
              if ((c8_i72 < 1) || (c8_i72 > c8_i70)) {
                emlrtDynamicBoundsCheckR2012b(c8_i72, 1, c8_i70, &c8_w_emlrtBCI,
                  (emlrtConstCTX)c8_sp);
              }

              c8_i75 = c8_wkeep.size[0];
              if ((c8_idxkeep < 1) || (c8_idxkeep > c8_i75)) {
                emlrtDynamicBoundsCheckR2012b(c8_idxkeep, 1, c8_i75,
                  &c8_x_emlrtBCI, (emlrtConstCTX)c8_sp);
              }

              c8_wkeep.vector.data[c8_idxkeep - 1].im = c8_w.vector.data[(c8_i72
                + c8_w.size[0] * ((int32_T)c8_b_idx2 - 1)) - 1].im;
            }
          }
        }
      }

      c8_st.site = &c8_x_emlrtRSI;
      c8_szxc = c8_idxkeep;
      for (c8_i37 = 0; c8_i37 < 521945; c8_i37++) {
        chartInstance->c8_out[c8_i37].re = 0.0;
        chartInstance->c8_out[c8_i37].im = 0.0;
      }

      c8_b_st.site = &c8_fc_emlrtRSI;
      c8_p_b = c8_szxc;
      c8_q_b = c8_p_b;
      if (c8_q_b < 1) {
        c8_overflow = false;
      } else {
        c8_overflow = (c8_q_b > 2147483646);
      }

      if (c8_overflow) {
        c8_c_st.site = &c8_ec_emlrtRSI;
        c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
      }

      for (c8_d_idx = 0; c8_d_idx < c8_szxc; c8_d_idx++) {
        c8_e_idx = c8_d_idx + 1;
        c8_i46 = c8_yckeep.size[0];
        if ((c8_e_idx < 1) || (c8_e_idx > c8_i46)) {
          emlrtDynamicBoundsCheckR2012b(c8_e_idx, 1, c8_i46, &c8_fb_emlrtBCI,
            &c8_st);
        }

        c8_i49 = c8_yckeep.vector.data[c8_e_idx - 1];
        if ((c8_i49 < 1) || (c8_i49 > 695)) {
          emlrtDynamicBoundsCheckR2012b(c8_i49, 1, 695, &c8_eb_emlrtBCI, &c8_st);
        }

        c8_i53 = c8_xckeep.size[0];
        if ((c8_e_idx < 1) || (c8_e_idx > c8_i53)) {
          emlrtDynamicBoundsCheckR2012b(c8_e_idx, 1, c8_i53, &c8_hb_emlrtBCI,
            &c8_st);
        }

        c8_i54 = c8_xckeep.vector.data[c8_e_idx - 1];
        if ((c8_i54 < 1) || (c8_i54 > 751)) {
          emlrtDynamicBoundsCheckR2012b(c8_i54, 1, 751, &c8_gb_emlrtBCI, &c8_st);
        }

        c8_i59 = c8_yckeep.size[0];
        if ((c8_e_idx < 1) || (c8_e_idx > c8_i59)) {
          emlrtDynamicBoundsCheckR2012b(c8_e_idx, 1, c8_i59, &c8_ab_emlrtBCI,
            &c8_st);
        }

        c8_i62 = c8_yckeep.vector.data[c8_e_idx - 1];
        if ((c8_i62 < 1) || (c8_i62 > 695)) {
          emlrtDynamicBoundsCheckR2012b(c8_i62, 1, 695, &c8_y_emlrtBCI, &c8_st);
        }

        c8_i65 = c8_xckeep.size[0];
        if ((c8_e_idx < 1) || (c8_e_idx > c8_i65)) {
          emlrtDynamicBoundsCheckR2012b(c8_e_idx, 1, c8_i65, &c8_cb_emlrtBCI,
            &c8_st);
        }

        c8_i67 = c8_xckeep.vector.data[c8_e_idx - 1];
        if ((c8_i67 < 1) || (c8_i67 > 751)) {
          emlrtDynamicBoundsCheckR2012b(c8_i67, 1, 751, &c8_bb_emlrtBCI, &c8_st);
        }

        c8_i69 = c8_wkeep.size[0];
        if ((c8_e_idx < 1) || (c8_e_idx > c8_i69)) {
          emlrtDynamicBoundsCheckR2012b(c8_e_idx, 1, c8_i69, &c8_db_emlrtBCI,
            &c8_st);
        }

        chartInstance->c8_out[(c8_i49 + 695 * (c8_i54 - 1)) - 1].re =
          chartInstance->c8_out[(c8_i62 + 695 * (c8_i67 - 1)) - 1].re +
          c8_wkeep.vector.data[c8_e_idx - 1].re;
        c8_i74 = c8_yckeep.size[0];
        if ((c8_e_idx < 1) || (c8_e_idx > c8_i74)) {
          emlrtDynamicBoundsCheckR2012b(c8_e_idx, 1, c8_i74, &c8_ab_emlrtBCI,
            &c8_st);
        }

        c8_i76 = c8_yckeep.vector.data[c8_e_idx - 1];
        if ((c8_i76 < 1) || (c8_i76 > 695)) {
          emlrtDynamicBoundsCheckR2012b(c8_i76, 1, 695, &c8_y_emlrtBCI, &c8_st);
        }

        c8_i78 = c8_xckeep.size[0];
        if ((c8_e_idx < 1) || (c8_e_idx > c8_i78)) {
          emlrtDynamicBoundsCheckR2012b(c8_e_idx, 1, c8_i78, &c8_cb_emlrtBCI,
            &c8_st);
        }

        c8_i80 = c8_xckeep.vector.data[c8_e_idx - 1];
        if ((c8_i80 < 1) || (c8_i80 > 751)) {
          emlrtDynamicBoundsCheckR2012b(c8_i80, 1, 751, &c8_bb_emlrtBCI, &c8_st);
        }

        c8_i83 = c8_wkeep.size[0];
        if ((c8_e_idx < 1) || (c8_e_idx > c8_i83)) {
          emlrtDynamicBoundsCheckR2012b(c8_e_idx, 1, c8_i83, &c8_db_emlrtBCI,
            &c8_st);
        }

        c8_i84 = c8_yckeep.size[0];
        if ((c8_e_idx < 1) || (c8_e_idx > c8_i84)) {
          emlrtDynamicBoundsCheckR2012b(c8_e_idx, 1, c8_i84, &c8_fb_emlrtBCI,
            &c8_st);
        }

        c8_i87 = c8_yckeep.vector.data[c8_e_idx - 1];
        if ((c8_i87 < 1) || (c8_i87 > 695)) {
          emlrtDynamicBoundsCheckR2012b(c8_i87, 1, 695, &c8_eb_emlrtBCI, &c8_st);
        }

        c8_i89 = c8_xckeep.size[0];
        if ((c8_e_idx < 1) || (c8_e_idx > c8_i89)) {
          emlrtDynamicBoundsCheckR2012b(c8_e_idx, 1, c8_i89, &c8_hb_emlrtBCI,
            &c8_st);
        }

        c8_i91 = c8_xckeep.vector.data[c8_e_idx - 1];
        if ((c8_i91 < 1) || (c8_i91 > 751)) {
          emlrtDynamicBoundsCheckR2012b(c8_i91, 1, 751, &c8_gb_emlrtBCI, &c8_st);
        }

        chartInstance->c8_out[(c8_i87 + 695 * (c8_i91 - 1)) - 1].im =
          chartInstance->c8_out[(c8_i76 + 695 * (c8_i80 - 1)) - 1].im +
          c8_wkeep.vector.data[c8_e_idx - 1].im;
      }

      for (c8_i45 = 0; c8_i45 < 521945; c8_i45++) {
        c8_c_accumMatrix[c8_i45].re += chartInstance->c8_out[c8_i45].re;
        c8_c_accumMatrix[c8_i45].im += chartInstance->c8_out[c8_i45].im;
      }
    }

    c8_array_real_T_Destructor(chartInstance, &c8_Ex);
    c8_array_real_T_Destructor(chartInstance, &c8_Ey);
    c8_array_real_T_2D_Destructor(chartInstance, &c8_r1);
    c8_array_creal_T_Destructor(chartInstance, &c8_wkeep);
    c8_array_int32_T_Destructor(chartInstance, &c8_yckeep);
    c8_array_int32_T_Destructor(chartInstance, &c8_xckeep);
    c8_array_boolean_T_Destructor(chartInstance, &c8_rows_to_keep);
    c8_array_boolean_T_2D_Destructor(chartInstance, &c8_inside);
    c8_array_creal_T_2D_Destructor(chartInstance, &c8_w);
    c8_array_real32_T_2D_Destructor(chartInstance, &c8_yc);
    c8_array_real32_T_2D_Destructor(chartInstance, &c8_xc);
    c8_array_real_T_Destructor(chartInstance, &c8_idxE_chunk);
    c8_array_real_T_Destructor(chartInstance, &c8_Ey_chunk);
    c8_array_real_T_Destructor(chartInstance, &c8_Ex_chunk);
    c8_array_real_T_Destructor(chartInstance, &c8_idxE);
  }
}

static real_T c8_graythresh(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real32_T c8_c_I[521945])
{
  static char_T c8_b_cv4[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c8_b_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c8_b_cv3[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't',
    's', 'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'N', 'o', 'n', 'n', 'e', 'g', 'a', 't', 'i', 'v', 'e' };

  static char_T c8_b_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'o', 't', 's',
    'u', 't', 'h', 'r', 'e', 's', 'h', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c8_b_cv2[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  static char_T c8_cv5[6] = { 'C', 'O', 'U', 'N', 'T', 'S' };

  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_counts[256];
  real_T c8_localBins1[256];
  real_T c8_localBins2[256];
  real_T c8_localBins3[256];
  real_T c8_b_idx;
  real_T c8_b_k;
  real_T c8_c_x;
  real_T c8_d_i;
  real_T c8_d_k;
  real_T c8_d_p;
  real_T c8_d_x;
  real_T c8_e_x;
  real_T c8_f_k;
  real_T c8_f_x;
  real_T c8_g_x;
  real_T c8_h_x;
  real_T c8_i_x;
  real_T c8_k_a;
  real_T c8_k_c;
  real_T c8_l_a;
  real_T c8_level;
  real_T c8_m_a;
  real_T c8_maxval;
  real_T c8_mu_t;
  real_T c8_n_a;
  real_T c8_numCores;
  real_T c8_num_elems;
  real_T c8_num_maxval;
  real_T c8_o_a;
  real_T c8_sigma_b_squared;
  int32_T c8_a;
  int32_T c8_b_a;
  int32_T c8_b_c;
  int32_T c8_b_i;
  int32_T c8_c;
  int32_T c8_c_a;
  int32_T c8_c_c;
  int32_T c8_c_i;
  int32_T c8_c_k;
  int32_T c8_d_a;
  int32_T c8_d_c;
  int32_T c8_e_a;
  int32_T c8_e_c;
  int32_T c8_e_k;
  int32_T c8_f_a;
  int32_T c8_f_c;
  int32_T c8_g_a;
  int32_T c8_g_c;
  int32_T c8_g_k;
  int32_T c8_h_a;
  int32_T c8_h_c;
  int32_T c8_h_k;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i_a;
  int32_T c8_i_c;
  int32_T c8_idx;
  int32_T c8_idx1;
  int32_T c8_idx2;
  int32_T c8_idx3;
  int32_T c8_idx4;
  int32_T c8_j_a;
  int32_T c8_j_c;
  int32_T c8_k;
  boolean_T c8_b;
  boolean_T c8_b1;
  boolean_T c8_b2;
  boolean_T c8_b3;
  boolean_T c8_b4;
  boolean_T c8_b5;
  boolean_T c8_b_b;
  boolean_T c8_b_nanFlag;
  boolean_T c8_b_p;
  boolean_T c8_b_rngFlag;
  boolean_T c8_c_b;
  boolean_T c8_c_p;
  boolean_T c8_d_b;
  boolean_T c8_e_b;
  boolean_T c8_exitg1;
  boolean_T c8_f_b;
  boolean_T c8_isfinite_maxval;
  boolean_T c8_nanFlag;
  boolean_T c8_p;
  boolean_T c8_rngFlag;
  boolean_T c8_useParallel;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_st.site = &c8_bb_emlrtRSI;
  for (c8_i = 0; c8_i < 521945; c8_i++) {
    chartInstance->c8_img[c8_i] = c8_c_I[c8_i];
  }

  c8_b_st.site = &c8_eb_emlrtRSI;
  c8_c_st.site = &c8_fb_emlrtRSI;
  grayto8_real32(&chartInstance->c8_img[0], &chartInstance->c8_I[0], 521945.0);
  c8_st.site = &c8_cb_emlrtRSI;
  c8_b_st.site = &c8_hb_emlrtRSI;
  c8_c_st.site = &c8_ib_emlrtRSI;
  c8_numCores = 1.0;
  getnumcores(&c8_numCores);
  if (c8_numCores > 1.0) {
    c8_useParallel = true;
  } else {
    c8_useParallel = false;
  }

  if (c8_useParallel) {
    c8_c_st.site = &c8_jb_emlrtRSI;
    c8_nanFlag = false;
    c8_rngFlag = false;
    tbbhist_uint8(&chartInstance->c8_I[0], 521945.0, 521945.0, 1.0, &c8_counts[0],
                  256.0, 256.0, &c8_rngFlag, &c8_nanFlag);
    c8_b_rngFlag = c8_rngFlag;
    c8_b_nanFlag = c8_nanFlag;
  } else {
    c8_c_st.site = &c8_kb_emlrtRSI;
    for (c8_i1 = 0; c8_i1 < 256; c8_i1++) {
      c8_counts[c8_i1] = 0.0;
    }

    for (c8_i2 = 0; c8_i2 < 256; c8_i2++) {
      c8_localBins1[c8_i2] = 0.0;
    }

    for (c8_i3 = 0; c8_i3 < 256; c8_i3++) {
      c8_localBins2[c8_i3] = 0.0;
    }

    for (c8_i4 = 0; c8_i4 < 256; c8_i4++) {
      c8_localBins3[c8_i4] = 0.0;
    }

    for (c8_b_i = 4; c8_b_i <= 521945; c8_b_i += 4) {
      c8_i5 = c8_b_i - 3;
      if ((c8_i5 < 1) || (c8_i5 > 521945)) {
        emlrtDynamicBoundsCheckR2012b(c8_i5, 1, 521945, &c8_sb_emlrtBCI,
          &c8_c_st);
      }

      c8_idx1 = chartInstance->c8_I[c8_i5 - 1];
      c8_i6 = c8_b_i - 2;
      if ((c8_i6 < 1) || (c8_i6 > 521945)) {
        emlrtDynamicBoundsCheckR2012b(c8_i6, 1, 521945, &c8_tb_emlrtBCI,
          &c8_c_st);
      }

      c8_idx2 = chartInstance->c8_I[c8_i6 - 1];
      c8_i7 = c8_b_i - 1;
      if ((c8_i7 < 1) || (c8_i7 > 521945)) {
        emlrtDynamicBoundsCheckR2012b(c8_i7, 1, 521945, &c8_ub_emlrtBCI,
          &c8_c_st);
      }

      c8_idx3 = chartInstance->c8_I[c8_i7 - 1];
      if ((c8_b_i < 1) || (c8_b_i > 521945)) {
        emlrtDynamicBoundsCheckR2012b(c8_b_i, 1, 521945, &c8_vb_emlrtBCI,
          &c8_c_st);
      }

      c8_idx4 = chartInstance->c8_I[c8_b_i - 1];
      c8_c_a = c8_idx1 + 1;
      c8_c_c = c8_c_a - 1;
      c8_d_a = c8_idx1 + 1;
      c8_d_c = c8_d_a - 1;
      c8_localBins1[c8_c_c] = c8_localBins1[c8_d_c] + 1.0;
      c8_e_a = c8_idx2 + 1;
      c8_e_c = c8_e_a - 1;
      c8_f_a = c8_idx2 + 1;
      c8_f_c = c8_f_a - 1;
      c8_localBins2[c8_e_c] = c8_localBins2[c8_f_c] + 1.0;
      c8_g_a = c8_idx3 + 1;
      c8_g_c = c8_g_a - 1;
      c8_h_a = c8_idx3 + 1;
      c8_h_c = c8_h_a - 1;
      c8_localBins3[c8_g_c] = c8_localBins3[c8_h_c] + 1.0;
      c8_i_a = c8_idx4 + 1;
      c8_i_c = c8_i_a - 1;
      c8_j_a = c8_idx4 + 1;
      c8_j_c = c8_j_a - 1;
      c8_counts[c8_i_c] = c8_counts[c8_j_c] + 1.0;
    }

    while (c8_b_i - 3 <= 521945) {
      c8_idx = chartInstance->c8_I[c8_b_i - 4];
      c8_a = c8_idx + 1;
      c8_c = c8_a - 1;
      c8_b_a = c8_idx + 1;
      c8_b_c = c8_b_a - 1;
      c8_counts[c8_c] = c8_counts[c8_b_c] + 1.0;
      c8_b_i++;
    }

    for (c8_c_i = 0; c8_c_i < 256; c8_c_i++) {
      c8_d_i = (real_T)c8_c_i + 1.0;
      c8_counts[(int32_T)c8_d_i - 1] = ((c8_counts[(int32_T)c8_d_i - 1] +
        c8_localBins1[(int32_T)c8_d_i - 1]) + c8_localBins2[(int32_T)c8_d_i - 1])
        + c8_localBins3[(int32_T)c8_d_i - 1];
    }

    c8_b_rngFlag = false;
    c8_b_nanFlag = false;
  }

  if (c8_b_rngFlag) {
    c8_c_st.site = &c8_lb_emlrtRSI;
    c8_warning(chartInstance, &c8_c_st);
  }

  if (c8_b_nanFlag) {
    c8_c_st.site = &c8_mb_emlrtRSI;
    c8_b_warning(chartInstance, &c8_c_st);
  }

  c8_st.site = &c8_db_emlrtRSI;
  c8_b_st.site = &c8_ob_emlrtRSI;
  c8_c_st.site = &c8_qb_emlrtRSI;
  c8_p = true;
  c8_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_k < 256)) {
    c8_b_k = (real_T)c8_k + 1.0;
    c8_c_x = c8_counts[(int32_T)c8_b_k - 1];
    c8_d_x = c8_c_x;
    c8_b_b = muDoubleScalarIsInf(c8_d_x);
    c8_b1 = !c8_b_b;
    c8_e_x = c8_c_x;
    c8_c_b = muDoubleScalarIsNaN(c8_e_x);
    c8_b2 = !c8_c_b;
    c8_d_b = (c8_b1 && c8_b2);
    if (c8_d_b) {
      c8_k++;
    } else {
      c8_p = false;
      c8_exitg1 = true;
    }
  }

  if (c8_p) {
    c8_b = true;
  } else {
    c8_b = false;
  }

  if (!c8_b) {
    c8_y = NULL;
    sf_mex_assign(&c8_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 32),
                  false);
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv2, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c8_c_st, &c8_b_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                sf_mex_call(&c8_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_c_st, NULL, "message", 1U, 2U, 14, c8_b_y, 14, c8_c_y)));
  }

  c8_c_st.site = &c8_qb_emlrtRSI;
  c8_b_p = true;
  c8_c_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_c_k < 256)) {
    c8_d_k = (real_T)c8_c_k + 1.0;
    c8_f_x = c8_counts[(int32_T)c8_d_k - 1];
    c8_c_p = !(c8_f_x < 0.0);
    if (c8_c_p) {
      c8_c_k++;
    } else {
      c8_b_p = false;
      c8_exitg1 = true;
    }
  }

  if (c8_b_p) {
    c8_b3 = true;
  } else {
    c8_b3 = false;
  }

  if (!c8_b3) {
    c8_d_y = NULL;
    sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_b_cv3, 10, 0U, 1, 0U, 2, 1, 37),
                  false);
    c8_e_y = NULL;
    sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_b_cv4, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c8_f_y = NULL;
    sf_mex_assign(&c8_f_y, sf_mex_create("y", c8_cv5, 10, 0U, 1, 0U, 2, 1, 6),
                  false);
    sf_mex_call(&c8_c_st, &c8_c_emlrtMCI, "error", 0U, 2U, 14, c8_d_y, 14,
                sf_mex_call(&c8_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_c_st, NULL, "message", 1U, 2U, 14, c8_e_y, 14, c8_f_y)));
  }

  c8_num_elems = 0.0;
  for (c8_e_k = 0; c8_e_k < 256; c8_e_k++) {
    c8_f_k = (real_T)c8_e_k + 1.0;
    c8_num_elems += c8_counts[(int32_T)c8_f_k - 1];
  }

  c8_localBins1[0] = c8_counts[0] / c8_num_elems;
  c8_localBins2[0] = c8_localBins1[0];
  for (c8_g_k = 0; c8_g_k < 255; c8_g_k++) {
    c8_f_k = (real_T)c8_g_k + 2.0;
    c8_d_p = c8_counts[(int32_T)c8_f_k - 1] / c8_num_elems;
    c8_localBins1[(int32_T)c8_f_k - 1] = c8_localBins1[(int32_T)(c8_f_k - 1.0) -
      1] + c8_d_p;
    c8_localBins2[(int32_T)c8_f_k - 1] = c8_localBins2[(int32_T)(c8_f_k - 1.0) -
      1] + c8_d_p * c8_f_k;
  }

  c8_mu_t = c8_localBins2[255];
  c8_maxval = rtMinusInf;
  c8_b_idx = 0.0;
  c8_num_maxval = 0.0;
  for (c8_h_k = 0; c8_h_k < 255; c8_h_k++) {
    c8_f_k = (real_T)c8_h_k + 1.0;
    c8_b_st.site = &c8_pb_emlrtRSI;
    c8_k_a = c8_mu_t * c8_localBins1[(int32_T)c8_f_k - 1] - c8_localBins2
      [(int32_T)c8_f_k - 1];
    c8_c_st.site = &c8_rb_emlrtRSI;
    c8_l_a = c8_k_a;
    c8_m_a = c8_l_a;
    c8_n_a = c8_m_a;
    c8_o_a = c8_n_a;
    c8_k_c = c8_o_a * c8_o_a;
    c8_sigma_b_squared = c8_k_c / (c8_localBins1[(int32_T)c8_f_k - 1] * (1.0 -
      c8_localBins1[(int32_T)c8_f_k - 1]));
    if (c8_sigma_b_squared > c8_maxval) {
      c8_maxval = c8_sigma_b_squared;
      c8_b_idx = c8_f_k;
      c8_num_maxval = 1.0;
    } else if (c8_sigma_b_squared == c8_maxval) {
      c8_b_idx += c8_f_k;
      c8_num_maxval++;
    }
  }

  c8_g_x = c8_maxval;
  c8_h_x = c8_g_x;
  c8_e_b = muDoubleScalarIsInf(c8_h_x);
  c8_b4 = !c8_e_b;
  c8_i_x = c8_g_x;
  c8_f_b = muDoubleScalarIsNaN(c8_i_x);
  c8_b5 = !c8_f_b;
  c8_isfinite_maxval = (c8_b4 && c8_b5);
  if (c8_isfinite_maxval) {
    c8_b_idx /= c8_num_maxval;
    c8_level = (c8_b_idx - 1.0) / 255.0;
  } else {
    c8_level = 0.0;
  }

  return c8_level;
}

static void c8_warning(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp)
{
  static char_T c8_msgID[25] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'o', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g',
    'e' };

  static char_T c8_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c8_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_y = NULL;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_msgID, 10, 0U, 1, 0U, 2, 1, 25),
                false);
  c8_st.site = &c8_nb_emlrtRSI;
  c8_b_feval(chartInstance, &c8_st, c8_y, c8_feval(chartInstance, &c8_st, c8_b_y,
              c8_c_y));
}

static void c8_b_warning(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp)
{
  static char_T c8_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c8_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c8_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_y = NULL;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1, 0U, 2, 1, 7),
                false);
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_msgID, 10, 0U, 1, 0U, 2, 1, 27),
                false);
  c8_st.site = &c8_nb_emlrtRSI;
  c8_d_feval(chartInstance, &c8_st, c8_y, c8_c_feval(chartInstance, &c8_st,
              c8_b_y, c8_c_y));
}

static void c8_eml_find(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, boolean_T c8_c_x[521945], c8_coder_array_int32_T *c8_i,
  c8_coder_array_int32_T *c8_j)
{
  emlrtStack c8_b_st;
  emlrtStack c8_st;
  int32_T c8_iv[2];
  int32_T c8_iv1[2];
  int32_T c8_iv2[2];
  int32_T c8_b_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_idx;
  int32_T c8_ii;
  int32_T c8_jj;
  boolean_T c8_b;
  boolean_T c8_b1;
  boolean_T c8_b2;
  boolean_T c8_exitg1;
  boolean_T c8_guard1;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_ub_emlrtRSI;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_idx = 0;
  c8_array_int32_T_SetSize(chartInstance, &c8_st, c8_i, &c8_fb_emlrtRTEI, 521945);
  c8_array_int32_T_SetSize(chartInstance, &c8_st, c8_j, &c8_gb_emlrtRTEI, 521945);
  c8_ii = 1;
  c8_jj = 1;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_jj <= 751)) {
    c8_guard1 = false;
    if (c8_c_x[(c8_ii + 695 * (c8_jj - 1)) - 1]) {
      c8_idx++;
      c8_i->vector.data[c8_idx - 1] = c8_ii;
      c8_j->vector.data[c8_idx - 1] = c8_jj;
      if (c8_idx >= 521945) {
        c8_exitg1 = true;
      } else {
        c8_guard1 = true;
      }
    } else {
      c8_guard1 = true;
    }

    if (c8_guard1) {
      c8_ii++;
      if (c8_ii > 695) {
        c8_ii = 1;
        c8_jj++;
      }
    }
  }

  c8_b = (c8_idx < 1);
  if (c8_b) {
    c8_b_i = 0;
  } else {
    c8_b_i = c8_idx;
  }

  c8_iv[0] = 1;
  c8_iv[1] = c8_b_i;
  c8_b_st.site = &c8_xb_emlrtRSI;
  c8_indexShapeCheck(chartInstance, &c8_b_st, 521945, c8_iv);
  c8_array_int32_T_SetSize(chartInstance, &c8_st, c8_i, &c8_hb_emlrtRTEI, c8_b_i);
  c8_b1 = (c8_idx < 1);
  if (c8_b1) {
    c8_i1 = 0;
  } else {
    c8_i1 = c8_idx;
  }

  c8_iv1[0] = 1;
  c8_iv1[1] = c8_i1;
  c8_b_st.site = &c8_wb_emlrtRSI;
  c8_indexShapeCheck(chartInstance, &c8_b_st, 521945, c8_iv1);
  c8_array_int32_T_SetSize(chartInstance, &c8_st, c8_j, &c8_ib_emlrtRTEI, c8_i1);
  c8_b2 = (c8_idx < 1);
  if (c8_b2) {
    c8_i2 = 0;
  } else {
    c8_i2 = c8_idx;
  }

  c8_iv2[0] = 1;
  c8_iv2[1] = c8_i2;
  c8_b_st.site = &c8_vb_emlrtRSI;
  c8_indexShapeCheck(chartInstance, &c8_b_st, 521945, c8_iv2);
}

static void c8_indexShapeCheck(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, int32_T c8_matrixSize, int32_T c8_indexSize[2])
{
  static char_T c8_b_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_y = NULL;
  int32_T c8_size1;
  boolean_T c8_b;
  boolean_T c8_b_b;
  boolean_T c8_b_c;
  boolean_T c8_c;
  boolean_T c8_nonSingletonDimFound;
  (void)chartInstance;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_size1 = c8_matrixSize;
  if (c8_size1 != 1) {
    c8_b = false;
  } else {
    c8_b = true;
  }

  if (c8_b) {
    c8_nonSingletonDimFound = false;
    if (c8_indexSize[1] != 1) {
      c8_nonSingletonDimFound = true;
    }

    c8_b_b = c8_nonSingletonDimFound;
    if (c8_b_b) {
      c8_c = true;
    } else {
      c8_c = false;
    }
  } else {
    c8_c = false;
  }

  c8_st.site = &c8_yb_emlrtRSI;
  c8_b_c = c8_c;
  if (c8_b_c) {
    c8_y = NULL;
    sf_mex_assign(&c8_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c8_st, &c8_e_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_st, NULL, "message", 1U, 1U, 14, c8_b_y)));
  }
}

static void c8_sub2ind(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_real_T *c8_b_varargin_1,
  c8_coder_array_real_T *c8_b_varargin_2, c8_coder_array_int32_T *c8_idx)
{
  static char_T c8_b_cv1[34] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u',
    'b', '2', 'i', 'n', 'd', ':', 'S', 'u', 'b', 's', 'c', 'r', 'i', 'p', 't',
    'V', 'e', 'c', 't', 'o', 'r', 'S', 'i', 'z', 'e' };

  static char_T c8_b_cv[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u', 'b',
    '2', 'i', 'n', 'd', ':', 'I', 'n', 'd', 'e', 'x', 'O', 'u', 't', 'O', 'f',
    'R', 'a', 'n', 'g', 'e' };

  c8_coder_array_int32_T c8_b;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_c_varargin_1[2];
  real_T c8_c_varargin_2[2];
  real_T c8_b_k;
  real_T c8_x1;
  real_T c8_x2;
  int32_T c8_b_loop_ub;
  int32_T c8_c_loop_ub;
  int32_T c8_d_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_k;
  int32_T c8_loop_ub;
  boolean_T c8_b_p;
  boolean_T c8_c_p;
  boolean_T c8_exitg1;
  boolean_T c8_p;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  if (!c8_allinrange(chartInstance, c8_b_varargin_1, 695)) {
    c8_y = NULL;
    sf_mex_assign(&c8_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c8_sp, &c8_f_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                sf_mex_call(c8_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c8_sp, NULL, "message", 1U, 1U, 14, c8_b_y)));
  }

  c8_c_varargin_1[0] = (real_T)c8_b_varargin_1->size[0];
  c8_c_varargin_1[1] = 1.0;
  c8_c_varargin_2[0] = (real_T)c8_b_varargin_2->size[0];
  c8_c_varargin_2[1] = 1.0;
  c8_p = false;
  c8_b_p = true;
  c8_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_k < 2)) {
    c8_b_k = (real_T)c8_k + 1.0;
    c8_x1 = c8_c_varargin_1[(int32_T)c8_b_k - 1];
    c8_x2 = c8_c_varargin_2[(int32_T)c8_b_k - 1];
    c8_c_p = (c8_x1 == c8_x2);
    if (!c8_c_p) {
      c8_b_p = false;
      c8_exitg1 = true;
    } else {
      c8_k++;
    }
  }

  if (c8_b_p) {
    c8_p = true;
  }

  if (!c8_p) {
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1, 0U, 2, 1, 34),
                  false);
    c8_e_y = NULL;
    sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1, 0U, 2, 1, 34),
                  false);
    sf_mex_call(c8_sp, &c8_g_emlrtMCI, "error", 0U, 2U, 14, c8_c_y, 14,
                sf_mex_call(c8_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c8_sp, NULL, "message", 1U, 1U, 14, c8_e_y)));
  }

  if (!c8_allinrange(chartInstance, c8_b_varargin_2, 751)) {
    c8_d_y = NULL;
    sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c8_f_y = NULL;
    sf_mex_assign(&c8_f_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    sf_mex_call(c8_sp, &c8_f_emlrtMCI, "error", 0U, 2U, 14, c8_d_y, 14,
                sf_mex_call(c8_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c8_sp, NULL, "message", 1U, 1U, 14, c8_f_y)));
  }

  c8_st.site = &c8_mh_emlrtRSI;
  c8_array_int32_T_SetSize(chartInstance, &c8_st, c8_idx, &c8_jb_emlrtRTEI,
    c8_b_varargin_1->size[0]);
  c8_loop_ub = c8_b_varargin_1->size[0] - 1;
  for (c8_i = 0; c8_i <= c8_loop_ub; c8_i++) {
    c8_idx->vector.data[c8_i] = (int32_T)c8_b_varargin_1->vector.data[c8_i];
  }

  c8_array_int32_T_Constructor(chartInstance, &c8_b);
  c8_st.site = &c8_lh_emlrtRSI;
  c8_array_int32_T_SetSize(chartInstance, &c8_st, &c8_b, &c8_kb_emlrtRTEI,
    c8_b_varargin_2->size[0]);
  c8_b_loop_ub = c8_b_varargin_2->size[0] - 1;
  for (c8_i1 = 0; c8_i1 <= c8_b_loop_ub; c8_i1++) {
    c8_b.vector.data[c8_i1] = (int32_T)c8_b_varargin_2->vector.data[c8_i1] - 1;
  }

  c8_c_loop_ub = c8_b.size[0] - 1;
  for (c8_i2 = 0; c8_i2 <= c8_c_loop_ub; c8_i2++) {
    c8_b.vector.data[c8_i2] *= 695;
  }

  c8_d_loop_ub = c8_idx->size[0] - 1;
  for (c8_i3 = 0; c8_i3 <= c8_d_loop_ub; c8_i3++) {
    c8_idx->vector.data[c8_i3] += c8_b.vector.data[c8_i3];
  }

  c8_array_int32_T_Destructor(chartInstance, &c8_b);
}

static boolean_T c8_allinrange(SFc8_untitledInstanceStruct *chartInstance,
  c8_coder_array_real_T *c8_c_x, int32_T c8_hi)
{
  real_T c8_b_k;
  real_T c8_d;
  int32_T c8_exitg1;
  int32_T c8_i;
  int32_T c8_k;
  boolean_T c8_b;
  boolean_T c8_p;
  (void)chartInstance;
  c8_d = (real_T)c8_c_x->size[0];
  c8_i = (int32_T)c8_d - 1;
  c8_k = 0;
  do {
    c8_exitg1 = 0;
    if (c8_k <= c8_i) {
      c8_b_k = (real_T)c8_k + 1.0;
      if ((c8_c_x->vector.data[(int32_T)c8_b_k - 1] >= 1.0) &&
          (c8_c_x->vector.data[(int32_T)c8_b_k - 1] <= (real_T)c8_hi)) {
        c8_b = true;
      } else {
        c8_b = false;
      }

      if (!c8_b) {
        c8_p = false;
        c8_exitg1 = 1;
      } else {
        c8_k++;
      }
    } else {
      c8_p = true;
      c8_exitg1 = 1;
    }
  } while (c8_exitg1 == 0);

  return c8_p;
}

static void c8_check_forloop_overflow_error(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp)
{
  static char_T c8_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c8_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_y = NULL;
  (void)chartInstance;
  c8_y = NULL;
  sf_mex_assign(&c8_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 34),
                false);
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 34),
                false);
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1, 0U, 2, 1, 5),
                false);
  sf_mex_call(c8_sp, &c8_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14, sf_mex_call
              (c8_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c8_sp, NULL,
    "message", 1U, 2U, 14, c8_b_y, 14, c8_c_y)));
}

static void c8_chcenters(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, creal_T c8_b_varargin_1[521945], c8_coder_array_real_T_2D
  *c8_centers, c8_coder_array_real_T_2D *c8_metric)
{
  static char_T c8_b_cv[25] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u', 'b',
    's', 'd', 'e', 'l', 'd', 'i', 'm', 'm', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  c8_coder_array_boolean_T c8_d_x;
  c8_coder_array_int32_T c8_r;
  c8_coder_array_int32_T_2D c8_iidx;
  c8_coder_array_real_T c8_b_centers;
  c8_coder_array_real_T c8_b_varargin_2;
  c8_coder_array_real_T c8_c_centers;
  c8_coder_array_real_T c8_ndx;
  c8_coder_array_real_T_2D c8_e_centers;
  c8_coder_array_real_T_2D c8_e_x;
  c8_coder_array_real_T_2D c8_i_x;
  c8_coder_array_real_T_2D c8_sortIdx;
  c8_coder_array_sOA5t73y81YtFHGIDxk c8_b_s;
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_st;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_f_y = NULL;
  creal_T c8_c_x;
  real_T c8_a;
  real_T c8_b;
  real_T c8_b_accumMatrixRe;
  real_T c8_b_idx;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d_k;
  real_T c8_f_x;
  real_T c8_g_x;
  real_T c8_x1;
  real_T c8_x2;
  real_T c8_y;
  int32_T c8_iv[2];
  int32_T c8_iv1[2];
  int32_T c8_tmp_data[2];
  int32_T c8_b_sortIdx[1];
  int32_T c8_b_a;
  int32_T c8_b_i;
  int32_T c8_b_j;
  int32_T c8_b_k;
  int32_T c8_b_loop_ub;
  int32_T c8_b_y;
  int32_T c8_c_a;
  int32_T c8_c_idx;
  int32_T c8_c_k;
  int32_T c8_c_loop_ub;
  int32_T c8_d_centers;
  int32_T c8_d_idx;
  int32_T c8_d_loop_ub;
  int32_T c8_e_b;
  int32_T c8_e_idx;
  int32_T c8_e_loop_ub;
  int32_T c8_f_b;
  int32_T c8_f_idx;
  int32_T c8_f_loop_ub;
  int32_T c8_g_idx;
  int32_T c8_g_loop_ub;
  int32_T c8_h_loop_ub;
  int32_T c8_h_x;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i20;
  int32_T c8_i21;
  int32_T c8_i22;
  int32_T c8_i23;
  int32_T c8_i24;
  int32_T c8_i25;
  int32_T c8_i26;
  int32_T c8_i27;
  int32_T c8_i28;
  int32_T c8_i29;
  int32_T c8_i3;
  int32_T c8_i30;
  int32_T c8_i31;
  int32_T c8_i32;
  int32_T c8_i33;
  int32_T c8_i34;
  int32_T c8_i35;
  int32_T c8_i36;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_i_loop_ub;
  int32_T c8_idx;
  int32_T c8_j;
  int32_T c8_j_loop_ub;
  int32_T c8_k;
  int32_T c8_k_loop_ub;
  int32_T c8_l_loop_ub;
  int32_T c8_loop_ub;
  int32_T c8_m_loop_ub;
  int32_T c8_n;
  int32_T c8_nrows;
  int32_T c8_nrowx;
  boolean_T c8_b1;
  boolean_T c8_b_b;
  boolean_T c8_c_b;
  boolean_T c8_d_b;
  boolean_T c8_exitg1;
  boolean_T c8_flat;
  boolean_T c8_guard1;
  boolean_T c8_overflow;
  boolean_T c8_p;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_st.site = &c8_dh_emlrtRSI;
  c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_centers, &c8_lb_emlrtRTEI,
    0, 0);
  c8_st.site = &c8_ch_emlrtRSI;
  c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_metric, &c8_mb_emlrtRTEI,
    0, 0);
  for (c8_k = 0; c8_k < 521945; c8_k++) {
    c8_b_k = c8_k;
    c8_c_x = c8_b_varargin_1[c8_b_k];
    c8_x1 = c8_c_x.re;
    c8_x2 = c8_c_x.im;
    c8_a = c8_x1;
    c8_b = c8_x2;
    c8_y = muDoubleScalarHypot(c8_a, c8_b);
    chartInstance->c8_accumMatrixRe[c8_b_k] = c8_y;
  }

  c8_b_accumMatrixRe = chartInstance->c8_accumMatrixRe[0];
  for (c8_i = 0; c8_i < 521945; c8_i++) {
    chartInstance->c8_bw[c8_i] = (chartInstance->c8_accumMatrixRe[c8_i] ==
      c8_b_accumMatrixRe);
  }

  c8_array_boolean_T_Constructor(chartInstance, &c8_d_x);
  c8_array_boolean_T_SetSize(chartInstance, c8_sp, &c8_d_x, &c8_c_emlrtRTEI,
    521945);
  for (c8_i1 = 0; c8_i1 < 521945; c8_i1++) {
    c8_d_x.vector.data[c8_i1] = chartInstance->c8_bw[c8_i1];
  }

  c8_flat = true;
  c8_c_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_c_k < 521945)) {
    c8_d_k = (real_T)c8_c_k + 1.0;
    if (!c8_d_x.vector.data[(int32_T)c8_d_k - 1]) {
      c8_flat = false;
      c8_exitg1 = true;
    } else {
      c8_c_k++;
    }
  }

  c8_array_boolean_T_Destructor(chartInstance, &c8_d_x);
  if (!c8_flat) {
    c8_st.site = &c8_gc_emlrtRSI;
    c8_medfilt2(chartInstance, chartInstance->c8_accumMatrixRe,
                chartInstance->c8_Hd);
    for (c8_i2 = 0; c8_i2 < 521945; c8_i2++) {
      chartInstance->c8_b_Hd[c8_i2] = chartInstance->c8_Hd[c8_i2];
    }

    c8_st.site = &c8_hc_emlrtRSI;
    c8_imhmax(chartInstance, &c8_st, chartInstance->c8_b_Hd,
              chartInstance->c8_Hd);
    c8_st.site = &c8_ic_emlrtRSI;
    c8_imregionalmax(chartInstance, &c8_st, chartInstance->c8_Hd,
                     chartInstance->c8_bw);
    c8_array_sOA5t73y81YtFHGIDxk0fKF_C(chartInstance, &c8_b_s);
    c8_st.site = &c8_jc_emlrtRSI;
    c8_regionprops(chartInstance, &c8_st, chartInstance->c8_bw,
                   chartInstance->c8_accumMatrixRe, &c8_b_s);
    if (c8_b_s.size[0] != 0) {
      c8_st.site = &c8_bh_emlrtRSI;
      c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_centers,
        &c8_nb_emlrtRTEI, c8_b_s.size[0], 2);
      c8_d = (real_T)c8_b_s.size[0];
      c8_i3 = (int32_T)c8_d - 1;
      for (c8_idx = 0; c8_idx <= c8_i3; c8_idx++) {
        c8_b_idx = (real_T)c8_idx + 1.0;
        c8_i5 = c8_centers->size[0];
        c8_i6 = (int32_T)c8_b_idx;
        if ((c8_i6 < 1) || (c8_i6 > c8_i5)) {
          emlrtDynamicBoundsCheckR2012b(c8_i6, 1, c8_i5, &c8_wb_emlrtBCI,
            (emlrtConstCTX)c8_sp);
        }

        c8_i7 = c8_i6;
        for (c8_i8 = 0; c8_i8 < 2; c8_i8++) {
          c8_tmp_data[c8_i8] = c8_i8;
        }

        for (c8_i11 = 0; c8_i11 < 2; c8_i11++) {
          c8_iv[c8_i11] = 1 + c8_i11;
        }

        for (c8_i12 = 0; c8_i12 < 2; c8_i12++) {
          c8_iv1[c8_i12] = 1 + c8_i12;
        }

        emlrtSubAssignSizeCheckR2012b(&c8_iv[0], 2, &c8_iv1[0], 2, &c8_emlrtECI,
          (void *)c8_sp);
        c8_i13 = c8_i7 - 1;
        for (c8_i14 = 0; c8_i14 < 2; c8_i14++) {
          c8_i18 = c8_b_s.size[0];
          c8_i19 = (int32_T)c8_b_idx;
          if ((c8_i19 < 1) || (c8_i19 > c8_i18)) {
            emlrtDynamicBoundsCheckR2012b(c8_i19, 1, c8_i18, &c8_yb_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_centers->vector.data[c8_i13 + c8_centers->size[0] *
            c8_tmp_data[c8_i14]] = c8_b_s.vector.data[c8_i19 - 1].
            WeightedCentroid[c8_i14];
        }
      }

      c8_d1 = (real_T)c8_centers->size[0];
      c8_i4 = (int32_T)-((-1.0 - c8_d1) + 1.0);
      emlrtForLoopVectorCheckR2021a(c8_d1, -1.0, 1.0, mxDOUBLE_CLASS, c8_i4,
        &c8_pg_emlrtRTEI, (emlrtConstCTX)c8_sp);
      c8_array_real_T_2D_Constructor(chartInstance, &c8_e_x);
      for (c8_c_idx = 0; c8_c_idx < c8_i4; c8_c_idx++) {
        c8_b_idx = c8_d1 - (real_T)c8_c_idx;
        c8_i9 = c8_centers->size[0];
        c8_i10 = (int32_T)c8_b_idx;
        if ((c8_i10 < 1) || (c8_i10 > c8_i9)) {
          emlrtDynamicBoundsCheckR2012b(c8_i10, 1, c8_i9, &c8_xb_emlrtBCI,
            (emlrtConstCTX)c8_sp);
        }

        c8_f_x = c8_centers->vector.data[c8_i10 - 1];
        c8_c_b = muDoubleScalarIsNaN(c8_f_x);
        c8_guard1 = false;
        if (c8_c_b) {
          c8_guard1 = true;
        } else {
          c8_i16 = c8_centers->size[0];
          c8_i17 = (int32_T)c8_b_idx;
          if ((c8_i17 < 1) || (c8_i17 > c8_i16)) {
            emlrtDynamicBoundsCheckR2012b(c8_i17, 1, c8_i16, &c8_ac_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_g_x = c8_centers->vector.data[(c8_i17 + c8_centers->size[0]) - 1];
          c8_d_b = muDoubleScalarIsNaN(c8_g_x);
          if (c8_d_b) {
            c8_guard1 = true;
          }
        }

        if (c8_guard1) {
          c8_st.site = &c8_kc_emlrtRSI;
          c8_b_st.site = &c8_kc_emlrtRSI;
          c8_array_real_T_2D_SetSize(chartInstance, &c8_b_st, &c8_e_x,
            &c8_pb_emlrtRTEI, c8_centers->size[0], c8_centers->size[1]);
          c8_b_loop_ub = c8_centers->size[0] * c8_centers->size[1] - 1;
          for (c8_i20 = 0; c8_i20 <= c8_b_loop_ub; c8_i20++) {
            c8_e_x.vector.data[c8_i20] = c8_centers->vector.data[c8_i20];
          }

          c8_d_idx = (int32_T)c8_b_idx;
          c8_b_st.site = &c8_cf_emlrtRSI;
          c8_e_idx = c8_d_idx;
          c8_f_idx = c8_e_idx;
          c8_n = c8_e_x.size[0];
          c8_p = true;
          if (c8_f_idx > c8_n) {
            c8_p = false;
          } else {
            c8_h_x = c8_f_idx;
            c8_b_y = c8_h_x;
            if (c8_f_idx != c8_b_y) {
              c8_p = false;
            }
          }

          if (!c8_p) {
            c8_c_y = NULL;
            sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2,
              1, 25), false);
            c8_d_y = NULL;
            sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2,
              1, 25), false);
            sf_mex_call(&c8_b_st, &c8_q_emlrtMCI, "error", 0U, 2U, 14, c8_c_y,
                        14, sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_d_y)));
          }

          c8_b_st.site = &c8_df_emlrtRSI;
          c8_g_idx = c8_d_idx;
          c8_nrowx = c8_e_x.size[0];
          c8_nrows = c8_nrowx - 1;
          c8_c_st.site = &c8_ef_emlrtRSI;
          for (c8_j = 0; c8_j < 2; c8_j++) {
            c8_b_j = c8_j;
            c8_c_st.site = &c8_ff_emlrtRSI;
            c8_b_a = c8_g_idx;
            c8_e_b = c8_nrows;
            c8_c_a = c8_b_a;
            c8_f_b = c8_e_b;
            if (c8_c_a > c8_f_b) {
              c8_overflow = false;
            } else {
              c8_overflow = (c8_f_b > 2147483646);
            }

            if (c8_overflow) {
              c8_d_st.site = &c8_ec_emlrtRSI;
              c8_check_forloop_overflow_error(chartInstance, &c8_d_st);
            }

            for (c8_b_i = c8_g_idx; c8_b_i <= c8_nrows; c8_b_i++) {
              c8_e_x.vector.data[(c8_b_i + c8_e_x.size[0] * c8_b_j) - 1] =
                c8_e_x.vector.data[c8_b_i + c8_e_x.size[0] * c8_b_j];
            }
          }

          if (c8_nrows > c8_nrowx) {
            c8_e_y = NULL;
            sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_cv, 10, 0U, 1, 0U, 2, 1,
              30), false);
            c8_f_y = NULL;
            sf_mex_assign(&c8_f_y, sf_mex_create("y", c8_cv, 10, 0U, 1, 0U, 2, 1,
              30), false);
            sf_mex_call(&c8_b_st, &c8_r_emlrtMCI, "error", 0U, 2U, 14, c8_e_y,
                        14, sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c8_b_st, NULL, "message", 1U, 1U, 14, c8_f_y)));
          }

          c8_b1 = (c8_nrows < 1);
          if (c8_b1) {
            c8_i25 = -1;
          } else {
            c8_i25 = c8_nrows - 1;
          }

          for (c8_i27 = 0; c8_i27 < 2; c8_i27++) {
            c8_g_loop_ub = c8_i25;
            for (c8_i28 = 0; c8_i28 <= c8_g_loop_ub; c8_i28++) {
              c8_e_x.vector.data[c8_i28 + (c8_i25 + 1) * c8_i27] =
                c8_e_x.vector.data[c8_i28 + c8_e_x.size[0] * c8_i27];
            }
          }

          c8_array_real_T_2D_SetSize(chartInstance, &c8_b_st, &c8_e_x,
            &c8_qb_emlrtRTEI, c8_i25 + 1, 2);
          c8_st.site = &c8_kc_emlrtRSI;
          c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_centers,
            &c8_pb_emlrtRTEI, c8_e_x.size[0], 2);
          c8_h_loop_ub = (c8_e_x.size[0] << 1) - 1;
          for (c8_i29 = 0; c8_i29 <= c8_h_loop_ub; c8_i29++) {
            c8_centers->vector.data[c8_i29] = c8_e_x.vector.data[c8_i29];
          }
        }
      }

      c8_array_real_T_2D_Destructor(chartInstance, &c8_e_x);
      c8_b_b = (c8_centers->size[0] == 0);
      if (!c8_b_b) {
        c8_array_real_T_Constructor(chartInstance, &c8_ndx);
        c8_st.site = &c8_lc_emlrtRSI;
        c8_array_real_T_Constructor(chartInstance, &c8_b_centers);
        c8_b_st.site = &c8_lc_emlrtRSI;
        c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_b_centers,
          &c8_rb_emlrtRTEI, c8_centers->size[0]);
        c8_loop_ub = c8_centers->size[0] - 1;
        for (c8_i15 = 0; c8_i15 <= c8_loop_ub; c8_i15++) {
          c8_b_centers.vector.data[c8_i15] = c8_centers->vector.data[c8_i15 +
            c8_centers->size[0]];
        }

        c8_b_st.site = &c8_lc_emlrtRSI;
        c8_round(chartInstance, &c8_b_st, &c8_b_centers, &c8_ndx);
        c8_array_real_T_Destructor(chartInstance, &c8_b_centers);
        c8_array_real_T_Constructor(chartInstance, &c8_c_centers);
        c8_b_st.site = &c8_lc_emlrtRSI;
        c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_c_centers,
          &c8_sb_emlrtRTEI, c8_centers->size[0]);
        c8_c_loop_ub = c8_centers->size[0] - 1;
        for (c8_i21 = 0; c8_i21 <= c8_c_loop_ub; c8_i21++) {
          c8_c_centers.vector.data[c8_i21] = c8_centers->vector.data[c8_i21];
        }

        c8_array_real_T_Constructor(chartInstance, &c8_b_varargin_2);
        c8_b_st.site = &c8_lc_emlrtRSI;
        c8_round(chartInstance, &c8_b_st, &c8_c_centers, &c8_b_varargin_2);
        c8_array_real_T_Destructor(chartInstance, &c8_c_centers);
        c8_array_int32_T_Constructor(chartInstance, &c8_r);
        c8_b_st.site = &c8_ac_emlrtRSI;
        c8_sub2ind(chartInstance, &c8_b_st, &c8_ndx, &c8_b_varargin_2, &c8_r);
        c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_ndx, &c8_p_emlrtRTEI,
          c8_r.size[0]);
        c8_d_loop_ub = c8_r.size[0] - 1;
        for (c8_i22 = 0; c8_i22 <= c8_d_loop_ub; c8_i22++) {
          c8_ndx.vector.data[c8_i22] = (real_T)c8_r.vector.data[c8_i22];
        }

        c8_array_int32_T_Destructor(chartInstance, &c8_r);
        c8_st.site = &c8_lc_emlrtRSI;
        c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_b_varargin_2,
          &c8_tb_emlrtRTEI, c8_ndx.size[0]);
        c8_e_loop_ub = c8_ndx.size[0] - 1;
        for (c8_i23 = 0; c8_i23 <= c8_e_loop_ub; c8_i23++) {
          c8_i24 = (int32_T)c8_ndx.vector.data[c8_i23];
          if ((c8_i24 < 1) || (c8_i24 > 521945)) {
            emlrtDynamicBoundsCheckR2012b(c8_i24, 1, 521945, &c8_bc_emlrtBCI,
              (emlrtConstCTX)c8_sp);
          }

          c8_b_varargin_2.vector.data[c8_i23] = chartInstance->c8_Hd[c8_i24 - 1];
        }

        c8_array_real_T_Destructor(chartInstance, &c8_ndx);
        c8_st.site = &c8_lc_emlrtRSI;
        c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_metric,
          &c8_ub_emlrtRTEI, c8_b_varargin_2.size[0], 1);
        c8_f_loop_ub = c8_b_varargin_2.size[0] - 1;
        for (c8_i26 = 0; c8_i26 <= c8_f_loop_ub; c8_i26++) {
          c8_metric->vector.data[c8_i26] = c8_b_varargin_2.vector.data[c8_i26];
        }

        c8_array_real_T_Destructor(chartInstance, &c8_b_varargin_2);
        c8_st.site = &c8_mc_emlrtRSI;
        c8_array_real_T_2D_Constructor(chartInstance, &c8_i_x);
        c8_b_st.site = &c8_mc_emlrtRSI;
        c8_array_real_T_2D_SetSize(chartInstance, &c8_b_st, &c8_i_x,
          &c8_vb_emlrtRTEI, c8_metric->size[0], c8_metric->size[1]);
        c8_i_loop_ub = c8_metric->size[0] * c8_metric->size[1] - 1;
        for (c8_i30 = 0; c8_i30 <= c8_i_loop_ub; c8_i30++) {
          c8_i_x.vector.data[c8_i30] = c8_metric->vector.data[c8_i30];
        }

        c8_array_int32_T_2D_Constructor(chartInstance, &c8_iidx);
        c8_b_st.site = &c8_if_emlrtRSI;
        c8_b_sort(chartInstance, &c8_b_st, &c8_i_x, &c8_iidx);
        c8_array_real_T_2D_Constructor(chartInstance, &c8_sortIdx);
        c8_array_real_T_2D_SetSize(chartInstance, &c8_st, &c8_sortIdx,
          &c8_wb_emlrtRTEI, c8_iidx.size[0], 1);
        c8_j_loop_ub = c8_iidx.size[0] - 1;
        for (c8_i31 = 0; c8_i31 <= c8_j_loop_ub; c8_i31++) {
          c8_sortIdx.vector.data[c8_i31] = (real_T)c8_iidx.vector.data[c8_i31];
        }

        c8_array_int32_T_2D_Destructor(chartInstance, &c8_iidx);
        c8_st.site = &c8_mc_emlrtRSI;
        c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_metric,
          &c8_xb_emlrtRTEI, c8_i_x.size[0], 1);
        c8_k_loop_ub = c8_i_x.size[0] - 1;
        for (c8_i32 = 0; c8_i32 <= c8_k_loop_ub; c8_i32++) {
          c8_metric->vector.data[c8_i32] = c8_i_x.vector.data[c8_i32];
        }

        c8_array_real_T_2D_Destructor(chartInstance, &c8_i_x);
        c8_d_centers = c8_centers->size[0];
        c8_b_sortIdx[0] = c8_sortIdx.size[0];
        c8_array_real_T_2D_Constructor(chartInstance, &c8_e_centers);
        c8_st.site = &c8_ah_emlrtRSI;
        c8_array_real_T_2D_SetSize(chartInstance, &c8_st, &c8_e_centers,
          &c8_yb_emlrtRTEI, c8_b_sortIdx[0], 2);
        for (c8_i33 = 0; c8_i33 < 2; c8_i33++) {
          c8_l_loop_ub = c8_b_sortIdx[0] - 1;
          for (c8_i34 = 0; c8_i34 <= c8_l_loop_ub; c8_i34++) {
            c8_i35 = (int32_T)c8_sortIdx.vector.data[c8_i34];
            if ((c8_i35 < 1) || (c8_i35 > c8_d_centers)) {
              emlrtDynamicBoundsCheckR2012b(c8_i35, 1, c8_d_centers,
                &c8_cc_emlrtBCI, (emlrtConstCTX)c8_sp);
            }

            c8_e_centers.vector.data[c8_i34 + c8_e_centers.size[0] * c8_i33] =
              c8_centers->vector.data[(c8_i35 + c8_centers->size[0] * c8_i33) -
              1];
          }
        }

        c8_array_real_T_2D_Destructor(chartInstance, &c8_sortIdx);
        c8_st.site = &c8_ah_emlrtRSI;
        c8_array_real_T_2D_SetSize(chartInstance, &c8_st, c8_centers,
          &c8_ac_emlrtRTEI, c8_e_centers.size[0], c8_e_centers.size[1]);
        c8_m_loop_ub = c8_e_centers.size[0] * c8_e_centers.size[1] - 1;
        for (c8_i36 = 0; c8_i36 <= c8_m_loop_ub; c8_i36++) {
          c8_centers->vector.data[c8_i36] = c8_e_centers.vector.data[c8_i36];
        }

        c8_array_real_T_2D_Destructor(chartInstance, &c8_e_centers);
      }
    }

    c8_array_sOA5t73y81YtFHGIDxk0fKF_D(chartInstance, &c8_b_s);
  }
}

static void c8_medfilt2(SFc8_untitledInstanceStruct *chartInstance, real_T
  c8_b_varargin_1[521945], real_T c8_b[521945])
{
  static int32_T c8_offsets[25] = { -1400, -1399, -1398, -1397, -1396, -701,
    -700, -699, -698, -697, -2, -1, 0, 1, 2, 697, 698, 699, 700, 701, 1396, 1397,
    1398, 1399, 1400 };

  real_T c8_domainSizeT[2];
  real_T c8_sizeB[2];
  real_T c8_startIdxT[2];
  real_T c8_a;
  real_T c8_b_a;
  real_T c8_c_a;
  real_T c8_c_i;
  real_T c8_c_j;
  real_T c8_d_a;
  int32_T c8_b_c;
  int32_T c8_b_i;
  int32_T c8_b_j;
  int32_T c8_c;
  int32_T c8_c_c;
  int32_T c8_d_c;
  int32_T c8_d_i;
  int32_T c8_d_j;
  int32_T c8_e_i;
  int32_T c8_e_j;
  int32_T c8_f_i;
  int32_T c8_f_j;
  int32_T c8_g_i;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_j;
  for (c8_j = 0; c8_j < 2; c8_j++) {
    c8_c_j = (real_T)c8_j + 1.0;
    for (c8_i = 0; c8_i < 699; c8_i++) {
      c8_c_i = (real_T)c8_i + 1.0;
      chartInstance->c8_Apad[((int32_T)c8_c_i + 699 * ((int32_T)c8_c_j - 1)) - 1]
        = 0.0;
    }
  }

  for (c8_b_j = 0; c8_b_j < 2; c8_b_j++) {
    for (c8_b_i = 0; c8_b_i < 699; c8_b_i++) {
      c8_c_i = (real_T)c8_b_i + 1.0;
      chartInstance->c8_Apad[((int32_T)c8_c_i + 699 * (c8_b_j + 753)) - 1] = 0.0;
    }
  }

  for (c8_d_j = 0; c8_d_j < 751; c8_d_j++) {
    c8_c_j = (real_T)c8_d_j + 1.0;
    for (c8_d_i = 0; c8_d_i < 2; c8_d_i++) {
      c8_c_i = (real_T)c8_d_i + 1.0;
      c8_a = c8_c_j;
      c8_c = (int32_T)c8_a;
      chartInstance->c8_Apad[((int32_T)c8_c_i + 699 * (c8_c + 1)) - 1] = 0.0;
    }
  }

  for (c8_e_j = 0; c8_e_j < 751; c8_e_j++) {
    c8_c_j = (real_T)c8_e_j + 1.0;
    for (c8_e_i = 0; c8_e_i < 2; c8_e_i++) {
      c8_b_a = c8_c_j;
      c8_b_c = (int32_T)c8_b_a;
      chartInstance->c8_Apad[(c8_e_i + 699 * (c8_b_c + 1)) + 697] = 0.0;
    }
  }

  for (c8_f_j = 0; c8_f_j < 751; c8_f_j++) {
    c8_c_j = (real_T)c8_f_j + 1.0;
    for (c8_g_i = 0; c8_g_i < 695; c8_g_i++) {
      c8_c_i = (real_T)c8_g_i + 1.0;
      c8_c_a = c8_c_i;
      c8_c_c = (int32_T)c8_c_a;
      c8_d_a = c8_c_j;
      c8_d_c = (int32_T)c8_d_a;
      chartInstance->c8_Apad[(c8_c_c + 699 * (c8_d_c + 1)) + 1] =
        c8_b_varargin_1[((int32_T)c8_c_i + 695 * ((int32_T)c8_c_j - 1)) - 1];
    }
  }

  for (c8_f_i = 0; c8_f_i < 2; c8_f_i++) {
    c8_domainSizeT[c8_f_i] = 5.0;
  }

  for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
    c8_startIdxT[c8_i1] = 2.0;
  }

  for (c8_i2 = 0; c8_i2 < 2; c8_i2++) {
    c8_sizeB[c8_i2] = 695.0 + 56.0 * (real_T)c8_i2;
  }

  ordfilt2_real64(&chartInstance->c8_Apad[0], 699.0, &c8_startIdxT[0],
                  &c8_offsets[0], 25.0, &c8_domainSizeT[0], 12.0, &c8_b[0],
                  &c8_sizeB[0], true);
}

static void c8_imhmax(SFc8_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c8_sp, real_T c8_c_I[521945], real_T c8_J
                      [521945])
{
  emlrtStack c8_b_st;
  emlrtStack c8_st;
  real_T c8_imSizeT[2];
  int32_T c8_i;
  int32_T c8_i1;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_rc_emlrtRSI;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  for (c8_i = 0; c8_i < 521945; c8_i++) {
    c8_J[c8_i] = c8_c_I[c8_i] - 0.099999999999999964;
  }

  c8_b_st.site = &c8_sc_emlrtRSI;
  c8_validateattributes(chartInstance, &c8_b_st, c8_J);
  c8_b_st.site = &c8_tc_emlrtRSI;
  c8_validateattributes(chartInstance, &c8_b_st, c8_c_I);
  for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
    c8_imSizeT[c8_i1] = 695.0 + 56.0 * (real_T)c8_i1;
  }

  ippreconstruct_real64(&c8_J[0], &c8_c_I[0], &c8_imSizeT[0], 2.0);
}

static void c8_validateattributes(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, real_T c8_a[521945])
{
  static char_T c8_b_cv[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'r',
    'e', 'c', 'o', 'n', 's', 't', 'r', 'u', 'c', 't', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c8_b_cv1[5] = { 'i', 'n', 'p', 'u', 't' };

  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_b_k;
  real_T c8_c_x;
  real_T c8_d_x;
  int32_T c8_k;
  boolean_T c8_b;
  boolean_T c8_b_b;
  boolean_T c8_b_p;
  boolean_T c8_exitg1;
  boolean_T c8_p;
  (void)chartInstance;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_qb_emlrtRSI;
  c8_p = true;
  c8_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_k < 521945)) {
    c8_b_k = (real_T)c8_k + 1.0;
    c8_c_x = c8_a[(int32_T)c8_b_k - 1];
    c8_d_x = c8_c_x;
    c8_b_b = muDoubleScalarIsNaN(c8_d_x);
    c8_b_p = !c8_b_b;
    if (c8_b_p) {
      c8_k++;
    } else {
      c8_p = false;
      c8_exitg1 = true;
    }
  }

  if (c8_p) {
    c8_b = true;
  } else {
    c8_b = false;
  }

  if (!c8_b) {
    c8_y = NULL;
    sf_mex_assign(&c8_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 35),
                  false);
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c8_st, &c8_i_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_st, NULL, "message", 1U, 2U, 14, c8_b_y, 14, c8_c_y)));
  }
}

static void c8_imregionalmax(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_b_varargin_1[521945], boolean_T c8_BW[521945])
{
  static char_T c8_b_cv[35] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm', 'r',
    'e', 'g', 'i', 'o', 'n', 'a', 'l', 'm', 'a', 'x', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c8_b_cv2[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o',
    'l', 'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  static char_T c8_b_cv1[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '1', ',', ' ', 'I', ',' };

  emlrtStack c8_b_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_connSizeT[2];
  real_T c8_imSizeT[2];
  real_T c8_b_k;
  real_T c8_c_x;
  real_T c8_d_k;
  real_T c8_d_x;
  real_T c8_e_x;
  int32_T c8_c_k;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_k;
  boolean_T c8_conn[9];
  boolean_T c8_b;
  boolean_T c8_b_b;
  boolean_T c8_b_p;
  boolean_T c8_c_b;
  boolean_T c8_exitg1;
  boolean_T c8_p;
  (void)chartInstance;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_st.site = &c8_vc_emlrtRSI;
  c8_b_st.site = &c8_qb_emlrtRSI;
  c8_p = true;
  c8_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_k < 521945)) {
    c8_b_k = (real_T)c8_k + 1.0;
    c8_c_x = c8_b_varargin_1[(int32_T)c8_b_k - 1];
    c8_d_x = c8_c_x;
    c8_b_b = muDoubleScalarIsNaN(c8_d_x);
    c8_b_p = !c8_b_b;
    if (c8_b_p) {
      c8_k++;
    } else {
      c8_p = false;
      c8_exitg1 = true;
    }
  }

  if (c8_p) {
    c8_b = true;
  } else {
    c8_b = false;
  }

  if (!c8_b) {
    c8_y = NULL;
    sf_mex_assign(&c8_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 35),
                  false);
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1, 0U, 2, 1, 18),
                  false);
    sf_mex_call(&c8_b_st, &c8_i_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_b_st, NULL, "message", 1U, 2U, 14, c8_b_y, 14, c8_c_y)));
  }

  c8_st.site = &c8_wc_emlrtRSI;
  for (c8_c_k = 0; c8_c_k < 521945; c8_c_k++) {
    c8_d_k = (real_T)c8_c_k + 1.0;
    c8_e_x = c8_b_varargin_1[(int32_T)c8_d_k - 1];
    c8_c_b = muDoubleScalarIsNaN(c8_e_x);
    if (c8_c_b) {
      c8_d_y = NULL;
      sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_b_cv2, 10, 0U, 1, 0U, 2, 1,
        19), false);
      c8_e_y = NULL;
      sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_b_cv2, 10, 0U, 1, 0U, 2, 1,
        19), false);
      sf_mex_call(&c8_st, &c8_h_emlrtMCI, "error", 0U, 2U, 14, c8_d_y, 14,
                  sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c8_st, NULL, "message", 1U, 1U, 14, c8_e_y)));
    }
  }

  c8_st.site = &c8_xc_emlrtRSI;
  for (c8_i = 0; c8_i < 9; c8_i++) {
    c8_conn[c8_i] = true;
  }

  for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
    c8_imSizeT[c8_i1] = 695.0 + 56.0 * (real_T)c8_i1;
  }

  for (c8_i2 = 0; c8_i2 < 2; c8_i2++) {
    c8_connSizeT[c8_i2] = 3.0;
  }

  imregionalmax_real64(&c8_b_varargin_1[0], &c8_BW[0], 2.0, &c8_imSizeT[0],
                       &c8_conn[0], 2.0, &c8_connSizeT[0]);
}

static void c8_regionprops(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, boolean_T c8_b_varargin_1[521945], real_T c8_b_varargin_2
  [521945], c8_coder_array_sOA5t73y81YtFHGIDxk *c8_outstats)
{
  static char_T c8_b_cv[31] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'r', 'e', 'g',
    'i', 'o', 'n', 'p', 'r', 'o', 'p', 's', ':', 's', 'i', 'z', 'e', 'M', 'i',
    's', 'm', 'a', 't', 'c', 'h' };

  c8_coder_array_int32_T c8_b_regionLengths;
  c8_coder_array_int32_T c8_idxCount;
  c8_coder_array_int32_T c8_regionLengths;
  c8_coder_array_real_T c8_regionIndices;
  c8_coder_array_s_R6Og1x0kmqQXSF9Pw c8_stats;
  c8_sHtk0WM4OMtyqkehwQYcq2 c8_statsAlreadyComputed;
  c8_s_sEiEW7j64quwNy6wT5PWYC c8_CC;
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_imageSize[2];
  real_T c8_b_k;
  real_T c8_b_numObjs;
  real_T c8_b_vIdx;
  real_T c8_c_numObjs;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d_k;
  real_T c8_d_numObjs;
  real_T c8_f_k;
  real_T c8_numObjs;
  real_T c8_x1;
  real_T c8_x2;
  int32_T c8_b_loop_ub;
  int32_T c8_c_k;
  int32_T c8_c_loop_ub;
  int32_T c8_d_loop_ub;
  int32_T c8_dim;
  int32_T c8_e_k;
  int32_T c8_e_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i20;
  int32_T c8_i21;
  int32_T c8_i22;
  int32_T c8_i23;
  int32_T c8_i24;
  int32_T c8_i25;
  int32_T c8_i26;
  int32_T c8_i27;
  int32_T c8_i28;
  int32_T c8_i29;
  int32_T c8_i3;
  int32_T c8_i30;
  int32_T c8_i31;
  int32_T c8_i32;
  int32_T c8_i33;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_k;
  int32_T c8_loop_ub;
  int32_T c8_vIdx;
  boolean_T c8_b;
  boolean_T c8_b_p;
  boolean_T c8_c_p;
  boolean_T c8_exitg1;
  boolean_T c8_p;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_array_s_sEiEW7j64quwNy6wT5PWYC_(chartInstance, &c8_CC);
  c8_st.site = &c8_yc_emlrtRSI;
  for (c8_i = 0; c8_i < 521945; c8_i++) {
    chartInstance->c8_varargin_1[c8_i] = c8_b_varargin_1[c8_i];
  }

  c8_bwconncomp(chartInstance, &c8_st, chartInstance->c8_varargin_1, &c8_CC);
  for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
    c8_imageSize[c8_i1] = c8_CC.ImageSize[c8_i1];
  }

  c8_numObjs = c8_CC.NumObjects;
  c8_st.site = &c8_ad_emlrtRSI;
  c8_b_numObjs = c8_numObjs;
  c8_p = false;
  c8_b_p = true;
  c8_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_k < 2)) {
    c8_b_k = (real_T)c8_k + 1.0;
    c8_x1 = c8_imageSize[(int32_T)c8_b_k - 1];
    c8_x2 = 695.0 + 56.0 * (real_T)((int32_T)c8_b_k - 1);
    c8_c_p = (c8_x1 == c8_x2);
    if (!c8_c_p) {
      c8_b_p = false;
      c8_exitg1 = true;
    } else {
      c8_k++;
    }
  }

  if (c8_b_p) {
    c8_p = true;
  }

  if (!c8_p) {
    c8_y = NULL;
    sf_mex_assign(&c8_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 31),
                  false);
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 31),
                  false);
    sf_mex_call(&c8_st, &c8_m_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_st, NULL, "message", 1U, 1U, 14, c8_b_y)));
  }

  c8_b_st.site = &c8_ne_emlrtRSI;
  c8_c_numObjs = c8_b_numObjs;
  c8_c_st.site = &c8_oe_emlrtRSI;
  c8_b_repmat(chartInstance, &c8_c_st, c8_c_numObjs, c8_outstats);
  c8_d_array_s_R6Og1x0kmqQXSF9Pwa49FD_(chartInstance, &c8_stats);
  c8_st.site = &c8_bd_emlrtRSI;
  c8_initializeStatsStruct(chartInstance, &c8_st, c8_numObjs, &c8_stats,
    &c8_statsAlreadyComputed);
  c8_st.site = &c8_cd_emlrtRSI;
  c8_d_numObjs = c8_numObjs;
  c8_statsAlreadyComputed.PixelIdxList = true;
  if (c8_d_numObjs != 0.0) {
    c8_array_real_T_Constructor(chartInstance, &c8_regionIndices);
    c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_regionIndices,
      &c8_bc_emlrtRTEI, c8_CC.RegionIndices.size[0]);
    c8_loop_ub = c8_CC.RegionIndices.size[0] - 1;
    for (c8_i3 = 0; c8_i3 <= c8_loop_ub; c8_i3++) {
      c8_regionIndices.vector.data[c8_i3] =
        c8_CC.RegionIndices.vector.data[c8_i3];
    }

    c8_array_int32_T_Constructor(chartInstance, &c8_regionLengths);
    c8_array_int32_T_SetSize(chartInstance, &c8_st, &c8_regionLengths,
      &c8_cc_emlrtRTEI, c8_CC.RegionLengths.size[0]);
    c8_b_loop_ub = c8_CC.RegionLengths.size[0] - 1;
    for (c8_i5 = 0; c8_i5 <= c8_b_loop_ub; c8_i5++) {
      c8_regionLengths.vector.data[c8_i5] =
        c8_CC.RegionLengths.vector.data[c8_i5];
    }

    c8_b_st.site = &c8_qe_emlrtRSI;
    c8_c_st.site = &c8_fe_emlrtRSI;
    c8_dim = 2;
    if ((real_T)c8_regionLengths.size[0] != 1.0) {
      c8_dim = 1;
    }

    c8_array_int32_T_Constructor(chartInstance, &c8_b_regionLengths);
    c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_b_regionLengths,
      &c8_dc_emlrtRTEI, c8_regionLengths.size[0]);
    c8_c_loop_ub = c8_regionLengths.size[0] - 1;
    for (c8_i10 = 0; c8_i10 <= c8_c_loop_ub; c8_i10++) {
      c8_b_regionLengths.vector.data[c8_i10] =
        c8_regionLengths.vector.data[c8_i10];
    }

    c8_d_st.site = &c8_ge_emlrtRSI;
    c8_useConstantDim(chartInstance, &c8_d_st, &c8_b_regionLengths, c8_dim,
                      &c8_regionLengths);
    c8_array_int32_T_Destructor(chartInstance, &c8_b_regionLengths);
    c8_array_int32_T_Constructor(chartInstance, &c8_idxCount);
    c8_array_int32_T_SetSize(chartInstance, &c8_st, &c8_idxCount,
      &c8_ec_emlrtRTEI, 1 + c8_regionLengths.size[0]);
    c8_idxCount.vector.data[0] = 0;
    c8_d_loop_ub = c8_regionLengths.size[0] - 1;
    for (c8_i14 = 0; c8_i14 <= c8_d_loop_ub; c8_i14++) {
      c8_idxCount.vector.data[c8_i14 + 1] = c8_regionLengths.vector.data[c8_i14];
    }

    c8_array_int32_T_Destructor(chartInstance, &c8_regionLengths);
    c8_d1 = (real_T)c8_stats.size[0];
    c8_i17 = (int32_T)c8_d1 - 1;
    for (c8_e_k = 0; c8_e_k <= c8_i17; c8_e_k++) {
      c8_f_k = (real_T)c8_e_k + 1.0;
      c8_i19 = c8_idxCount.size[0];
      c8_i20 = (int32_T)c8_f_k;
      if ((c8_i20 < 1) || (c8_i20 > c8_i19)) {
        emlrtDynamicBoundsCheckR2012b(c8_i20, 1, c8_i19, &c8_jc_emlrtBCI, &c8_st);
      }

      c8_i21 = c8_idxCount.vector.data[c8_i20 - 1] + 1;
      c8_i22 = c8_idxCount.size[0];
      c8_i23 = (int32_T)(c8_f_k + 1.0);
      if ((c8_i23 < 1) || (c8_i23 > c8_i22)) {
        emlrtDynamicBoundsCheckR2012b(c8_i23, 1, c8_i22, &c8_kc_emlrtBCI, &c8_st);
      }

      c8_i24 = c8_idxCount.vector.data[c8_i23 - 1];
      c8_b = (c8_i21 > c8_i24);
      if (c8_b) {
        c8_i26 = 0;
        c8_i27 = -1;
      } else {
        c8_i25 = c8_regionIndices.size[0];
        if ((c8_i21 < 1) || (c8_i21 > c8_i25)) {
          emlrtDynamicBoundsCheckR2012b(c8_i21, 1, c8_i25, &c8_ec_emlrtBCI,
            &c8_st);
        }

        c8_i26 = c8_i21 - 1;
        c8_i29 = c8_regionIndices.size[0];
        if ((c8_i24 < 1) || (c8_i24 > c8_i29)) {
          emlrtDynamicBoundsCheckR2012b(c8_i24, 1, c8_i29, &c8_dc_emlrtBCI,
            &c8_st);
        }

        c8_i27 = c8_i24 - 1;
      }

      c8_i28 = c8_stats.size[0];
      c8_i30 = (int32_T)c8_f_k;
      if ((c8_i30 < 1) || (c8_i30 > c8_i28)) {
        emlrtDynamicBoundsCheckR2012b(c8_i30, 1, c8_i28, &c8_lc_emlrtBCI, &c8_st);
      }

      c8_array_real_T_SetSize(chartInstance, &c8_st,
        &c8_stats.vector.data[c8_i30 - 1].PixelIdxList, &c8_fc_emlrtRTEI,
        (c8_i27 - c8_i26) + 1);
      c8_e_loop_ub = c8_i27 - c8_i26;
      for (c8_i31 = 0; c8_i31 <= c8_e_loop_ub; c8_i31++) {
        c8_i32 = c8_stats.size[0];
        c8_i33 = (int32_T)c8_f_k;
        if ((c8_i33 < 1) || (c8_i33 > c8_i32)) {
          emlrtDynamicBoundsCheckR2012b(c8_i33, 1, c8_i32, &c8_lc_emlrtBCI,
            &c8_st);
        }

        c8_stats.vector.data[c8_i33 - 1].PixelIdxList.vector.data[c8_i31] =
          c8_regionIndices.vector.data[c8_i26 + c8_i31];
      }
    }

    c8_array_int32_T_Destructor(chartInstance, &c8_idxCount);
    c8_array_real_T_Destructor(chartInstance, &c8_regionIndices);
  }

  c8_b_array_s_sEiEW7j64quwNy6wT5PWYC_(chartInstance, &c8_CC);
  c8_st.site = &c8_dd_emlrtRSI;
  for (c8_i2 = 0; c8_i2 < 521945; c8_i2++) {
    chartInstance->c8_varargin_2[c8_i2] = c8_b_varargin_2[c8_i2];
  }

  c8_b_ComputeWeightedCentroid(chartInstance, &c8_st,
    chartInstance->c8_varargin_2, &c8_stats, &c8_statsAlreadyComputed);
  c8_st.site = &c8_ed_emlrtRSI;
  c8_d = (real_T)c8_stats.size[0];
  c8_i4 = (int32_T)c8_d - 1;
  for (c8_c_k = 0; c8_c_k <= c8_i4; c8_c_k++) {
    c8_d_k = (real_T)c8_c_k + 1.0;
    c8_i6 = c8_stats.size[0];
    c8_i7 = (int32_T)c8_d_k;
    if ((c8_i7 < 1) || (c8_i7 > c8_i6)) {
      emlrtDynamicBoundsCheckR2012b(c8_i7, 1, c8_i6, &c8_fc_emlrtBCI, &c8_st);
    }

    c8_i8 = c8_outstats->size[0];
    c8_i9 = (int32_T)c8_d_k;
    if ((c8_i9 < 1) || (c8_i9 > c8_i8)) {
      emlrtDynamicBoundsCheckR2012b(c8_i9, 1, c8_i8, &c8_gc_emlrtBCI, &c8_st);
    }

    for (c8_vIdx = 0; c8_vIdx < 2; c8_vIdx++) {
      c8_b_vIdx = (real_T)c8_vIdx + 1.0;
      c8_i11 = c8_stats.size[0];
      c8_i12 = (int32_T)c8_d_k;
      if ((c8_i12 < 1) || (c8_i12 > c8_i11)) {
        emlrtDynamicBoundsCheckR2012b(c8_i12, 1, c8_i11, &c8_ic_emlrtBCI, &c8_st);
      }

      c8_i13 = c8_i12 - 1;
      c8_i15 = c8_outstats->size[0];
      c8_i16 = (int32_T)c8_d_k;
      if ((c8_i16 < 1) || (c8_i16 > c8_i15)) {
        emlrtDynamicBoundsCheckR2012b(c8_i16, 1, c8_i15, &c8_hc_emlrtBCI, &c8_st);
      }

      c8_i18 = c8_i16 - 1;
      c8_outstats->vector.data[c8_i18].WeightedCentroid[(int32_T)c8_b_vIdx - 1] =
        c8_stats.vector.data[c8_i13].WeightedCentroid[(int32_T)c8_b_vIdx - 1];
    }
  }

  c8_e_array_s_R6Og1x0kmqQXSF9Pwa49FD_(chartInstance, &c8_stats);
}

static void c8_bwconncomp(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, boolean_T c8_b_varargin_1[521945],
  c8_s_sEiEW7j64quwNy6wT5PWYC *c8_CC)
{
  c8_cell_wrap_37 c8_rv[1];
  c8_cell_wrap_37 c8_r2;
  c8_coder_array_cell_wrap_37_2D c8_r1;
  c8_coder_array_int32_T c8_c_x;
  c8_coder_array_int32_T c8_d_x;
  c8_coder_array_int32_T c8_e_x;
  c8_coder_array_int32_T c8_endRow;
  c8_coder_array_int32_T c8_idxCount;
  c8_coder_array_int32_T c8_labelForEachRun;
  c8_coder_array_int32_T c8_labelsRenumbered;
  c8_coder_array_int32_T c8_startCol;
  c8_coder_array_int32_T c8_startRow;
  c8_coder_array_real_T c8_r;
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_e_st;
  emlrtStack c8_f_st;
  emlrtStack c8_g_st;
  emlrtStack c8_h_st;
  emlrtStack c8_st;
  real_T c8_b_col;
  real_T c8_b_k;
  real_T c8_b_s;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d2;
  real_T c8_d_col;
  real_T c8_k_k;
  real_T c8_numComponents;
  real_T c8_y;
  int32_T c8_iv[1];
  int32_T c8_a;
  int32_T c8_b;
  int32_T c8_b_a;
  int32_T c8_b_b;
  int32_T c8_b_c;
  int32_T c8_b_dim;
  int32_T c8_b_loop_ub;
  int32_T c8_b_node;
  int32_T c8_b_p;
  int32_T c8_b_root_k;
  int32_T c8_b_root_p;
  int32_T c8_b_vlen;
  int32_T c8_c;
  int32_T c8_c_a;
  int32_T c8_c_b;
  int32_T c8_c_col;
  int32_T c8_c_k;
  int32_T c8_c_loop_ub;
  int32_T c8_c_p;
  int32_T c8_c_vlen;
  int32_T c8_col;
  int32_T c8_column_offset;
  int32_T c8_currentColumn;
  int32_T c8_d_a;
  int32_T c8_d_b;
  int32_T c8_d_k;
  int32_T c8_d_loop_ub;
  int32_T c8_d_vlen;
  int32_T c8_dim;
  int32_T c8_e_a;
  int32_T c8_e_b;
  int32_T c8_e_k;
  int32_T c8_e_loop_ub;
  int32_T c8_exitg1;
  int32_T c8_f_a;
  int32_T c8_f_b;
  int32_T c8_f_k;
  int32_T c8_f_loop_ub;
  int32_T c8_firstRunOnPreviousColumn;
  int32_T c8_firstRunOnThisColumn;
  int32_T c8_g_b;
  int32_T c8_g_k;
  int32_T c8_g_loop_ub;
  int32_T c8_h_b;
  int32_T c8_h_k;
  int32_T c8_h_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i20;
  int32_T c8_i21;
  int32_T c8_i22;
  int32_T c8_i23;
  int32_T c8_i24;
  int32_T c8_i25;
  int32_T c8_i26;
  int32_T c8_i27;
  int32_T c8_i28;
  int32_T c8_i29;
  int32_T c8_i3;
  int32_T c8_i30;
  int32_T c8_i31;
  int32_T c8_i32;
  int32_T c8_i33;
  int32_T c8_i34;
  int32_T c8_i35;
  int32_T c8_i36;
  int32_T c8_i37;
  int32_T c8_i38;
  int32_T c8_i39;
  int32_T c8_i4;
  int32_T c8_i40;
  int32_T c8_i41;
  int32_T c8_i42;
  int32_T c8_i43;
  int32_T c8_i44;
  int32_T c8_i45;
  int32_T c8_i46;
  int32_T c8_i47;
  int32_T c8_i48;
  int32_T c8_i49;
  int32_T c8_i5;
  int32_T c8_i50;
  int32_T c8_i51;
  int32_T c8_i52;
  int32_T c8_i53;
  int32_T c8_i54;
  int32_T c8_i55;
  int32_T c8_i56;
  int32_T c8_i57;
  int32_T c8_i58;
  int32_T c8_i59;
  int32_T c8_i6;
  int32_T c8_i60;
  int32_T c8_i61;
  int32_T c8_i62;
  int32_T c8_i63;
  int32_T c8_i64;
  int32_T c8_i65;
  int32_T c8_i66;
  int32_T c8_i67;
  int32_T c8_i68;
  int32_T c8_i69;
  int32_T c8_i7;
  int32_T c8_i70;
  int32_T c8_i71;
  int32_T c8_i72;
  int32_T c8_i73;
  int32_T c8_i74;
  int32_T c8_i75;
  int32_T c8_i76;
  int32_T c8_i77;
  int32_T c8_i78;
  int32_T c8_i79;
  int32_T c8_i8;
  int32_T c8_i80;
  int32_T c8_i81;
  int32_T c8_i82;
  int32_T c8_i83;
  int32_T c8_i9;
  int32_T c8_i_k;
  int32_T c8_i_loop_ub;
  int32_T c8_ib;
  int32_T c8_idx;
  int32_T c8_inb;
  int32_T c8_j_k;
  int32_T c8_j_loop_ub;
  int32_T c8_k;
  int32_T c8_k_loop_ub;
  int32_T c8_l_loop_ub;
  int32_T c8_lastRunOnPreviousColumn;
  int32_T c8_lidx;
  int32_T c8_loop_ub;
  int32_T c8_nextLabel;
  int32_T c8_nfb;
  int32_T c8_nleft;
  int32_T c8_node;
  int32_T c8_numRuns;
  int32_T c8_p;
  int32_T c8_root_k;
  int32_T c8_root_p;
  int32_T c8_row;
  int32_T c8_rowidx;
  int32_T c8_runCounter;
  int32_T c8_vlen;
  boolean_T c8_b_overflow;
  boolean_T c8_c_overflow;
  boolean_T c8_d_overflow;
  boolean_T c8_i_b;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_e_st.prev = &c8_d_st;
  c8_e_st.tls = c8_d_st.tls;
  c8_f_st.prev = &c8_e_st;
  c8_f_st.tls = c8_e_st.tls;
  c8_g_st.prev = &c8_f_st;
  c8_g_st.tls = c8_f_st.tls;
  c8_h_st.prev = &c8_g_st;
  c8_h_st.tls = c8_g_st.tls;
  c8_CC->Connectivity = 8.0;
  for (c8_i = 0; c8_i < 2; c8_i++) {
    c8_CC->ImageSize[c8_i] = 695.0 + 56.0 * (real_T)c8_i;
  }

  c8_st.site = &c8_fd_emlrtRSI;
  c8_b_st.site = &c8_od_emlrtRSI;
  c8_numRuns = 0;
  for (c8_col = 0; c8_col < 751; c8_col++) {
    c8_b_col = (real_T)c8_col + 1.0;
    if (c8_b_varargin_1[695 * ((int32_T)c8_b_col - 1)]) {
      c8_numRuns++;
    }

    for (c8_k = 0; c8_k < 694; c8_k++) {
      c8_b_k = (real_T)c8_k + 2.0;
      if (c8_b_varargin_1[((int32_T)c8_b_k + 695 * ((int32_T)c8_b_col - 1)) - 1]
          && (!c8_b_varargin_1[((int32_T)(c8_b_k - 1.0) + 695 * ((int32_T)
             c8_b_col - 1)) - 1])) {
        c8_numRuns++;
      }
    }
  }

  c8_array_int32_T_Constructor(chartInstance, &c8_startRow);
  c8_array_int32_T_Constructor(chartInstance, &c8_endRow);
  c8_array_int32_T_Constructor(chartInstance, &c8_startCol);
  c8_array_int32_T_Constructor(chartInstance, &c8_labelForEachRun);
  if (c8_numRuns == 0) {
    c8_array_int32_T_SetSize(chartInstance, &c8_b_st, &c8_startRow,
      &c8_kc_emlrtRTEI, 0);
    c8_array_int32_T_SetSize(chartInstance, &c8_b_st, &c8_endRow,
      &c8_lc_emlrtRTEI, 0);
    c8_array_int32_T_SetSize(chartInstance, &c8_b_st, &c8_startCol,
      &c8_mc_emlrtRTEI, 0);
    c8_array_int32_T_SetSize(chartInstance, &c8_b_st, &c8_labelForEachRun,
      &c8_nc_emlrtRTEI, 0);
    c8_numRuns = 0;
  } else {
    c8_d = (real_T)c8_numRuns;
    if (!(c8_d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c8_d, &c8_d_emlrtDCI, &c8_b_st);
    }

    c8_array_int32_T_SetSize(chartInstance, &c8_b_st, &c8_startRow,
      &c8_gc_emlrtRTEI, (int32_T)muDoubleScalarFloor(c8_d));
    c8_array_int32_T_SetSize(chartInstance, &c8_b_st, &c8_endRow,
      &c8_hc_emlrtRTEI, c8_numRuns);
    c8_array_int32_T_SetSize(chartInstance, &c8_b_st, &c8_startCol,
      &c8_ic_emlrtRTEI, c8_numRuns);
    c8_c_st.site = &c8_pd_emlrtRSI;
    c8_runCounter = 1;
    for (c8_c_col = 0; c8_c_col < 751; c8_c_col++) {
      c8_d_col = (real_T)c8_c_col + 1.0;
      c8_row = 1;
      while (c8_row <= 695) {
        while ((c8_row <= 695) && (!c8_b_varargin_1[(c8_row + 695 * ((int32_T)
                  c8_d_col - 1)) - 1])) {
          c8_row++;
        }

        if ((c8_row <= 695) && c8_b_varargin_1[(c8_row + 695 * ((int32_T)
              c8_d_col - 1)) - 1]) {
          c8_i2 = c8_startCol.size[0];
          if ((c8_runCounter < 1) || (c8_runCounter > c8_i2)) {
            emlrtDynamicBoundsCheckR2012b(c8_runCounter, 1, c8_i2,
              &c8_oc_emlrtBCI, &c8_c_st);
          }

          c8_startCol.vector.data[c8_runCounter - 1] = (int32_T)c8_d_col;
          c8_i3 = c8_startRow.size[0];
          if ((c8_runCounter < 1) || (c8_runCounter > c8_i3)) {
            emlrtDynamicBoundsCheckR2012b(c8_runCounter, 1, c8_i3,
              &c8_qc_emlrtBCI, &c8_c_st);
          }

          c8_startRow.vector.data[c8_runCounter - 1] = c8_row;
          while ((c8_row <= 695) && c8_b_varargin_1[(c8_row + 695 * ((int32_T)
                   c8_d_col - 1)) - 1]) {
            c8_row++;
          }

          c8_i8 = c8_endRow.size[0];
          if ((c8_runCounter < 1) || (c8_runCounter > c8_i8)) {
            emlrtDynamicBoundsCheckR2012b(c8_runCounter, 1, c8_i8,
              &c8_uc_emlrtBCI, &c8_c_st);
          }

          c8_endRow.vector.data[c8_runCounter - 1] = c8_row - 1;
          c8_runCounter++;
        }
      }
    }

    c8_array_int32_T_SetSize(chartInstance, &c8_b_st, &c8_labelForEachRun,
      &c8_jc_emlrtRTEI, c8_numRuns);
    c8_loop_ub = c8_numRuns - 1;
    for (c8_i1 = 0; c8_i1 <= c8_loop_ub; c8_i1++) {
      c8_labelForEachRun.vector.data[c8_i1] = 0;
    }

    c8_c_k = 1;
    c8_currentColumn = 2;
    c8_nextLabel = 1;
    c8_firstRunOnPreviousColumn = -1;
    c8_lastRunOnPreviousColumn = 0;
    c8_firstRunOnThisColumn = 1;
    while (c8_c_k <= c8_numRuns) {
      c8_i4 = c8_startCol.size[0];
      if ((c8_c_k < 1) || (c8_c_k > c8_i4)) {
        emlrtDynamicBoundsCheckR2012b(c8_c_k, 1, c8_i4, &c8_pc_emlrtBCI,
          &c8_b_st);
      }

      if (c8_startCol.vector.data[c8_c_k - 1] == c8_currentColumn) {
        c8_firstRunOnPreviousColumn = c8_firstRunOnThisColumn;
        c8_firstRunOnThisColumn = c8_c_k;
        c8_lastRunOnPreviousColumn = c8_c_k;
        c8_i13 = c8_startCol.size[0];
        if ((c8_c_k < 1) || (c8_c_k > c8_i13)) {
          emlrtDynamicBoundsCheckR2012b(c8_c_k, 1, c8_i13, &c8_tc_emlrtBCI,
            &c8_b_st);
        }

        c8_currentColumn = c8_startCol.vector.data[c8_c_k - 1] + 1;
      } else {
        c8_i7 = c8_startCol.size[0];
        if ((c8_c_k < 1) || (c8_c_k > c8_i7)) {
          emlrtDynamicBoundsCheckR2012b(c8_c_k, 1, c8_i7, &c8_rc_emlrtBCI,
            &c8_b_st);
        }

        if (c8_startCol.vector.data[c8_c_k - 1] > c8_currentColumn) {
          c8_firstRunOnPreviousColumn = -1;
          c8_lastRunOnPreviousColumn = 0;
          c8_firstRunOnThisColumn = c8_c_k;
          c8_i16 = c8_startCol.size[0];
          if ((c8_c_k < 1) || (c8_c_k > c8_i16)) {
            emlrtDynamicBoundsCheckR2012b(c8_c_k, 1, c8_i16, &c8_vc_emlrtBCI,
              &c8_b_st);
          }

          c8_currentColumn = c8_startCol.vector.data[c8_c_k - 1] + 1;
        }
      }

      if (c8_firstRunOnPreviousColumn >= 0) {
        for (c8_p = c8_firstRunOnPreviousColumn; c8_p <
             c8_lastRunOnPreviousColumn; c8_p++) {
          c8_i20 = c8_endRow.size[0];
          if ((c8_c_k < 1) || (c8_c_k > c8_i20)) {
            emlrtDynamicBoundsCheckR2012b(c8_c_k, 1, c8_i20, &c8_dd_emlrtBCI,
              &c8_b_st);
          }

          c8_i22 = c8_startRow.size[0];
          if ((c8_p < 1) || (c8_p > c8_i22)) {
            emlrtDynamicBoundsCheckR2012b(c8_p, 1, c8_i22, &c8_ed_emlrtBCI,
              &c8_b_st);
          }

          if (c8_endRow.vector.data[c8_c_k - 1] >= c8_startRow.vector.data[c8_p
              - 1] - 1) {
            c8_i24 = c8_startRow.size[0];
            if ((c8_c_k < 1) || (c8_c_k > c8_i24)) {
              emlrtDynamicBoundsCheckR2012b(c8_c_k, 1, c8_i24, &c8_fd_emlrtBCI,
                &c8_b_st);
            }

            c8_i26 = c8_endRow.size[0];
            if ((c8_p < 1) || (c8_p > c8_i26)) {
              emlrtDynamicBoundsCheckR2012b(c8_p, 1, c8_i26, &c8_gd_emlrtBCI,
                &c8_b_st);
            }

            if (c8_startRow.vector.data[c8_c_k - 1] <=
                c8_endRow.vector.data[c8_p - 1] + 1) {
              c8_i28 = c8_labelForEachRun.size[0];
              if ((c8_c_k < 1) || (c8_c_k > c8_i28)) {
                emlrtDynamicBoundsCheckR2012b(c8_c_k, 1, c8_i28, &c8_hd_emlrtBCI,
                  &c8_b_st);
              }

              if (c8_labelForEachRun.vector.data[c8_c_k - 1] == 0) {
                c8_i31 = c8_labelForEachRun.size[0];
                if ((c8_p < 1) || (c8_p > c8_i31)) {
                  emlrtDynamicBoundsCheckR2012b(c8_p, 1, c8_i31, &c8_kd_emlrtBCI,
                    &c8_b_st);
                }

                c8_i34 = c8_labelForEachRun.size[0];
                if ((c8_c_k < 1) || (c8_c_k > c8_i34)) {
                  emlrtDynamicBoundsCheckR2012b(c8_c_k, 1, c8_i34,
                    &c8_ld_emlrtBCI, &c8_b_st);
                }

                c8_labelForEachRun.vector.data[c8_c_k - 1] =
                  c8_labelForEachRun.vector.data[c8_p - 1];
                c8_nextLabel++;
              } else {
                c8_i30 = c8_labelForEachRun.size[0];
                if ((c8_c_k < 1) || (c8_c_k > c8_i30)) {
                  emlrtDynamicBoundsCheckR2012b(c8_c_k, 1, c8_i30,
                    &c8_id_emlrtBCI, &c8_b_st);
                }

                c8_i33 = c8_labelForEachRun.size[0];
                if ((c8_p < 1) || (c8_p > c8_i33)) {
                  emlrtDynamicBoundsCheckR2012b(c8_p, 1, c8_i33, &c8_jd_emlrtBCI,
                    &c8_b_st);
                }

                if (c8_labelForEachRun.vector.data[c8_c_k - 1] !=
                    c8_labelForEachRun.vector.data[c8_p - 1]) {
                  c8_c_st.site = &c8_qd_emlrtRSI;
                  c8_g_k = c8_c_k;
                  c8_b_p = c8_p;
                  c8_d_st.site = &c8_rd_emlrtRSI;
                  c8_node = c8_g_k;
                  c8_root_k = c8_node;
                  do {
                    c8_exitg1 = 0;
                    c8_i36 = c8_labelForEachRun.size[0];
                    if ((c8_root_k < 1) || (c8_root_k > c8_i36)) {
                      emlrtDynamicBoundsCheckR2012b(c8_root_k, 1, c8_i36,
                        &c8_rd_emlrtBCI, &c8_d_st);
                    }

                    if (c8_root_k != c8_labelForEachRun.vector.data[c8_root_k -
                        1]) {
                      c8_i38 = c8_labelForEachRun.size[0];
                      c8_i39 = c8_labelForEachRun.size[0];
                      if ((c8_root_k < 1) || (c8_root_k > c8_i39)) {
                        emlrtDynamicBoundsCheckR2012b(c8_root_k, 1, c8_i39,
                          &c8_td_emlrtBCI, &c8_d_st);
                      }

                      c8_i40 = c8_labelForEachRun.vector.data[c8_root_k - 1];
                      if ((c8_i40 < 1) || (c8_i40 > c8_i38)) {
                        emlrtDynamicBoundsCheckR2012b(c8_i40, 1, c8_i38,
                          &c8_sd_emlrtBCI, &c8_d_st);
                      }

                      c8_i42 = c8_labelForEachRun.size[0];
                      if ((c8_root_k < 1) || (c8_root_k > c8_i42)) {
                        emlrtDynamicBoundsCheckR2012b(c8_root_k, 1, c8_i42,
                          &c8_ud_emlrtBCI, &c8_d_st);
                      }

                      c8_labelForEachRun.vector.data[c8_root_k - 1] =
                        c8_labelForEachRun.vector.data[c8_i40 - 1];
                      c8_i44 = c8_labelForEachRun.size[0];
                      if ((c8_root_k < 1) || (c8_root_k > c8_i44)) {
                        emlrtDynamicBoundsCheckR2012b(c8_root_k, 1, c8_i44,
                          &c8_vd_emlrtBCI, &c8_d_st);
                      }

                      c8_root_k = c8_labelForEachRun.vector.data[c8_root_k - 1];
                    } else {
                      c8_exitg1 = 1;
                    }
                  } while (c8_exitg1 == 0);

                  c8_d_st.site = &c8_sd_emlrtRSI;
                  c8_b_node = c8_b_p;
                  c8_root_p = c8_b_node;
                  do {
                    c8_exitg1 = 0;
                    c8_i43 = c8_labelForEachRun.size[0];
                    if ((c8_root_p < 1) || (c8_root_p > c8_i43)) {
                      emlrtDynamicBoundsCheckR2012b(c8_root_p, 1, c8_i43,
                        &c8_rd_emlrtBCI, &c8_d_st);
                    }

                    if (c8_root_p != c8_labelForEachRun.vector.data[c8_root_p -
                        1]) {
                      c8_i45 = c8_labelForEachRun.size[0];
                      c8_i46 = c8_labelForEachRun.size[0];
                      if ((c8_root_p < 1) || (c8_root_p > c8_i46)) {
                        emlrtDynamicBoundsCheckR2012b(c8_root_p, 1, c8_i46,
                          &c8_td_emlrtBCI, &c8_d_st);
                      }

                      c8_i47 = c8_labelForEachRun.vector.data[c8_root_p - 1];
                      if ((c8_i47 < 1) || (c8_i47 > c8_i45)) {
                        emlrtDynamicBoundsCheckR2012b(c8_i47, 1, c8_i45,
                          &c8_sd_emlrtBCI, &c8_d_st);
                      }

                      c8_i48 = c8_labelForEachRun.size[0];
                      if ((c8_root_p < 1) || (c8_root_p > c8_i48)) {
                        emlrtDynamicBoundsCheckR2012b(c8_root_p, 1, c8_i48,
                          &c8_ud_emlrtBCI, &c8_d_st);
                      }

                      c8_labelForEachRun.vector.data[c8_root_p - 1] =
                        c8_labelForEachRun.vector.data[c8_i47 - 1];
                      c8_i52 = c8_labelForEachRun.size[0];
                      if ((c8_root_p < 1) || (c8_root_p > c8_i52)) {
                        emlrtDynamicBoundsCheckR2012b(c8_root_p, 1, c8_i52,
                          &c8_vd_emlrtBCI, &c8_d_st);
                      }

                      c8_root_p = c8_labelForEachRun.vector.data[c8_root_p - 1];
                    } else {
                      c8_exitg1 = 1;
                    }
                  } while (c8_exitg1 == 0);

                  if (c8_root_k != c8_root_p) {
                    c8_d_st.site = &c8_td_emlrtRSI;
                    c8_b_root_k = c8_root_k;
                    c8_b_root_p = c8_root_p;
                    c8_i_k = c8_g_k;
                    c8_c_p = c8_b_p;
                    if (c8_b_root_p < c8_b_root_k) {
                      c8_i51 = c8_labelForEachRun.size[0];
                      if ((c8_b_root_k < 1) || (c8_b_root_k > c8_i51)) {
                        emlrtDynamicBoundsCheckR2012b(c8_b_root_k, 1, c8_i51,
                          &c8_xd_emlrtBCI, &c8_d_st);
                      }

                      c8_labelForEachRun.vector.data[c8_b_root_k - 1] =
                        c8_b_root_p;
                      c8_i54 = c8_labelForEachRun.size[0];
                      if ((c8_i_k < 1) || (c8_i_k > c8_i54)) {
                        emlrtDynamicBoundsCheckR2012b(c8_i_k, 1, c8_i54,
                          &c8_ae_emlrtBCI, &c8_d_st);
                      }

                      c8_labelForEachRun.vector.data[c8_i_k - 1] = c8_b_root_p;
                    } else {
                      c8_i50 = c8_labelForEachRun.size[0];
                      if ((c8_b_root_p < 1) || (c8_b_root_p > c8_i50)) {
                        emlrtDynamicBoundsCheckR2012b(c8_b_root_p, 1, c8_i50,
                          &c8_wd_emlrtBCI, &c8_d_st);
                      }

                      c8_labelForEachRun.vector.data[c8_b_root_p - 1] =
                        c8_b_root_k;
                      c8_i53 = c8_labelForEachRun.size[0];
                      if ((c8_c_p < 1) || (c8_c_p > c8_i53)) {
                        emlrtDynamicBoundsCheckR2012b(c8_c_p, 1, c8_i53,
                          &c8_yd_emlrtBCI, &c8_d_st);
                      }

                      c8_labelForEachRun.vector.data[c8_c_p - 1] = c8_b_root_k;
                    }
                  }
                }
              }
            }
          }
        }
      }

      c8_i17 = c8_labelForEachRun.size[0];
      if ((c8_c_k < 1) || (c8_c_k > c8_i17)) {
        emlrtDynamicBoundsCheckR2012b(c8_c_k, 1, c8_i17, &c8_bd_emlrtBCI,
          &c8_b_st);
      }

      if (c8_labelForEachRun.vector.data[c8_c_k - 1] == 0) {
        c8_i21 = c8_labelForEachRun.size[0];
        if ((c8_c_k < 1) || (c8_c_k > c8_i21)) {
          emlrtDynamicBoundsCheckR2012b(c8_c_k, 1, c8_i21, &c8_cd_emlrtBCI,
            &c8_b_st);
        }

        c8_labelForEachRun.vector.data[c8_c_k - 1] = c8_nextLabel;
        c8_nextLabel++;
      }

      c8_c_k++;
    }
  }

  c8_array_real_T_Constructor(chartInstance, &c8_r);
  c8_array_cell_wrap_37_2D_Construct(chartInstance, &c8_r1);
  if (c8_numRuns == 0) {
    c8_d1 = 0.0;
    c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_r, &c8_xc_emlrtRTEI, 0);
    c8_array_int32_T_SetSize(chartInstance, &c8_st, &c8_labelForEachRun,
      &c8_yc_emlrtRTEI, 1);
    c8_labelForEachRun.vector.data[0] = 0;
    c8_array_cell_wrap_37_2D_SetSize(chartInstance, &c8_st, &c8_r1,
      &c8_ad_emlrtRTEI, 1, 0);
  } else {
    c8_array_int32_T_Constructor(chartInstance, &c8_labelsRenumbered);
    c8_array_int32_T_SetSize(chartInstance, &c8_st, &c8_labelsRenumbered,
      &c8_oc_emlrtRTEI, c8_labelForEachRun.size[0]);
    c8_numComponents = 0.0;
    c8_b_st.site = &c8_nd_emlrtRSI;
    c8_b = c8_numRuns;
    c8_b_b = c8_b;
    if (c8_b_b < 1) {
      c8_overflow = false;
    } else {
      c8_overflow = (c8_b_b > 2147483646);
    }

    if (c8_overflow) {
      c8_c_st.site = &c8_ec_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
    }

    for (c8_d_k = 0; c8_d_k < c8_numRuns; c8_d_k++) {
      c8_e_k = c8_d_k + 1;
      c8_i6 = c8_labelForEachRun.size[0];
      if ((c8_e_k < 1) || (c8_e_k > c8_i6)) {
        emlrtDynamicBoundsCheckR2012b(c8_e_k, 1, c8_i6, &c8_sc_emlrtBCI, &c8_st);
      }

      if (c8_labelForEachRun.vector.data[c8_e_k - 1] == c8_e_k) {
        c8_numComponents++;
        c8_i11 = c8_labelsRenumbered.size[0];
        if ((c8_e_k < 1) || (c8_e_k > c8_i11)) {
          emlrtDynamicBoundsCheckR2012b(c8_e_k, 1, c8_i11, &c8_ad_emlrtBCI,
            &c8_st);
        }

        c8_labelsRenumbered.vector.data[c8_e_k - 1] = (int32_T)c8_numComponents;
      }

      c8_i10 = c8_labelsRenumbered.size[0];
      c8_i14 = c8_labelForEachRun.size[0];
      if ((c8_e_k < 1) || (c8_e_k > c8_i14)) {
        emlrtDynamicBoundsCheckR2012b(c8_e_k, 1, c8_i14, &c8_xc_emlrtBCI, &c8_st);
      }

      c8_i15 = c8_labelForEachRun.vector.data[c8_e_k - 1];
      if ((c8_i15 < 1) || (c8_i15 > c8_i10)) {
        emlrtDynamicBoundsCheckR2012b(c8_i15, 1, c8_i10, &c8_wc_emlrtBCI, &c8_st);
      }

      c8_i19 = c8_labelsRenumbered.size[0];
      if ((c8_e_k < 1) || (c8_e_k > c8_i19)) {
        emlrtDynamicBoundsCheckR2012b(c8_e_k, 1, c8_i19, &c8_yc_emlrtBCI, &c8_st);
      }

      c8_labelsRenumbered.vector.data[c8_e_k - 1] =
        c8_labelsRenumbered.vector.data[c8_i15 - 1];
    }

    if (c8_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c8_numComponents)) {
      emlrtIntegerCheckR2012b(c8_numComponents, &c8_emlrtDCI, &c8_st);
    }

    c8_array_int32_T_SetSize(chartInstance, &c8_st, &c8_labelForEachRun,
      &c8_pc_emlrtRTEI, (int32_T)c8_numComponents);
    if (c8_numComponents != (real_T)(int32_T)muDoubleScalarFloor
        (c8_numComponents)) {
      emlrtIntegerCheckR2012b(c8_numComponents, &c8_emlrtDCI, &c8_st);
    }

    c8_c_loop_ub = (int32_T)c8_numComponents - 1;
    for (c8_i9 = 0; c8_i9 <= c8_c_loop_ub; c8_i9++) {
      c8_labelForEachRun.vector.data[c8_i9] = 0;
    }

    c8_b_st.site = &c8_md_emlrtRSI;
    c8_c_b = c8_numRuns;
    c8_d_b = c8_c_b;
    if (c8_d_b < 1) {
      c8_b_overflow = false;
    } else {
      c8_b_overflow = (c8_d_b > 2147483646);
    }

    if (c8_b_overflow) {
      c8_c_st.site = &c8_ec_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
    }

    for (c8_f_k = 0; c8_f_k < c8_numRuns; c8_f_k++) {
      c8_e_k = c8_f_k + 1;
      c8_i23 = c8_labelsRenumbered.size[0];
      if ((c8_e_k < 1) || (c8_e_k > c8_i23)) {
        emlrtDynamicBoundsCheckR2012b(c8_e_k, 1, c8_i23, &c8_md_emlrtBCI, &c8_st);
      }

      c8_idx = c8_labelsRenumbered.vector.data[c8_e_k - 1];
      c8_i25 = c8_labelForEachRun.size[0];
      if ((c8_idx < 1) || (c8_idx > c8_i25)) {
        emlrtDynamicBoundsCheckR2012b(c8_idx, 1, c8_i25, &c8_nd_emlrtBCI, &c8_st);
      }

      c8_i27 = c8_endRow.size[0];
      if ((c8_e_k < 1) || (c8_e_k > c8_i27)) {
        emlrtDynamicBoundsCheckR2012b(c8_e_k, 1, c8_i27, &c8_od_emlrtBCI, &c8_st);
      }

      c8_i29 = c8_startRow.size[0];
      if ((c8_e_k < 1) || (c8_e_k > c8_i29)) {
        emlrtDynamicBoundsCheckR2012b(c8_e_k, 1, c8_i29, &c8_pd_emlrtBCI, &c8_st);
      }

      c8_i32 = c8_labelForEachRun.size[0];
      if ((c8_idx < 1) || (c8_idx > c8_i32)) {
        emlrtDynamicBoundsCheckR2012b(c8_idx, 1, c8_i32, &c8_qd_emlrtBCI, &c8_st);
      }

      c8_labelForEachRun.vector.data[c8_idx - 1] =
        ((c8_labelForEachRun.vector.data[c8_idx - 1] +
          c8_endRow.vector.data[c8_e_k - 1]) - c8_startRow.vector.data[c8_e_k -
         1]) + 1;
    }

    c8_d1 = c8_numComponents;
    c8_b_st.site = &c8_ld_emlrtRSI;
    c8_c_st.site = &c8_ud_emlrtRSI;
    c8_d_st.site = &c8_vd_emlrtRSI;
    c8_vlen = c8_labelForEachRun.size[0];
    c8_e_st.site = &c8_wd_emlrtRSI;
    c8_b_vlen = c8_vlen;
    if ((c8_labelForEachRun.size[0] == 0) || (c8_b_vlen == 0)) {
      c8_y = 0.0;
    } else {
      c8_f_st.site = &c8_xd_emlrtRSI;
      c8_c_vlen = c8_b_vlen;
      c8_g_st.site = &c8_yd_emlrtRSI;
      c8_d_vlen = c8_c_vlen;
      if (c8_d_vlen < 4096) {
        c8_h_st.site = &c8_ae_emlrtRSI;
        c8_y = c8_sumColumnB(chartInstance, &c8_h_st, &c8_labelForEachRun,
                             c8_d_vlen);
      } else {
        c8_a = c8_d_vlen;
        c8_nfb = (int32_T)((uint32_T)c8_a >> 12);
        c8_inb = c8_nfb << 12;
        c8_lidx = c8_inb;
        c8_nleft = c8_d_vlen - c8_inb;
        c8_b_s = c8_sumColumnB4(chartInstance, &c8_labelForEachRun, 1);
        for (c8_ib = 2; c8_ib <= c8_nfb; c8_ib++) {
          c8_b_s += c8_sumColumnB4(chartInstance, &c8_labelForEachRun, 1 +
            ((c8_ib - 1) << 12));
        }

        if (c8_nleft > 0) {
          c8_h_st.site = &c8_be_emlrtRSI;
          c8_b_s += c8_b_sumColumnB(chartInstance, &c8_h_st, &c8_labelForEachRun,
            c8_nleft, c8_lidx + 1);
        }

        c8_y = c8_b_s;
      }
    }

    if (!(c8_y >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c8_y, &c8_c_emlrtDCI, &c8_st);
    }

    c8_d2 = c8_y;
    if (c8_d2 != (real_T)(int32_T)muDoubleScalarFloor(c8_d2)) {
      emlrtIntegerCheckR2012b(c8_d2, &c8_b_emlrtDCI, &c8_st);
    }

    c8_iv[0] = (int32_T)c8_d2;
    c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_r, &c8_qc_emlrtRTEI,
      c8_iv[0]);
    c8_array_int32_T_Constructor(chartInstance, &c8_c_x);
    c8_b_st.site = &c8_kd_emlrtRSI;
    c8_array_int32_T_SetSize(chartInstance, &c8_b_st, &c8_c_x, &c8_rc_emlrtRTEI,
      c8_labelForEachRun.size[0]);
    c8_f_loop_ub = c8_labelForEachRun.size[0] - 1;
    for (c8_i35 = 0; c8_i35 <= c8_f_loop_ub; c8_i35++) {
      c8_c_x.vector.data[c8_i35] = c8_labelForEachRun.vector.data[c8_i35];
    }

    c8_c_st.site = &c8_fe_emlrtRSI;
    c8_dim = 2;
    if ((real_T)c8_c_x.size[0] != 1.0) {
      c8_dim = 1;
    }

    c8_array_int32_T_Constructor(chartInstance, &c8_d_x);
    c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_d_x, &c8_dc_emlrtRTEI,
      c8_c_x.size[0]);
    c8_g_loop_ub = c8_c_x.size[0] - 1;
    for (c8_i37 = 0; c8_i37 <= c8_g_loop_ub; c8_i37++) {
      c8_d_x.vector.data[c8_i37] = c8_c_x.vector.data[c8_i37];
    }

    c8_d_st.site = &c8_ge_emlrtRSI;
    c8_useConstantDim(chartInstance, &c8_d_st, &c8_d_x, c8_dim, &c8_c_x);
    c8_array_int32_T_Destructor(chartInstance, &c8_d_x);
    c8_array_int32_T_Constructor(chartInstance, &c8_idxCount);
    c8_array_int32_T_SetSize(chartInstance, &c8_st, &c8_idxCount,
      &c8_sc_emlrtRTEI, 1 + c8_c_x.size[0]);
    c8_idxCount.vector.data[0] = 0;
    c8_h_loop_ub = c8_c_x.size[0] - 1;
    for (c8_i41 = 0; c8_i41 <= c8_h_loop_ub; c8_i41++) {
      c8_idxCount.vector.data[c8_i41 + 1] = c8_c_x.vector.data[c8_i41];
    }

    c8_b_st.site = &c8_jd_emlrtRSI;
    c8_e_b = c8_numRuns;
    c8_f_b = c8_e_b;
    if (c8_f_b < 1) {
      c8_c_overflow = false;
    } else {
      c8_c_overflow = (c8_f_b > 2147483646);
    }

    if (c8_c_overflow) {
      c8_c_st.site = &c8_ec_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
    }

    for (c8_h_k = 0; c8_h_k < c8_numRuns; c8_h_k++) {
      c8_e_k = c8_h_k + 1;
      c8_i49 = c8_startCol.size[0];
      if ((c8_e_k < 1) || (c8_e_k > c8_i49)) {
        emlrtDynamicBoundsCheckR2012b(c8_e_k, 1, c8_i49, &c8_be_emlrtBCI, &c8_st);
      }

      c8_b_a = c8_startCol.vector.data[c8_e_k - 1] - 1;
      c8_c = c8_b_a;
      c8_c_a = c8_c;
      c8_column_offset = c8_c_a * 695;
      c8_i55 = c8_labelsRenumbered.size[0];
      if ((c8_e_k < 1) || (c8_e_k > c8_i55)) {
        emlrtDynamicBoundsCheckR2012b(c8_e_k, 1, c8_i55, &c8_ce_emlrtBCI, &c8_st);
      }

      c8_idx = c8_labelsRenumbered.vector.data[c8_e_k - 1];
      c8_i57 = c8_startRow.size[0];
      if ((c8_e_k < 1) || (c8_e_k > c8_i57)) {
        emlrtDynamicBoundsCheckR2012b(c8_e_k, 1, c8_i57, &c8_de_emlrtBCI, &c8_st);
      }

      c8_i58 = c8_startRow.vector.data[c8_e_k - 1];
      c8_i59 = c8_endRow.size[0];
      if ((c8_e_k < 1) || (c8_e_k > c8_i59)) {
        emlrtDynamicBoundsCheckR2012b(c8_e_k, 1, c8_i59, &c8_ee_emlrtBCI, &c8_st);
      }

      c8_i60 = c8_endRow.vector.data[c8_e_k - 1];
      c8_b_st.site = &c8_id_emlrtRSI;
      c8_d_a = c8_i58;
      c8_g_b = c8_i60;
      c8_e_a = c8_d_a;
      c8_h_b = c8_g_b;
      if (c8_e_a > c8_h_b) {
        c8_d_overflow = false;
      } else {
        c8_d_overflow = (c8_h_b > 2147483646);
      }

      if (c8_d_overflow) {
        c8_c_st.site = &c8_ec_emlrtRSI;
        c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
      }

      for (c8_rowidx = c8_i58; c8_rowidx <= c8_i60; c8_rowidx++) {
        c8_i64 = c8_idxCount.size[0];
        if ((c8_idx < 1) || (c8_idx > c8_i64)) {
          emlrtDynamicBoundsCheckR2012b(c8_idx, 1, c8_i64, &c8_he_emlrtBCI,
            &c8_st);
        }

        c8_f_a = c8_idxCount.vector.data[c8_idx - 1] + 1;
        c8_b_c = c8_f_a;
        c8_i66 = c8_idxCount.size[0];
        if ((c8_idx < 1) || (c8_idx > c8_i66)) {
          emlrtDynamicBoundsCheckR2012b(c8_idx, 1, c8_i66, &c8_ie_emlrtBCI,
            &c8_st);
        }

        c8_idxCount.vector.data[c8_idx - 1] = c8_b_c;
        c8_i69 = c8_r.size[0];
        c8_i71 = c8_idxCount.size[0];
        if ((c8_idx < 1) || (c8_idx > c8_i71)) {
          emlrtDynamicBoundsCheckR2012b(c8_idx, 1, c8_i71, &c8_ke_emlrtBCI,
            &c8_st);
        }

        c8_i73 = c8_idxCount.vector.data[c8_idx - 1];
        if ((c8_i73 < 1) || (c8_i73 > c8_i69)) {
          emlrtDynamicBoundsCheckR2012b(c8_i73, 1, c8_i69, &c8_je_emlrtBCI,
            &c8_st);
        }

        c8_r.vector.data[c8_i73 - 1] = (real_T)(c8_rowidx + c8_column_offset);
      }
    }

    c8_array_int32_T_Destructor(chartInstance, &c8_labelsRenumbered);
    c8_array_cell_wrap_37_Constructor(chartInstance, &c8_r2);
    c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_r2.f1, &c8_tc_emlrtRTEI,
      0);
    c8_array_cell_wrap_37_1s_Construct(chartInstance, c8_rv);
    c8_array_cell_wrap_37_Copy(chartInstance, &c8_st, &c8_rv[0], &c8_r2,
      &c8_tc_emlrtRTEI);
    c8_array_cell_wrap_37_Destructor(chartInstance, &c8_r2);
    c8_b_st.site = &c8_hd_emlrtRSI;
    c8_repmat(chartInstance, &c8_b_st, c8_rv, c8_numComponents, &c8_r1);
    c8_array_cell_wrap_37_1s_Destructo(chartInstance, c8_rv);
    c8_b_st.site = &c8_gd_emlrtRSI;
    c8_array_int32_T_SetSize(chartInstance, &c8_b_st, &c8_c_x, &c8_uc_emlrtRTEI,
      c8_labelForEachRun.size[0]);
    c8_i_loop_ub = c8_labelForEachRun.size[0] - 1;
    for (c8_i56 = 0; c8_i56 <= c8_i_loop_ub; c8_i56++) {
      c8_c_x.vector.data[c8_i56] = c8_labelForEachRun.vector.data[c8_i56];
    }

    c8_c_st.site = &c8_fe_emlrtRSI;
    c8_b_dim = 2;
    if ((real_T)c8_c_x.size[0] != 1.0) {
      c8_b_dim = 1;
    }

    c8_array_int32_T_Constructor(chartInstance, &c8_e_x);
    c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_e_x, &c8_dc_emlrtRTEI,
      c8_c_x.size[0]);
    c8_j_loop_ub = c8_c_x.size[0] - 1;
    for (c8_i61 = 0; c8_i61 <= c8_j_loop_ub; c8_i61++) {
      c8_e_x.vector.data[c8_i61] = c8_c_x.vector.data[c8_i61];
    }

    c8_d_st.site = &c8_ge_emlrtRSI;
    c8_useConstantDim(chartInstance, &c8_d_st, &c8_e_x, c8_b_dim, &c8_c_x);
    c8_array_int32_T_Destructor(chartInstance, &c8_e_x);
    c8_array_int32_T_SetSize(chartInstance, &c8_st, &c8_idxCount,
      &c8_vc_emlrtRTEI, 1 + c8_c_x.size[0]);
    c8_idxCount.vector.data[0] = 0;
    c8_k_loop_ub = c8_c_x.size[0] - 1;
    for (c8_i62 = 0; c8_i62 <= c8_k_loop_ub; c8_i62++) {
      c8_idxCount.vector.data[c8_i62 + 1] = c8_c_x.vector.data[c8_i62];
    }

    c8_array_int32_T_Destructor(chartInstance, &c8_c_x);
    c8_i63 = (int32_T)c8_numComponents;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, c8_numComponents, mxDOUBLE_CLASS,
      c8_i63, &c8_qg_emlrtRTEI, &c8_st);
    for (c8_j_k = 0; c8_j_k < c8_i63; c8_j_k++) {
      c8_k_k = (real_T)c8_j_k + 1.0;
      c8_i65 = c8_idxCount.size[0];
      c8_i67 = (int32_T)c8_k_k;
      if ((c8_i67 < 1) || (c8_i67 > c8_i65)) {
        emlrtDynamicBoundsCheckR2012b(c8_i67, 1, c8_i65, &c8_fe_emlrtBCI, &c8_st);
      }

      c8_i68 = c8_idxCount.vector.data[c8_i67 - 1] + 1;
      c8_i70 = c8_idxCount.size[0];
      c8_i72 = (int32_T)(c8_k_k + 1.0);
      if ((c8_i72 < 1) || (c8_i72 > c8_i70)) {
        emlrtDynamicBoundsCheckR2012b(c8_i72, 1, c8_i70, &c8_ge_emlrtBCI, &c8_st);
      }

      c8_i74 = c8_idxCount.vector.data[c8_i72 - 1];
      c8_i_b = (c8_i68 > c8_i74);
      if (c8_i_b) {
        c8_i76 = 0;
        c8_i77 = -1;
      } else {
        c8_i75 = c8_r.size[0];
        if ((c8_i68 < 1) || (c8_i68 > c8_i75)) {
          emlrtDynamicBoundsCheckR2012b(c8_i68, 1, c8_i75, &c8_nc_emlrtBCI,
            &c8_st);
        }

        c8_i76 = c8_i68 - 1;
        c8_i79 = c8_r.size[0];
        if ((c8_i74 < 1) || (c8_i74 > c8_i79)) {
          emlrtDynamicBoundsCheckR2012b(c8_i74, 1, c8_i79, &c8_mc_emlrtBCI,
            &c8_st);
        }

        c8_i77 = c8_i74 - 1;
      }

      c8_i78 = c8_r1.size[1] - 1;
      c8_i80 = (int32_T)c8_k_k - 1;
      if ((c8_i80 < 0) || (c8_i80 > c8_i78)) {
        emlrtDynamicBoundsCheckR2012b(c8_i80, 0, c8_i78, &c8_le_emlrtBCI, &c8_st);
      }

      c8_array_real_T_SetSize(chartInstance, &c8_st,
        &c8_r1.vector.data[c8_r1.size[0] * c8_i80].f1, &c8_wc_emlrtRTEI, (c8_i77
        - c8_i76) + 1);
      c8_l_loop_ub = c8_i77 - c8_i76;
      for (c8_i81 = 0; c8_i81 <= c8_l_loop_ub; c8_i81++) {
        c8_i82 = c8_r1.size[1] - 1;
        c8_i83 = (int32_T)c8_k_k - 1;
        if ((c8_i83 < 0) || (c8_i83 > c8_i82)) {
          emlrtDynamicBoundsCheckR2012b(c8_i83, 0, c8_i82, &c8_le_emlrtBCI,
            &c8_st);
        }

        c8_r1.vector.data[c8_i83].f1.vector.data[c8_i81] =
          c8_r.vector.data[c8_i76 + c8_i81];
      }
    }

    c8_array_int32_T_Destructor(chartInstance, &c8_idxCount);
  }

  c8_array_int32_T_Destructor(chartInstance, &c8_startCol);
  c8_array_int32_T_Destructor(chartInstance, &c8_endRow);
  c8_array_int32_T_Destructor(chartInstance, &c8_startRow);
  c8_CC->NumObjects = c8_d1;
  c8_st.site = &c8_fd_emlrtRSI;
  c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_CC->RegionIndices,
    &c8_bd_emlrtRTEI, c8_r.size[0]);
  c8_b_loop_ub = c8_r.size[0] - 1;
  for (c8_i5 = 0; c8_i5 <= c8_b_loop_ub; c8_i5++) {
    c8_CC->RegionIndices.vector.data[c8_i5] = c8_r.vector.data[c8_i5];
  }

  c8_array_real_T_Destructor(chartInstance, &c8_r);
  c8_st.site = &c8_fd_emlrtRSI;
  c8_array_int32_T_SetSize(chartInstance, &c8_st, &c8_CC->RegionLengths,
    &c8_cd_emlrtRTEI, c8_labelForEachRun.size[0]);
  c8_d_loop_ub = c8_labelForEachRun.size[0] - 1;
  for (c8_i12 = 0; c8_i12 <= c8_d_loop_ub; c8_i12++) {
    c8_CC->RegionLengths.vector.data[c8_i12] =
      c8_labelForEachRun.vector.data[c8_i12];
  }

  c8_array_int32_T_Destructor(chartInstance, &c8_labelForEachRun);
  c8_st.site = &c8_fd_emlrtRSI;
  c8_array_cell_wrap_37_2D_SetSize(chartInstance, &c8_st, &c8_CC->PixelIdxList,
    &c8_dd_emlrtRTEI, 1, c8_r1.size[1]);
  c8_e_loop_ub = c8_r1.size[1] - 1;
  for (c8_i18 = 0; c8_i18 <= c8_e_loop_ub; c8_i18++) {
    c8_st.site = &c8_fd_emlrtRSI;
    c8_array_cell_wrap_37_Copy(chartInstance, &c8_st,
      &c8_CC->PixelIdxList.vector.data[c8_i18], &c8_r1.vector.data[c8_i18],
      &c8_dd_emlrtRTEI);
  }

  c8_array_cell_wrap_37_2D_Destructo(chartInstance, &c8_r1);
}

static real_T c8_sumColumnB(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T *c8_c_x, int32_T c8_vlen)
{
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_st;
  real_T c8_b_y;
  real_T c8_c_y;
  real_T c8_y;
  int32_T c8_a;
  int32_T c8_b;
  int32_T c8_b_b;
  int32_T c8_b_k;
  int32_T c8_b_vlen;
  int32_T c8_b_vstart;
  int32_T c8_c_b;
  int32_T c8_c_k;
  int32_T c8_c_vlen;
  int32_T c8_d_b;
  int32_T c8_d_k;
  int32_T c8_e_k;
  int32_T c8_f_k;
  int32_T c8_g_k;
  int32_T c8_h_k;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i_k;
  int32_T c8_inb;
  int32_T c8_k;
  int32_T c8_lidx;
  int32_T c8_nfb;
  int32_T c8_nleft;
  int32_T c8_vstart;
  boolean_T c8_b_overflow;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  if (c8_vlen <= 1024) {
    c8_st.site = &c8_ce_emlrtRSI;
    c8_b_vlen = c8_vlen - 1;
    c8_y = (real_T)c8_c_x->vector.data[0];
    c8_i = c8_b_vlen;
    c8_b_st.site = &c8_ee_emlrtRSI;
    c8_b = c8_i;
    c8_b_b = c8_b;
    if (c8_b_b < 1) {
      c8_overflow = false;
    } else {
      c8_overflow = (c8_b_b > 2147483646);
    }

    if (c8_overflow) {
      c8_c_st.site = &c8_ec_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
    }

    c8_i1 = (uint16_T)c8_i - 1;
    for (c8_f_k = 0; c8_f_k <= c8_i1; c8_f_k++) {
      c8_g_k = c8_f_k;
      c8_y += (real_T)c8_c_x->vector.data[c8_g_k + 1];
    }
  } else {
    c8_a = c8_vlen;
    c8_nfb = (int32_T)((uint32_T)c8_a >> 10);
    c8_inb = c8_nfb << 10;
    c8_y = (real_T)c8_c_x->vector.data[0];
    for (c8_k = 0; c8_k < 1023; c8_k++) {
      c8_c_k = c8_k;
      c8_y += (real_T)c8_c_x->vector.data[c8_c_k + 1];
    }

    for (c8_b_k = 2; c8_b_k <= c8_nfb; c8_b_k++) {
      c8_vstart = (c8_b_k - 1) << 10;
      c8_b_y = (real_T)c8_c_x->vector.data[c8_vstart];
      for (c8_d_k = 0; c8_d_k < 1023; c8_d_k++) {
        c8_e_k = c8_d_k;
        c8_b_y += (real_T)c8_c_x->vector.data[(c8_vstart + c8_e_k) + 1];
      }

      c8_y += c8_b_y;
    }

    if (c8_vlen > c8_inb) {
      c8_nleft = c8_vlen - c8_inb;
      c8_lidx = c8_inb;
      c8_st.site = &c8_de_emlrtRSI;
      c8_c_vlen = c8_nleft - 1;
      c8_b_vstart = c8_lidx;
      c8_c_y = (real_T)c8_c_x->vector.data[c8_b_vstart];
      c8_i2 = c8_c_vlen;
      c8_b_st.site = &c8_ee_emlrtRSI;
      c8_c_b = c8_i2;
      c8_d_b = c8_c_b;
      if (c8_d_b < 1) {
        c8_b_overflow = false;
      } else {
        c8_b_overflow = (c8_d_b > 2147483646);
      }

      if (c8_b_overflow) {
        c8_c_st.site = &c8_ec_emlrtRSI;
        c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
      }

      for (c8_h_k = 0; c8_h_k < c8_i2; c8_h_k++) {
        c8_i_k = c8_h_k;
        c8_c_y += (real_T)c8_c_x->vector.data[(c8_b_vstart + c8_i_k) + 1];
      }

      c8_y += c8_c_y;
    }
  }

  return c8_y;
}

static real_T c8_sumColumnB4(SFc8_untitledInstanceStruct *chartInstance,
  c8_coder_array_int32_T *c8_c_x, int32_T c8_vstart)
{
  real_T c8_psum1;
  real_T c8_psum2;
  real_T c8_psum3;
  real_T c8_psum4;
  int32_T c8_b_k;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_k;
  (void)chartInstance;
  c8_i2 = c8_vstart + 1023;
  c8_i3 = c8_vstart + 2047;
  c8_i4 = c8_vstart + 3071;
  c8_psum1 = (real_T)c8_c_x->vector.data[c8_vstart - 1];
  c8_psum2 = (real_T)c8_c_x->vector.data[c8_i2];
  c8_psum3 = (real_T)c8_c_x->vector.data[c8_i3];
  c8_psum4 = (real_T)c8_c_x->vector.data[c8_i4];
  for (c8_k = 0; c8_k < 1023; c8_k++) {
    c8_b_k = c8_k + 1;
    c8_psum1 += (real_T)c8_c_x->vector.data[(c8_vstart + c8_b_k) - 1];
    c8_psum2 += (real_T)c8_c_x->vector.data[c8_i2 + c8_b_k];
    c8_psum3 += (real_T)c8_c_x->vector.data[c8_i3 + c8_b_k];
    c8_psum4 += (real_T)c8_c_x->vector.data[c8_i4 + c8_b_k];
  }

  return (c8_psum1 + c8_psum2) + (c8_psum3 + c8_psum4);
}

static real_T c8_b_sumColumnB(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T *c8_c_x, int32_T c8_vlen, int32_T
  c8_vstart)
{
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_st;
  real_T c8_b_y;
  real_T c8_c_y;
  real_T c8_y;
  int32_T c8_a;
  int32_T c8_b;
  int32_T c8_b_b;
  int32_T c8_b_k;
  int32_T c8_b_vlen;
  int32_T c8_b_vstart;
  int32_T c8_c_b;
  int32_T c8_c_k;
  int32_T c8_c_vlen;
  int32_T c8_c_vstart;
  int32_T c8_d_b;
  int32_T c8_d_k;
  int32_T c8_d_vstart;
  int32_T c8_e_k;
  int32_T c8_e_vstart;
  int32_T c8_f_k;
  int32_T c8_g_k;
  int32_T c8_h_k;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i_k;
  int32_T c8_inb;
  int32_T c8_k;
  int32_T c8_lidx;
  int32_T c8_nfb;
  int32_T c8_nleft;
  boolean_T c8_b_overflow;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  if (c8_vlen <= 1024) {
    c8_st.site = &c8_ce_emlrtRSI;
    c8_b_vlen = c8_vlen - 1;
    c8_b_vstart = c8_vstart - 1;
    c8_y = (real_T)c8_c_x->vector.data[c8_b_vstart];
    c8_i = c8_b_vlen;
    c8_b_st.site = &c8_ee_emlrtRSI;
    c8_b = c8_i;
    c8_b_b = c8_b;
    if (c8_b_b < 1) {
      c8_overflow = false;
    } else {
      c8_overflow = (c8_b_b > 2147483646);
    }

    if (c8_overflow) {
      c8_c_st.site = &c8_ec_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
    }

    for (c8_f_k = 0; c8_f_k < c8_i; c8_f_k++) {
      c8_g_k = c8_f_k;
      c8_y += (real_T)c8_c_x->vector.data[(c8_b_vstart + c8_g_k) + 1];
    }
  } else {
    c8_a = c8_vlen;
    c8_nfb = (int32_T)((uint32_T)c8_a >> 10);
    c8_inb = c8_nfb << 10;
    c8_c_vstart = c8_vstart - 1;
    c8_y = (real_T)c8_c_x->vector.data[c8_c_vstart];
    for (c8_k = 0; c8_k < 1023; c8_k++) {
      c8_c_k = c8_k;
      c8_y += (real_T)c8_c_x->vector.data[(c8_c_vstart + c8_c_k) + 1];
    }

    for (c8_b_k = 2; c8_b_k <= c8_nfb; c8_b_k++) {
      c8_d_vstart = (c8_vstart + ((c8_b_k - 1) << 10)) - 1;
      c8_b_y = (real_T)c8_c_x->vector.data[c8_d_vstart];
      for (c8_d_k = 0; c8_d_k < 1023; c8_d_k++) {
        c8_e_k = c8_d_k;
        c8_b_y += (real_T)c8_c_x->vector.data[(c8_d_vstart + c8_e_k) + 1];
      }

      c8_y += c8_b_y;
    }

    if (c8_vlen > c8_inb) {
      c8_nleft = c8_vlen - c8_inb;
      c8_lidx = c8_vstart + c8_inb;
      c8_st.site = &c8_de_emlrtRSI;
      c8_c_vlen = c8_nleft - 1;
      c8_e_vstart = c8_lidx - 1;
      c8_c_y = (real_T)c8_c_x->vector.data[c8_e_vstart];
      c8_i1 = c8_c_vlen;
      c8_b_st.site = &c8_ee_emlrtRSI;
      c8_c_b = c8_i1;
      c8_d_b = c8_c_b;
      if (c8_d_b < 1) {
        c8_b_overflow = false;
      } else {
        c8_b_overflow = (c8_d_b > 2147483646);
      }

      if (c8_b_overflow) {
        c8_c_st.site = &c8_ec_emlrtRSI;
        c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
      }

      for (c8_h_k = 0; c8_h_k < c8_i1; c8_h_k++) {
        c8_i_k = c8_h_k;
        c8_c_y += (real_T)c8_c_x->vector.data[(c8_e_vstart + c8_i_k) + 1];
      }

      c8_y += c8_c_y;
    }
  }

  return c8_y;
}

static void c8_useConstantDim(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T *c8_b_varargin_2, int32_T
  c8_varargin_3, c8_coder_array_int32_T *c8_varargout_1)
{
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_e_st;
  emlrtStack c8_st;
  int32_T c8_b;
  int32_T c8_b_b;
  int32_T c8_b_k;
  int32_T c8_b_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_k;
  int32_T c8_loop_ub;
  int32_T c8_nx;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_e_st.prev = &c8_d_st;
  c8_e_st.tls = c8_d_st.tls;
  if (c8_varargin_3 == 1) {
    c8_st.site = &c8_he_emlrtRSI;
    c8_array_int32_T_SetSize(chartInstance, &c8_st, c8_varargout_1,
      &c8_ed_emlrtRTEI, c8_b_varargin_2->size[0]);
    c8_b_loop_ub = c8_b_varargin_2->size[0] - 1;
    for (c8_i1 = 0; c8_i1 <= c8_b_loop_ub; c8_i1++) {
      c8_varargout_1->vector.data[c8_i1] = c8_b_varargin_2->vector.data[c8_i1];
    }

    c8_b_st.site = &c8_ie_emlrtRSI;
    if (c8_varargout_1->size[0] != 0) {
      c8_c_st.site = &c8_je_emlrtRSI;
      c8_nx = c8_varargout_1->size[0] - 1;
      if (!((real_T)c8_varargout_1->size[0] == 1.0)) {
        c8_i2 = c8_nx;
        c8_d_st.site = &c8_ke_emlrtRSI;
        c8_b = c8_i2;
        c8_b_b = c8_b;
        if (c8_b_b < 1) {
          c8_overflow = false;
        } else {
          c8_overflow = (c8_b_b > 2147483646);
        }

        if (c8_overflow) {
          c8_e_st.site = &c8_ec_emlrtRSI;
          c8_check_forloop_overflow_error(chartInstance, &c8_e_st);
        }

        for (c8_k = 0; c8_k < c8_i2; c8_k++) {
          c8_b_k = c8_k;
          c8_varargout_1->vector.data[c8_b_k + 1] += c8_varargout_1->
            vector.data[c8_b_k];
        }
      }
    }
  } else {
    c8_array_int32_T_SetSize(chartInstance, c8_sp, c8_varargout_1,
      &c8_ed_emlrtRTEI, c8_b_varargin_2->size[0]);
    c8_loop_ub = c8_b_varargin_2->size[0] - 1;
    for (c8_i = 0; c8_i <= c8_loop_ub; c8_i++) {
      c8_varargout_1->vector.data[c8_i] = c8_b_varargin_2->vector.data[c8_i];
    }
  }
}

static void c8_repmat(SFc8_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c8_sp, c8_cell_wrap_37 c8_a[1], real_T
                      c8_b_varargin_2, c8_coder_array_cell_wrap_37_2D *c8_b)
{
  c8_coder_array_boolean_T_2D c8_tile;
  c8_coder_array_cell_wrap_37_2D c8_r;
  emlrtStack c8_b_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_g_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_arg;
  real_T c8_b_arg;
  real_T c8_c_varargin_2;
  real_T c8_c_x;
  real_T c8_d_varargin_2;
  real_T c8_n;
  int32_T c8_outsize[2];
  int32_T c8_b_jtilecol;
  int32_T c8_b_loop_ub;
  int32_T c8_b_u;
  int32_T c8_d_b;
  int32_T c8_e_b;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_ibtile;
  int32_T c8_jtilecol;
  int32_T c8_loop_ub;
  int32_T c8_ntilecols;
  int32_T c8_u;
  boolean_T c8_b_b;
  boolean_T c8_b_p;
  boolean_T c8_c_b;
  boolean_T c8_c_p;
  boolean_T c8_overflow;
  boolean_T c8_p;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_st.site = &c8_le_emlrtRSI;
  c8_c_varargin_2 = c8_b_varargin_2;
  c8_arg = c8_c_varargin_2;
  if (c8_arg != c8_arg) {
    c8_p = false;
  } else {
    c8_c_x = c8_arg;
    c8_b_b = muDoubleScalarIsInf(c8_c_x);
    if (c8_b_b) {
      c8_p = false;
    } else {
      c8_p = true;
    }
  }

  if (c8_p) {
    c8_b_arg = c8_c_varargin_2;
    if (c8_b_arg > 2.147483647E+9) {
      c8_b_p = false;
    } else {
      c8_b_p = true;
    }

    if (c8_b_p) {
      c8_c_b = true;
    } else {
      c8_c_b = false;
    }
  } else {
    c8_c_b = false;
  }

  if (!c8_c_b) {
    c8_y = NULL;
    sf_mex_assign(&c8_y, sf_mex_create("y", c8_cv4, 10, 0U, 1, 0U, 2, 1, 28),
                  false);
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv4, 10, 0U, 1, 0U, 2, 1, 28),
                  false);
    c8_u = MIN_int32_T;
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", &c8_u, 6, 0U, 0, 0U, 0), false);
    c8_b_u = MAX_int32_T;
    c8_f_y = NULL;
    sf_mex_assign(&c8_f_y, sf_mex_create("y", &c8_b_u, 6, 0U, 0, 0U, 0), false);
    sf_mex_call(&c8_st, &c8_k_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_st, NULL, "message", 1U, 3U, 14, c8_b_y, 14, c8_c_y, 14, c8_f_y)));
  }

  c8_d_varargin_2 = c8_c_varargin_2;
  if (c8_d_varargin_2 <= 0.0) {
    c8_n = 0.0;
  } else {
    c8_n = c8_d_varargin_2;
  }

  if (!(c8_n <= 2.147483647E+9)) {
    c8_d_y = NULL;
    sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_cv3, 10, 0U, 1, 0U, 2, 1, 21),
                  false);
    c8_e_y = NULL;
    sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_cv3, 10, 0U, 1, 0U, 2, 1, 21),
                  false);
    sf_mex_call(&c8_st, &c8_l_emlrtMCI, "error", 0U, 2U, 14, c8_d_y, 14,
                sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_st, NULL, "message", 1U, 1U, 14, c8_e_y)));
  }

  c8_array_boolean_T_2D_Constructor(chartInstance, &c8_tile);
  c8_st.site = &c8_jh_emlrtRSI;
  c8_array_boolean_T_2D_SetSize(chartInstance, &c8_st, &c8_tile,
    &c8_fd_emlrtRTEI, 1, (int32_T)c8_b_varargin_2);
  c8_loop_ub = (int32_T)c8_b_varargin_2 - 1;
  for (c8_i = 0; c8_i <= c8_loop_ub; c8_i++) {
    c8_tile.vector.data[c8_i] = false;
  }

  c8_outsize[0] = 1;
  c8_outsize[1] = c8_tile.size[1];
  if (!((real_T)c8_outsize[1] == (real_T)c8_tile.size[1])) {
    c8_g_y = NULL;
    sf_mex_assign(&c8_g_y, sf_mex_create("y", c8_cv2, 10, 0U, 1, 0U, 2, 1, 15),
                  false);
    sf_mex_call(c8_sp, &c8_j_emlrtMCI, "error", 0U, 1U, 14, c8_g_y);
  }

  c8_array_cell_wrap_37_2D_Construct(chartInstance, &c8_r);
  c8_st.site = &c8_xh_emlrtRSI;
  c8_array_cell_wrap_37_2D_SetSize(chartInstance, &c8_st, &c8_r,
    &c8_gd_emlrtRTEI, c8_outsize[0], c8_outsize[1]);
  c8_st.site = &c8_xh_emlrtRSI;
  c8_array_cell_wrap_37_2D_SetSize(chartInstance, &c8_st, c8_b, &c8_hd_emlrtRTEI,
    1, c8_r.size[1]);
  c8_array_cell_wrap_37_2D_Destructo(chartInstance, &c8_r);
  if (c8_outsize[1] == 0) {
    c8_c_p = true;
  } else {
    c8_c_p = false;
  }

  if (!c8_c_p) {
    c8_ntilecols = c8_tile.size[1];
    c8_st.site = &c8_me_emlrtRSI;
    c8_d_b = c8_ntilecols;
    c8_e_b = c8_d_b;
    if (c8_e_b < 1) {
      c8_overflow = false;
    } else {
      c8_overflow = (c8_e_b > 2147483646);
    }

    if (c8_overflow) {
      c8_b_st.site = &c8_ec_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_b_st);
    }

    for (c8_jtilecol = 0; c8_jtilecol < c8_ntilecols; c8_jtilecol++) {
      c8_b_jtilecol = c8_jtilecol;
      c8_ibtile = c8_b_jtilecol;
      c8_array_real_T_SetSize(chartInstance, c8_sp, &c8_b->vector.data
        [c8_b->size[0] * c8_ibtile].f1, &c8_id_emlrtRTEI, c8_a[0].f1.size[0]);
      c8_b_loop_ub = c8_a[0].f1.size[0] - 1;
      for (c8_i1 = 0; c8_i1 <= c8_b_loop_ub; c8_i1++) {
        c8_b->vector.data[c8_ibtile].f1.vector.data[c8_i1] = c8_a[0].
          f1.vector.data[c8_i1];
      }
    }
  }

  c8_array_boolean_T_2D_Destructor(chartInstance, &c8_tile);
}

static void c8_b_repmat(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, real_T c8_b_varargin_1, c8_coder_array_sOA5t73y81YtFHGIDxk *
  c8_b)
{
  c8_coder_array_boolean_T c8_tile;
  c8_sOA5t73y81YtFHGIDxk0fKF c8_b_s;
  emlrtStack c8_st;
  const mxArray *c8_y = NULL;
  int32_T c8_outsize[2];
  int32_T c8_b_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_loop_ub;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_le_emlrtRSI;
  c8_assertValidSizeArg(chartInstance, &c8_st, c8_b_varargin_1);
  c8_array_boolean_T_Constructor(chartInstance, &c8_tile);
  c8_st.site = &c8_jh_emlrtRSI;
  c8_array_boolean_T_SetSize(chartInstance, &c8_st, &c8_tile, &c8_fd_emlrtRTEI,
    (int32_T)c8_b_varargin_1);
  c8_loop_ub = (int32_T)c8_b_varargin_1 - 1;
  for (c8_i = 0; c8_i <= c8_loop_ub; c8_i++) {
    c8_tile.vector.data[c8_i] = false;
  }

  c8_outsize[0] = c8_tile.size[0];
  if (!((real_T)c8_outsize[0] == (real_T)c8_tile.size[0])) {
    c8_y = NULL;
    sf_mex_assign(&c8_y, sf_mex_create("y", c8_cv2, 10, 0U, 1, 0U, 2, 1, 15),
                  false);
    sf_mex_call(c8_sp, &c8_j_emlrtMCI, "error", 0U, 1U, 14, c8_y);
  }

  c8_array_boolean_T_Destructor(chartInstance, &c8_tile);
  for (c8_i1 = 0; c8_i1 < 2; c8_i1++) {
    c8_b_s.WeightedCentroid[c8_i1] = 0.0;
  }

  c8_st.site = &c8_yh_emlrtRSI;
  c8_array_sOA5t73y81YtFHGIDxk0fKF_S(chartInstance, &c8_st, c8_b,
    &c8_jd_emlrtRTEI, c8_outsize[0]);
  c8_b_loop_ub = c8_outsize[0] - 1;
  for (c8_i2 = 0; c8_i2 <= c8_b_loop_ub; c8_i2++) {
    c8_b->vector.data[c8_i2] = c8_b_s;
  }
}

static void c8_assertValidSizeArg(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, real_T c8_b_varargin_1)
{
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_arg;
  real_T c8_b_arg;
  real_T c8_c_varargin_1;
  real_T c8_c_x;
  real_T c8_n;
  int32_T c8_b_u;
  int32_T c8_u;
  boolean_T c8_b;
  boolean_T c8_b_b;
  boolean_T c8_b_p;
  boolean_T c8_p;
  (void)chartInstance;
  c8_arg = c8_b_varargin_1;
  if (c8_arg != c8_arg) {
    c8_p = false;
  } else {
    c8_c_x = c8_arg;
    c8_b = muDoubleScalarIsInf(c8_c_x);
    if (c8_b) {
      c8_p = false;
    } else {
      c8_p = true;
    }
  }

  if (c8_p) {
    c8_b_arg = c8_b_varargin_1;
    if (c8_b_arg > 2.147483647E+9) {
      c8_b_p = false;
    } else {
      c8_b_p = true;
    }

    if (c8_b_p) {
      c8_b_b = true;
    } else {
      c8_b_b = false;
    }
  } else {
    c8_b_b = false;
  }

  if (!c8_b_b) {
    c8_y = NULL;
    sf_mex_assign(&c8_y, sf_mex_create("y", c8_cv4, 10, 0U, 1, 0U, 2, 1, 28),
                  false);
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_cv4, 10, 0U, 1, 0U, 2, 1, 28),
                  false);
    c8_u = MIN_int32_T;
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", &c8_u, 6, 0U, 0, 0U, 0), false);
    c8_b_u = MAX_int32_T;
    c8_f_y = NULL;
    sf_mex_assign(&c8_f_y, sf_mex_create("y", &c8_b_u, 6, 0U, 0, 0U, 0), false);
    sf_mex_call(c8_sp, &c8_k_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                sf_mex_call(c8_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c8_sp, NULL, "message", 1U, 3U, 14, c8_b_y, 14, c8_c_y, 14, c8_f_y)));
  }

  c8_c_varargin_1 = c8_b_varargin_1;
  if (c8_c_varargin_1 <= 0.0) {
    c8_n = 0.0;
  } else {
    c8_n = c8_c_varargin_1;
  }

  if (!(c8_n <= 2.147483647E+9)) {
    c8_d_y = NULL;
    sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_cv3, 10, 0U, 1, 0U, 2, 1, 21),
                  false);
    c8_e_y = NULL;
    sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_cv3, 10, 0U, 1, 0U, 2, 1, 21),
                  false);
    sf_mex_call(c8_sp, &c8_l_emlrtMCI, "error", 0U, 2U, 14, c8_d_y, 14,
                sf_mex_call(c8_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (c8_sp, NULL, "message", 1U, 1U, 14, c8_e_y)));
  }
}

static void c8_initializeStatsStruct(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, real_T c8_numObjs, c8_coder_array_s_R6Og1x0kmqQXSF9Pw
  *c8_stats, c8_sHtk0WM4OMtyqkehwQYcq2 *c8_statsAlreadyComputed)
{
  c8_coder_array_boolean_T c8_tile;
  c8_s_R6Og1x0kmqQXSF9Pwa49FD c8_statsOneObj;
  emlrtStack c8_b_st;
  emlrtStack c8_st;
  const mxArray *c8_y = NULL;
  real_T c8_b_varargin_1;
  int32_T c8_outsize[2];
  int32_T c8_b_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_loop_ub;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_statsAlreadyComputed->Area = false;
  c8_c_array_s_R6Og1x0kmqQXSF9Pwa49FD_(chartInstance, &c8_statsOneObj);
  c8_statsOneObj.Area = 0.0;
  c8_statsAlreadyComputed->Centroid = false;
  for (c8_i = 0; c8_i < 2; c8_i++) {
    c8_statsOneObj.Centroid[c8_i] = 0.0;
  }

  c8_statsAlreadyComputed->BoundingBox = false;
  for (c8_i1 = 0; c8_i1 < 4; c8_i1++) {
    c8_statsOneObj.BoundingBox[c8_i1] = 0.0;
  }

  c8_statsAlreadyComputed->MajorAxisLength = false;
  c8_statsOneObj.MajorAxisLength = 0.0;
  c8_statsAlreadyComputed->MinorAxisLength = false;
  c8_statsOneObj.MinorAxisLength = 0.0;
  c8_statsAlreadyComputed->Eccentricity = false;
  c8_statsOneObj.Eccentricity = 0.0;
  c8_statsAlreadyComputed->Orientation = false;
  c8_statsOneObj.Orientation = 0.0;
  c8_statsAlreadyComputed->Image = false;
  c8_statsOneObj.Image.size[0] = 0;
  c8_statsOneObj.Image.size[1] = 0;
  c8_statsAlreadyComputed->FilledImage = false;
  c8_statsOneObj.FilledImage.size[0] = 0;
  c8_statsOneObj.FilledImage.size[1] = 0;
  c8_statsAlreadyComputed->FilledArea = false;
  c8_statsOneObj.FilledArea = 0.0;
  c8_statsAlreadyComputed->EulerNumber = false;
  c8_statsOneObj.EulerNumber = 0.0;
  c8_statsAlreadyComputed->Extrema = false;
  for (c8_i2 = 0; c8_i2 < 16; c8_i2++) {
    c8_statsOneObj.Extrema[c8_i2] = 0.0;
  }

  c8_statsAlreadyComputed->EquivDiameter = false;
  c8_statsOneObj.EquivDiameter = 0.0;
  c8_statsAlreadyComputed->Extent = false;
  c8_statsOneObj.Extent = 0.0;
  c8_statsAlreadyComputed->PixelIdxList = false;
  c8_array_real_T_SetSize(chartInstance, c8_sp, &c8_statsOneObj.PixelIdxList,
    &c8_md_emlrtRTEI, 0);
  c8_statsAlreadyComputed->PixelList = false;
  c8_st.site = &c8_yg_emlrtRSI;
  c8_array_real_T_2D_SetSize(chartInstance, &c8_st, &c8_statsOneObj.PixelList,
    &c8_nd_emlrtRTEI, 0, 2);
  c8_statsAlreadyComputed->Perimeter = false;
  c8_statsOneObj.Perimeter = 0.0;
  c8_statsAlreadyComputed->Circularity = false;
  c8_statsOneObj.Circularity = 0.0;
  c8_statsAlreadyComputed->PixelValues = false;
  c8_array_real_T_SetSize(chartInstance, c8_sp, &c8_statsOneObj.PixelValues,
    &c8_od_emlrtRTEI, 0);
  c8_statsAlreadyComputed->WeightedCentroid = false;
  for (c8_i3 = 0; c8_i3 < 2; c8_i3++) {
    c8_statsOneObj.WeightedCentroid[c8_i3] = 0.0;
  }

  c8_statsAlreadyComputed->MeanIntensity = false;
  c8_statsOneObj.MeanIntensity = 0.0;
  c8_statsAlreadyComputed->MinIntensity = false;
  c8_statsOneObj.MinIntensity = 0.0;
  c8_statsAlreadyComputed->MaxIntensity = false;
  c8_statsOneObj.MaxIntensity = 0.0;
  c8_statsAlreadyComputed->SubarrayIdx = false;
  c8_statsOneObj.SubarrayIdx.size[0] = 1;
  c8_statsOneObj.SubarrayIdx.size[1] = 0;
  for (c8_i4 = 0; c8_i4 < 2; c8_i4++) {
    c8_statsOneObj.SubarrayIdxLengths[c8_i4] = 0.0;
  }

  c8_st.site = &c8_pe_emlrtRSI;
  c8_b_varargin_1 = c8_numObjs;
  c8_b_st.site = &c8_le_emlrtRSI;
  c8_assertValidSizeArg(chartInstance, &c8_b_st, c8_b_varargin_1);
  c8_array_boolean_T_Constructor(chartInstance, &c8_tile);
  c8_array_boolean_T_SetSize(chartInstance, &c8_st, &c8_tile, &c8_fd_emlrtRTEI,
    (int32_T)c8_b_varargin_1);
  c8_loop_ub = (int32_T)c8_b_varargin_1 - 1;
  for (c8_i5 = 0; c8_i5 <= c8_loop_ub; c8_i5++) {
    c8_tile.vector.data[c8_i5] = false;
  }

  c8_outsize[0] = c8_tile.size[0];
  if (!((real_T)c8_outsize[0] == (real_T)c8_tile.size[0])) {
    c8_y = NULL;
    sf_mex_assign(&c8_y, sf_mex_create("y", c8_cv2, 10, 0U, 1, 0U, 2, 1, 15),
                  false);
    sf_mex_call(&c8_st, &c8_j_emlrtMCI, "error", 0U, 1U, 14, c8_y);
  }

  c8_array_boolean_T_Destructor(chartInstance, &c8_tile);
  c8_array_s_R6Og1x0kmqQXSF9Pwa49FD_(chartInstance, &c8_st, c8_stats,
    &c8_qd_emlrtRTEI, c8_outsize[0]);
  c8_b_loop_ub = c8_outsize[0] - 1;
  for (c8_i6 = 0; c8_i6 <= c8_b_loop_ub; c8_i6++) {
    c8_f_array_s_R6Og1x0kmqQXSF9Pwa49FD_(chartInstance, &c8_st,
      &c8_stats->vector.data[c8_i6], &c8_statsOneObj, &c8_qd_emlrtRTEI);
  }

  c8_b_array_s_R6Og1x0kmqQXSF9Pwa49FD_(chartInstance, &c8_statsOneObj);
}

static void c8_ComputeWeightedCentroid(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, real_T c8_c_I[521945],
  c8_coder_array_s_R6Og1x0kmqQXSF9Pw *c8_stats, c8_sHtk0WM4OMtyqkehwQYcq2
  c8_statsAlreadyComputed, c8_coder_array_s_R6Og1x0kmqQXSF9Pw *c8_b_stats,
  c8_sHtk0WM4OMtyqkehwQYcq2 *c8_b_statsAlreadyComputed)
{
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_loop_ub;
  c8_array_s_R6Og1x0kmqQXSF9Pwa49FD_(chartInstance, c8_sp, c8_b_stats,
    &c8_rd_emlrtRTEI, c8_stats->size[0]);
  c8_loop_ub = c8_stats->size[0] - 1;
  for (c8_i = 0; c8_i <= c8_loop_ub; c8_i++) {
    c8_f_array_s_R6Og1x0kmqQXSF9Pwa49FD_(chartInstance, c8_sp,
      &c8_b_stats->vector.data[c8_i], &c8_stats->vector.data[c8_i],
      &c8_rd_emlrtRTEI);
  }

  *c8_b_statsAlreadyComputed = c8_statsAlreadyComputed;
  for (c8_i1 = 0; c8_i1 < 521945; c8_i1++) {
    chartInstance->c8_b_I[c8_i1] = c8_c_I[c8_i1];
  }

  c8_b_ComputeWeightedCentroid(chartInstance, c8_sp, chartInstance->c8_b_I,
    c8_b_stats, c8_b_statsAlreadyComputed);
}

static real_T c8_sum(SFc8_untitledInstanceStruct *chartInstance, const
                     emlrtStack *c8_sp, c8_coder_array_real_T *c8_c_x)
{
  static char_T c8_b_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_e_st;
  emlrtStack c8_f_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  real_T c8_b_s;
  real_T c8_y;
  int32_T c8_a;
  int32_T c8_b_vlen;
  int32_T c8_c_vlen;
  int32_T c8_d_vlen;
  int32_T c8_ib;
  int32_T c8_inb;
  int32_T c8_lidx;
  int32_T c8_nfb;
  int32_T c8_nleft;
  int32_T c8_vlen;
  boolean_T c8_b;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_e_st.prev = &c8_d_st;
  c8_e_st.tls = c8_d_st.tls;
  c8_f_st.prev = &c8_e_st;
  c8_f_st.tls = c8_e_st.tls;
  c8_st.site = &c8_ud_emlrtRSI;
  if ((c8_c_x->size[0] == 1) || ((real_T)c8_c_x->size[0] != 1.0)) {
    c8_b = true;
  } else {
    c8_b = false;
  }

  if (!c8_b) {
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 36),
                  false);
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c8_st, &c8_p_emlrtMCI, "error", 0U, 2U, 14, c8_b_y, 14,
                sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_st, NULL, "message", 1U, 1U, 14, c8_c_y)));
  }

  c8_b_st.site = &c8_vd_emlrtRSI;
  c8_vlen = c8_c_x->size[0];
  c8_c_st.site = &c8_wd_emlrtRSI;
  c8_b_vlen = c8_vlen;
  if ((c8_c_x->size[0] == 0) || (c8_b_vlen == 0)) {
    c8_y = 0.0;
  } else {
    c8_d_st.site = &c8_xd_emlrtRSI;
    c8_c_vlen = c8_b_vlen;
    c8_e_st.site = &c8_yd_emlrtRSI;
    c8_d_vlen = c8_c_vlen;
    if (c8_d_vlen < 4096) {
      c8_f_st.site = &c8_ae_emlrtRSI;
      c8_y = c8_c_sumColumnB(chartInstance, &c8_f_st, c8_c_x, c8_d_vlen);
    } else {
      c8_a = c8_d_vlen;
      c8_nfb = (int32_T)((uint32_T)c8_a >> 12);
      c8_inb = c8_nfb << 12;
      c8_lidx = c8_inb;
      c8_nleft = c8_d_vlen - c8_inb;
      c8_b_s = c8_b_sumColumnB4(chartInstance, c8_c_x, 1);
      for (c8_ib = 2; c8_ib <= c8_nfb; c8_ib++) {
        c8_b_s += c8_b_sumColumnB4(chartInstance, c8_c_x, 1 + ((c8_ib - 1) << 12));
      }

      if (c8_nleft > 0) {
        c8_f_st.site = &c8_be_emlrtRSI;
        c8_b_s += c8_d_sumColumnB(chartInstance, &c8_f_st, c8_c_x, c8_nleft,
          c8_lidx + 1);
      }

      c8_y = c8_b_s;
    }
  }

  return c8_y;
}

static real_T c8_c_sumColumnB(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_real_T *c8_c_x, int32_T c8_vlen)
{
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_st;
  real_T c8_b_y;
  real_T c8_c_y;
  real_T c8_y;
  int32_T c8_a;
  int32_T c8_b;
  int32_T c8_b_b;
  int32_T c8_b_k;
  int32_T c8_b_vlen;
  int32_T c8_b_vstart;
  int32_T c8_c_b;
  int32_T c8_c_k;
  int32_T c8_c_vlen;
  int32_T c8_d_b;
  int32_T c8_d_k;
  int32_T c8_e_k;
  int32_T c8_f_k;
  int32_T c8_g_k;
  int32_T c8_h_k;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i_k;
  int32_T c8_inb;
  int32_T c8_k;
  int32_T c8_lidx;
  int32_T c8_nfb;
  int32_T c8_nleft;
  int32_T c8_vstart;
  boolean_T c8_b_overflow;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  if (c8_vlen <= 1024) {
    c8_st.site = &c8_ce_emlrtRSI;
    c8_b_vlen = c8_vlen - 1;
    c8_y = c8_c_x->vector.data[0];
    c8_i = c8_b_vlen;
    c8_b_st.site = &c8_ee_emlrtRSI;
    c8_b = c8_i;
    c8_b_b = c8_b;
    if (c8_b_b < 1) {
      c8_overflow = false;
    } else {
      c8_overflow = (c8_b_b > 2147483646);
    }

    if (c8_overflow) {
      c8_c_st.site = &c8_ec_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
    }

    c8_i1 = (uint16_T)c8_i - 1;
    for (c8_f_k = 0; c8_f_k <= c8_i1; c8_f_k++) {
      c8_g_k = c8_f_k;
      c8_y += c8_c_x->vector.data[c8_g_k + 1];
    }
  } else {
    c8_a = c8_vlen;
    c8_nfb = (int32_T)((uint32_T)c8_a >> 10);
    c8_inb = c8_nfb << 10;
    c8_y = c8_c_x->vector.data[0];
    for (c8_k = 0; c8_k < 1023; c8_k++) {
      c8_c_k = c8_k;
      c8_y += c8_c_x->vector.data[c8_c_k + 1];
    }

    for (c8_b_k = 2; c8_b_k <= c8_nfb; c8_b_k++) {
      c8_vstart = (c8_b_k - 1) << 10;
      c8_b_y = c8_c_x->vector.data[c8_vstart];
      for (c8_d_k = 0; c8_d_k < 1023; c8_d_k++) {
        c8_e_k = c8_d_k;
        c8_b_y += c8_c_x->vector.data[(c8_vstart + c8_e_k) + 1];
      }

      c8_y += c8_b_y;
    }

    if (c8_vlen > c8_inb) {
      c8_nleft = c8_vlen - c8_inb;
      c8_lidx = c8_inb;
      c8_st.site = &c8_de_emlrtRSI;
      c8_c_vlen = c8_nleft - 1;
      c8_b_vstart = c8_lidx;
      c8_c_y = c8_c_x->vector.data[c8_b_vstart];
      c8_i2 = c8_c_vlen;
      c8_b_st.site = &c8_ee_emlrtRSI;
      c8_c_b = c8_i2;
      c8_d_b = c8_c_b;
      if (c8_d_b < 1) {
        c8_b_overflow = false;
      } else {
        c8_b_overflow = (c8_d_b > 2147483646);
      }

      if (c8_b_overflow) {
        c8_c_st.site = &c8_ec_emlrtRSI;
        c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
      }

      for (c8_h_k = 0; c8_h_k < c8_i2; c8_h_k++) {
        c8_i_k = c8_h_k;
        c8_c_y += c8_c_x->vector.data[(c8_b_vstart + c8_i_k) + 1];
      }

      c8_y += c8_c_y;
    }
  }

  return c8_y;
}

static real_T c8_b_sumColumnB4(SFc8_untitledInstanceStruct *chartInstance,
  c8_coder_array_real_T *c8_c_x, int32_T c8_vstart)
{
  real_T c8_psum1;
  real_T c8_psum2;
  real_T c8_psum3;
  real_T c8_psum4;
  int32_T c8_b_k;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_k;
  (void)chartInstance;
  c8_i2 = c8_vstart + 1023;
  c8_i3 = c8_vstart + 2047;
  c8_i4 = c8_vstart + 3071;
  c8_psum1 = c8_c_x->vector.data[c8_vstart - 1];
  c8_psum2 = c8_c_x->vector.data[c8_i2];
  c8_psum3 = c8_c_x->vector.data[c8_i3];
  c8_psum4 = c8_c_x->vector.data[c8_i4];
  for (c8_k = 0; c8_k < 1023; c8_k++) {
    c8_b_k = c8_k + 1;
    c8_psum1 += c8_c_x->vector.data[(c8_vstart + c8_b_k) - 1];
    c8_psum2 += c8_c_x->vector.data[c8_i2 + c8_b_k];
    c8_psum3 += c8_c_x->vector.data[c8_i3 + c8_b_k];
    c8_psum4 += c8_c_x->vector.data[c8_i4 + c8_b_k];
  }

  return (c8_psum1 + c8_psum2) + (c8_psum3 + c8_psum4);
}

static real_T c8_d_sumColumnB(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_real_T *c8_c_x, int32_T c8_vlen, int32_T
  c8_vstart)
{
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_st;
  real_T c8_b_y;
  real_T c8_c_y;
  real_T c8_y;
  int32_T c8_a;
  int32_T c8_b;
  int32_T c8_b_b;
  int32_T c8_b_k;
  int32_T c8_b_vlen;
  int32_T c8_b_vstart;
  int32_T c8_c_b;
  int32_T c8_c_k;
  int32_T c8_c_vlen;
  int32_T c8_c_vstart;
  int32_T c8_d_b;
  int32_T c8_d_k;
  int32_T c8_d_vstart;
  int32_T c8_e_k;
  int32_T c8_e_vstart;
  int32_T c8_f_k;
  int32_T c8_g_k;
  int32_T c8_h_k;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i_k;
  int32_T c8_inb;
  int32_T c8_k;
  int32_T c8_lidx;
  int32_T c8_nfb;
  int32_T c8_nleft;
  boolean_T c8_b_overflow;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  if (c8_vlen <= 1024) {
    c8_st.site = &c8_ce_emlrtRSI;
    c8_b_vlen = c8_vlen - 1;
    c8_b_vstart = c8_vstart - 1;
    c8_y = c8_c_x->vector.data[c8_b_vstart];
    c8_i = c8_b_vlen;
    c8_b_st.site = &c8_ee_emlrtRSI;
    c8_b = c8_i;
    c8_b_b = c8_b;
    if (c8_b_b < 1) {
      c8_overflow = false;
    } else {
      c8_overflow = (c8_b_b > 2147483646);
    }

    if (c8_overflow) {
      c8_c_st.site = &c8_ec_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
    }

    for (c8_f_k = 0; c8_f_k < c8_i; c8_f_k++) {
      c8_g_k = c8_f_k;
      c8_y += c8_c_x->vector.data[(c8_b_vstart + c8_g_k) + 1];
    }
  } else {
    c8_a = c8_vlen;
    c8_nfb = (int32_T)((uint32_T)c8_a >> 10);
    c8_inb = c8_nfb << 10;
    c8_c_vstart = c8_vstart - 1;
    c8_y = c8_c_x->vector.data[c8_c_vstart];
    for (c8_k = 0; c8_k < 1023; c8_k++) {
      c8_c_k = c8_k;
      c8_y += c8_c_x->vector.data[(c8_c_vstart + c8_c_k) + 1];
    }

    for (c8_b_k = 2; c8_b_k <= c8_nfb; c8_b_k++) {
      c8_d_vstart = (c8_vstart + ((c8_b_k - 1) << 10)) - 1;
      c8_b_y = c8_c_x->vector.data[c8_d_vstart];
      for (c8_d_k = 0; c8_d_k < 1023; c8_d_k++) {
        c8_e_k = c8_d_k;
        c8_b_y += c8_c_x->vector.data[(c8_d_vstart + c8_e_k) + 1];
      }

      c8_y += c8_b_y;
    }

    if (c8_vlen > c8_inb) {
      c8_nleft = c8_vlen - c8_inb;
      c8_lidx = c8_vstart + c8_inb;
      c8_st.site = &c8_de_emlrtRSI;
      c8_c_vlen = c8_nleft - 1;
      c8_e_vstart = c8_lidx - 1;
      c8_c_y = c8_c_x->vector.data[c8_e_vstart];
      c8_i1 = c8_c_vlen;
      c8_b_st.site = &c8_ee_emlrtRSI;
      c8_c_b = c8_i1;
      c8_d_b = c8_c_b;
      if (c8_d_b < 1) {
        c8_b_overflow = false;
      } else {
        c8_b_overflow = (c8_d_b > 2147483646);
      }

      if (c8_b_overflow) {
        c8_c_st.site = &c8_ec_emlrtRSI;
        c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
      }

      for (c8_h_k = 0; c8_h_k < c8_i1; c8_h_k++) {
        c8_i_k = c8_h_k;
        c8_c_y += c8_c_x->vector.data[(c8_e_vstart + c8_i_k) + 1];
      }

      c8_y += c8_c_y;
    }
  }

  return c8_y;
}

static void c8_round(SFc8_untitledInstanceStruct *chartInstance, const
                     emlrtStack *c8_sp, c8_coder_array_real_T *c8_c_x,
                     c8_coder_array_real_T *c8_y)
{
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_st;
  real_T c8_d_x;
  real_T c8_e_x;
  int32_T c8_b;
  int32_T c8_b_b;
  int32_T c8_b_k;
  int32_T c8_i;
  int32_T c8_k;
  int32_T c8_loop_ub;
  int32_T c8_nx;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_gf_emlrtRSI;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_array_real_T_SetSize(chartInstance, &c8_st, c8_y, &c8_sd_emlrtRTEI,
    c8_c_x->size[0]);
  c8_loop_ub = c8_c_x->size[0] - 1;
  for (c8_i = 0; c8_i <= c8_loop_ub; c8_i++) {
    c8_y->vector.data[c8_i] = c8_c_x->vector.data[c8_i];
  }

  c8_nx = c8_y->size[0];
  c8_b_st.site = &c8_hf_emlrtRSI;
  c8_b = c8_nx;
  c8_b_b = c8_b;
  if (c8_b_b < 1) {
    c8_overflow = false;
  } else {
    c8_overflow = (c8_b_b > 2147483646);
  }

  if (c8_overflow) {
    c8_c_st.site = &c8_ec_emlrtRSI;
    c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
  }

  for (c8_k = 0; c8_k < c8_nx; c8_k++) {
    c8_b_k = c8_k;
    c8_d_x = c8_y->vector.data[c8_b_k];
    c8_e_x = c8_d_x;
    c8_e_x = muDoubleScalarRound(c8_e_x);
    c8_y->vector.data[c8_b_k] = c8_e_x;
  }
}

static void c8_sort(SFc8_untitledInstanceStruct *chartInstance, const emlrtStack
                    *c8_sp, c8_coder_array_real_T_2D *c8_c_x,
                    c8_coder_array_real_T_2D *c8_d_x, c8_coder_array_int32_T_2D *
                    c8_idx)
{
  int32_T c8_i;
  int32_T c8_loop_ub;
  c8_array_real_T_2D_SetSize(chartInstance, c8_sp, c8_d_x, &c8_td_emlrtRTEI,
    c8_c_x->size[0], 1);
  c8_loop_ub = c8_c_x->size[0] - 1;
  for (c8_i = 0; c8_i <= c8_loop_ub; c8_i++) {
    c8_d_x->vector.data[c8_i] = c8_c_x->vector.data[c8_i];
  }

  c8_b_sort(chartInstance, c8_sp, c8_d_x, c8_idx);
}

static void c8_merge_pow2_block(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx,
  c8_coder_array_real_T_2D *c8_c_x, int32_T c8_offset, c8_coder_array_int32_T_2D
  *c8_b_idx, c8_coder_array_real_T_2D *c8_d_x)
{
  int32_T c8_b_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_loop_ub;
  c8_array_int32_T_2D_SetSize(chartInstance, c8_sp, c8_b_idx, &c8_ud_emlrtRTEI,
    c8_idx->size[0], 1);
  c8_loop_ub = c8_idx->size[0] - 1;
  for (c8_i = 0; c8_i <= c8_loop_ub; c8_i++) {
    c8_b_idx->vector.data[c8_i] = c8_idx->vector.data[c8_i];
  }

  c8_array_real_T_2D_SetSize(chartInstance, c8_sp, c8_d_x, &c8_ud_emlrtRTEI,
    c8_c_x->size[0], 1);
  c8_b_loop_ub = c8_c_x->size[0] - 1;
  for (c8_i1 = 0; c8_i1 <= c8_b_loop_ub; c8_i1++) {
    c8_d_x->vector.data[c8_i1] = c8_c_x->vector.data[c8_i1];
  }

  c8_b_merge_pow2_block(chartInstance, c8_sp, c8_b_idx, c8_d_x, c8_offset);
}

static void c8_merge_block(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx, c8_coder_array_real_T_2D
  *c8_c_x, int32_T c8_offset, int32_T c8_n, int32_T c8_preSortLevel,
  c8_coder_array_int32_T *c8_iwork, c8_coder_array_real_T *c8_xwork,
  c8_coder_array_int32_T_2D *c8_b_idx, c8_coder_array_real_T_2D *c8_d_x,
  c8_coder_array_int32_T *c8_b_iwork, c8_coder_array_real_T *c8_b_xwork)
{
  int32_T c8_b_loop_ub;
  int32_T c8_c_loop_ub;
  int32_T c8_d_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_loop_ub;
  c8_array_int32_T_2D_SetSize(chartInstance, c8_sp, c8_b_idx, &c8_vd_emlrtRTEI,
    c8_idx->size[0], 1);
  c8_loop_ub = c8_idx->size[0] - 1;
  for (c8_i = 0; c8_i <= c8_loop_ub; c8_i++) {
    c8_b_idx->vector.data[c8_i] = c8_idx->vector.data[c8_i];
  }

  c8_array_real_T_2D_SetSize(chartInstance, c8_sp, c8_d_x, &c8_vd_emlrtRTEI,
    c8_c_x->size[0], 1);
  c8_b_loop_ub = c8_c_x->size[0] - 1;
  for (c8_i1 = 0; c8_i1 <= c8_b_loop_ub; c8_i1++) {
    c8_d_x->vector.data[c8_i1] = c8_c_x->vector.data[c8_i1];
  }

  c8_array_int32_T_SetSize(chartInstance, c8_sp, c8_b_iwork, &c8_vd_emlrtRTEI,
    c8_iwork->size[0]);
  c8_c_loop_ub = c8_iwork->size[0] - 1;
  for (c8_i2 = 0; c8_i2 <= c8_c_loop_ub; c8_i2++) {
    c8_b_iwork->vector.data[c8_i2] = c8_iwork->vector.data[c8_i2];
  }

  c8_array_real_T_SetSize(chartInstance, c8_sp, c8_b_xwork, &c8_vd_emlrtRTEI,
    c8_xwork->size[0]);
  c8_d_loop_ub = c8_xwork->size[0] - 1;
  for (c8_i3 = 0; c8_i3 <= c8_d_loop_ub; c8_i3++) {
    c8_b_xwork->vector.data[c8_i3] = c8_xwork->vector.data[c8_i3];
  }

  c8_b_merge_block(chartInstance, c8_sp, c8_b_idx, c8_d_x, c8_offset, c8_n,
                   c8_preSortLevel, c8_b_iwork, c8_b_xwork);
}

static void c8_merge(SFc8_untitledInstanceStruct *chartInstance, const
                     emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx,
                     c8_coder_array_real_T_2D *c8_c_x, int32_T c8_offset,
                     int32_T c8_np, int32_T c8_nq, c8_coder_array_int32_T
                     *c8_iwork, c8_coder_array_real_T *c8_xwork,
                     c8_coder_array_int32_T_2D *c8_b_idx,
                     c8_coder_array_real_T_2D *c8_d_x, c8_coder_array_int32_T
                     *c8_b_iwork, c8_coder_array_real_T *c8_b_xwork)
{
  int32_T c8_b_loop_ub;
  int32_T c8_c_loop_ub;
  int32_T c8_d_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_loop_ub;
  c8_array_int32_T_2D_SetSize(chartInstance, c8_sp, c8_b_idx, &c8_wd_emlrtRTEI,
    c8_idx->size[0], 1);
  c8_loop_ub = c8_idx->size[0] - 1;
  for (c8_i = 0; c8_i <= c8_loop_ub; c8_i++) {
    c8_b_idx->vector.data[c8_i] = c8_idx->vector.data[c8_i];
  }

  c8_array_real_T_2D_SetSize(chartInstance, c8_sp, c8_d_x, &c8_wd_emlrtRTEI,
    c8_c_x->size[0], 1);
  c8_b_loop_ub = c8_c_x->size[0] - 1;
  for (c8_i1 = 0; c8_i1 <= c8_b_loop_ub; c8_i1++) {
    c8_d_x->vector.data[c8_i1] = c8_c_x->vector.data[c8_i1];
  }

  c8_array_int32_T_SetSize(chartInstance, c8_sp, c8_b_iwork, &c8_wd_emlrtRTEI,
    c8_iwork->size[0]);
  c8_c_loop_ub = c8_iwork->size[0] - 1;
  for (c8_i2 = 0; c8_i2 <= c8_c_loop_ub; c8_i2++) {
    c8_b_iwork->vector.data[c8_i2] = c8_iwork->vector.data[c8_i2];
  }

  c8_array_real_T_SetSize(chartInstance, c8_sp, c8_b_xwork, &c8_wd_emlrtRTEI,
    c8_xwork->size[0]);
  c8_d_loop_ub = c8_xwork->size[0] - 1;
  for (c8_i3 = 0; c8_i3 <= c8_d_loop_ub; c8_i3++) {
    c8_b_xwork->vector.data[c8_i3] = c8_xwork->vector.data[c8_i3];
  }

  c8_b_merge(chartInstance, c8_sp, c8_b_idx, c8_d_x, c8_offset, c8_np, c8_nq,
             c8_b_iwork, c8_b_xwork);
}

static void c8_chradiiphcode(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_real_T_2D *c8_b_varargin_1, creal_T
  c8_b_varargin_2[521945], c8_coder_array_real_T *c8_r_estimated)
{
  static char_T c8_b_cv1[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T c8_b_cv4[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c8_cv7[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c',
    't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T c8_cv9[38] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm', 'f',
    'i', 'n', 'd', 'c', 'i', 'r', 'c', 'l', 'e', 's', ':', 'o', 'u', 't', 'O',
    'f', 'B', 'o', 'u', 'n', 'd', 'C', 'e', 'n', 't', 'e', 'r', 's' };

  static char_T c8_b_cv[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'h', 'r',
    'a', 'd', 'i', 'i', 'p', 'h', 'c', 'o', 'd', 'e', ':', 'e', 'x', 'p', 'e',
    'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T c8_b_cv3[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'h',
    'r', 'a', 'd', 'i', 'i', 'p', 'h', 'c', 'o', 'd', 'e', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'e', 'm', 'p', 't', 'y' };

  static char_T c8_cv5[37] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'h', 'r',
    'a', 'd', 'i', 'i', 'p', 'h', 'c', 'o', 'd', 'e', ':', 'i', 'n', 'c', 'o',
    'r', 'r', 'e', 'c', 't', 'N', 'u', 'm', 'c', 'o', 'l', 's' };

  static char_T c8_b_cv2[24] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '1', ',', ' ', 'c', 'e', 'n', 't', 'e', 'r', 's', ',' };

  static char_T c8_cv6[24] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '1', ',', ' ', 'c', 'e', 'n', 't', 'e', 'r', 's', ',' };

  static char_T c8_cv8[24] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '1', ',', ' ', 'c', 'e', 'n', 't', 'e', 'r', 's', ',' };

  c8_coder_array_boolean_T c8_c_varargin_1;
  c8_coder_array_boolean_T c8_d_varargin_1;
  c8_coder_array_creal_T c8_d_varargin_2;
  c8_coder_array_int32_T c8_r;
  c8_coder_array_real_T c8_c_varargin_2;
  c8_coder_array_real_T c8_e_varargin_1;
  c8_coder_array_real_T c8_f_varargin_1;
  c8_coder_array_real_T c8_ndx;
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_e_y = NULL;
  const mxArray *c8_f_y = NULL;
  const mxArray *c8_g_y = NULL;
  const mxArray *c8_h_y = NULL;
  const mxArray *c8_i_y = NULL;
  const mxArray *c8_j_y = NULL;
  const mxArray *c8_k_y = NULL;
  const mxArray *c8_l_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_b_k;
  real_T c8_c_x;
  real_T c8_d;
  real_T c8_d_x;
  real_T c8_e_x;
  real_T c8_u;
  int32_T c8_b_b;
  int32_T c8_b_loop_ub;
  int32_T c8_c_b;
  int32_T c8_c_k;
  int32_T c8_c_loop_ub;
  int32_T c8_d_k;
  int32_T c8_d_loop_ub;
  int32_T c8_e_loop_ub;
  int32_T c8_f_loop_ub;
  int32_T c8_g_loop_ub;
  int32_T c8_h_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i11;
  int32_T c8_i12;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i7;
  int32_T c8_i8;
  int32_T c8_i9;
  int32_T c8_i_loop_ub;
  int32_T c8_k;
  int32_T c8_loop_ub;
  int32_T c8_nx;
  boolean_T c8_b;
  boolean_T c8_b1;
  boolean_T c8_b2;
  boolean_T c8_b3;
  boolean_T c8_b_p;
  boolean_T c8_exitg1;
  boolean_T c8_overflow;
  boolean_T c8_p;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_st.site = &c8_lg_emlrtRSI;
  c8_b_st.site = &c8_og_emlrtRSI;
  c8_c_st.site = &c8_qg_emlrtRSI;
  c8_d_st.site = &c8_qb_emlrtRSI;
  c8_p = true;
  c8_d = (real_T)(c8_b_varargin_1->size[0] * c8_b_varargin_1->size[1]);
  c8_i = (int32_T)c8_d - 1;
  c8_k = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_k <= c8_i)) {
    c8_b_k = (real_T)c8_k + 1.0;
    c8_c_x = c8_b_varargin_1->vector.data[(int32_T)c8_b_k - 1];
    c8_b_p = !(c8_c_x <= 0.0);
    if (c8_b_p) {
      c8_k++;
    } else {
      c8_p = false;
      c8_exitg1 = true;
    }
  }

  if (c8_p) {
    c8_b = true;
  } else {
    c8_b = false;
  }

  if (!c8_b) {
    c8_y = NULL;
    sf_mex_assign(&c8_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 37),
                  false);
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv1, 10, 0U, 1, 0U, 2, 1, 48),
                  false);
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv2, 10, 0U, 1, 0U, 2, 1, 24),
                  false);
    sf_mex_call(&c8_d_st, &c8_t_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                sf_mex_call(&c8_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_d_st, NULL, "message", 1U, 2U, 14, c8_b_y, 14, c8_c_y)));
  }

  c8_d_st.site = &c8_qb_emlrtRSI;
  c8_b1 = (c8_b_varargin_1->size[0] == 0);
  c8_b2 = (c8_b_varargin_1->size[1] == 0);
  if ((!!c8_b1) || (!!c8_b2)) {
    c8_d_y = NULL;
    sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_b_cv3, 10, 0U, 1, 0U, 2, 1, 37),
                  false);
    c8_e_y = NULL;
    sf_mex_assign(&c8_e_y, sf_mex_create("y", c8_b_cv4, 10, 0U, 1, 0U, 2, 1, 48),
                  false);
    c8_g_y = NULL;
    sf_mex_assign(&c8_g_y, sf_mex_create("y", c8_cv6, 10, 0U, 1, 0U, 2, 1, 24),
                  false);
    sf_mex_call(&c8_d_st, &c8_u_emlrtMCI, "error", 0U, 2U, 14, c8_d_y, 14,
                sf_mex_call(&c8_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_d_st, NULL, "message", 1U, 2U, 14, c8_e_y, 14, c8_g_y)));
  }

  c8_d_st.site = &c8_qb_emlrtRSI;
  if (!((real_T)c8_b_varargin_1->size[1] == 2.0)) {
    c8_f_y = NULL;
    sf_mex_assign(&c8_f_y, sf_mex_create("y", c8_cv5, 10, 0U, 1, 0U, 2, 1, 37),
                  false);
    c8_h_y = NULL;
    sf_mex_assign(&c8_h_y, sf_mex_create("y", c8_cv7, 10, 0U, 1, 0U, 2, 1, 48),
                  false);
    c8_i_y = NULL;
    sf_mex_assign(&c8_i_y, sf_mex_create("y", c8_cv8, 10, 0U, 1, 0U, 2, 1, 24),
                  false);
    c8_u = 2.0;
    c8_j_y = NULL;
    sf_mex_assign(&c8_j_y, sf_mex_create("y", &c8_u, 0, 0U, 0, 0U, 0), false);
    sf_mex_call(&c8_d_st, &c8_v_emlrtMCI, "error", 0U, 2U, 14, c8_f_y, 14,
                sf_mex_call(&c8_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_d_st, NULL, "message", 1U, 3U, 14, c8_h_y, 14, c8_i_y, 14, c8_j_y)));
  }

  c8_b_st.site = &c8_pg_emlrtRSI;
  c8_i1 = c8_b_varargin_1->size[1];
  c8_i2 = 1;
  if ((c8_i2 < 1) || (c8_i2 > c8_i1)) {
    emlrtDynamicBoundsCheckR2012b(c8_i2, 1, c8_i1, &c8_oe_emlrtBCI, &c8_b_st);
  }

  c8_array_boolean_T_Constructor(chartInstance, &c8_c_varargin_1);
  c8_array_boolean_T_SetSize(chartInstance, &c8_b_st, &c8_c_varargin_1,
    &c8_xd_emlrtRTEI, c8_b_varargin_1->size[0]);
  c8_loop_ub = c8_b_varargin_1->size[0] - 1;
  for (c8_i3 = 0; c8_i3 <= c8_loop_ub; c8_i3++) {
    c8_c_varargin_1.vector.data[c8_i3] = (c8_b_varargin_1->vector.data[c8_i3] <=
      751.0);
  }

  c8_array_boolean_T_Constructor(chartInstance, &c8_d_varargin_1);
  c8_c_st.site = &c8_rg_emlrtRSI;
  if (c8_all(chartInstance, &c8_c_st, &c8_c_varargin_1)) {
    c8_i4 = c8_b_varargin_1->size[1];
    c8_i5 = 2;
    if ((c8_i5 < 1) || (c8_i5 > c8_i4)) {
      emlrtDynamicBoundsCheckR2012b(c8_i5, 1, c8_i4, &c8_pe_emlrtBCI, &c8_b_st);
    }

    c8_array_boolean_T_SetSize(chartInstance, &c8_b_st, &c8_d_varargin_1,
      &c8_yd_emlrtRTEI, c8_b_varargin_1->size[0]);
    c8_b_loop_ub = c8_b_varargin_1->size[0] - 1;
    for (c8_i7 = 0; c8_i7 <= c8_b_loop_ub; c8_i7++) {
      c8_d_varargin_1.vector.data[c8_i7] = (c8_b_varargin_1->vector.data[c8_i7 +
        c8_b_varargin_1->size[0]] <= 695.0);
    }

    c8_c_st.site = &c8_sg_emlrtRSI;
    if (c8_all(chartInstance, &c8_c_st, &c8_d_varargin_1)) {
      c8_b3 = true;
    } else {
      c8_b3 = false;
    }
  } else {
    c8_b3 = false;
  }

  c8_array_boolean_T_Destructor(chartInstance, &c8_d_varargin_1);
  c8_array_boolean_T_Destructor(chartInstance, &c8_c_varargin_1);
  if (!c8_b3) {
    c8_k_y = NULL;
    sf_mex_assign(&c8_k_y, sf_mex_create("y", c8_cv9, 10, 0U, 1, 0U, 2, 1, 38),
                  false);
    c8_l_y = NULL;
    sf_mex_assign(&c8_l_y, sf_mex_create("y", c8_cv9, 10, 0U, 1, 0U, 2, 1, 38),
                  false);
    sf_mex_call(&c8_b_st, &c8_w_emlrtMCI, "error", 0U, 2U, 14, c8_k_y, 14,
                sf_mex_call(&c8_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_b_st, NULL, "message", 1U, 1U, 14, c8_l_y)));
  }

  c8_i6 = c8_b_varargin_1->size[1];
  c8_i8 = 2;
  if ((c8_i8 < 1) || (c8_i8 > c8_i6)) {
    emlrtDynamicBoundsCheckR2012b(c8_i8, 1, c8_i6, &c8_me_emlrtBCI,
      (emlrtConstCTX)c8_sp);
  }

  c8_i9 = c8_b_varargin_1->size[1];
  c8_i10 = 1;
  if ((c8_i10 < 1) || (c8_i10 > c8_i9)) {
    emlrtDynamicBoundsCheckR2012b(c8_i10, 1, c8_i9, &c8_ne_emlrtBCI,
      (emlrtConstCTX)c8_sp);
  }

  c8_array_real_T_Constructor(chartInstance, &c8_ndx);
  c8_st.site = &c8_mg_emlrtRSI;
  c8_array_real_T_Constructor(chartInstance, &c8_e_varargin_1);
  c8_b_st.site = &c8_mg_emlrtRSI;
  c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_e_varargin_1,
    &c8_ae_emlrtRTEI, c8_b_varargin_1->size[0]);
  c8_c_loop_ub = c8_b_varargin_1->size[0] - 1;
  for (c8_i11 = 0; c8_i11 <= c8_c_loop_ub; c8_i11++) {
    c8_e_varargin_1.vector.data[c8_i11] = c8_b_varargin_1->vector.data[c8_i11 +
      c8_b_varargin_1->size[0]];
  }

  c8_b_st.site = &c8_mg_emlrtRSI;
  c8_round(chartInstance, &c8_b_st, &c8_e_varargin_1, &c8_ndx);
  c8_array_real_T_Destructor(chartInstance, &c8_e_varargin_1);
  c8_array_real_T_Constructor(chartInstance, &c8_f_varargin_1);
  c8_b_st.site = &c8_mg_emlrtRSI;
  c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_f_varargin_1,
    &c8_be_emlrtRTEI, c8_b_varargin_1->size[0]);
  c8_d_loop_ub = c8_b_varargin_1->size[0] - 1;
  for (c8_i12 = 0; c8_i12 <= c8_d_loop_ub; c8_i12++) {
    c8_f_varargin_1.vector.data[c8_i12] = c8_b_varargin_1->vector.data[c8_i12];
  }

  c8_array_real_T_Constructor(chartInstance, &c8_c_varargin_2);
  c8_b_st.site = &c8_mg_emlrtRSI;
  c8_round(chartInstance, &c8_b_st, &c8_f_varargin_1, &c8_c_varargin_2);
  c8_array_real_T_Destructor(chartInstance, &c8_f_varargin_1);
  c8_array_int32_T_Constructor(chartInstance, &c8_r);
  c8_b_st.site = &c8_ac_emlrtRSI;
  c8_sub2ind(chartInstance, &c8_b_st, &c8_ndx, &c8_c_varargin_2, &c8_r);
  c8_array_real_T_Destructor(chartInstance, &c8_c_varargin_2);
  c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_ndx, &c8_p_emlrtRTEI,
    c8_r.size[0]);
  c8_e_loop_ub = c8_r.size[0] - 1;
  for (c8_i13 = 0; c8_i13 <= c8_e_loop_ub; c8_i13++) {
    c8_ndx.vector.data[c8_i13] = (real_T)c8_r.vector.data[c8_i13];
  }

  c8_array_int32_T_Destructor(chartInstance, &c8_r);
  c8_array_creal_T_Constructor(chartInstance, &c8_d_varargin_2);
  c8_st.site = &c8_mg_emlrtRSI;
  c8_array_creal_T_SetSize(chartInstance, &c8_st, &c8_d_varargin_2,
    &c8_ce_emlrtRTEI, c8_ndx.size[0]);
  c8_f_loop_ub = c8_ndx.size[0] - 1;
  for (c8_i14 = 0; c8_i14 <= c8_f_loop_ub; c8_i14++) {
    c8_i15 = (int32_T)c8_ndx.vector.data[c8_i14];
    if ((c8_i15 < 1) || (c8_i15 > 521945)) {
      emlrtDynamicBoundsCheckR2012b(c8_i15, 1, 521945, &c8_qe_emlrtBCI,
        (emlrtConstCTX)c8_sp);
    }

    c8_d_varargin_2.vector.data[c8_i14].re = c8_b_varargin_2[c8_i15 - 1].re;
    c8_i16 = (int32_T)c8_ndx.vector.data[c8_i14];
    if ((c8_i16 < 1) || (c8_i16 > 521945)) {
      emlrtDynamicBoundsCheckR2012b(c8_i16, 1, 521945, &c8_qe_emlrtBCI,
        (emlrtConstCTX)c8_sp);
    }

    c8_d_varargin_2.vector.data[c8_i14].im = c8_b_varargin_2[c8_i16 - 1].im;
  }

  c8_array_real_T_Destructor(chartInstance, &c8_ndx);
  c8_st.site = &c8_mg_emlrtRSI;
  c8_angle(chartInstance, &c8_st, &c8_d_varargin_2, c8_r_estimated);
  c8_array_creal_T_Destructor(chartInstance, &c8_d_varargin_2);
  c8_g_loop_ub = c8_r_estimated->size[0] - 1;
  for (c8_i17 = 0; c8_i17 <= c8_g_loop_ub; c8_i17++) {
    c8_r_estimated->vector.data[c8_i17] = (c8_r_estimated->vector.data[c8_i17] +
      3.1415926535897931) / 6.2831853071795862;
  }

  c8_h_loop_ub = c8_r_estimated->size[0] - 1;
  for (c8_i18 = 0; c8_i18 <= c8_h_loop_ub; c8_i18++) {
    c8_r_estimated->vector.data[c8_i18] *= 0.91629073187415511;
  }

  c8_st.site = &c8_ng_emlrtRSI;
  c8_i_loop_ub = c8_r_estimated->size[0] - 1;
  for (c8_i19 = 0; c8_i19 <= c8_i_loop_ub; c8_i19++) {
    c8_r_estimated->vector.data[c8_i19] += 2.9957322735539909;
  }

  c8_b_st.site = &c8_xg_emlrtRSI;
  c8_nx = c8_r_estimated->size[0];
  c8_c_st.site = &c8_hf_emlrtRSI;
  c8_b_b = c8_nx;
  c8_c_b = c8_b_b;
  if (c8_c_b < 1) {
    c8_overflow = false;
  } else {
    c8_overflow = (c8_c_b > 2147483646);
  }

  if (c8_overflow) {
    c8_d_st.site = &c8_ec_emlrtRSI;
    c8_check_forloop_overflow_error(chartInstance, &c8_d_st);
  }

  for (c8_c_k = 0; c8_c_k < c8_nx; c8_c_k++) {
    c8_d_k = c8_c_k;
    c8_d_x = c8_r_estimated->vector.data[c8_d_k];
    c8_e_x = c8_d_x;
    c8_e_x = muDoubleScalarExp(c8_e_x);
    c8_r_estimated->vector.data[c8_d_k] = c8_e_x;
  }
}

static boolean_T c8_all(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_boolean_T *c8_c_x)
{
  static char_T c8_b_cv[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r', '_',
    'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  real_T c8_a;
  real_T c8_vlen;
  int32_T c8_b_a;
  int32_T c8_b_b;
  int32_T c8_c;
  int32_T c8_c_a;
  int32_T c8_c_b;
  int32_T c8_d_b;
  int32_T c8_i2;
  int32_T c8_ix;
  int32_T c8_vspread;
  boolean_T c8_b;
  boolean_T c8_exitg1;
  boolean_T c8_overflow;
  boolean_T c8_y;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_st.site = &c8_tg_emlrtRSI;
  if ((c8_c_x->size[0] == 1) || ((real_T)c8_c_x->size[0] != 1.0)) {
    c8_b = true;
  } else {
    c8_b = false;
  }

  if (!c8_b) {
    c8_b_y = NULL;
    sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    c8_c_y = NULL;
    sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 51),
                  false);
    sf_mex_call(&c8_st, &c8_x_emlrtMCI, "error", 0U, 2U, 14, c8_b_y, 14,
                sf_mex_call(&c8_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c8_st, NULL, "message", 1U, 1U, 14, c8_c_y)));
  }

  c8_y = true;
  c8_vlen = (real_T)c8_c_x->size[0];
  c8_a = c8_vlen;
  c8_c = (int32_T)c8_a;
  c8_b_a = c8_c - 1;
  c8_vspread = c8_b_a;
  c8_b_b = c8_vspread;
  c8_i2 = c8_b_b;
  c8_c_a = c8_i2 + 1;
  c8_i2 = c8_c_a;
  c8_b_st.site = &c8_ug_emlrtRSI;
  c8_c_b = c8_i2;
  c8_d_b = c8_c_b;
  if (c8_d_b < 1) {
    c8_overflow = false;
  } else {
    c8_overflow = (c8_d_b > 2147483646);
  }

  if (c8_overflow) {
    c8_c_st.site = &c8_ec_emlrtRSI;
    c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
  }

  c8_ix = 0;
  c8_exitg1 = false;
  while ((!c8_exitg1) && (c8_ix + 1 <= c8_i2)) {
    if (!c8_c_x->vector.data[c8_ix]) {
      c8_y = false;
      c8_exitg1 = true;
    } else {
      c8_ix++;
    }
  }

  return c8_y;
}

static void c8_angle(SFc8_untitledInstanceStruct *chartInstance, const
                     emlrtStack *c8_sp, c8_coder_array_creal_T *c8_c_x,
                     c8_coder_array_real_T *c8_y)
{
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_st;
  creal_T c8_d_x;
  real_T c8_dv[2];
  real_T c8_b_y;
  real_T c8_c_y;
  real_T c8_e_x;
  int32_T c8_b;
  int32_T c8_b_b;
  int32_T c8_b_k;
  int32_T c8_k;
  int32_T c8_nx;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_vg_emlrtRSI;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_nx = c8_c_x->size[0];
  c8_dv[0] = (real_T)c8_c_x->size[0];
  c8_array_real_T_SetSize(chartInstance, &c8_st, c8_y, &c8_de_emlrtRTEI,
    (int32_T)c8_dv[0]);
  c8_b_st.site = &c8_wg_emlrtRSI;
  c8_b = c8_nx;
  c8_b_b = c8_b;
  if (c8_b_b < 1) {
    c8_overflow = false;
  } else {
    c8_overflow = (c8_b_b > 2147483646);
  }

  if (c8_overflow) {
    c8_c_st.site = &c8_ec_emlrtRSI;
    c8_check_forloop_overflow_error(chartInstance, &c8_c_st);
  }

  for (c8_k = 0; c8_k < c8_nx; c8_k++) {
    c8_b_k = c8_k;
    c8_d_x = c8_c_x->vector.data[c8_b_k];
    c8_b_y = c8_d_x.im;
    c8_e_x = c8_d_x.re;
    c8_c_y = muDoubleScalarAtan2(c8_b_y, c8_e_x);
    c8_y->vector.data[c8_b_k] = c8_c_y;
  }
}

const mxArray *sf_c8_untitled_get_eml_resolved_functions_info(void)
{
  const mxArray *c8_nameCaptureInfo = NULL;
  c8_nameCaptureInfo = NULL;
  sf_mex_assign(&c8_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c8_nameCaptureInfo;
}

static real_T c8_emlrt_marshallIn(SFc8_untitledInstanceStruct *chartInstance,
  const mxArray *c8_nullptr, const char_T *c8_identifier)
{
  emlrtMsgIdentifier c8_thisId;
  real_T c8_y;
  c8_thisId.fIdentifier = (const char_T *)c8_identifier;
  c8_thisId.fParent = NULL;
  c8_thisId.bParentIsCell = false;
  c8_y = c8_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_nullptr), &c8_thisId);
  sf_mex_destroy(&c8_nullptr);
  return c8_y;
}

static real_T c8_b_emlrt_marshallIn(SFc8_untitledInstanceStruct *chartInstance,
  const mxArray *c8_u, const emlrtMsgIdentifier *c8_parentId)
{
  real_T c8_d;
  real_T c8_y;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_u), &c8_d, 1, 0, 0U, 0, 0U, 0);
  c8_y = c8_d;
  sf_mex_destroy(&c8_u);
  return c8_y;
}

static void c8_slStringInitializeDynamicBuffers(SFc8_untitledInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c8_chart_data_browse_helper(SFc8_untitledInstanceStruct
  *chartInstance, int32_T c8_ssIdNumber, const mxArray **c8_mxData, uint8_T
  *c8_isValueTooBig)
{
  real_T c8_d;
  *c8_mxData = NULL;
  *c8_mxData = NULL;
  *c8_isValueTooBig = 0U;
  switch (c8_ssIdNumber) {
   case 4U:
    *c8_isValueTooBig = 1U;
    break;

   case 5U:
    c8_d = *chartInstance->c8_circle_detect;
    sf_mex_assign(c8_mxData, sf_mex_create("mxData", &c8_d, 0, 0U, 0, 0U, 0),
                  false);
    break;
  }
}

static const mxArray *c8_feval(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, const mxArray *c8_input0, const mxArray *c8_input1)
{
  const mxArray *c8_m = NULL;
  (void)chartInstance;
  c8_m = NULL;
  sf_mex_assign(&c8_m, sf_mex_call(c8_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c8_input0), 14, sf_mex_dup(c8_input1)), false);
  sf_mex_destroy(&c8_input0);
  sf_mex_destroy(&c8_input1);
  return c8_m;
}

static void c8_b_feval(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, const mxArray *c8_input0, const mxArray *c8_input1)
{
  (void)chartInstance;
  sf_mex_call(c8_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c8_input0), 14,
              sf_mex_dup(c8_input1));
  sf_mex_destroy(&c8_input0);
  sf_mex_destroy(&c8_input1);
}

static const mxArray *c8_c_feval(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, const mxArray *c8_input0, const mxArray *c8_input1)
{
  const mxArray *c8_m = NULL;
  (void)chartInstance;
  c8_m = NULL;
  sf_mex_assign(&c8_m, sf_mex_call(c8_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c8_input0), 14, sf_mex_dup(c8_input1)), false);
  sf_mex_destroy(&c8_input0);
  sf_mex_destroy(&c8_input1);
  return c8_m;
}

static void c8_d_feval(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, const mxArray *c8_input0, const mxArray *c8_input1)
{
  (void)chartInstance;
  sf_mex_call(c8_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c8_input0), 14,
              sf_mex_dup(c8_input1));
  sf_mex_destroy(&c8_input0);
  sf_mex_destroy(&c8_input1);
}

static void c8_b_ComputeWeightedCentroid(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, real_T c8_c_I[521945],
  c8_coder_array_s_R6Og1x0kmqQXSF9Pw *c8_stats, c8_sHtk0WM4OMtyqkehwQYcq2
  *c8_statsAlreadyComputed)
{
  static char_T c8_b_cv[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  c8_cell_wrap_37 c8_reshapes[2];
  c8_coder_array_int32_T c8_idx;
  c8_coder_array_int32_T c8_varargout_4;
  c8_coder_array_int32_T c8_vk;
  c8_coder_array_real_T c8_Intensity;
  c8_coder_array_real_T c8_j;
  c8_coder_array_real_T c8_r;
  c8_coder_array_real_T c8_r1;
  c8_coder_array_real_T_2D c8_result;
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  const mxArray *c8_d_y = NULL;
  const mxArray *c8_y = NULL;
  real_T c8_wc[2];
  real_T c8_M;
  real_T c8_b_k;
  real_T c8_b_n;
  real_T c8_c_idx;
  real_T c8_d;
  real_T c8_d1;
  real_T c8_d2;
  real_T c8_d3;
  real_T c8_d_k;
  real_T c8_f_k;
  real_T c8_sumIntensity;
  int32_T c8_sizes[2];
  int32_T c8_ab_loop_ub;
  int32_T c8_b_idx;
  int32_T c8_b_loop_ub;
  int32_T c8_b_result;
  int32_T c8_bb_loop_ub;
  int32_T c8_c_k;
  int32_T c8_c_loop_ub;
  int32_T c8_c_n;
  int32_T c8_cb_loop_ub;
  int32_T c8_d_loop_ub;
  int32_T c8_db_loop_ub;
  int32_T c8_e_k;
  int32_T c8_e_loop_ub;
  int32_T c8_eb_loop_ub;
  int32_T c8_expected;
  int32_T c8_f_loop_ub;
  int32_T c8_fb_loop_ub;
  int32_T c8_g_loop_ub;
  int32_T c8_gb_loop_ub;
  int32_T c8_h_loop_ub;
  int32_T c8_hb_loop_ub;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i10;
  int32_T c8_i100;
  int32_T c8_i101;
  int32_T c8_i102;
  int32_T c8_i103;
  int32_T c8_i104;
  int32_T c8_i105;
  int32_T c8_i106;
  int32_T c8_i107;
  int32_T c8_i108;
  int32_T c8_i109;
  int32_T c8_i11;
  int32_T c8_i110;
  int32_T c8_i111;
  int32_T c8_i112;
  int32_T c8_i113;
  int32_T c8_i114;
  int32_T c8_i115;
  int32_T c8_i116;
  int32_T c8_i117;
  int32_T c8_i118;
  int32_T c8_i119;
  int32_T c8_i12;
  int32_T c8_i120;
  int32_T c8_i121;
  int32_T c8_i122;
  int32_T c8_i123;
  int32_T c8_i124;
  int32_T c8_i125;
  int32_T c8_i126;
  int32_T c8_i127;
  int32_T c8_i128;
  int32_T c8_i13;
  int32_T c8_i14;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  int32_T c8_i18;
  int32_T c8_i19;
  int32_T c8_i2;
  int32_T c8_i20;
  int32_T c8_i21;
  int32_T c8_i22;
  int32_T c8_i23;
  int32_T c8_i24;
  int32_T c8_i25;
  int32_T c8_i26;
  int32_T c8_i27;
  int32_T c8_i28;
  int32_T c8_i29;
  int32_T c8_i3;
  int32_T c8_i30;
  int32_T c8_i31;
  int32_T c8_i32;
  int32_T c8_i33;
  int32_T c8_i34;
  int32_T c8_i35;
  int32_T c8_i36;
  int32_T c8_i37;
  int32_T c8_i38;
  int32_T c8_i39;
  int32_T c8_i4;
  int32_T c8_i40;
  int32_T c8_i41;
  int32_T c8_i42;
  int32_T c8_i43;
  int32_T c8_i44;
  int32_T c8_i45;
  int32_T c8_i46;
  int32_T c8_i47;
  int32_T c8_i48;
  int32_T c8_i49;
  int32_T c8_i5;
  int32_T c8_i50;
  int32_T c8_i51;
  int32_T c8_i52;
  int32_T c8_i53;
  int32_T c8_i54;
  int32_T c8_i55;
  int32_T c8_i56;
  int32_T c8_i57;
  int32_T c8_i58;
  int32_T c8_i59;
  int32_T c8_i6;
  int32_T c8_i60;
  int32_T c8_i61;
  int32_T c8_i62;
  int32_T c8_i63;
  int32_T c8_i64;
  int32_T c8_i65;
  int32_T c8_i66;
  int32_T c8_i67;
  int32_T c8_i68;
  int32_T c8_i69;
  int32_T c8_i7;
  int32_T c8_i70;
  int32_T c8_i71;
  int32_T c8_i72;
  int32_T c8_i73;
  int32_T c8_i74;
  int32_T c8_i75;
  int32_T c8_i76;
  int32_T c8_i77;
  int32_T c8_i78;
  int32_T c8_i79;
  int32_T c8_i8;
  int32_T c8_i80;
  int32_T c8_i81;
  int32_T c8_i82;
  int32_T c8_i83;
  int32_T c8_i84;
  int32_T c8_i85;
  int32_T c8_i86;
  int32_T c8_i87;
  int32_T c8_i88;
  int32_T c8_i89;
  int32_T c8_i9;
  int32_T c8_i90;
  int32_T c8_i91;
  int32_T c8_i92;
  int32_T c8_i93;
  int32_T c8_i94;
  int32_T c8_i95;
  int32_T c8_i96;
  int32_T c8_i97;
  int32_T c8_i98;
  int32_T c8_i99;
  int32_T c8_i_loop_ub;
  int32_T c8_ib_loop_ub;
  int32_T c8_j_loop_ub;
  int32_T c8_k;
  int32_T c8_k_loop_ub;
  int32_T c8_l_loop_ub;
  int32_T c8_loop_ub;
  int32_T c8_m_loop_ub;
  int32_T c8_n;
  int32_T c8_n_loop_ub;
  int32_T c8_o_loop_ub;
  int32_T c8_p_loop_ub;
  int32_T c8_q_loop_ub;
  int32_T c8_r_loop_ub;
  int32_T c8_s_loop_ub;
  int32_T c8_t_loop_ub;
  int32_T c8_u_loop_ub;
  int32_T c8_v_loop_ub;
  int32_T c8_w_loop_ub;
  int32_T c8_x_loop_ub;
  int32_T c8_y_loop_ub;
  boolean_T c8_b;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_statsAlreadyComputed->WeightedCentroid = true;
  c8_st.site = &c8_ue_emlrtRSI;
  c8_statsAlreadyComputed->PixelList = true;
  c8_d = (real_T)c8_stats->size[0];
  c8_i = (int32_T)c8_d - 1;
  c8_array_real_T_Constructor(chartInstance, &c8_Intensity);
  c8_array_real_T_Constructor(chartInstance, &c8_j);
  c8_array_real_T_Constructor(chartInstance, &c8_r);
  c8_array_int32_T_Constructor(chartInstance, &c8_varargout_4);
  c8_array_real_T_2D_Constructor(chartInstance, &c8_result);
  c8_array_cell_wrap_37_2s_Construct(chartInstance, c8_reshapes);
  c8_array_int32_T_Constructor(chartInstance, &c8_idx);
  c8_array_int32_T_Constructor(chartInstance, &c8_vk);
  for (c8_k = 0; c8_k <= c8_i; c8_k++) {
    c8_b_k = (real_T)c8_k + 1.0;
    c8_i1 = c8_stats->size[0];
    c8_i2 = (int32_T)c8_b_k;
    if ((c8_i2 < 1) || (c8_i2 > c8_i1)) {
      emlrtDynamicBoundsCheckR2012b(c8_i2, 1, c8_i1, &c8_df_emlrtBCI, &c8_st);
    }

    c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_r, &c8_ee_emlrtRTEI,
      c8_stats->vector.data[c8_i2 - 1].PixelIdxList.size[0]);
    c8_i4 = c8_stats->size[0];
    c8_i5 = (int32_T)c8_b_k;
    if ((c8_i5 < 1) || (c8_i5 > c8_i4)) {
      emlrtDynamicBoundsCheckR2012b(c8_i5, 1, c8_i4, &c8_df_emlrtBCI, &c8_st);
    }

    c8_loop_ub = c8_stats->vector.data[c8_i5 - 1].PixelIdxList.size[0] - 1;
    for (c8_i8 = 0; c8_i8 <= c8_loop_ub; c8_i8++) {
      c8_i11 = c8_stats->size[0];
      c8_i14 = (int32_T)c8_b_k;
      if ((c8_i14 < 1) || (c8_i14 > c8_i11)) {
        emlrtDynamicBoundsCheckR2012b(c8_i14, 1, c8_i11, &c8_df_emlrtBCI, &c8_st);
      }

      c8_r.vector.data[c8_i8] = c8_stats->vector.data[c8_i14 - 1].
        PixelIdxList.vector.data[c8_i8];
    }

    if (c8_r.size[0] != 0) {
      c8_b_st.site = &c8_we_emlrtRSI;
      c8_i16 = c8_stats->size[0];
      c8_i17 = (int32_T)c8_b_k;
      if ((c8_i17 < 1) || (c8_i17 > c8_i16)) {
        emlrtDynamicBoundsCheckR2012b(c8_i17, 1, c8_i16, &c8_ff_emlrtBCI,
          &c8_b_st);
      }

      c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_Intensity,
        &c8_ge_emlrtRTEI, c8_stats->vector.data[c8_i17 - 1].PixelIdxList.size[0]);
      c8_i24 = c8_stats->size[0];
      c8_i28 = (int32_T)c8_b_k;
      if ((c8_i28 < 1) || (c8_i28 > c8_i24)) {
        emlrtDynamicBoundsCheckR2012b(c8_i28, 1, c8_i24, &c8_ff_emlrtBCI,
          &c8_b_st);
      }

      c8_c_loop_ub = c8_stats->vector.data[c8_i28 - 1].PixelIdxList.size[0] - 1;
      for (c8_i34 = 0; c8_i34 <= c8_c_loop_ub; c8_i34++) {
        c8_i37 = c8_stats->size[0];
        c8_i40 = (int32_T)c8_b_k;
        if ((c8_i40 < 1) || (c8_i40 > c8_i37)) {
          emlrtDynamicBoundsCheckR2012b(c8_i40, 1, c8_i37, &c8_ff_emlrtBCI,
            &c8_b_st);
        }

        c8_Intensity.vector.data[c8_i34] = c8_stats->vector.data[c8_i40 - 1].
          PixelIdxList.vector.data[c8_i34];
      }

      c8_c_st.site = &c8_xe_emlrtRSI;
      c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_idx,
        &c8_he_emlrtRTEI, c8_Intensity.size[0]);
      c8_e_loop_ub = c8_Intensity.size[0] - 1;
      for (c8_i44 = 0; c8_i44 <= c8_e_loop_ub; c8_i44++) {
        c8_idx.vector.data[c8_i44] = (int32_T)c8_Intensity.vector.data[c8_i44];
      }

      c8_f_loop_ub = c8_idx.size[0] - 1;
      for (c8_i50 = 0; c8_i50 <= c8_f_loop_ub; c8_i50++) {
        c8_idx.vector.data[c8_i50]--;
      }

      c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_vk, &c8_ie_emlrtRTEI,
        c8_idx.size[0]);
      c8_g_loop_ub = c8_idx.size[0] - 1;
      for (c8_i52 = 0; c8_i52 <= c8_g_loop_ub; c8_i52++) {
        c8_vk.vector.data[c8_i52] = c8_div_nzp_s32(chartInstance,
          c8_idx.vector.data[c8_i52], 695, 0, 0U, 0, 0);
      }

      c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_varargout_4,
        &c8_je_emlrtRTEI, c8_vk.size[0]);
      c8_i_loop_ub = c8_vk.size[0] - 1;
      for (c8_i61 = 0; c8_i61 <= c8_i_loop_ub; c8_i61++) {
        c8_varargout_4.vector.data[c8_i61] = c8_vk.vector.data[c8_i61] + 1;
      }

      c8_k_loop_ub = c8_vk.size[0] - 1;
      for (c8_i65 = 0; c8_i65 <= c8_k_loop_ub; c8_i65++) {
        c8_vk.vector.data[c8_i65] *= 695;
      }

      c8_m_loop_ub = c8_idx.size[0] - 1;
      for (c8_i68 = 0; c8_i68 <= c8_m_loop_ub; c8_i68++) {
        c8_idx.vector.data[c8_i68] -= c8_vk.vector.data[c8_i68];
      }

      c8_o_loop_ub = c8_idx.size[0] - 1;
      for (c8_i71 = 0; c8_i71 <= c8_o_loop_ub; c8_i71++) {
        c8_idx.vector.data[c8_i71]++;
      }

      c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_Intensity,
        &c8_ke_emlrtRTEI, c8_idx.size[0]);
      c8_q_loop_ub = c8_idx.size[0] - 1;
      for (c8_i76 = 0; c8_i76 <= c8_q_loop_ub; c8_i76++) {
        c8_Intensity.vector.data[c8_i76] = (real_T)c8_idx.vector.data[c8_i76];
      }

      c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_j, &c8_ke_emlrtRTEI,
        c8_varargout_4.size[0]);
      c8_t_loop_ub = c8_varargout_4.size[0] - 1;
      for (c8_i79 = 0; c8_i79 <= c8_t_loop_ub; c8_i79++) {
        c8_j.vector.data[c8_i79] = (real_T)c8_varargout_4.vector.data[c8_i79];
      }

      c8_b_st.site = &c8_ve_emlrtRSI;
      c8_c_st.site = &c8_ye_emlrtRSI;
      c8_b_result = c8_j.size[0];
      c8_sizes[0] = c8_b_result;
      c8_d_st.site = &c8_af_emlrtRSI;
      c8_expected = c8_sizes[0];
      if (c8_j.size[0] == c8_expected) {
        c8_b = true;
      } else {
        c8_b = false;
      }

      if (!c8_b) {
        c8_y = NULL;
        sf_mex_assign(&c8_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1, 39),
                      false);
        c8_b_y = NULL;
        sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1,
          39), false);
        sf_mex_call(&c8_d_st, &c8_o_emlrtMCI, "error", 0U, 2U, 14, c8_y, 14,
                    sf_mex_call(&c8_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_d_st, NULL, "message", 1U, 1U, 14, c8_b_y)));
      }

      if (c8_Intensity.size[0] == c8_expected) {
        c8_b = true;
      } else {
        c8_b = false;
      }

      if (!c8_b) {
        c8_c_y = NULL;
        sf_mex_assign(&c8_c_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1,
          39), false);
        c8_d_y = NULL;
        sf_mex_assign(&c8_d_y, sf_mex_create("y", c8_b_cv, 10, 0U, 1, 0U, 2, 1,
          39), false);
        sf_mex_call(&c8_d_st, &c8_o_emlrtMCI, "error", 0U, 2U, 14, c8_c_y, 14,
                    sf_mex_call(&c8_d_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c8_d_st, NULL, "message", 1U, 1U, 14, c8_d_y)));
      }

      c8_array_real_T_SetSize(chartInstance, &c8_c_st, &c8_reshapes[0].f1,
        &c8_le_emlrtRTEI, c8_j.size[0]);
      c8_bb_loop_ub = c8_j.size[0] - 1;
      for (c8_i93 = 0; c8_i93 <= c8_bb_loop_ub; c8_i93++) {
        c8_reshapes[0].f1.vector.data[c8_i93] = c8_j.vector.data[c8_i93];
      }

      c8_array_real_T_SetSize(chartInstance, &c8_c_st, &c8_reshapes[1].f1,
        &c8_le_emlrtRTEI, c8_Intensity.size[0]);
      c8_cb_loop_ub = c8_Intensity.size[0] - 1;
      for (c8_i95 = 0; c8_i95 <= c8_cb_loop_ub; c8_i95++) {
        c8_reshapes[1].f1.vector.data[c8_i95] = c8_Intensity.vector.data[c8_i95];
      }

      c8_array_real_T_SetSize(chartInstance, &c8_c_st, &c8_Intensity,
        &c8_me_emlrtRTEI, c8_reshapes[0].f1.size[0]);
      c8_eb_loop_ub = c8_reshapes[0].f1.size[0] - 1;
      for (c8_i100 = 0; c8_i100 <= c8_eb_loop_ub; c8_i100++) {
        c8_Intensity.vector.data[c8_i100] = c8_reshapes[0]
          .f1.vector.data[c8_i100];
      }

      c8_array_real_T_SetSize(chartInstance, &c8_c_st, &c8_j, &c8_me_emlrtRTEI,
        c8_reshapes[1].f1.size[0]);
      c8_fb_loop_ub = c8_reshapes[1].f1.size[0] - 1;
      for (c8_i102 = 0; c8_i102 <= c8_fb_loop_ub; c8_i102++) {
        c8_j.vector.data[c8_i102] = c8_reshapes[1].f1.vector.data[c8_i102];
      }

      c8_array_real_T_2D_SetSize(chartInstance, &c8_c_st, &c8_result,
        &c8_ne_emlrtRTEI, c8_Intensity.size[0], 2);
      c8_gb_loop_ub = c8_Intensity.size[0] - 1;
      for (c8_i105 = 0; c8_i105 <= c8_gb_loop_ub; c8_i105++) {
        c8_result.vector.data[c8_i105] = c8_Intensity.vector.data[c8_i105];
      }

      c8_hb_loop_ub = c8_j.size[0] - 1;
      for (c8_i108 = 0; c8_i108 <= c8_hb_loop_ub; c8_i108++) {
        c8_result.vector.data[c8_i108 + c8_result.size[0]] =
          c8_j.vector.data[c8_i108];
      }

      c8_i110 = c8_result.size[0] << 1;
      c8_i111 = c8_stats->size[0];
      c8_i112 = (int32_T)c8_b_k;
      if ((c8_i112 < 1) || (c8_i112 > c8_i111)) {
        emlrtDynamicBoundsCheckR2012b(c8_i112, 1, c8_i111, &c8_we_emlrtBCI,
          &c8_st);
      }

      c8_i115 = c8_i112 - 1;
      c8_array_real_T_2D_SetSize(chartInstance, &c8_st, &c8_stats->
        vector.data[c8_i115].PixelList, &c8_oe_emlrtRTEI, c8_result.size[0],
        c8_stats->vector.data[c8_i115].PixelList.size[1]);
      c8_i117 = c8_stats->size[0];
      c8_i119 = (int32_T)c8_b_k;
      if ((c8_i119 < 1) || (c8_i119 > c8_i117)) {
        emlrtDynamicBoundsCheckR2012b(c8_i119, 1, c8_i117, &c8_we_emlrtBCI,
          &c8_st);
      }

      c8_i120 = c8_i119 - 1;
      c8_array_real_T_2D_SetSize(chartInstance, &c8_st, &c8_stats->
        vector.data[c8_i120].PixelList, &c8_oe_emlrtRTEI, c8_stats->
        vector.data[c8_i120].PixelList.size[0], 2);
      c8_i121 = c8_stats->size[0];
      c8_i122 = (int32_T)c8_b_k;
      if ((c8_i122 < 1) || (c8_i122 > c8_i121)) {
        emlrtDynamicBoundsCheckR2012b(c8_i122, 1, c8_i121, &c8_we_emlrtBCI,
          &c8_st);
      }

      c8_i123 = c8_stats->size[0];
      c8_i124 = (int32_T)c8_b_k;
      if ((c8_i124 < 1) || (c8_i124 > c8_i123)) {
        emlrtDynamicBoundsCheckR2012b(c8_i124, 1, c8_i123, &c8_we_emlrtBCI,
          &c8_st);
      }

      c8_i125 = c8_i110;
      c8_ib_loop_ub = c8_i125 - 1;
      for (c8_i126 = 0; c8_i126 <= c8_ib_loop_ub; c8_i126++) {
        c8_i127 = c8_stats->size[0];
        c8_i128 = (int32_T)c8_b_k;
        if ((c8_i128 < 1) || (c8_i128 > c8_i127)) {
          emlrtDynamicBoundsCheckR2012b(c8_i128, 1, c8_i127, &c8_kf_emlrtBCI,
            &c8_st);
        }

        c8_stats->vector.data[c8_i128 - 1].PixelList.vector.data[c8_i126] =
          c8_result.vector.data[c8_i126];
      }
    } else {
      c8_i13 = c8_stats->size[0];
      c8_i15 = (int32_T)c8_b_k;
      if ((c8_i15 < 1) || (c8_i15 > c8_i13)) {
        emlrtDynamicBoundsCheckR2012b(c8_i15, 1, c8_i13, &c8_ue_emlrtBCI, &c8_st);
      }

      c8_i21 = c8_i15 - 1;
      c8_array_real_T_2D_SetSize(chartInstance, &c8_st, &c8_stats->
        vector.data[c8_i21].PixelList, &c8_fe_emlrtRTEI, 0,
        c8_stats->vector.data[c8_i21].PixelList.size[1]);
      c8_i23 = c8_stats->size[0];
      c8_i27 = (int32_T)c8_b_k;
      if ((c8_i27 < 1) || (c8_i27 > c8_i23)) {
        emlrtDynamicBoundsCheckR2012b(c8_i27, 1, c8_i23, &c8_ue_emlrtBCI, &c8_st);
      }

      c8_i32 = c8_i27 - 1;
      c8_array_real_T_2D_SetSize(chartInstance, &c8_st, &c8_stats->
        vector.data[c8_i32].PixelList, &c8_fe_emlrtRTEI, c8_stats->
        vector.data[c8_i32].PixelList.size[0], 2);
      c8_i35 = c8_stats->size[0];
      c8_i36 = (int32_T)c8_b_k;
      if ((c8_i36 < 1) || (c8_i36 > c8_i35)) {
        emlrtDynamicBoundsCheckR2012b(c8_i36, 1, c8_i35, &c8_ue_emlrtBCI, &c8_st);
      }

      c8_i43 = c8_stats->size[0];
      c8_i46 = (int32_T)c8_b_k;
      if ((c8_i46 < 1) || (c8_i46 > c8_i43)) {
        emlrtDynamicBoundsCheckR2012b(c8_i46, 1, c8_i43, &c8_ue_emlrtBCI, &c8_st);
      }
    }
  }

  c8_array_cell_wrap_37_2s_Destructo(chartInstance, c8_reshapes);
  c8_st.site = &c8_te_emlrtRSI;
  c8_statsAlreadyComputed->PixelValues = true;
  c8_d1 = (real_T)c8_stats->size[0];
  c8_i3 = (int32_T)c8_d1 - 1;
  for (c8_c_k = 0; c8_c_k <= c8_i3; c8_c_k++) {
    c8_d_k = (real_T)c8_c_k + 1.0;
    c8_i6 = c8_stats->size[0];
    c8_i7 = (int32_T)c8_d_k;
    if ((c8_i7 < 1) || (c8_i7 > c8_i6)) {
      emlrtDynamicBoundsCheckR2012b(c8_i7, 1, c8_i6, &c8_ef_emlrtBCI, &c8_st);
    }

    c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_r, &c8_pe_emlrtRTEI,
      c8_stats->vector.data[c8_i7 - 1].PixelIdxList.size[0]);
    c8_i10 = c8_stats->size[0];
    c8_i12 = (int32_T)c8_d_k;
    if ((c8_i12 < 1) || (c8_i12 > c8_i10)) {
      emlrtDynamicBoundsCheckR2012b(c8_i12, 1, c8_i10, &c8_ef_emlrtBCI, &c8_st);
    }

    c8_b_loop_ub = c8_stats->vector.data[c8_i12 - 1].PixelIdxList.size[0] - 1;
    for (c8_i20 = 0; c8_i20 <= c8_b_loop_ub; c8_i20++) {
      c8_i22 = c8_stats->size[0];
      c8_i26 = (int32_T)c8_d_k;
      if ((c8_i26 < 1) || (c8_i26 > c8_i22)) {
        emlrtDynamicBoundsCheckR2012b(c8_i26, 1, c8_i22, &c8_ef_emlrtBCI, &c8_st);
      }

      c8_r.vector.data[c8_i20] = c8_stats->vector.data[c8_i26 - 1].
        PixelIdxList.vector.data[c8_i20];
    }

    c8_wc[0] = (real_T)c8_r.size[0];
    c8_i25 = c8_stats->size[0];
    c8_i29 = (int32_T)c8_d_k;
    if ((c8_i29 < 1) || (c8_i29 > c8_i25)) {
      emlrtDynamicBoundsCheckR2012b(c8_i29, 1, c8_i25, &c8_te_emlrtBCI, &c8_st);
    }

    c8_i33 = c8_i29;
    c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_stats->vector.data[c8_i33
      - 1].PixelValues, &c8_qe_emlrtRTEI, (int32_T)c8_wc[0]);
    c8_b_st.site = &c8_bf_emlrtRSI;
    c8_i39 = c8_stats->size[0];
    c8_i41 = (int32_T)c8_d_k;
    if ((c8_i41 < 1) || (c8_i41 > c8_i39)) {
      emlrtDynamicBoundsCheckR2012b(c8_i41, 1, c8_i39, &c8_if_emlrtBCI, &c8_b_st);
    }

    c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_Intensity,
      &c8_re_emlrtRTEI, c8_stats->vector.data[c8_i41 - 1].PixelIdxList.size[0]);
    c8_i49 = c8_stats->size[0];
    c8_i51 = (int32_T)c8_d_k;
    if ((c8_i51 < 1) || (c8_i51 > c8_i49)) {
      emlrtDynamicBoundsCheckR2012b(c8_i51, 1, c8_i49, &c8_if_emlrtBCI, &c8_b_st);
    }

    c8_h_loop_ub = c8_stats->vector.data[c8_i51 - 1].PixelIdxList.size[0] - 1;
    for (c8_i54 = 0; c8_i54 <= c8_h_loop_ub; c8_i54++) {
      c8_i58 = c8_stats->size[0];
      c8_i60 = (int32_T)c8_d_k;
      if ((c8_i60 < 1) || (c8_i60 > c8_i58)) {
        emlrtDynamicBoundsCheckR2012b(c8_i60, 1, c8_i58, &c8_if_emlrtBCI,
          &c8_b_st);
      }

      c8_Intensity.vector.data[c8_i54] = c8_stats->vector.data[c8_i60 - 1].
        PixelIdxList.vector.data[c8_i54];
    }

    c8_c_st.site = &c8_xe_emlrtRSI;
    c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_idx, &c8_he_emlrtRTEI,
      c8_Intensity.size[0]);
    c8_j_loop_ub = c8_Intensity.size[0] - 1;
    for (c8_i63 = 0; c8_i63 <= c8_j_loop_ub; c8_i63++) {
      c8_idx.vector.data[c8_i63] = (int32_T)c8_Intensity.vector.data[c8_i63];
    }

    c8_l_loop_ub = c8_idx.size[0] - 1;
    for (c8_i66 = 0; c8_i66 <= c8_l_loop_ub; c8_i66++) {
      c8_idx.vector.data[c8_i66]--;
    }

    c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_vk, &c8_ie_emlrtRTEI,
      c8_idx.size[0]);
    c8_n_loop_ub = c8_idx.size[0] - 1;
    for (c8_i70 = 0; c8_i70 <= c8_n_loop_ub; c8_i70++) {
      c8_vk.vector.data[c8_i70] = c8_div_nzp_s32(chartInstance,
        c8_idx.vector.data[c8_i70], 695, 0, 0U, 0, 0);
    }

    c8_array_int32_T_SetSize(chartInstance, &c8_c_st, &c8_varargout_4,
      &c8_je_emlrtRTEI, c8_vk.size[0]);
    c8_p_loop_ub = c8_vk.size[0] - 1;
    for (c8_i75 = 0; c8_i75 <= c8_p_loop_ub; c8_i75++) {
      c8_varargout_4.vector.data[c8_i75] = c8_vk.vector.data[c8_i75] + 1;
    }

    c8_s_loop_ub = c8_vk.size[0] - 1;
    for (c8_i78 = 0; c8_i78 <= c8_s_loop_ub; c8_i78++) {
      c8_vk.vector.data[c8_i78] *= 695;
    }

    c8_u_loop_ub = c8_idx.size[0] - 1;
    for (c8_i82 = 0; c8_i82 <= c8_u_loop_ub; c8_i82++) {
      c8_idx.vector.data[c8_i82] -= c8_vk.vector.data[c8_i82];
    }

    c8_w_loop_ub = c8_idx.size[0] - 1;
    for (c8_i84 = 0; c8_i84 <= c8_w_loop_ub; c8_i84++) {
      c8_idx.vector.data[c8_i84]++;
    }

    c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_j, &c8_ke_emlrtRTEI,
      c8_idx.size[0]);
    c8_x_loop_ub = c8_idx.size[0] - 1;
    for (c8_i87 = 0; c8_i87 <= c8_x_loop_ub; c8_i87++) {
      c8_j.vector.data[c8_i87] = (real_T)c8_idx.vector.data[c8_i87];
    }

    c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_Intensity,
      &c8_ke_emlrtRTEI, c8_varargout_4.size[0]);
    c8_y_loop_ub = c8_varargout_4.size[0] - 1;
    for (c8_i88 = 0; c8_i88 <= c8_y_loop_ub; c8_i88++) {
      c8_Intensity.vector.data[c8_i88] = (real_T)
        c8_varargout_4.vector.data[c8_i88];
    }

    c8_i90 = c8_stats->size[0];
    c8_i91 = (int32_T)c8_d_k;
    if ((c8_i91 < 1) || (c8_i91 > c8_i90)) {
      emlrtDynamicBoundsCheckR2012b(c8_i91, 1, c8_i90, &c8_jf_emlrtBCI, &c8_st);
    }

    c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_r, &c8_se_emlrtRTEI,
      c8_stats->vector.data[c8_i91 - 1].PixelValues.size[0]);
    c8_i92 = c8_stats->size[0];
    c8_i94 = (int32_T)c8_d_k;
    if ((c8_i94 < 1) || (c8_i94 > c8_i92)) {
      emlrtDynamicBoundsCheckR2012b(c8_i94, 1, c8_i92, &c8_jf_emlrtBCI, &c8_st);
    }

    c8_db_loop_ub = c8_stats->vector.data[c8_i94 - 1].PixelValues.size[0] - 1;
    for (c8_i96 = 0; c8_i96 <= c8_db_loop_ub; c8_i96++) {
      c8_i97 = c8_stats->size[0];
      c8_i99 = (int32_T)c8_d_k;
      if ((c8_i99 < 1) || (c8_i99 > c8_i97)) {
        emlrtDynamicBoundsCheckR2012b(c8_i99, 1, c8_i97, &c8_jf_emlrtBCI, &c8_st);
      }

      c8_r.vector.data[c8_i96] = c8_stats->vector.data[c8_i99 - 1].
        PixelValues.vector.data[c8_i96];
    }

    c8_d3 = (real_T)c8_r.size[0];
    c8_i98 = (int32_T)c8_d3 - 1;
    for (c8_b_idx = 0; c8_b_idx <= c8_i98; c8_b_idx++) {
      c8_c_idx = (real_T)c8_b_idx + 1.0;
      c8_i101 = c8_stats->size[0];
      c8_i103 = (int32_T)c8_d_k;
      if ((c8_i103 < 1) || (c8_i103 > c8_i101)) {
        emlrtDynamicBoundsCheckR2012b(c8_i103, 1, c8_i101, &c8_se_emlrtBCI,
          &c8_st);
      }

      c8_i104 = c8_i103 - 1;
      c8_i106 = c8_j.size[0];
      c8_i107 = (int32_T)c8_c_idx;
      if ((c8_i107 < 1) || (c8_i107 > c8_i106)) {
        emlrtDynamicBoundsCheckR2012b(c8_i107, 1, c8_i106, &c8_af_emlrtBCI,
          &c8_st);
      }

      c8_i109 = (int32_T)c8_j.vector.data[c8_i107 - 1];
      if ((c8_i109 < 1) || (c8_i109 > 695)) {
        emlrtDynamicBoundsCheckR2012b(c8_i109, 1, 695, &c8_ye_emlrtBCI, &c8_st);
      }

      c8_i113 = c8_Intensity.size[0];
      c8_i114 = (int32_T)c8_c_idx;
      if ((c8_i114 < 1) || (c8_i114 > c8_i113)) {
        emlrtDynamicBoundsCheckR2012b(c8_i114, 1, c8_i113, &c8_bf_emlrtBCI,
          &c8_st);
      }

      c8_i116 = c8_stats->vector.data[c8_i104].PixelValues.size[0];
      c8_i118 = (int32_T)c8_c_idx;
      if ((c8_i118 < 1) || (c8_i118 > c8_i116)) {
        emlrtDynamicBoundsCheckR2012b(c8_i118, 1, c8_i116, &c8_cf_emlrtBCI,
          &c8_st);
      }

      c8_stats->vector.data[c8_i104].PixelValues.vector.data[c8_i118 - 1] =
        c8_c_I[(c8_i109 + 695 * ((int32_T)c8_Intensity.vector.data[c8_i114 - 1]
                 - 1)) - 1];
    }
  }

  c8_array_int32_T_Destructor(chartInstance, &c8_vk);
  c8_array_int32_T_Destructor(chartInstance, &c8_idx);
  c8_array_int32_T_Destructor(chartInstance, &c8_varargout_4);
  c8_array_real_T_Destructor(chartInstance, &c8_j);
  c8_d2 = (real_T)c8_stats->size[0];
  c8_i9 = (int32_T)c8_d2 - 1;
  c8_array_real_T_Constructor(chartInstance, &c8_r1);
  for (c8_e_k = 0; c8_e_k <= c8_i9; c8_e_k++) {
    c8_f_k = (real_T)c8_e_k + 1.0;
    c8_i18 = c8_stats->size[0];
    c8_i19 = (int32_T)c8_f_k;
    if ((c8_i19 < 1) || (c8_i19 > c8_i18)) {
      emlrtDynamicBoundsCheckR2012b(c8_i19, 1, c8_i18, &c8_gf_emlrtBCI,
        (emlrtConstCTX)c8_sp);
    }

    c8_st.site = &c8_ph_emlrtRSI;
    c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_Intensity,
      &c8_te_emlrtRTEI, c8_stats->vector.data[c8_i19 - 1].PixelValues.size[0]);
    c8_i30 = c8_stats->size[0];
    c8_i31 = (int32_T)c8_f_k;
    if ((c8_i31 < 1) || (c8_i31 > c8_i30)) {
      emlrtDynamicBoundsCheckR2012b(c8_i31, 1, c8_i30, &c8_gf_emlrtBCI,
        (emlrtConstCTX)c8_sp);
    }

    c8_d_loop_ub = c8_stats->vector.data[c8_i31 - 1].PixelValues.size[0] - 1;
    for (c8_i38 = 0; c8_i38 <= c8_d_loop_ub; c8_i38++) {
      c8_i42 = c8_stats->size[0];
      c8_i45 = (int32_T)c8_f_k;
      if ((c8_i45 < 1) || (c8_i45 > c8_i42)) {
        emlrtDynamicBoundsCheckR2012b(c8_i45, 1, c8_i42, &c8_hf_emlrtBCI,
          (emlrtConstCTX)c8_sp);
      }

      c8_Intensity.vector.data[c8_i38] = c8_stats->vector.data[c8_i45 - 1].
        PixelValues.vector.data[c8_i38];
    }

    c8_st.site = &c8_se_emlrtRSI;
    c8_sumIntensity = c8_sum(chartInstance, &c8_st, &c8_Intensity);
    c8_i47 = c8_stats->size[0];
    c8_i48 = (int32_T)c8_f_k;
    if ((c8_i48 < 1) || (c8_i48 > c8_i47)) {
      emlrtDynamicBoundsCheckR2012b(c8_i48, 1, c8_i47, &c8_re_emlrtBCI,
        (emlrtConstCTX)c8_sp);
    }

    for (c8_n = 0; c8_n < 2; c8_n++) {
      c8_b_n = (real_T)c8_n + 1.0;
      c8_i55 = c8_stats->size[0];
      c8_i57 = (int32_T)c8_f_k;
      if ((c8_i57 < 1) || (c8_i57 > c8_i55)) {
        emlrtDynamicBoundsCheckR2012b(c8_i57, 1, c8_i55, &c8_ve_emlrtBCI,
          (emlrtConstCTX)c8_sp);
      }

      c8_i62 = c8_i57 - 1;
      c8_i64 = c8_stats->vector.data[c8_i62].PixelList.size[0];
      c8_st.site = &c8_re_emlrtRSI;
      c8_array_real_T_2D_SetSize(chartInstance, &c8_st, &c8_result,
        &c8_ue_emlrtRTEI, c8_i64, 2);
      c8_i67 = c8_stats->size[0];
      c8_i69 = (int32_T)c8_f_k;
      if ((c8_i69 < 1) || (c8_i69 > c8_i67)) {
        emlrtDynamicBoundsCheckR2012b(c8_i69, 1, c8_i67, &c8_ve_emlrtBCI,
          (emlrtConstCTX)c8_sp);
      }

      c8_i72 = c8_i69 - 1;
      c8_i73 = c8_stats->size[0];
      c8_i74 = (int32_T)c8_f_k;
      if ((c8_i74 < 1) || (c8_i74 > c8_i73)) {
        emlrtDynamicBoundsCheckR2012b(c8_i74, 1, c8_i73, &c8_ve_emlrtBCI,
          (emlrtConstCTX)c8_sp);
      }

      c8_r_loop_ub = (c8_stats->vector.data[c8_i72].PixelList.size[0] << 1) - 1;
      for (c8_i77 = 0; c8_i77 <= c8_r_loop_ub; c8_i77++) {
        c8_i80 = c8_stats->size[0];
        c8_i81 = (int32_T)c8_f_k;
        if ((c8_i81 < 1) || (c8_i81 > c8_i80)) {
          emlrtDynamicBoundsCheckR2012b(c8_i81, 1, c8_i80, &c8_ve_emlrtBCI,
            (emlrtConstCTX)c8_sp);
        }

        c8_result.vector.data[c8_i77] = c8_stats->vector.data[c8_i81 - 1].
          PixelList.vector.data[c8_i77];
      }

      c8_c_n = (int32_T)c8_b_n - 1;
      c8_st.site = &c8_re_emlrtRSI;
      c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_r, &c8_ue_emlrtRTEI,
        c8_result.size[0]);
      c8_v_loop_ub = c8_result.size[0] - 1;
      for (c8_i83 = 0; c8_i83 <= c8_v_loop_ub; c8_i83++) {
        c8_r.vector.data[c8_i83] = c8_result.vector.data[c8_i83 +
          c8_result.size[0] * c8_c_n];
      }

      c8_i85 = c8_r.size[0];
      c8_i86 = c8_Intensity.size[0];
      if ((c8_i85 != c8_i86) && ((c8_i85 != 1) && (c8_i86 != 1))) {
        emlrtDimSizeImpxCheckR2021b(c8_i85, c8_i86, &c8_b_emlrtECI,
          (emlrtConstCTX)c8_sp);
      }

      if (c8_r.size[0] == c8_Intensity.size[0]) {
        c8_st.site = &c8_re_emlrtRSI;
        c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_r1, &c8_ue_emlrtRTEI,
          c8_r.size[0]);
        c8_ab_loop_ub = c8_r.size[0] - 1;
        for (c8_i89 = 0; c8_i89 <= c8_ab_loop_ub; c8_i89++) {
          c8_r1.vector.data[c8_i89] = c8_r.vector.data[c8_i89] *
            c8_Intensity.vector.data[c8_i89];
        }

        c8_st.site = &c8_re_emlrtRSI;
        c8_M = c8_sum(chartInstance, &c8_st, &c8_r1);
      } else {
        c8_st.site = &c8_re_emlrtRSI;
        c8_M = c8_binary_expand_op(chartInstance, &c8_st, c8_re_emlrtRSI, &c8_r,
          &c8_Intensity);
      }

      c8_wc[(int32_T)c8_b_n - 1] = c8_M / c8_sumIntensity;
    }

    for (c8_i53 = 0; c8_i53 < 2; c8_i53++) {
      c8_i56 = c8_stats->size[0];
      c8_i59 = (int32_T)c8_f_k;
      if ((c8_i59 < 1) || (c8_i59 > c8_i56)) {
        emlrtDynamicBoundsCheckR2012b(c8_i59, 1, c8_i56, &c8_xe_emlrtBCI,
          (emlrtConstCTX)c8_sp);
      }

      c8_stats->vector.data[c8_i59 - 1].WeightedCentroid[c8_i53] = c8_wc[c8_i53];
    }
  }

  c8_array_real_T_Destructor(chartInstance, &c8_r1);
  c8_array_real_T_2D_Destructor(chartInstance, &c8_result);
  c8_array_real_T_Destructor(chartInstance, &c8_r);
  c8_array_real_T_Destructor(chartInstance, &c8_Intensity);
}

static void c8_b_sort(SFc8_untitledInstanceStruct *chartInstance, const
                      emlrtStack *c8_sp, c8_coder_array_real_T_2D *c8_c_x,
                      c8_coder_array_int32_T_2D *c8_idx)
{
  c8_coder_array_int32_T c8_iwork;
  c8_coder_array_real_T c8_xwork;
  emlrtStack c8_b_st;
  emlrtStack c8_c_st;
  emlrtStack c8_d_st;
  emlrtStack c8_e_st;
  emlrtStack c8_st;
  real_T c8_x4[4];
  real_T c8_dv[2];
  real_T c8_d_x;
  int32_T c8_idx4[4];
  int32_T c8_perm[4];
  int32_T c8_b_b;
  int32_T c8_b_i1;
  int32_T c8_b_i2;
  int32_T c8_b_i3;
  int32_T c8_b_i4;
  int32_T c8_b_k;
  int32_T c8_b_loop_ub;
  int32_T c8_b_n;
  int32_T c8_b_nNaNs;
  int32_T c8_b_nNonNaN;
  int32_T c8_c_b;
  int32_T c8_c_k;
  int32_T c8_c_n;
  int32_T c8_d_k;
  int32_T c8_e_b;
  int32_T c8_e_k;
  int32_T c8_f_b;
  int32_T c8_f_k;
  int32_T c8_g_b;
  int32_T c8_g_k;
  int32_T c8_h_b;
  int32_T c8_h_k;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_i3;
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  int32_T c8_i_b;
  int32_T c8_i_k;
  int32_T c8_ib;
  int32_T c8_itmp;
  int32_T c8_j_b;
  int32_T c8_k;
  int32_T c8_k_b;
  int32_T c8_l_b;
  int32_T c8_loop_ub;
  int32_T c8_m;
  int32_T c8_m_b;
  int32_T c8_n;
  int32_T c8_nBlocks;
  int32_T c8_nLastBlock;
  int32_T c8_nNaNs;
  int32_T c8_nNonNaN;
  int32_T c8_n_b;
  int32_T c8_o_b;
  int32_T c8_p_b;
  int32_T c8_preSortLevel;
  int32_T c8_quartetOffset;
  int32_T c8_tailOffset;
  int32_T c8_wOffset;
  boolean_T c8_b;
  boolean_T c8_b_overflow;
  boolean_T c8_c_overflow;
  boolean_T c8_d_b;
  boolean_T c8_d_overflow;
  boolean_T c8_e_overflow;
  boolean_T c8_f_overflow;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_st.site = &c8_jf_emlrtRSI;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_c_st.prev = &c8_b_st;
  c8_c_st.tls = c8_b_st.tls;
  c8_d_st.prev = &c8_c_st;
  c8_d_st.tls = c8_c_st.tls;
  c8_e_st.prev = &c8_d_st;
  c8_e_st.tls = c8_d_st.tls;
  for (c8_i = 0; c8_i < 2; c8_i++) {
    c8_dv[c8_i] = (real_T)c8_c_x->size[c8_i];
  }

  c8_array_int32_T_2D_SetSize(chartInstance, &c8_st, c8_idx, &c8_ve_emlrtRTEI,
    (int32_T)c8_dv[0], 1);
  c8_loop_ub = (int32_T)c8_dv[0] - 1;
  for (c8_i1 = 0; c8_i1 <= c8_loop_ub; c8_i1++) {
    c8_idx->vector.data[c8_i1] = 0;
  }

  c8_b = (c8_c_x->size[0] == 0);
  if (!c8_b) {
    c8_b_st.site = &c8_kf_emlrtRSI;
    c8_array_int32_T_Constructor(chartInstance, &c8_iwork);
    c8_array_real_T_Constructor(chartInstance, &c8_xwork);
    for (c8_k = 0; c8_k < 1; c8_k++) {
      c8_b_st.site = &c8_lf_emlrtRSI;
      c8_n = c8_c_x->size[0];
      c8_array_int32_T_SetSize(chartInstance, &c8_b_st, &c8_iwork,
        &c8_we_emlrtRTEI, c8_idx->size[0]);
      c8_b_loop_ub = c8_idx->size[0] - 1;
      for (c8_i2 = 0; c8_i2 <= c8_b_loop_ub; c8_i2++) {
        c8_iwork.vector.data[c8_i2] = 0;
      }

      c8_dv[0] = (real_T)c8_c_x->size[0];
      c8_array_real_T_SetSize(chartInstance, &c8_b_st, &c8_xwork,
        &c8_xe_emlrtRTEI, (int32_T)c8_dv[0]);
      c8_c_st.site = &c8_mf_emlrtRSI;
      c8_b_n = c8_c_x->size[0];
      for (c8_i3 = 0; c8_i3 < 4; c8_i3++) {
        c8_x4[c8_i3] = 0.0;
      }

      for (c8_i4 = 0; c8_i4 < 4; c8_i4++) {
        c8_idx4[c8_i4] = 0;
      }

      c8_nNaNs = 0;
      c8_ib = 0;
      c8_d_st.site = &c8_sf_emlrtRSI;
      c8_b_b = c8_b_n;
      c8_c_b = c8_b_b;
      if (c8_c_b < 1) {
        c8_overflow = false;
      } else {
        c8_overflow = (c8_c_b > 2147483646);
      }

      if (c8_overflow) {
        c8_e_st.site = &c8_ec_emlrtRSI;
        c8_check_forloop_overflow_error(chartInstance, &c8_e_st);
      }

      for (c8_b_k = 0; c8_b_k < c8_b_n; c8_b_k++) {
        c8_c_k = c8_b_k;
        c8_d_x = c8_c_x->vector.data[c8_c_k];
        c8_d_b = muDoubleScalarIsNaN(c8_d_x);
        if (c8_d_b) {
          c8_idx->vector.data[(c8_b_n - c8_nNaNs) - 1] = c8_c_k + 1;
          c8_xwork.vector.data[(c8_b_n - c8_nNaNs) - 1] = c8_c_x->
            vector.data[c8_c_k];
          c8_nNaNs++;
        } else {
          c8_ib++;
          c8_idx4[c8_ib - 1] = c8_c_k + 1;
          c8_x4[c8_ib - 1] = c8_c_x->vector.data[c8_c_k];
          if (c8_ib == 4) {
            c8_quartetOffset = c8_c_k - c8_nNaNs;
            if (c8_x4[0] >= c8_x4[1]) {
              c8_b_i1 = 1;
              c8_b_i2 = 2;
            } else {
              c8_b_i1 = 2;
              c8_b_i2 = 1;
            }

            if (c8_x4[2] >= c8_x4[3]) {
              c8_b_i3 = 3;
              c8_b_i4 = 4;
            } else {
              c8_b_i3 = 4;
              c8_b_i4 = 3;
            }

            if (c8_x4[c8_b_i1 - 1] >= c8_x4[c8_b_i3 - 1]) {
              if (c8_x4[c8_b_i2 - 1] >= c8_x4[c8_b_i3 - 1]) {
                c8_perm[0] = c8_b_i1;
                c8_perm[1] = c8_b_i2;
                c8_perm[2] = c8_b_i3;
                c8_perm[3] = c8_b_i4;
              } else if (c8_x4[c8_b_i2 - 1] >= c8_x4[c8_b_i4 - 1]) {
                c8_perm[0] = c8_b_i1;
                c8_perm[1] = c8_b_i3;
                c8_perm[2] = c8_b_i2;
                c8_perm[3] = c8_b_i4;
              } else {
                c8_perm[0] = c8_b_i1;
                c8_perm[1] = c8_b_i3;
                c8_perm[2] = c8_b_i4;
                c8_perm[3] = c8_b_i2;
              }
            } else if (c8_x4[c8_b_i1 - 1] >= c8_x4[c8_b_i4 - 1]) {
              if (c8_x4[c8_b_i2 - 1] >= c8_x4[c8_b_i4 - 1]) {
                c8_perm[0] = c8_b_i3;
                c8_perm[1] = c8_b_i1;
                c8_perm[2] = c8_b_i2;
                c8_perm[3] = c8_b_i4;
              } else {
                c8_perm[0] = c8_b_i3;
                c8_perm[1] = c8_b_i1;
                c8_perm[2] = c8_b_i4;
                c8_perm[3] = c8_b_i2;
              }
            } else {
              c8_perm[0] = c8_b_i3;
              c8_perm[1] = c8_b_i4;
              c8_perm[2] = c8_b_i1;
              c8_perm[3] = c8_b_i2;
            }

            c8_idx->vector.data[c8_quartetOffset - 3] = c8_idx4[c8_perm[0] - 1];
            c8_idx->vector.data[c8_quartetOffset - 2] = c8_idx4[c8_perm[1] - 1];
            c8_idx->vector.data[c8_quartetOffset - 1] = c8_idx4[c8_perm[2] - 1];
            c8_idx->vector.data[c8_quartetOffset] = c8_idx4[c8_perm[3] - 1];
            c8_c_x->vector.data[c8_quartetOffset - 3] = c8_x4[c8_perm[0] - 1];
            c8_c_x->vector.data[c8_quartetOffset - 2] = c8_x4[c8_perm[1] - 1];
            c8_c_x->vector.data[c8_quartetOffset - 1] = c8_x4[c8_perm[2] - 1];
            c8_c_x->vector.data[c8_quartetOffset] = c8_x4[c8_perm[3] - 1];
            c8_ib = 0;
          }
        }
      }

      c8_wOffset = (c8_b_n - c8_nNaNs) - 1;
      if (c8_ib > 0) {
        c8_c_n = c8_ib;
        for (c8_i5 = 0; c8_i5 < 4; c8_i5++) {
          c8_perm[c8_i5] = 0;
        }

        if (c8_c_n == 1) {
          c8_perm[0] = 1;
        } else if (c8_c_n == 2) {
          if (c8_x4[0] >= c8_x4[1]) {
            c8_perm[0] = 1;
            c8_perm[1] = 2;
          } else {
            c8_perm[0] = 2;
            c8_perm[1] = 1;
          }
        } else if (c8_x4[0] >= c8_x4[1]) {
          if (c8_x4[1] >= c8_x4[2]) {
            c8_perm[0] = 1;
            c8_perm[1] = 2;
            c8_perm[2] = 3;
          } else if (c8_x4[0] >= c8_x4[2]) {
            c8_perm[0] = 1;
            c8_perm[1] = 3;
            c8_perm[2] = 2;
          } else {
            c8_perm[0] = 3;
            c8_perm[1] = 1;
            c8_perm[2] = 2;
          }
        } else if (c8_x4[0] >= c8_x4[2]) {
          c8_perm[0] = 2;
          c8_perm[1] = 1;
          c8_perm[2] = 3;
        } else if (c8_x4[1] >= c8_x4[2]) {
          c8_perm[0] = 2;
          c8_perm[1] = 3;
          c8_perm[2] = 1;
        } else {
          c8_perm[0] = 3;
          c8_perm[1] = 2;
          c8_perm[2] = 1;
        }

        c8_d_st.site = &c8_tf_emlrtRSI;
        c8_g_b = c8_ib;
        c8_h_b = c8_g_b;
        if (c8_h_b < 1) {
          c8_c_overflow = false;
        } else {
          c8_c_overflow = (c8_h_b > 2147483646);
        }

        if (c8_c_overflow) {
          c8_e_st.site = &c8_ec_emlrtRSI;
          c8_check_forloop_overflow_error(chartInstance, &c8_e_st);
        }

        c8_i6 = (uint8_T)c8_ib - 1;
        for (c8_e_k = 0; c8_e_k <= c8_i6; c8_e_k++) {
          c8_c_k = c8_e_k;
          c8_idx->vector.data[((c8_wOffset - c8_ib) + c8_c_k) + 1] =
            c8_idx4[c8_perm[c8_c_k] - 1];
          c8_c_x->vector.data[((c8_wOffset - c8_ib) + c8_c_k) + 1] =
            c8_x4[c8_perm[c8_c_k] - 1];
        }
      }

      c8_m = c8_nNaNs >> 1;
      c8_d_st.site = &c8_uf_emlrtRSI;
      c8_e_b = c8_m;
      c8_f_b = c8_e_b;
      if (c8_f_b < 1) {
        c8_b_overflow = false;
      } else {
        c8_b_overflow = (c8_f_b > 2147483646);
      }

      if (c8_b_overflow) {
        c8_e_st.site = &c8_ec_emlrtRSI;
        c8_check_forloop_overflow_error(chartInstance, &c8_e_st);
      }

      for (c8_d_k = 0; c8_d_k < c8_m; c8_d_k++) {
        c8_c_k = c8_d_k + 1;
        c8_itmp = c8_idx->vector.data[c8_wOffset + c8_c_k];
        c8_idx->vector.data[c8_wOffset + c8_c_k] = c8_idx->vector.data[c8_b_n -
          c8_c_k];
        c8_idx->vector.data[c8_b_n - c8_c_k] = c8_itmp;
        c8_c_x->vector.data[c8_wOffset + c8_c_k] = c8_xwork.vector.data[c8_b_n -
          c8_c_k];
        c8_c_x->vector.data[c8_b_n - c8_c_k] = c8_xwork.vector.data[c8_wOffset +
          c8_c_k];
      }

      if ((c8_nNaNs & 1) != 0) {
        c8_c_x->vector.data[(c8_wOffset + c8_m) + 1] = c8_xwork.vector.data
          [(c8_wOffset + c8_m) + 1];
      }

      c8_nNonNaN = c8_n - c8_nNaNs;
      c8_preSortLevel = 2;
      if (c8_nNonNaN > 1) {
        if (c8_n >= 256) {
          c8_nBlocks = c8_nNonNaN >> 8;
          if (c8_nBlocks > 0) {
            c8_c_st.site = &c8_nf_emlrtRSI;
            c8_i_b = c8_nBlocks;
            c8_j_b = c8_i_b;
            if (c8_j_b < 1) {
              c8_d_overflow = false;
            } else {
              c8_d_overflow = (c8_j_b > 2147483646);
            }

            if (c8_d_overflow) {
              c8_d_st.site = &c8_ec_emlrtRSI;
              c8_check_forloop_overflow_error(chartInstance, &c8_d_st);
            }

            for (c8_m_b = 0; c8_m_b < c8_nBlocks; c8_m_b++) {
              c8_n_b = c8_m_b;
              c8_c_st.site = &c8_of_emlrtRSI;
              c8_b_merge_pow2_block(chartInstance, &c8_c_st, c8_idx, c8_c_x,
                                    c8_n_b << 8);
            }

            c8_tailOffset = c8_nBlocks << 8;
            c8_nLastBlock = c8_nNonNaN - c8_tailOffset;
            if (c8_nLastBlock > 0) {
              c8_c_st.site = &c8_pf_emlrtRSI;
              c8_b_merge_block(chartInstance, &c8_c_st, c8_idx, c8_c_x,
                               c8_tailOffset, c8_nLastBlock, 2, &c8_iwork,
                               &c8_xwork);
            }

            c8_preSortLevel = 8;
          }
        }

        c8_c_st.site = &c8_qf_emlrtRSI;
        c8_b_merge_block(chartInstance, &c8_c_st, c8_idx, c8_c_x, 0, c8_nNonNaN,
                         c8_preSortLevel, &c8_iwork, &c8_xwork);
      }

      if ((c8_nNaNs > 0) && (c8_nNonNaN > 0)) {
        c8_c_st.site = &c8_rf_emlrtRSI;
        c8_b_nNonNaN = c8_nNonNaN - 1;
        c8_b_nNaNs = c8_nNaNs - 1;
        c8_d_st.site = &c8_fg_emlrtRSI;
        c8_k_b = c8_b_nNaNs + 1;
        c8_l_b = c8_k_b;
        if (c8_l_b < 1) {
          c8_e_overflow = false;
        } else {
          c8_e_overflow = (c8_l_b > 2147483646);
        }

        if (c8_e_overflow) {
          c8_e_st.site = &c8_ec_emlrtRSI;
          c8_check_forloop_overflow_error(chartInstance, &c8_e_st);
        }

        for (c8_f_k = 0; c8_f_k <= c8_b_nNaNs; c8_f_k++) {
          c8_h_k = c8_f_k;
          c8_xwork.vector.data[c8_h_k] = c8_c_x->vector.data[(c8_b_nNonNaN +
            c8_h_k) + 1];
          c8_iwork.vector.data[c8_h_k] = c8_idx->vector.data[(c8_b_nNonNaN +
            c8_h_k) + 1];
        }

        for (c8_g_k = c8_b_nNonNaN + 1; c8_g_k >= 1; c8_g_k--) {
          c8_c_x->vector.data[c8_b_nNaNs + c8_g_k] = c8_c_x->vector.data[c8_g_k
            - 1];
          c8_idx->vector.data[c8_b_nNaNs + c8_g_k] = c8_idx->vector.data[c8_g_k
            - 1];
        }

        c8_d_st.site = &c8_gg_emlrtRSI;
        c8_o_b = c8_b_nNaNs + 1;
        c8_p_b = c8_o_b;
        if (c8_p_b < 1) {
          c8_f_overflow = false;
        } else {
          c8_f_overflow = (c8_p_b > 2147483646);
        }

        if (c8_f_overflow) {
          c8_e_st.site = &c8_ec_emlrtRSI;
          c8_check_forloop_overflow_error(chartInstance, &c8_e_st);
        }

        for (c8_i_k = 0; c8_i_k <= c8_b_nNaNs; c8_i_k++) {
          c8_h_k = c8_i_k;
          c8_c_x->vector.data[c8_h_k] = c8_xwork.vector.data[c8_h_k];
          c8_idx->vector.data[c8_h_k] = c8_iwork.vector.data[c8_h_k];
        }
      }
    }

    c8_array_real_T_Destructor(chartInstance, &c8_xwork);
    c8_array_int32_T_Destructor(chartInstance, &c8_iwork);
  }
}

static void c8_b_merge_pow2_block(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx,
  c8_coder_array_real_T_2D *c8_c_x, int32_T c8_offset)
{
  emlrtStack c8_b_st;
  emlrtStack c8_st;
  real_T c8_xwork[256];
  int32_T c8_iwork[256];
  int32_T c8_a;
  int32_T c8_b;
  int32_T c8_bLen;
  int32_T c8_bLen2;
  int32_T c8_b_a;
  int32_T c8_b_b;
  int32_T c8_b_j;
  int32_T c8_b_k;
  int32_T c8_blockOffset;
  int32_T c8_c_b;
  int32_T c8_c_j;
  int32_T c8_d_b;
  int32_T c8_e_b;
  int32_T c8_exitg1;
  int32_T c8_f_b;
  int32_T c8_g_b;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_iout;
  int32_T c8_j;
  int32_T c8_k;
  int32_T c8_nPairs;
  int32_T c8_offset1;
  int32_T c8_p;
  int32_T c8_q;
  boolean_T c8_b_overflow;
  boolean_T c8_c_overflow;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  for (c8_b = 0; c8_b < 6; c8_b++) {
    c8_bLen = 1 << (c8_b + 2);
    c8_bLen2 = c8_bLen << 1;
    c8_nPairs = 256 >> (c8_b + 3);
    c8_st.site = &c8_vf_emlrtRSI;
    c8_b_b = c8_nPairs;
    c8_c_b = c8_b_b;
    if (c8_c_b < 1) {
      c8_overflow = false;
    } else {
      c8_overflow = (c8_c_b > 2147483646);
    }

    if (c8_overflow) {
      c8_b_st.site = &c8_ec_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_b_st);
    }

    c8_i = (uint8_T)c8_nPairs - 1;
    for (c8_k = 0; c8_k <= c8_i; c8_k++) {
      c8_b_k = c8_k;
      c8_blockOffset = (c8_offset + c8_b_k * c8_bLen2) - 1;
      c8_st.site = &c8_wf_emlrtRSI;
      c8_d_b = c8_bLen2;
      c8_e_b = c8_d_b;
      if (c8_e_b < 1) {
        c8_b_overflow = false;
      } else {
        c8_b_overflow = (c8_e_b > 2147483646);
      }

      if (c8_b_overflow) {
        c8_b_st.site = &c8_ec_emlrtRSI;
        c8_check_forloop_overflow_error(chartInstance, &c8_b_st);
      }

      c8_i1 = (uint16_T)c8_bLen2 - 1;
      for (c8_j = 0; c8_j <= c8_i1; c8_j++) {
        c8_b_j = c8_j;
        c8_iwork[c8_b_j] = c8_idx->vector.data[(c8_blockOffset + c8_b_j) + 1];
        c8_xwork[c8_b_j] = c8_c_x->vector.data[(c8_blockOffset + c8_b_j) + 1];
      }

      c8_p = 0;
      c8_q = c8_bLen;
      c8_iout = c8_blockOffset;
      do {
        c8_exitg1 = 0;
        c8_iout++;
        if (c8_xwork[c8_p] >= c8_xwork[c8_q]) {
          c8_idx->vector.data[c8_iout] = c8_iwork[c8_p];
          c8_c_x->vector.data[c8_iout] = c8_xwork[c8_p];
          if (c8_p + 1 < c8_bLen) {
            c8_p++;
          } else {
            c8_exitg1 = 1;
          }
        } else {
          c8_idx->vector.data[c8_iout] = c8_iwork[c8_q];
          c8_c_x->vector.data[c8_iout] = c8_xwork[c8_q];
          if (c8_q + 1 < c8_bLen2) {
            c8_q++;
          } else {
            c8_offset1 = c8_iout - c8_p;
            c8_st.site = &c8_xf_emlrtRSI;
            c8_a = c8_p + 1;
            c8_f_b = c8_bLen;
            c8_b_a = c8_a;
            c8_g_b = c8_f_b;
            if (c8_b_a > c8_g_b) {
              c8_c_overflow = false;
            } else {
              c8_c_overflow = (c8_g_b > 2147483646);
            }

            if (c8_c_overflow) {
              c8_b_st.site = &c8_ec_emlrtRSI;
              c8_check_forloop_overflow_error(chartInstance, &c8_b_st);
            }

            for (c8_c_j = c8_p + 1; c8_c_j <= c8_bLen; c8_c_j++) {
              c8_idx->vector.data[c8_offset1 + c8_c_j] = c8_iwork[c8_c_j - 1];
              c8_c_x->vector.data[c8_offset1 + c8_c_j] = c8_xwork[c8_c_j - 1];
            }

            c8_exitg1 = 1;
          }
        }
      } while (c8_exitg1 == 0);
    }
  }
}

static void c8_b_merge_block(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx, c8_coder_array_real_T_2D
  *c8_c_x, int32_T c8_offset, int32_T c8_n, int32_T c8_preSortLevel,
  c8_coder_array_int32_T *c8_iwork, c8_coder_array_real_T *c8_xwork)
{
  emlrtStack c8_b_st;
  emlrtStack c8_st;
  int32_T c8_b;
  int32_T c8_bLen;
  int32_T c8_bLen2;
  int32_T c8_b_b;
  int32_T c8_b_k;
  int32_T c8_k;
  int32_T c8_nBlocks;
  int32_T c8_nPairs;
  int32_T c8_nTail;
  int32_T c8_tailOffset;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  c8_nBlocks = c8_n >> c8_preSortLevel;
  c8_bLen = 1 << c8_preSortLevel;
  while (c8_nBlocks > 1) {
    if ((c8_nBlocks & 1) != 0) {
      c8_nBlocks--;
      c8_tailOffset = c8_bLen * c8_nBlocks;
      c8_nTail = c8_n - c8_tailOffset;
      if (c8_nTail > c8_bLen) {
        c8_st.site = &c8_yf_emlrtRSI;
        c8_b_merge(chartInstance, &c8_st, c8_idx, c8_c_x, c8_offset +
                   c8_tailOffset, c8_bLen, c8_nTail - c8_bLen, c8_iwork,
                   c8_xwork);
      }
    }

    c8_bLen2 = c8_bLen << 1;
    c8_nPairs = c8_nBlocks >> 1;
    c8_st.site = &c8_ag_emlrtRSI;
    c8_b = c8_nPairs;
    c8_b_b = c8_b;
    if (c8_b_b < 1) {
      c8_overflow = false;
    } else {
      c8_overflow = (c8_b_b > 2147483646);
    }

    if (c8_overflow) {
      c8_b_st.site = &c8_ec_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_b_st);
    }

    for (c8_k = 0; c8_k < c8_nPairs; c8_k++) {
      c8_b_k = c8_k;
      c8_st.site = &c8_bg_emlrtRSI;
      c8_b_merge(chartInstance, &c8_st, c8_idx, c8_c_x, c8_offset + c8_b_k *
                 c8_bLen2, c8_bLen, c8_bLen, c8_iwork, c8_xwork);
    }

    c8_bLen = c8_bLen2;
    c8_nBlocks = c8_nPairs;
  }

  if (c8_n > c8_bLen) {
    c8_st.site = &c8_cg_emlrtRSI;
    c8_b_merge(chartInstance, &c8_st, c8_idx, c8_c_x, c8_offset, c8_bLen, c8_n -
               c8_bLen, c8_iwork, c8_xwork);
  }
}

static void c8_b_merge(SFc8_untitledInstanceStruct *chartInstance, const
  emlrtStack *c8_sp, c8_coder_array_int32_T_2D *c8_idx, c8_coder_array_real_T_2D
  *c8_c_x, int32_T c8_offset, int32_T c8_np, int32_T c8_nq,
  c8_coder_array_int32_T *c8_iwork, c8_coder_array_real_T *c8_xwork)
{
  emlrtStack c8_b_st;
  emlrtStack c8_st;
  int32_T c8_a;
  int32_T c8_b;
  int32_T c8_b_a;
  int32_T c8_b_b;
  int32_T c8_b_j;
  int32_T c8_c_b;
  int32_T c8_c_j;
  int32_T c8_d_b;
  int32_T c8_exitg1;
  int32_T c8_iout;
  int32_T c8_j;
  int32_T c8_n;
  int32_T c8_offset1;
  int32_T c8_p;
  int32_T c8_q;
  int32_T c8_qend;
  boolean_T c8_b_overflow;
  boolean_T c8_overflow;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_b_st.prev = &c8_st;
  c8_b_st.tls = c8_st.tls;
  if (c8_nq != 0) {
    c8_n = c8_np + c8_nq;
    c8_st.site = &c8_eg_emlrtRSI;
    c8_b = c8_n;
    c8_b_b = c8_b;
    if (c8_b_b < 1) {
      c8_overflow = false;
    } else {
      c8_overflow = (c8_b_b > 2147483646);
    }

    if (c8_overflow) {
      c8_b_st.site = &c8_ec_emlrtRSI;
      c8_check_forloop_overflow_error(chartInstance, &c8_b_st);
    }

    for (c8_j = 0; c8_j < c8_n; c8_j++) {
      c8_b_j = c8_j;
      c8_iwork->vector.data[c8_b_j] = c8_idx->vector.data[c8_offset + c8_b_j];
      c8_xwork->vector.data[c8_b_j] = c8_c_x->vector.data[c8_offset + c8_b_j];
    }

    c8_p = 0;
    c8_q = c8_np;
    c8_qend = c8_np + c8_nq;
    c8_iout = c8_offset - 1;
    do {
      c8_exitg1 = 0;
      c8_iout++;
      if (c8_xwork->vector.data[c8_p] >= c8_xwork->vector.data[c8_q]) {
        c8_idx->vector.data[c8_iout] = c8_iwork->vector.data[c8_p];
        c8_c_x->vector.data[c8_iout] = c8_xwork->vector.data[c8_p];
        if (c8_p + 1 < c8_np) {
          c8_p++;
        } else {
          c8_exitg1 = 1;
        }
      } else {
        c8_idx->vector.data[c8_iout] = c8_iwork->vector.data[c8_q];
        c8_c_x->vector.data[c8_iout] = c8_xwork->vector.data[c8_q];
        if (c8_q + 1 < c8_qend) {
          c8_q++;
        } else {
          c8_offset1 = c8_iout - c8_p;
          c8_st.site = &c8_dg_emlrtRSI;
          c8_a = c8_p + 1;
          c8_c_b = c8_np;
          c8_b_a = c8_a;
          c8_d_b = c8_c_b;
          if (c8_b_a > c8_d_b) {
            c8_b_overflow = false;
          } else {
            c8_b_overflow = (c8_d_b > 2147483646);
          }

          if (c8_b_overflow) {
            c8_b_st.site = &c8_ec_emlrtRSI;
            c8_check_forloop_overflow_error(chartInstance, &c8_b_st);
          }

          for (c8_c_j = c8_p + 1; c8_c_j <= c8_np; c8_c_j++) {
            c8_idx->vector.data[c8_offset1 + c8_c_j] = c8_iwork->
              vector.data[c8_c_j - 1];
            c8_c_x->vector.data[c8_offset1 + c8_c_j] = c8_xwork->
              vector.data[c8_c_j - 1];
          }

          c8_exitg1 = 1;
        }
      }
    } while (c8_exitg1 == 0);
  }
}

static real_T c8_binary_expand_op(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, emlrtRSInfo c8_in1, c8_coder_array_real_T *c8_in2,
  c8_coder_array_real_T *c8_in3)
{
  c8_coder_array_real_T c8_b_in2;
  emlrtStack c8_st;
  real_T c8_out1;
  int32_T c8_aux_0_0;
  int32_T c8_aux_1_0;
  int32_T c8_i;
  int32_T c8_i1;
  int32_T c8_i2;
  int32_T c8_loop_ub;
  int32_T c8_stride_0_0;
  int32_T c8_stride_1_0;
  c8_st.prev = c8_sp;
  c8_st.tls = c8_sp->tls;
  c8_array_real_T_Constructor(chartInstance, &c8_b_in2);
  c8_st.site = &c8_re_emlrtRSI;
  if (c8_in3->size[0] == 1) {
    c8_i = c8_in2->size[0];
  } else {
    c8_i = c8_in3->size[0];
  }

  c8_array_real_T_SetSize(chartInstance, &c8_st, &c8_b_in2, &c8_ue_emlrtRTEI,
    c8_i);
  c8_stride_0_0 = (c8_in2->size[0] != 1);
  c8_stride_1_0 = (c8_in3->size[0] != 1);
  c8_aux_0_0 = 0;
  c8_aux_1_0 = 0;
  if (c8_in3->size[0] == 1) {
    c8_i1 = c8_in2->size[0];
  } else {
    c8_i1 = c8_in3->size[0];
  }

  c8_loop_ub = c8_i1 - 1;
  for (c8_i2 = 0; c8_i2 <= c8_loop_ub; c8_i2++) {
    c8_b_in2.vector.data[c8_i2] = c8_in2->vector.data[c8_aux_0_0] *
      c8_in3->vector.data[c8_aux_1_0];
    c8_aux_1_0 += c8_stride_1_0;
    c8_aux_0_0 += c8_stride_0_0;
  }

  c8_st.site = &c8_in1;
  c8_out1 = c8_sum(chartInstance, &c8_st, &c8_b_in2);
  c8_array_real_T_Destructor(chartInstance, &c8_b_in2);
  return c8_out1;
}

static void c8_array_real_T_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_real_T_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1)
{
  real_T *c8_newData;
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  (void)chartInstance;
  c8_coderArray->size[0] = c8_size0;
  c8_coderArray->size[1] = c8_size1;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c8_coderArray->size[0],
                       c8_srcLocation, (void *)c8_sp), (size_t)(uint32_T)
    c8_coderArray->size[1], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (real_T *)emlrtMallocMex(sizeof(real_T) * (uint32_T)
      c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof(real_T) * (uint32_T)
             c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_array_creal_T_SetSize(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_creal_T *c8_coderArray, const
  emlrtRTEInfo *c8_srcLocation, int32_T c8_size0)
{
  creal_T *c8_newData;
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  (void)chartInstance;
  c8_coderArray->size[0] = c8_size0;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c8_coderArray->size[0], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (creal_T *)emlrtMallocMex(sizeof(creal_T) * (uint32_T)
      c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof(creal_T) * (uint32_T)
             c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_array_boolean_T_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_boolean_T_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1)
{
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  boolean_T *c8_newData;
  (void)chartInstance;
  c8_coderArray->size[0] = c8_size0;
  c8_coderArray->size[1] = c8_size1;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c8_coderArray->size[0],
                       c8_srcLocation, (void *)c8_sp), (size_t)(uint32_T)
    c8_coderArray->size[1], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (boolean_T *)emlrtMallocMex(sizeof(boolean_T) * (uint32_T)
      c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof(boolean_T)
             * (uint32_T)c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_array_int32_T_SetSize(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_int32_T *c8_coderArray, const
  emlrtRTEInfo *c8_srcLocation, int32_T c8_size0)
{
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  int32_T *c8_newData;
  (void)chartInstance;
  c8_coderArray->size[0] = c8_size0;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c8_coderArray->size[0], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
      c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof(int32_T) * (uint32_T)
             c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_array_real_T_SetSize(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_real_T *c8_coderArray, const
  emlrtRTEInfo *c8_srcLocation, int32_T c8_size0)
{
  real_T *c8_newData;
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  (void)chartInstance;
  c8_coderArray->size[0] = c8_size0;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c8_coderArray->size[0], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (real_T *)emlrtMallocMex(sizeof(real_T) * (uint32_T)
      c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof(real_T) * (uint32_T)
             c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_array_boolean_T_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_boolean_T
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0)
{
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  boolean_T *c8_newData;
  (void)chartInstance;
  c8_coderArray->size[0] = c8_size0;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c8_coderArray->size[0], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (boolean_T *)emlrtMallocMex(sizeof(boolean_T) * (uint32_T)
      c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof(boolean_T)
             * (uint32_T)c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_array_real32_T_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_real32_T_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1)
{
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  real32_T *c8_newData;
  (void)chartInstance;
  c8_coderArray->size[0] = c8_size0;
  c8_coderArray->size[1] = c8_size1;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c8_coderArray->size[0],
                       c8_srcLocation, (void *)c8_sp), (size_t)(uint32_T)
    c8_coderArray->size[1], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (real32_T *)emlrtMallocMex(sizeof(real32_T) * (uint32_T)
      c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof(real32_T)
             * (uint32_T)c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_array_creal_T_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_creal_T_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1)
{
  creal_T *c8_newData;
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  (void)chartInstance;
  c8_coderArray->size[0] = c8_size0;
  c8_coderArray->size[1] = c8_size1;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c8_coderArray->size[0],
                       c8_srcLocation, (void *)c8_sp), (size_t)(uint32_T)
    c8_coderArray->size[1], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (creal_T *)emlrtMallocMex(sizeof(creal_T) * (uint32_T)
      c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof(creal_T) * (uint32_T)
             c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_array_cell_wrap_37_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_cell_wrap_37_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1)
{
  c8_cell_wrap_37 *c8_newData;
  int32_T c8_b_i;
  int32_T c8_i;
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  c8_coderArray->size[0] = c8_size0;
  c8_coderArray->size[1] = c8_size1;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c8_coderArray->size[0],
                       c8_srcLocation, (void *)c8_sp), (size_t)(uint32_T)
    c8_coderArray->size[1], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel < c8_coderArray->vector.numel) {
    for (c8_i = c8_newNumel; c8_i < c8_coderArray->vector.numel; c8_i++) {
      c8_array_cell_wrap_37_Destructor(chartInstance,
        &c8_coderArray->vector.data[c8_i]);
    }
  }

  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (c8_cell_wrap_37 *)emlrtMallocMex(sizeof(c8_cell_wrap_37) *
      (uint32_T)c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof(c8_cell_wrap_37) *
             (uint32_T)c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  for (c8_b_i = c8_coderArray->vector.numel; c8_b_i < c8_newNumel; c8_b_i++) {
    c8_array_cell_wrap_37_Constructor(chartInstance, &c8_coderArray->
      vector.data[c8_b_i]);
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_array_real_T_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real_T *c8_coderArray)
{
  (void)chartInstance;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data != (real_T *)
       NULL)) {
    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_array_cell_wrap_37_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 *c8_pStruct)
{
  c8_array_real_T_Destructor(chartInstance, &c8_pStruct->f1);
}

static void c8_array_cell_wrap_37_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 *c8_pStruct)
{
  c8_array_real_T_Constructor(chartInstance, &c8_pStruct->f1);
}

static void c8_array_real_T_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real_T *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (real_T *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
}

static void c8_array_sOA5t73y81YtFHGIDxk0fKF_S(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_sOA5t73y81YtFHGIDxk
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0)
{
  c8_sOA5t73y81YtFHGIDxk0fKF *c8_newData;
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  (void)chartInstance;
  c8_coderArray->size[0] = c8_size0;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c8_coderArray->size[0], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (c8_sOA5t73y81YtFHGIDxk0fKF *)emlrtMallocMex(sizeof
      (c8_sOA5t73y81YtFHGIDxk0fKF) * (uint32_T)c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof
             (c8_sOA5t73y81YtFHGIDxk0fKF) * (uint32_T)
             c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_s_R6Og1x0kmqQXSF9Pw
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0)
{
  c8_s_R6Og1x0kmqQXSF9Pwa49FD *c8_newData;
  int32_T c8_b_i;
  int32_T c8_i;
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  c8_coderArray->size[0] = c8_size0;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c8_coderArray->size[0], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel < c8_coderArray->vector.numel) {
    for (c8_i = c8_newNumel; c8_i < c8_coderArray->vector.numel; c8_i++) {
      c8_b_array_s_R6Og1x0kmqQXSF9Pwa49FD_(chartInstance,
        &c8_coderArray->vector.data[c8_i]);
    }
  }

  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (c8_s_R6Og1x0kmqQXSF9Pwa49FD *)emlrtMallocMex(sizeof
      (c8_s_R6Og1x0kmqQXSF9Pwa49FD) * (uint32_T)c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof
             (c8_s_R6Og1x0kmqQXSF9Pwa49FD) * (uint32_T)
             c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  for (c8_b_i = c8_coderArray->vector.numel; c8_b_i < c8_newNumel; c8_b_i++) {
    c8_c_array_s_R6Og1x0kmqQXSF9Pwa49FD_(chartInstance,
      &c8_coderArray->vector.data[c8_b_i]);
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_b_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, c8_s_R6Og1x0kmqQXSF9Pwa49FD *c8_pStruct)
{
  c8_array_real_T_Destructor(chartInstance, &c8_pStruct->PixelIdxList);
  c8_array_real_T_2D_Destructor(chartInstance, &c8_pStruct->PixelList);
  c8_array_real_T_Destructor(chartInstance, &c8_pStruct->PixelValues);
}

static void c8_array_real_T_2D_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real_T_2D *c8_coderArray)
{
  (void)chartInstance;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data != (real_T *)
       NULL)) {
    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_c_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, c8_s_R6Og1x0kmqQXSF9Pwa49FD *c8_pStruct)
{
  c8_array_boolean_T_0x0_Constructor(chartInstance, &c8_pStruct->Image);
  c8_array_boolean_T_0x0_Constructor(chartInstance, &c8_pStruct->FilledImage);
  c8_array_real_T_Constructor(chartInstance, &c8_pStruct->PixelIdxList);
  c8_array_real_T_2D_Constructor(chartInstance, &c8_pStruct->PixelList);
  c8_array_real_T_Constructor(chartInstance, &c8_pStruct->PixelValues);
  c8_array_real_T_1x0_Constructor(chartInstance, &c8_pStruct->SubarrayIdx);
}

static void c8_array_boolean_T_0x0_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_boolean_T_0x0 *c8_pArray)
{
  (void)chartInstance;
  c8_pArray->size[0] = 0;
  c8_pArray->size[1] = 0;
}

static void c8_array_real_T_2D_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real_T_2D *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (real_T *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
  c8_coderArray->size[1] = 0;
}

static void c8_array_real_T_1x0_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real_T_1x0 *c8_pArray)
{
  (void)chartInstance;
  c8_pArray->size[0] = 0;
  c8_pArray->size[1] = 0;
}

static void c8_array_int32_T_2D_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_int32_T_2D
  *c8_coderArray, const emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T
  c8_size1)
{
  int32_T c8_newCapacity;
  int32_T c8_newNumel;
  int32_T *c8_newData;
  (void)chartInstance;
  c8_coderArray->size[0] = c8_size0;
  c8_coderArray->size[1] = c8_size1;
  c8_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c8_coderArray->size[0],
                       c8_srcLocation, (void *)c8_sp), (size_t)(uint32_T)
    c8_coderArray->size[1], c8_srcLocation, (void *)c8_sp);
  if (c8_newNumel > c8_coderArray->vector.allocated) {
    c8_newCapacity = c8_coderArray->vector.allocated;
    if (c8_newCapacity < 16) {
      c8_newCapacity = 16;
    }

    while (c8_newCapacity < c8_newNumel) {
      if (c8_newCapacity > 1073741823) {
        c8_newCapacity = MAX_int32_T;
      } else {
        c8_newCapacity <<= 1;
      }
    }

    c8_newData = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
      c8_newCapacity);
    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if ((void *)c8_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c8_srcLocation, (void *)c8_sp);
    }

    if (c8_coderArray->vector.data != NULL) {
      memcpy(c8_newData, c8_coderArray->vector.data, sizeof(int32_T) * (uint32_T)
             c8_coderArray->vector.numel);
      if (c8_coderArray->vector.owner) {
        emlrtFreeMex(c8_coderArray->vector.data);
      }
    }

    c8_coderArray->vector.data = c8_newData;
    c8_coderArray->vector.allocated = c8_newCapacity;
    c8_coderArray->vector.owner = true;
  }

  c8_coderArray->vector.numel = c8_newNumel;
}

static void c8_array_boolean_T_2D_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_boolean_T_2D *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (boolean_T *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
  c8_coderArray->size[1] = 0;
}

static void c8_array_int32_T_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_int32_T *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (int32_T *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
}

static void c8_array_creal_T_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_creal_T *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (creal_T *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
}

static void c8_array_boolean_T_2D_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_boolean_T_2D *c8_coderArray)
{
  (void)chartInstance;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data != (boolean_T *)
       NULL)) {
    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_array_int32_T_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_int32_T *c8_coderArray)
{
  (void)chartInstance;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data != (int32_T *)
       NULL)) {
    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_array_creal_T_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_creal_T *c8_coderArray)
{
  (void)chartInstance;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data != (creal_T *)
       NULL)) {
    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_array_real32_T_2D_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real32_T_2D *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (real32_T *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
  c8_coderArray->size[1] = 0;
}

static void c8_array_creal_T_2D_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_creal_T_2D *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (creal_T *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
  c8_coderArray->size[1] = 0;
}

static void c8_array_boolean_T_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_boolean_T *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (boolean_T *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
}

static void c8_array_real32_T_2D_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_real32_T_2D *c8_coderArray)
{
  (void)chartInstance;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data != (real32_T *)
       NULL)) {
    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_array_creal_T_2D_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_creal_T_2D *c8_coderArray)
{
  (void)chartInstance;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data != (creal_T *)
       NULL)) {
    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_array_boolean_T_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_boolean_T *c8_coderArray)
{
  (void)chartInstance;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data != (boolean_T *)
       NULL)) {
    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_array_sOA5t73y81YtFHGIDxk0fKF_C(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_sOA5t73y81YtFHGIDxk *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (c8_sOA5t73y81YtFHGIDxk0fKF *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
}

static void c8_array_int32_T_2D_Constructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_int32_T_2D *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (int32_T *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
  c8_coderArray->size[1] = 0;
}

static void c8_array_sOA5t73y81YtFHGIDxk0fKF_D(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_sOA5t73y81YtFHGIDxk *c8_coderArray)
{
  (void)chartInstance;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data !=
       (c8_sOA5t73y81YtFHGIDxk0fKF *)NULL)) {
    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_array_int32_T_2D_Destructor(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_int32_T_2D *c8_coderArray)
{
  (void)chartInstance;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data != (int32_T *)
       NULL)) {
    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_array_s_sEiEW7j64quwNy6wT5PWYC_(SFc8_untitledInstanceStruct
  *chartInstance, c8_s_sEiEW7j64quwNy6wT5PWYC *c8_pStruct)
{
  c8_array_real_T_Constructor(chartInstance, &c8_pStruct->RegionIndices);
  c8_array_int32_T_Constructor(chartInstance, &c8_pStruct->RegionLengths);
  c8_array_cell_wrap_37_2D_Construct(chartInstance, &c8_pStruct->PixelIdxList);
}

static void c8_array_cell_wrap_37_2D_Construct(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_cell_wrap_37_2D *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (c8_cell_wrap_37 *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
  c8_coderArray->size[1] = 0;
}

static void c8_d_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_s_R6Og1x0kmqQXSF9Pw *c8_coderArray)
{
  (void)chartInstance;
  c8_coderArray->vector.data = (c8_s_R6Og1x0kmqQXSF9Pwa49FD *)NULL;
  c8_coderArray->vector.numel = 0;
  c8_coderArray->vector.allocated = 0;
  c8_coderArray->vector.owner = true;
  c8_coderArray->size[0] = 0;
}

static void c8_b_array_s_sEiEW7j64quwNy6wT5PWYC_(SFc8_untitledInstanceStruct
  *chartInstance, c8_s_sEiEW7j64quwNy6wT5PWYC *c8_pStruct)
{
  c8_array_real_T_Destructor(chartInstance, &c8_pStruct->RegionIndices);
  c8_array_int32_T_Destructor(chartInstance, &c8_pStruct->RegionLengths);
  c8_array_cell_wrap_37_2D_Destructo(chartInstance, &c8_pStruct->PixelIdxList);
}

static void c8_array_cell_wrap_37_2D_Destructo(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_cell_wrap_37_2D *c8_coderArray)
{
  int32_T c8_i;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data !=
       (c8_cell_wrap_37 *)NULL)) {
    for (c8_i = 0; c8_i < c8_coderArray->vector.numel; c8_i++) {
      c8_array_cell_wrap_37_Destructor(chartInstance,
        &c8_coderArray->vector.data[c8_i]);
    }

    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_e_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, c8_coder_array_s_R6Og1x0kmqQXSF9Pw *c8_coderArray)
{
  int32_T c8_i;
  if (c8_coderArray->vector.owner && (c8_coderArray->vector.data !=
       (c8_s_R6Og1x0kmqQXSF9Pwa49FD *)NULL)) {
    for (c8_i = 0; c8_i < c8_coderArray->vector.numel; c8_i++) {
      c8_b_array_s_R6Og1x0kmqQXSF9Pwa49FD_(chartInstance,
        &c8_coderArray->vector.data[c8_i]);
    }

    emlrtFreeMex(c8_coderArray->vector.data);
  }
}

static void c8_array_cell_wrap_37_Copy(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_cell_wrap_37 *c8_dst, const
  c8_cell_wrap_37 *c8_src, const emlrtRTEInfo *c8_srcLocation)
{
  c8_array_real_T_Copy(chartInstance, c8_sp, &c8_dst->f1, &c8_src->f1,
                       c8_srcLocation);
}

static void c8_array_real_T_Copy(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_real_T *c8_dst, const
  c8_coder_array_real_T *c8_src, const emlrtRTEInfo *c8_srcLocation)
{
  int32_T c8_i;
  c8_array_real_T_SetSize(chartInstance, c8_sp, c8_dst, c8_srcLocation,
    c8_src->size[0]);
  for (c8_i = 0; c8_i < c8_src->vector.numel; c8_i++) {
    c8_dst->vector.data[c8_i] = c8_src->vector.data[c8_i];
  }
}

static void c8_array_cell_wrap_37_1s_Construct(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 c8_pMatrix[1])
{
  int32_T c8_i;
  for (c8_i = 0; c8_i < 1; c8_i++) {
    c8_array_cell_wrap_37_Constructor(chartInstance, &c8_pMatrix[c8_i]);
  }
}

static void c8_array_cell_wrap_37_1s_Destructo(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 c8_pMatrix[1])
{
  int32_T c8_i;
  for (c8_i = 0; c8_i < 1; c8_i++) {
    c8_array_cell_wrap_37_Destructor(chartInstance, &c8_pMatrix[c8_i]);
  }
}

static void c8_f_array_s_R6Og1x0kmqQXSF9Pwa49FD_(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_s_R6Og1x0kmqQXSF9Pwa49FD *c8_dst,
  const c8_s_R6Og1x0kmqQXSF9Pwa49FD *c8_src, const emlrtRTEInfo *c8_srcLocation)
{
  c8_dst->Area = c8_src->Area;
  c8_array_real_T_1x2s_Copy(chartInstance, c8_dst->Centroid, c8_src->Centroid);
  c8_array_real_T_1x4s_Copy(chartInstance, c8_dst->BoundingBox,
    c8_src->BoundingBox);
  c8_dst->MajorAxisLength = c8_src->MajorAxisLength;
  c8_dst->MinorAxisLength = c8_src->MinorAxisLength;
  c8_dst->Eccentricity = c8_src->Eccentricity;
  c8_dst->Orientation = c8_src->Orientation;
  c8_array_boolean_T_0x0_Copy(chartInstance, c8_sp, &c8_dst->Image,
    &c8_src->Image, c8_srcLocation);
  c8_array_boolean_T_0x0_Copy(chartInstance, c8_sp, &c8_dst->FilledImage,
    &c8_src->FilledImage, c8_srcLocation);
  c8_dst->FilledArea = c8_src->FilledArea;
  c8_dst->EulerNumber = c8_src->EulerNumber;
  c8_array_real_T_8x2s_Copy(chartInstance, c8_dst->Extrema, c8_src->Extrema);
  c8_dst->EquivDiameter = c8_src->EquivDiameter;
  c8_dst->Extent = c8_src->Extent;
  c8_array_real_T_Copy(chartInstance, c8_sp, &c8_dst->PixelIdxList,
                       &c8_src->PixelIdxList, c8_srcLocation);
  c8_array_real_T_2D_Copy(chartInstance, c8_sp, &c8_dst->PixelList,
    &c8_src->PixelList, c8_srcLocation);
  c8_dst->Perimeter = c8_src->Perimeter;
  c8_dst->Circularity = c8_src->Circularity;
  c8_array_real_T_Copy(chartInstance, c8_sp, &c8_dst->PixelValues,
                       &c8_src->PixelValues, c8_srcLocation);
  c8_array_real_T_1x2s_Copy(chartInstance, c8_dst->WeightedCentroid,
    c8_src->WeightedCentroid);
  c8_dst->MeanIntensity = c8_src->MeanIntensity;
  c8_dst->MinIntensity = c8_src->MinIntensity;
  c8_dst->MaxIntensity = c8_src->MaxIntensity;
  c8_array_real_T_1x0_Copy(chartInstance, c8_sp, &c8_dst->SubarrayIdx,
    &c8_src->SubarrayIdx, c8_srcLocation);
  c8_array_real_T_1x2s_Copy(chartInstance, c8_dst->SubarrayIdxLengths,
    c8_src->SubarrayIdxLengths);
}

static void c8_array_real_T_1x2s_Copy(SFc8_untitledInstanceStruct *chartInstance,
  real_T c8_dst[2], const real_T c8_src[2])
{
  int32_T c8_i;
  (void)chartInstance;
  for (c8_i = 0; c8_i < 2; c8_i++) {
    c8_dst[c8_i] = c8_src[c8_i];
  }
}

static void c8_array_real_T_1x4s_Copy(SFc8_untitledInstanceStruct *chartInstance,
  real_T c8_dst[4], const real_T c8_src[4])
{
  int32_T c8_i;
  (void)chartInstance;
  for (c8_i = 0; c8_i < 4; c8_i++) {
    c8_dst[c8_i] = c8_src[c8_i];
  }
}

static void c8_array_boolean_T_0x0_Copy(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, c8_coder_array_boolean_T_0x0 *c8_dst,
  const c8_coder_array_boolean_T_0x0 *c8_src, const emlrtRTEInfo *c8_srcLocation)
{
  c8_array_boolean_T_0x0_SetSize(chartInstance, c8_sp, c8_dst->size,
    c8_srcLocation, c8_src->size[0], c8_src->size[1]);
  emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U,
    (size_t)(uint32_T)c8_src->size[0], c8_srcLocation, (void *)c8_sp), (size_t)
                     (uint32_T)c8_src->size[1], c8_srcLocation, (void *)c8_sp);
}

static void c8_array_boolean_T_0x0_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, int32_T c8_size[2], const
  emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T c8_size1)
{
  (void)chartInstance;
  emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U,
    (size_t)(uint32_T)c8_size[0], c8_srcLocation, (void *)c8_sp), (size_t)
                     (uint32_T)c8_size[1], c8_srcLocation, (void *)c8_sp);
  c8_size[0] = c8_size0;
  c8_size[1] = c8_size1;
  emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U,
    (size_t)(uint32_T)c8_size[0], c8_srcLocation, (void *)c8_sp), (size_t)
                     (uint32_T)c8_size[1], c8_srcLocation, (void *)c8_sp);
}

static void c8_array_real_T_8x2s_Copy(SFc8_untitledInstanceStruct *chartInstance,
  real_T c8_dst[16], const real_T c8_src[16])
{
  int32_T c8_i;
  (void)chartInstance;
  for (c8_i = 0; c8_i < 16; c8_i++) {
    c8_dst[c8_i] = c8_src[c8_i];
  }
}

static void c8_array_real_T_2D_Copy(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_real_T_2D *c8_dst, const
  c8_coder_array_real_T_2D *c8_src, const emlrtRTEInfo *c8_srcLocation)
{
  int32_T c8_i;
  c8_array_real_T_2D_SetSize(chartInstance, c8_sp, c8_dst, c8_srcLocation,
    c8_src->size[0], c8_src->size[1]);
  for (c8_i = 0; c8_i < c8_src->vector.numel; c8_i++) {
    c8_dst->vector.data[c8_i] = c8_src->vector.data[c8_i];
  }
}

static void c8_array_real_T_1x0_Copy(SFc8_untitledInstanceStruct *chartInstance,
  const emlrtStack *c8_sp, c8_coder_array_real_T_1x0 *c8_dst, const
  c8_coder_array_real_T_1x0 *c8_src, const emlrtRTEInfo *c8_srcLocation)
{
  c8_array_real_T_1x0_SetSize(chartInstance, c8_sp, c8_dst->size, c8_srcLocation,
    c8_src->size[0], c8_src->size[1]);
  emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U,
    (size_t)(uint32_T)c8_src->size[0], c8_srcLocation, (void *)c8_sp), (size_t)
                     (uint32_T)c8_src->size[1], c8_srcLocation, (void *)c8_sp);
}

static void c8_array_real_T_1x0_SetSize(SFc8_untitledInstanceStruct
  *chartInstance, const emlrtStack *c8_sp, int32_T c8_size[2], const
  emlrtRTEInfo *c8_srcLocation, int32_T c8_size0, int32_T c8_size1)
{
  (void)chartInstance;
  emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U,
    (size_t)(uint32_T)c8_size[0], c8_srcLocation, (void *)c8_sp), (size_t)
                     (uint32_T)c8_size[1], c8_srcLocation, (void *)c8_sp);
  c8_size[0] = c8_size0;
  c8_size[1] = c8_size1;
  emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U,
    (size_t)(uint32_T)c8_size[0], c8_srcLocation, (void *)c8_sp), (size_t)
                     (uint32_T)c8_size[1], c8_srcLocation, (void *)c8_sp);
}

static void c8_array_cell_wrap_37_2s_Construct(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 c8_pMatrix[2])
{
  int32_T c8_i;
  for (c8_i = 0; c8_i < 2; c8_i++) {
    c8_array_cell_wrap_37_Constructor(chartInstance, &c8_pMatrix[c8_i]);
  }
}

static void c8_array_cell_wrap_37_2s_Destructo(SFc8_untitledInstanceStruct
  *chartInstance, c8_cell_wrap_37 c8_pMatrix[2])
{
  int32_T c8_i;
  for (c8_i = 0; c8_i < 2; c8_i++) {
    c8_array_cell_wrap_37_Destructor(chartInstance, &c8_pMatrix[c8_i]);
  }
}

static int32_T c8_div_nzp_s32(SFc8_untitledInstanceStruct *chartInstance,
  int32_T c8_numerator, int32_T c8_denominator, int32_T c8_EMLOvCount_src_loc,
  uint32_T c8_ssid_src_loc, int32_T c8_offset_src_loc, int32_T c8_length_src_loc)
{
  int32_T c8_quotient;
  uint32_T c8_absDenominator;
  uint32_T c8_absNumerator;
  uint32_T c8_tempAbsQuotient;
  boolean_T c8_quotientNeedsNegation;
  (void)chartInstance;
  (void)c8_EMLOvCount_src_loc;
  (void)c8_ssid_src_loc;
  (void)c8_offset_src_loc;
  (void)c8_length_src_loc;
  if (c8_numerator < 0) {
    c8_absNumerator = ~(uint32_T)c8_numerator + 1U;
  } else {
    c8_absNumerator = (uint32_T)c8_numerator;
  }

  if (c8_denominator < 0) {
    c8_absDenominator = ~(uint32_T)c8_denominator + 1U;
  } else {
    c8_absDenominator = (uint32_T)c8_denominator;
  }

  c8_quotientNeedsNegation = ((c8_numerator < 0) != (c8_denominator < 0));
  c8_tempAbsQuotient = c8_absNumerator / c8_absDenominator;
  if (c8_quotientNeedsNegation) {
    c8_quotient = -(int32_T)c8_tempAbsQuotient;
  } else {
    c8_quotient = (int32_T)c8_tempAbsQuotient;
  }

  return c8_quotient;
}

static void init_dsm_address_info(SFc8_untitledInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc8_untitledInstanceStruct *chartInstance)
{
  chartInstance->c8_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c8_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c8_image = (boolean_T (*)[521945])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c8_circle_detect = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c8_untitled_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1854139750U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4180261907U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1962233872U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1785930194U);
}

mxArray *sf_c8_untitled_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,8);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.Grayto8Buildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.TbbhistBuildable"));
  mxSetCell(mxcell3p, 5, mxCreateString(
             "images.internal.coder.buildable.Ordfilt2Buildable"));
  mxSetCell(mxcell3p, 6, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  mxSetCell(mxcell3p, 7, mxCreateString(
             "images.internal.coder.buildable.ImregionalmaxBuildable"));
  return(mxcell3p);
}

mxArray *sf_c8_untitled_jit_fallback_info(void)
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

mxArray *sf_c8_untitled_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c8_untitled(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDWYGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYeAD/aU6RdxAOl3QNLPgkU/L5J+ASg/ObMoOSc1PiW1JDW5BBpOIA"
    "AAY1kRvQ=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c8_untitled_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "s1bcd3YXmgddE80GszwGsvG";
}

static void sf_opaque_initialize_c8_untitled(void *chartInstanceVar)
{
  initialize_params_c8_untitled((SFc8_untitledInstanceStruct*) chartInstanceVar);
  initialize_c8_untitled((SFc8_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c8_untitled(void *chartInstanceVar)
{
  enable_c8_untitled((SFc8_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c8_untitled(void *chartInstanceVar)
{
  disable_c8_untitled((SFc8_untitledInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c8_untitled(void *chartInstanceVar)
{
  sf_gateway_c8_untitled((SFc8_untitledInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c8_untitled(SimStruct* S)
{
  return get_sim_state_c8_untitled((SFc8_untitledInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c8_untitled(SimStruct* S, const mxArray *st)
{
  set_sim_state_c8_untitled((SFc8_untitledInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c8_untitled(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc8_untitledInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_untitled_optimization_info();
    }

    mdl_cleanup_runtime_resources_c8_untitled((SFc8_untitledInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c8_untitled(void *chartInstanceVar)
{
  mdl_start_c8_untitled((SFc8_untitledInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc8_untitledInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c8_untitled(void *chartInstanceVar)
{
  mdl_terminate_c8_untitled((SFc8_untitledInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c8_untitled(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c8_untitled((SFc8_untitledInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c8_untitled_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [20] = {
    "eNrdWN1uG0UUHkchoqWNioRULirBJUJCShsh5QJBE/8ESwmxsFMKN9V45tg7yuzsdn7sOK/BFS/",
    "Qiz5F1XdA6hXPwCV3cGa9dizHODO21ARW2mzO7n5zzvnm/K1JpXlM8NjG8/lDQrbw+iGeG2R8fF",
    "DKlZlzfH+TfFPKrbuEsIRq21S9jMQfLOPQB9V2vZ44j8Qql7aopqlZQa+iKfwIJpPOikzFGS9UD",
    "zQohgvkmbZReo1InRTqrOEU85rNT4lgSTvJnOQHuCDlJ0qO/k1v7mwLNdaEBmYbANwmOnP9pCFp",
    "fzkL2g6rCbAz49JorgzYtsu9q+bYSStyCfVzYE1lLEUWzDX+ti21ULXn0REiTHuCztJcCqrCuU6",
    "oaUOO0WHhNOf498RZZC9QL+rrCkVtpgWV9VRWfYQHYlsS7TzGsJbRPNvU1qDr+n2h+p5d7VJQ6D",
    "/GSQBXvWo2AE37cKIic9B7Vz8vNngal+E52PRhuVIOunS8K2YlbKG3PkCGzIp6G0xVqZQmDtvJ8",
    "iMYgCz016ilK2DH+iPAxgjeyZ5R7bMgMpOcEi8dlNhqprgI3+HBHKoouD9g8QyAi9SHFHCkeWr6",
    "dKHrYtIZm6VVTKPa0VGgvqvYprKge5RBcO3TVBhAg4u4itTLhaFd6dHIki28DF4B1MpQYnpO1Ya",
    "ZPkOOY4vsJVc+E+LQwPtQAwtFwahjdD+j0gXanBqscD48Tg1WrDi9iPX5sxKYUZYA9/1ESDgG4x",
    "cwwfUZ+8g+ejsQdlQDw7TIQzPJGeDYSDxLnVEOp+pMZUPV0FnaLieCJXEFgFWDaoVt4QDbkh410",
    "PgwqzW87PjIWmU8S6mVtOtj4xAUdhbvq++ElGFW1RWObmjQOti2uMDWrowwFsepUb3IAV7Mo59W",
    "4ubRj0t5d5pLTdPRuFMU27DCSWm/Wwx70BEpFDfaFGeKsVgeXu8OudR7Z2O53g38r7IijqyJezq",
    "D21zAz0czuAelzPZeOIXFxXO8SP+9AJ5DcOQK7pLfyfWLGXxlgV4yc11nX2Z5uj+nZ3MOt1Vy9e",
    "aPt7/zi9e/HXy5/erXvcbf6+h/FxnH26X8aDKXTTvX4Epx9+9+f00cPJyLAy+bx13Gd39+nvY5r",
    "+/tHJqL4aEZHI73JdLeyf3P8bRY2Io6qVmTl99YXqZuPPv79fdm7N26Zv07M/FEyJ/frYf/5GlI",
    "3tyf48vLTGgm4QUvWt1cHN/2enFT9ekm7QypY5X3jCPvGbeuf7H1+b/+/s6SukDm3n9wi/0gS+p",
    "TTJ++bX69I3F96bNS/nb67VxNhOQLpvfyMQ7YvUVP/yfx/Vckf5O5oe75K3/8+2V3X1E5wnF9/D",
    "lU3m5p/7vT9JEGahZ/E91EHwqdl+/N5beXh0LxbGi+evzk6yfr9LV/AA9iAgY=",
    ""
  };

  static char newstr [1413] = "";
  newstr[0] = '\0';
  for (i = 0; i < 20; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c8_untitled(SimStruct *S)
{
  const char* newstr = sf_c8_untitled_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3586318016U));
  ssSetChecksum1(S,(2578086500U));
  ssSetChecksum2(S,(2785946178U));
  ssSetChecksum3(S,(4282792083U));
}

static void mdlRTW_c8_untitled(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c8_untitled(SimStruct *S)
{
  SFc8_untitledInstanceStruct *chartInstance;
  chartInstance = (SFc8_untitledInstanceStruct *)utMalloc(sizeof
    (SFc8_untitledInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc8_untitledInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c8_untitled;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c8_untitled;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c8_untitled;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c8_untitled;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c8_untitled;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c8_untitled;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c8_untitled;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c8_untitled;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c8_untitled;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c8_untitled;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c8_untitled;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c8_untitled;
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

  mdl_setup_runtime_resources_c8_untitled(chartInstance);
}

void c8_untitled_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c8_untitled(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c8_untitled(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c8_untitled(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c8_untitled_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
