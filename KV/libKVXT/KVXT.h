/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 :
* 所属组件 : KV
* 模块名称 : KVXT
* 文件名称 : KVXT.h
* 概要描述 :
*	
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _KVXT_H_
#define _KVXT_H_

/*-------------------- 头文件 --------------------*/
#include"KVXT_extern.h"
#include<base.h>
#include<stdlib.h>
//#include<stdbool.h> // 在base.h中有bool的定义
#include<string.h>

#include<KVXAxLOTxPAR_tc.h>
#include<MEXA_tc.h>
#include<MEXAxVSA_tc.h>
#include<DDXA.h>
#include<THXA.h>
#include<OOXA.h>
#include<ERXA.h>
#include<PLXA.h>
#include<KVMA_tc.h>


/*-------------------- 宏定义 --------------------*/
#define _CRT_SECURE_NO_WARNINGS







/*----------------------- 枚举定义 -----------------------*/








/*------------------------ 结构体 ------------------------*/
// 已知结构体
typedef struct
{
	// 这个在.got表里可以看到结构体内容
	char unk_s0x0[0x4];
	char unk_s0x4[0xC];
	char component[0x60];
}KVXT_local_OOXA_local_KVXT_singleton_object;



// 未知结构体
typedef struct
{
	MEXAxVSA_XVSA_thresholds XVSA_warning_levels; // 0x0
	MEXAxVSA_XVSA_thresholds XVSA_error_levels; // 0x28
}KVXT_unk_1; // 0x50

typedef struct
{
	WPxCHUCK_chuck_id_enum stage_id; // 0x0
	MEXAxWAFxPLATE_wafer_level_plate plate_id; // 0x4
	KVXT_TIS_drift_ref_struct drift_refs; // 0x8
	bool validity; // 0x58
}KVXT_unk_2; // 0x60

typedef struct
{
	WPxCHUCK_chuck_id_enum chuck_id; // 0x0
	MEXAxWAFxPLATE_wafer_level_plate plate_id; // 0x4
	KVXA_plate_level_info plate_level_info; // 0x8
}KVXT_unk_3; // 0x21A8

typedef struct
{
	bool LS_drift_corr_update_needed;
	bool fallback_shape_update_needed;
}KVXT_unk_4; // 这个好像替换不了

typedef struct
{
	WPxCHUCK_chuck_id_enum chuck_id;
	bool found_stable_chuck_profile;
}KVXT_unk_5;

typedef struct
{
	KVXT_TIS_drift_ref_struct drift_refs;
	bool b0x50;
}KVXT_unk_6;

typedef struct
{
	WPxCHUCK_chuck_id_enum chuck_id;
	MEXAxWAFxPLATE_wafer_level_plate plate_id;
}KVXT_chuck_plate_id; // 这个结构体好像找不到，别的结构体除了有这两个变量之外，还有其他的，和申请空间大小冲突

typedef struct
{
	WPxCHUCK_chuck_id_enum chuck_id; // 0x0
	MEXAxWAFxPLATE_wafer_level_plate plate_id; // 0x4
	MEXAxVSA_XVSA_scan_data scan_result; // 0x8
}KVXT_unk_7; // 0xBB90

typedef struct
{
	WPxCHUCK_chuck_id_enum chuck_id; // 0x0
	MEXAxWAFxPLATE_wafer_level_plate plate_id; // 0x4
	zrxryvect plate_wedge; // 0x8
}KVXT_unk_8; // 0x20

typedef struct
{
	WPxCHUCK_chuck_id_enum chuck_id; // 0x0
	MEXAxWAFxPLATE_wafer_level_plate plate_id; // 0x4
	xyzvect plate_level_ref_xyz; // 0x8
}KVXT_unk_9; // 0x20

typedef struct
{
	LEXAxSPOT_spot_id_t spot_id; // 0x0
	xyzvect le_spot_xyz; // 0x8
}KVXT_unk_10; // 0x20

typedef struct
{
	MEXAxVSA_iVSA_level_lanes measured_iVSA_lanes; // 0x0
	xyzvect plate_level_ref; // 0x110
}libKVXT_unk_11; // 0x128

typedef struct
{
	int * a;
	int * b;
}libKVXT_unk_12;

typedef struct
{
	WPxCHUCK_chuck_id_enum chuck_id;
	KVXA_iVSA_level_results level_results_TIS1;
	KVXA_iVSA_level_results level_results_TIS2;
}libKVXT_unk_13;

typedef struct
{
	KVXT_iVSA_plate_fallback_shape fallback_shape_TIS1;
	KVXT_iVSA_plate_fallback_shape fallback_shape_TIS2;
}libKVXT_unk_14;

typedef struct
{
	MEXAxVSA_XVSA_scan_data TIS1;
	MEXAxVSA_XVSA_scan_data TIS2;
	KVXA_XVSA_chuck_model_results xvsa_results;
	bool xvsa_results_valid;
}libKVXT_unk_15;

typedef struct
{
	WPxCHUCK_chuck_id_enum chuck_id; // 0x0
	KVXT_iVSA_plate_fallback_shape fallback_shape_TIS1; // 0x8
	KVXT_iVSA_plate_fallback_shape fallback_shape_TIS2; // 0x98
}libKVXT_unk_16; // 0x128



/*----------------------- 函数声明 -----------------------*/
int KVXT_isim_flush_LS_drift_filter(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id);

int KVXT_isim_flush_LS_drift_SOSI_filter(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id);

int KVXT_isim_get_al_athena_zrxry(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	zrxryvect *plibKVXT_unk_1); // 返回值默认0

int KVXT_isim_get_chuck_id(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum *chuck_id_p); // 返回值默认0

int KVXT_isim_get_comp_sim_mode(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	THXA_SIM_MODE *comp_sim_mode_p); // 返回值默认0

int KVXT_isim_get_diagnostics(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	char *sArg2); // 默认返回0

int KVXT_isim_get_GLC_capture_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	KVXA_capture_params *capture_params_p); // 返回值默认0

int KVXT_isim_get_GLC_meas_results(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	KVXA_meas_results *glc_meas_results); // 返回值为int

int KVXT_isim_get_global_wafer_wedge(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	zrxryvect *global_wafer_wedge_p); // 返回值默认0

int KVXT_isim_get_high_precision_SA_levelling(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	bool *high_precision_levelling_p); // 返回值默认0

int KVXT_isim_get_iVSA_update_needed(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id,
	bool *LS_drift_corr_update_needed_p,
	bool *fallback_shape_update_needed_p); // 返回值默认0

int KVXT_isim_get_le_spot_id_SA(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	LEXAxSPOT_spot_selection_t *le_spot_id_sa); // 返回值默认0

int KVXT_isim_get_le_spot_id_WM(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	LEXAxSPOT_spot_selection_t *spot_id); // 返回值默认0

int KVXT_isim_get_le_spot_xyz(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	LEXAxSPOT_spot_id_t spot_id, 
	xyzvect *le_spot_xyz); // 返回值默认0

int KVXT_isim_get_lot_GLC_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	KVXAxLOTxPAR_GLC_lot_data *pKVXAxLOTxPAR_GLC_lot_data); // 返回值为int

int KVXT_isim_get_lot_WM_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	KVXAxLOTxPAR_WM_lot_data_t *pKVXAxLOTxPAR_WM_lot_data_t); // 返回值为int

int KVXT_isim_get_LS_drift_SOSI_update_needed(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id, 
	bool *KVXT_isim_set_plate_wedgeLS_drift_SOSI_corr_update_needed_p); // 返回值默认0

int KVXT_isim_get_period_XVSA(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	MBXA_period_struct *period); // 返回值默认0

int KVXT_isim_get_plate_drift_refs(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id, 
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXT_TIS_drift_ref_struct *drift_refs, 
	bool *validity); // 返回值默认0

int KVXT_isim_get_plate_level_ref_xyz(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	xyzvect *plate_level_ref_xyz); // 返回值默认0

int KVXT_isim_get_plate_wedge(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id, 
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	zrxryvect *plate_wedge); // 返回值默认0

int KVXT_isim_get_SA_capture_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	KVXA_capture_params *capture_params); // 返回值默认0

int KVXT_isim_get_SA_level_high_precision_count(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	int *precision_count); // 返回值默认0

int KVXT_isim_get_SA_model_done(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	bool *sa_model_done); // 返回值默认0

int KVXT_isim_get_SA_plate_level_info(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id, 
	KVXA_plate_level_info *plate_level_info); // 返回值默认0

int KVXT_isim_get_wafer_map(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id,
	KWXA_wafer_map *wafer_map_p); // 返回值默认0

int KVXT_isim_get_ws_zeroing_error_zrxry(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id,
	zrxryvect *ws_zeroing_error_zrxry); // 返回值默认0

int KVXT_isim_get_XVSA_scan_results(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id, 
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	MEXAxVSA_XVSA_scan_data *scan_data); // 返回值默认0

int KVXT_isim_invalidate_iVSA_fallback_shapes(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id); // 返回值默认0

int KVXT_isim_iVSA_to_XVSA(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	MEXAxVSA_iVSA_level_lanes * measured_iVSA_lanes, 
	xyzvect * plate_level_ref, 
	MEXAxVSA_XVSA_profile * profile); // 返回值默认0

int KVXT_isim_log_stubs_get_last_error_log(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	int *exception_code, 
	int *exception_link); // 返回值默认0

int KVXT_isim_model_iVSA_fallback_shapes(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id, 
	KVXA_iVSA_level_results *level_results_TIS1_p, 
	KVXA_iVSA_level_results *level_results_TIS2_p,
	KVXT_iVSA_plate_fallback_shape  *fallback_shape_TIS1_p, 
	KVXT_iVSA_plate_fallback_shape  *fallback_shape_TIS2_p); // 返回值默认0

int KVXT_isim_reset_chuck_spot_detection(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id); // 返回值默认0

int KVXT_isim_retrieve_LS_drift_SOSI(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,  // 返回值默认0
	double * Ry_drift);

int KVXT_isim_retrieve_XVSA_scan_data(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id, 
	MEXAxVSA_XVSA_scan_data *tis1_scan_data, 
	MEXAxVSA_XVSA_scan_data *tis2_scan_data,
	KVXA_XVSA_chuck_model_results *xvsa_results, 
	bool *xvsa_results_valid); // 返回值默认0

int KVXT_isim_set_chuck_id(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id); // 返回值默认0

int KVXT_isim_set_comp_sim_mode(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	bool comp_sim_mode); // 返回值默认0

void KVXT_isim_set_context(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	MEXAxGL_context_list *context);

int KVXT_isim_set_diagnostics(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	MEXAxGL_state *state); // 返回值默认0

int KVXT_isim_set_GLC_capture_params(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	KVXA_capture_params *capture_params); // 返回值默认0

int KVXT_isim_set_global_wafer_wedge(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	zrxryvect *global_wafer_wedge); // 返回值默认0

int KVXT_isim_set_high_precision_SA_levelling(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	bool high_precision_levelling); // 返回值默认0

int KVXT_isim_set_iVSA_fallback_shapes(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum *chuck_id, 
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS1_p, 
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS2_p); // 返回值默认0

int KVXT_isim_set_al_athena_zrxry(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	zrxryvect *al_athena_zrxry); // 返回值默认0

int KVXT_isim_set_le_spot_id_SA(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	LEXAxSPOT_spot_selection_t spot_id); // 返回值默认0

int KVXT_isim_set_le_spot_id_WM(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	LEXAxSPOT_spot_selection_t spot_id); // 返回值默认0

int KVXT_isim_set_le_spot_xyz(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	LEXAxSPOT_spot_id_t spot_id,
	xyzvect *le_spot_xyz); // 返回值默认0

int KVXT_isim_set_lot_GLC_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXAxLOTxPAR_GLC_lot_data *glc_lot_data); // 返回值默认0

int KVXT_isim_set_lot_WM_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXAxLOTxPAR_WM_lot_data_t *wm_lot_data); // 返回值默认0

int KVXT_isim_set_plate_drift_refs(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum stage_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXT_TIS_drift_ref_struct *drift_refs,
	bool validity); // 返回值默认0

int KVXT_isim_set_plate_level_ref_xyz(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum stage_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	xyzvect *plate_level_ref_xyz); // 返回值默认0

int KVXT_isim_set_plate_wedge(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum stage_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	zrxryvect *plate_wedge); // 返回值默认0

int KVXT_isim_set_SA_capture_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXA_capture_params *capture_params); // 返回值默认0

int KVXT_isim_set_SA_level_high_precision_count(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	int precision_count); // 返回值默认0

int KVXT_isim_set_SA_model_done(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	bool sa_model_done); // 返回值默认0

int KVXT_isim_set_SA_plate_level_info(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXA_plate_level_info *plate_level_info); // 返回值默认0

int KVXT_isim_set_ws_zeroing_error_zrxry(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	zrxryvect *ws_zeroing_error_zrxry); // 返回值默认0

int KVXT_isim_set_XVSA_drift_ref_profile(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	bool found_stable_chuck_profile); // 返回值默认0

int KVXT_isim_set_XVSA_scan_refs(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	MEXAxVSA_XVSA_scan_data *scan_result); // 返回值默认0

int KVXT_isim_set_XVSA_thresholds(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	MEXAxVSA_XVSA_thresholds *XVSA_warning_levels,
	MEXAxVSA_XVSA_thresholds *XVSA_error_levels); // 返回值默认0



#endif // _KVXT_H_