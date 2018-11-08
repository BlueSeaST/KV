
/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 :
* 所属组件 : KV
* 模块名称 : libKVXT
* 文件名称 : libKVXT.c
* 概要描述 :
*
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#include<KVXT.h>


/*----------------------- 外部变量声明 -----------------------*/




/*----------------------- 外部函数声明 -----------------------*/





/*----------------------- 全局变量声明 -----------------------*/
KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object;



/*----------------------- 静态函数声明 -----------------------*/





/*----------------------- 函数实现 -----------------------*/
// 不需要翻译的模块内部函数的空实现
int KVXT_isim_flush_LS_drift_filter(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id)
{
	return 0;
}

int KVXT_isim_flush_LS_drift_SOSI_filter(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id)
{
	return 0;
}

int KVXT_isim_get_al_athena_zrxry(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	zrxryvect *plibKVXT_unk_1)
{
	return 0;
}

int KVXT_isim_get_chuck_id(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum *chuck_id_p)
{
	return 0;
}

int KVXT_isim_get_comp_sim_mode(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	THXA_SIM_MODE *comp_sim_mode_p)
{
	return 0;
}

int KVXT_isim_get_diagnostics(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	char *sArg2)
{
	return 0;
}

int KVXT_isim_get_GLC_capture_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXA_capture_params *capture_params_p)
{
	return 0;
}

int KVXT_isim_get_GLC_meas_results(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXA_meas_results *glc_meas_results)
{
	return 0;
}

int KVXT_isim_get_global_wafer_wedge(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	zrxryvect *global_wafer_wedge_p)
{
	return 0;
}

int KVXT_isim_get_high_precision_SA_levelling(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	bool *high_precision_levelling_p)
{
	return 0;
}

int KVXT_isim_get_iVSA_update_needed(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	bool *LS_drift_corr_update_needed_p,
	bool *fallback_shape_update_needed_p)
{
	return 0;
}

int KVXT_isim_get_le_spot_id_SA(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	LEXAxSPOT_spot_selection_t *le_spot_id_sa)
{
	return 0;
}

int KVXT_isim_get_le_spot_id_WM(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	LEXAxSPOT_spot_selection_t *spot_id)
{
	return 0;
}

int KVXT_isim_get_le_spot_xyz(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	LEXAxSPOT_spot_id_t spot_id,
	xyzvect *le_spot_xyz)
{
	return 0;
}

int KVXT_isim_get_lot_GLC_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXAxLOTxPAR_GLC_lot_data *pKVXAxLOTxPAR_GLC_lot_data)
{
	return 0;
}

int KVXT_isim_get_lot_WM_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXAxLOTxPAR_WM_lot_data_t *pKVXAxLOTxPAR_WM_lot_data_t)
{
	return 0;
}

int KVXT_isim_get_LS_drift_SOSI_update_needed(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	bool *KVXT_isim_set_plate_wedgeLS_drift_SOSI_corr_update_needed_p)
{
	return 0;
}

int KVXT_isim_get_period_XVSA(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	MBXA_period_struct *period)
{
	return 0;
}

int KVXT_isim_get_plate_drift_refs(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXT_TIS_drift_ref_struct *drift_refs,
	bool *validity)
{
	return 0;
}

int KVXT_isim_get_plate_level_ref_xyz(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	xyzvect *plate_level_ref_xyz)
{
	return 0;
}

int KVXT_isim_get_plate_wedge(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	zrxryvect *plate_wedge)
{
	return 0;
}

int KVXT_isim_get_SA_capture_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXA_capture_params *capture_params)
{
	return 0;
}

int KVXT_isim_get_SA_level_high_precision_count(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	int *precision_count)
{
	return 0;
}

int KVXT_isim_get_SA_model_done(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	bool *sa_model_done)
{
	return 0;
}

int KVXT_isim_get_SA_plate_level_info(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXA_plate_level_info *plate_level_info)
{
	return 0;
}

int KVXT_isim_get_wafer_map(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	KWXA_wafer_map *wafer_map_p)
{
	return 0;
}

int KVXT_isim_get_ws_zeroing_error_zrxry(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	zrxryvect *ws_zeroing_error_zrxry)
{
	return 0;
}

int KVXT_isim_get_XVSA_scan_results(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	MEXAxVSA_XVSA_scan_data *scan_data)
{
	return 0;
}

int KVXT_isim_invalidate_iVSA_fallback_shapes(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id)
{
	return 0;
}

int KVXT_isim_iVSA_to_XVSA(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	MEXAxVSA_iVSA_level_lanes * measured_iVSA_lanes,
	xyzvect * plate_level_ref,
	MEXAxVSA_XVSA_profile * profile)
{
	return 0;
}

int KVXT_isim_log_stubs_get_last_error_log(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	int *exception_code,
	int *exception_link)
{
	return 0;
}
int KVXT_isim_model_iVSA_fallback_shapes(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	KVXA_iVSA_level_results *level_results_TIS1_p,
	KVXA_iVSA_level_results *level_results_TIS2_p,
	KVXT_iVSA_plate_fallback_shape  *fallback_shape_TIS1_p,
	KVXT_iVSA_plate_fallback_shape  *fallback_shape_TIS2_p)
{
	return 0;
}

int KVXT_isim_reset_chuck_spot_detection(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id)
{
	return 0;
}

int KVXT_isim_retrieve_LS_drift_SOSI(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	double * Ry_drift)
{
	return 0;
}

int KVXT_isim_retrieve_XVSA_scan_data(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxVSA_XVSA_scan_data *tis1_scan_data,
	MEXAxVSA_XVSA_scan_data *tis2_scan_data,
	KVXA_XVSA_chuck_model_results *xvsa_results,
	bool *xvsa_results_valid)
{
	return 0;
}

int KVXT_isim_set_chuck_id(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id)
{
	return 0;
}

int KVXT_isim_set_comp_sim_mode(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	bool comp_sim_mode)
{
	return 0;
}

void KVXT_isim_set_context(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	MEXAxGL_context_list *context)
{
	return 0;
}
int KVXT_isim_set_diagnostics(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	MEXAxGL_state *state)
{
	return 0;
}

int KVXT_isim_set_GLC_capture_params(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	KVXA_capture_params *capture_params)
{
	return 0;
}

int KVXT_isim_set_global_wafer_wedge(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	zrxryvect *global_wafer_wedge)
{
	return 0;
}

int KVXT_isim_set_high_precision_SA_levelling(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	bool high_precision_levelling)
{
	return 0;
}

int KVXT_isim_set_iVSA_fallback_shapes(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum *chuck_id,
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS1_p,
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS2_p)
{
	return 0;
}

int KVXT_isim_set_al_athena_zrxry(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
	zrxryvect *al_athena_zrxry)
{
	return 0;
}

int KVXT_isim_set_le_spot_id_SA(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	LEXAxSPOT_spot_selection_t spot_id)
{
	return 0;
}

int KVXT_isim_set_le_spot_id_WM(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	LEXAxSPOT_spot_selection_t spot_id)
{
	return 0;
}

int KVXT_isim_set_le_spot_xyz(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	LEXAxSPOT_spot_id_t spot_id,
	xyzvect *le_spot_xyz)
{
	return 0;
}

int KVXT_isim_set_lot_GLC_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXAxLOTxPAR_GLC_lot_data *glc_lot_data)
{
	return 0;
}

int KVXT_isim_set_lot_WM_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXAxLOTxPAR_WM_lot_data_t *wm_lot_data)
{
	return 0;
}

int KVXT_isim_set_plate_drift_refs(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum stage_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXT_TIS_drift_ref_struct *drift_refs,
	bool validity)
{
	return 0;
}

int KVXT_isim_set_plate_level_ref_xyz(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum stage_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	xyzvect *plate_level_ref_xyz)
{
	return 0;
}

int KVXT_isim_set_plate_wedge(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum stage_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	zrxryvect *plate_wedge)
{
	return 0;
}
int KVXT_isim_set_SA_capture_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXA_capture_params *capture_params)
{
	return 0;
}

int KVXT_isim_set_SA_level_high_precision_count(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	int precision_count)
{
	return 0;
}

int KVXT_isim_set_SA_model_done(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	bool sa_model_done)
{
	return 0;
}

int KVXT_isim_set_SA_plate_level_info(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXA_plate_level_info *plate_level_info)
{
	return 0;
}

int KVXT_isim_set_ws_zeroing_error_zrxry(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	zrxryvect *ws_zeroing_error_zrxry)
{
	return 0;
}

int KVXT_isim_set_XVSA_drift_ref_profile(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	bool found_stable_chuck_profile)
{
	return 0;
}

int KVXT_isim_set_XVSA_scan_refs(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	MEXAxVSA_XVSA_scan_data *scan_result)
{
	return 0;
}

int KVXT_isim_set_XVSA_thresholds(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	MEXAxVSA_XVSA_thresholds *XVSA_warning_levels,
	MEXAxVSA_XVSA_thresholds *XVSA_error_levels)
{
	return 0;
}

// 需要翻译的函数的实现
// 函数名：KVXT_flush_LS_drift_filter
int KVXT_flush_LS_drift_filter(WPxCHUCK_chuck_id_enum chuck_id)
{
	//WPxCHUCK_chuck_id_enum chuck_id = i0;
	WPxCHUCK_chuck_id_enum *req_msg_data = NULL;
	int(*pKVXT_isim_flush_LS_drift_filter)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;

	THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_E2C0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000E0FC
	if (THXAcheckSimMode("KV", 1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_E12C
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x29, 0x26A76485, &pKVXT_isim_flush_LS_drift_filter);
	}
	else
	{
		// .text:0000E11C
		pKVXT_isim_flush_LS_drift_filter = KVXT_isim_flush_LS_drift_filter;
	}
	// loc_E160
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_flush_LS_drift_filter], %g1
		// ------>loc_E30C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000E170
	if (pKVXT_isim_flush_LS_drift_filter == NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_E220
		iErrorCode = pKVXT_isim_flush_LS_drift_filter(local_OOXA_local_KVXT_singleton_object, chuck_id);
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_E2C0
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component);
			return iErrorCode;
		}
		// loc_E248
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000E17C 
	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{
		// st      %o0, [%fp+iErrorCode]
		// ------>loc_E238
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_E2C0
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component);
			return iErrorCode;
		}
		// loc_E248
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000E194
	*req_msg_data = chuck_id;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x29, 0x26A76485,
		req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		// st      %o0, [%fp+iErrorCode]
		// ------>loc_E238
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_E2C0
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component);
			return iErrorCode;
		}
		// loc_E248
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000E200
	if (rep_msg_data == NULL)
	{
		// sethi   %hi(0), %g1
		// ------>loc_E248
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000E210
	OOXA_release_buffer(rep_msg_data);
	// ld      [%fp+iErrorCode], %o5
	// ------>loc_E23C
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_E2C0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component);
		return iErrorCode;
	}
	// loc_E248
	THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
	THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	return iErrorCode;
}

// 函数名：KVXT_flush_LS_drift_SOSI_filter
int KVXT_flush_LS_drift_SOSI_filter(WPxCHUCK_chuck_id_enum chuck_id)
{
	//WPxCHUCK_chuck_id_enum chuck_id = i0;
	WPxCHUCK_chuck_id_enum *req_msg_data = NULL;
	int(*pKVXT_isim_flush_LS_drift_SOSI_filter)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id) = NULL;
	int iErrorCode = 0; // 标志位
	char *rep_msg_data = NULL;
	int act_len = 0;

	THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id); // 
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_CE98
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000CCD4
	if (THXAcheckSimMode("KV", 1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// loc_CD04
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x24, 0x683A75CE, &pKVXT_isim_flush_LS_drift_SOSI_filter);
	}
	else
	{
		// sethi   %hi(0x400), %g1
		// .text:0000CCF4
		pKVXT_isim_flush_LS_drift_SOSI_filter = &KVXT_isim_flush_LS_drift_SOSI_filter;
	}
	// loc_CD38
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_flush_LS_drift_SOSI_filter], %g1
		// ------>loc_CEE4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000CD48
	if (pKVXT_isim_flush_LS_drift_SOSI_filter != NULL)
	{
		// sethi   %hi(0x400), %g2
		// loc_CDF8
		iErrorCode = pKVXT_isim_flush_LS_drift_SOSI_filter(local_OOXA_local_KVXT_singleton_object, chuck_id);
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_CE98
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		// loc_CE20
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 1, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000CD54
	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{
		// st      %o0, [%fp+iErrorCode]
		// ------>loc_CE10
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_CE98
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		// loc_CE20
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 1, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000CD6C
	*req_msg_data = chuck_id;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x24, 0x683A75CE,
		req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		// st      %o0, [%fp+iErrorCode]
		// ------>loc_CE10
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_CE98
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		// loc_CE20
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 1, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000CDD8
	if (rep_msg_data == NULL)
	{
		// sethi   %hi(0), %g1
		// ------>loc_CE20
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 1, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000CDE8
	OOXA_release_buffer(rep_msg_data);
	// ld      [%fp+iErrorCode], %o5
	// ------>loc_CE14
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_CE98
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// loc_CE20
	THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
	THXAtrace("KV", 1, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	return iErrorCode;
}

// 函数名：KVXT_get_al_athena_zrxry
int KVXT_get_al_athena_zrxry(zrxryvect *al_athena_zrxry)
{
	//zrxryvect *al_athena_zrxry = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_al_athena_zrxry)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, zrxryvect *plibKVXT_unk_1) = NULL;
	int iErrorCode = 0;
	zrxryvect *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (al_athena_zrxry == 0)
	{
		// .text:00005E74
		iErrorCode = OOXA_allocate_parameter(0x18, &al_athena_zrxry, &isOk);
	}
	// clr     [%fp+isOk]
	// ------>loc_5E88
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_60A4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_60E8
		if (isOk != FALSE)
		{
			// .text:000060F0
			PLXAmem_free(&al_athena_zrxry);
		}
		// ld      [%fp+iErrorCode], %i
		// ------>loc_6100
		return iErrorCode;
	}
	// .text:00005ED8
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_5F08
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 5, 0x26AC8A3B, &pKVXT_isim_get_al_athena_zrxry);
	}
	else
	{
		// .text:00005EF8
		pKVXT_isim_get_al_athena_zrxry = KVXT_isim_get_al_athena_zrxry;
	}
	// loc_5F3C
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_al_athena_zrxry], %g1
		// ------>loc_6108
		// ld      [%fp+iErrorCode], %o5
		// loc_60A4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_60E8
		if (isOk != FALSE)
		{
			// .text:000060F0
			PLXAmem_free(&al_athena_zrxry);
		}
		// ld      [%fp+iErrorCode], %i
		// ------>loc_6100
		return iErrorCode;
	}
	// .text:00005F4C
	if (pKVXT_isim_get_al_athena_zrxry != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_6008
		iErrorCode = pKVXT_isim_get_al_athena_zrxry(local_OOXA_local_KVXT_singleton_object, al_athena_zrxry);
		// loc_6020
		// loc_6024
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_60A4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:00006030
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// ld      [%fp+isOk], %g1
		// ------>loc_60E8
		if (isOk != FALSE)
		{
			// .text:000060F0
			PLXAmem_free(&al_athena_zrxry);
		}
		// ld      [%fp+iErrorCode], %i
		// ------>loc_6100
		return iErrorCode;
	}
	// .text:00005F58
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00005F70
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 5, 0x26AC8A3B,
			req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:00005FD0
			al_athena_zrxry->z = rep_msg_data->z;
			al_athena_zrxry->rx = rep_msg_data->rx;
			al_athena_zrxry->ry = rep_msg_data->ry;
			if (rep_msg_data != NULL)
			{
				// .text:00005FF8
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_6024
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_60A4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:00006030
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// ld      [%fp+isOk], %g1
	// ------>loc_60E8
	if (isOk != FALSE)
	{
		// .text:000060F0
		PLXAmem_free(&al_athena_zrxry);
	}
	// ld      [%fp+iErrorCode], %i
	// ------>loc_6100
	return iErrorCode;
}

// 函数名：KVXT_get_chuck_id
int KVXT_get_chuck_id(WPxCHUCK_chuck_id_enum *chuck_id_p)
{
	//WPxCHUCK_chuck_id_enum *chuck_id_p = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_chuck_id)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, WPxCHUCK_chuck_id_enum *chuck_id_p) = NULL;
	int iErrorCode = 0;
	WPxCHUCK_chuck_id_enum *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;
	if (chuck_id_p == 0)
	{
		iErrorCode = OOXA_allocate_parameter(4, &chuck_id_p, &isOk);
	}
	// clr     [%fp+isOk]
	// ------>loc_81E4
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_83F0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		if (isOk != FALSE)
		{
			// .text:0000843C
			PLXAmem_free(&chuck_id_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_844C
		return iErrorCode;
	}
	// .text:00008234
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// loc_8264
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xF, 0x6BB5D038, pKVXT_isim_get_chuck_id); // 这里确定pKVXT_isim_get_chuck_id为函数指针
	}
	else
	{
		// .text:00008254
		pKVXT_isim_get_chuck_id = KVXT_isim_get_chuck_id;
	}
	// loc_8298
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_chuck_id], %g1
		// ------>loc_8454
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_83F0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		if (isOk != FALSE)
		{
			// .text:0000843C
			PLXAmem_free(&chuck_id_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_844C
		return iErrorCode;
	}
	// .text:000082A8
	if (pKVXT_isim_get_chuck_id != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_8354
		iErrorCode = pKVXT_isim_get_chuck_id(local_OOXA_local_KVXT_singleton_object, chuck_id_p);
		// loc_836C
		// ld      [%fp+iErrorCode], %o5
		// loc_8370
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_83F0
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:0000837C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_8434
		if (isOk != FALSE)
		{
			// .text:0000843C
			PLXAmem_free(&chuck_id_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_844C
		return iErrorCode;
	}
	// .text:000082B4
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:000082CC
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xF, 0x6BB5D038, req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000832C
			*chuck_id_p = *rep_msg_data;
			if (rep_msg_data != NULL)
			{
				// .text:00008344
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_8370
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_83F0
		THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000837C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_8434
	if (isOk != FALSE)
	{
		// .text:0000843C
		PLXAmem_free(&chuck_id_p);
	}
	// ld      [%fp+iErrorCode], %i0
	// ------>loc_844C
	return iErrorCode;
}

// 函数名:KVXT_get_comp_sim_mode
int KVXT_get_comp_sim_mode(THXA_SIM_MODE *comp_sim_mode_p)
{
	//THXA_SIM_MODE *comp_sim_mode_p = i0;
	char *req_msg_data = 0;
	int(*pKVXT_isim_get_comp_sim_mode)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		THXA_SIM_MODE *comp_sim_mode_p) = NULL;
	int iErrorCode = 0;
	THXA_SIM_MODE *rep_msg_data = 0;
	int act_len = 0;
	bool isOk = FALSE;

	if (comp_sim_mode_p == 0)
	{
		// .text:00007274
		OOXA_allocate_parameter(4, &comp_sim_mode_p, &isOk);
	}
	// clr     [%fp+var_18]
	// ------>loc_7288
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_7494
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_74D8
		if (isOk != FALSE)
		{
			// .text:000074E0
			PLXAmem_free(&comp_sim_mode_p);
		}
		// loc_74F0
		return iErrorCode;
	}
	// .text:000072D8
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_7308
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xB, 0x74B58759, &pKVXT_isim_get_comp_sim_mode);
	}
	else
	{
		// .text:000072F8
		pKVXT_isim_get_comp_sim_mode = KVXT_isim_get_comp_sim_mode;
	}
	// loc_733C
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_comp_sim_mode], %g1
		// ------>loc_74F8
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_7494
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_74D8
		if (isOk != FALSE)
		{
			// .text:000074E0
			PLXAmem_free(&comp_sim_mode_p);
		}
		// loc_74F0
		return iErrorCode;
	}
	// .text:0000734C
	if (pKVXT_isim_get_comp_sim_mode != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_73F8
		iErrorCode = pKVXT_isim_get_comp_sim_mode(local_OOXA_local_KVXT_singleton_object, comp_sim_mode_p);
		// loc_7410
		// ld      [%fp+iErrorCode], %o5
		// loc_7414
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_7494
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:00007420
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_74D8
		if (isOk != FALSE)
		{
			// .text:000074E0
			PLXAmem_free(&comp_sim_mode_p);
		}
		// loc_74F0
		return iErrorCode;
	}
	// .text:00007358
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00007370
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xB, 0x74B58759,
			req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:000073D0
			*comp_sim_mode_p = *rep_msg_data;
			if (rep_msg_data != NULL)
			{
				// .text:000073E8
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_7414
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_7494
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:00007420
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_74D8
	if (isOk != FALSE)
	{
		// .text:000074E0
		PLXAmem_free(&comp_sim_mode_p);
	}
	// loc_74F0
	return iErrorCode;
}

// 函数名：KVXT_get_diagnostics
int KVXT_get_diagnostics(MEXAxGL_state *state)
{
	//MEXAxGL_state *state = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_diagnostics)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, char *sArg2) = NULL;
	int iErrorCode = 0;
	MEXAxGL_state *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (state == 0)
	{
		// .text:0001163C
		iErrorCode = OOXA_allocate_parameter(0x70, &state, &isOk);
	}
	// loc_11650
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_11864
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_118A8
		if (isOk != FALSE)
		{
			// .text:000118B0
			PLXAmem_free(&state);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_118C0
		return iErrorCode;
	}
	// .text:000116A0
	if (THXAcheckSimMode("KV", 0) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_116D0
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x39, 0x229C5871, &pKVXT_isim_get_diagnostics);
	}
	else
	{
		// .text:000116C0
		pKVXT_isim_get_diagnostics = KVXT_isim_get_diagnostics;
	}
	// loc_11704
	if (pKVXT_isim_get_diagnostics != NULL)
	{
		// ld      [%fp+pKVXT_isim_get_diagnostics], %g1
		// ------>loc_118C8
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_11864
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_118A8
		if (isOk != FALSE)
		{
			// .text:000118B4
			PLXAmem_free(&state);
		}
		// loc_118C0
		return iErrorCode;
	}
	// .text:00011714
	if (pKVXT_isim_get_diagnostics != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_117C8
		iErrorCode = pKVXT_isim_get_diagnostics(local_OOXA_local_KVXT_singleton_object, state);
		// loc_117E0
		// loc_117E4
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_11864
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:000117F0
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_118A8
		if (isOk != FALSE)
		{
			// .text:000118B4
			PLXAmem_free(&state);
		}
		// loc_118C0
		return iErrorCode;
	}
	// .text:00011720
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00011738
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x39, 0x229C5871,
			req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:00011798
			memcpy(state, rep_msg_data, 0x70); // 将rep_msg_data指向地址的0x70字节内容复制到state指向的地址
			if (rep_msg_data != NULL)
			{
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_117E4
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_11864
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:000117F0
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_118A8
	if (isOk != FALSE)
	{
		// .text:000118B4
		PLXAmem_free(&state);
	}
	// loc_118C0
	return iErrorCode;
}

// 函数名：KVXT_get_GLC_capture_params
// 需要把bool看成4字节
int KVXT_get_GLC_capture_params(KVXA_capture_params *capture_params)
{
	//KVXA_capture_params *capture_params = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_GLC_capture_params)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, KVXA_capture_params *capture_params) = NULL;
	int iErrorCode = 0;
	KVXA_capture_params *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (capture_params == NULL)
	{
		// .text:0000F900
		iErrorCode = OOXA_allocate_parameter(0x38, &capture_params, &isOk);
	}
	// loc_F914
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_FB50
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_FB94
		if (isOk != FALSE)
		{
			// .text:0000FBA0
			PLXAmem_free(&capture_params);
		}
		// loc_FBAC
		return iErrorCode;
	}
	// .text:0000F964
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_F994
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x30, 0x61D06AAE, &pKVXT_isim_get_GLC_capture_params);
	}
	else
	{
		// .text:0000F984
		pKVXT_isim_get_GLC_capture_params = KVXT_isim_get_GLC_capture_params;
	}
	// loc_F9C8
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_GLC_capture_params], %g1
		// ------>loc_FBB4
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_FB50
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_FB94
		if (isOk != FALSE)
		{
			// .text:0000FBA0
			PLXAmem_free(&capture_params);
		}
		// loc_FBAC
		return iErrorCode;
	}
	// .text:0000F9D8
	if (pKVXT_isim_get_GLC_capture_params != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_FAB4
		iErrorCode = pKVXT_isim_get_GLC_capture_params(local_OOXA_local_KVXT_singleton_object, capture_params);
		// loc_FACC
		// loc_FAD0
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_FB50
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:0000FADC
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_FB94
		if (isOk != FALSE)
		{
			// .text:0000FBA0
			PLXAmem_free(&capture_params);
		}
		// loc_FBAC
		return iErrorCode;
	}
	// .text:0000F9E4
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:0000F9FC
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x30, 0x61D06AAE, req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000FA5C
			//arg_44->d0x0 = rep_msg_data->d0x0;
			//arg_44->d0x8 = rep_msg_data->d0x8;
			//arg_44->d0x10 = rep_msg_data->d0x10;
			//arg_44->d0x18 = rep_msg_data->d0x18;
			//arg_44->d0x20 = rep_msg_data->d0x20;
			//arg_44->d0x28 = rep_msg_data->d0x28;
			//arg_44->d0x30 = rep_msg_data->d0x30;
			capture_params->capture_needed = rep_msg_data->capture_needed; // 0x0
			capture_params->capture_zrxry.z = rep_msg_data->capture_zrxry.z; // 0x8
			capture_params->capture_zrxry.rx = rep_msg_data->capture_zrxry.rx; // 0x10
			capture_params->capture_zrxry.ry = rep_msg_data->capture_zrxry.ry; // 0x18
			capture_params->capture_def.Z_capture_spot_selection = rep_msg_data->capture_def.Z_capture_spot_selection; // 0x20
			capture_params->capture_def.Ry_capture_needed = rep_msg_data->capture_def.Ry_capture_needed; // 0x24
			capture_params->capture_def.Ry_capture_spot_selection = rep_msg_data->capture_def.Ry_capture_spot_selection; // 0x28
			capture_params->capture_def.change_of_process = rep_msg_data->capture_def.change_of_process; // 0x2C
			capture_params->capture_def.on_process = rep_msg_data->capture_def.on_process; // 0x30
			if (rep_msg_data != NULL)
			{
				// .text:0000FAA4
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_FAD0
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_FB50
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000FADC
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_FB94
	if (isOk != FALSE)
	{
		// .text:0000FBA0
		PLXAmem_free(&capture_params);
	}
	// loc_FBAC
	return iErrorCode;
}

// 函数名：KVXT_get_GLC_meas_results
int KVXT_get_GLC_meas_results(KVXA_meas_results *glc_meas_results)
{
	//KVXA_meas_results *glc_meas_results = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_GLC_meas_results)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		KVXA_meas_results *glc_meas_results) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	char *buffer_p = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (glc_meas_results == NULL)
	{
		// .text:0000FC08
		iErrorCode = OOXA_allocate_parameter(0xC, &glc_meas_results, &isOk);
	}
	// loc_FC1C
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_FE88
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_FECC
		if (isOk == TRUE)
		{
			// ld      [%fp+iErrorCode], %g1
			// ------>loc_FEFC
			return iErrorCode;
		}
		// .text:0000FED8
		if (iErrorCode == 0)
		{
			// .text:0000FEE4
			DDXA_C_object_sub_free("KVXA:meas_results", glc_meas_results);
		}
		// loc_FEF4
		PLXAmem_free(&glc_meas_results);
		// loc_FEFC
		return iErrorCode;
	}
	// .text:0000FC6C
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_FC9C
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x31, 0x7AF0B839, &pKVXT_isim_get_GLC_meas_results);
	}
	else
	{
		// .text:0000FC8C
		pKVXT_isim_get_GLC_meas_results = KVXT_isim_get_GLC_meas_results;
	}
	// loc_FCD0
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_GLC_meas_results], %g1
		// ------>loc_FF08
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_FE88
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_FECC
		if (isOk == TRUE)
		{
			// ld      [%fp+iErrorCode], %g1
			// ------>loc_FEFC
			return iErrorCode;
		}
		// .text:0000FED8
		if (iErrorCode == 0)
		{
			// .text:0000FEE4
			DDXA_C_object_sub_free("KVXA:meas_results", glc_meas_results);
		}
		// loc_FEF4
		PLXAmem_free(&glc_meas_results);
		// loc_FEFC
		return iErrorCode;
	}
	// .text:0000FCE0
	if (pKVXT_isim_get_GLC_meas_results != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_FDAC
		iErrorCode = pKVXT_isim_get_GLC_meas_results(local_OOXA_local_KVXT_singleton_object, glc_meas_results);
		// ld      [%fp+iErrorCode], %o5
		// loc_FDC8
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_FE88
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:0000FDD4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%D %d", "glc_meas_results", "KVXA:meas_results", glc_meas_results, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%D)=%R", local_OOXA_local_KVXT_singleton_object->component, "glc_meas_results", "KVXA:meas_results", glc_meas_results, iErrorCode);
		}
		// loc_FECC
		if (isOk == TRUE)
		{
			// ld      [%fp+iErrorCode], %g1
			// ------>loc_FEFC
			return iErrorCode;
		}
		// .text:0000FED8
		if (iErrorCode == 0)
		{
			// .text:0000FEE4
			DDXA_C_object_sub_free("KVXA:meas_results", glc_meas_results);
		}
		// loc_FEF4
		PLXAmem_free(&glc_meas_results);
		// loc_FEFC
		return iErrorCode;
	}
	// .text:0000FCEC
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:0000FD04
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x31, 0x7AF0B839,
			req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000FD64
			iErrorCode = DDXAxSERIALIZE_sub_unpack("KVXA:meas_results", &buffer_p, NULL, glc_meas_results);
		}
	}
	// st      %o0, [%fp+iErrorCode]
	// loc_FD8C
	if (buffer_p != NULL)
	{
		// .text:0000FD9C
		OOXA_release_buffer(&rep_msg_data);
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_FDC8
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_FE88
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000FDD4
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%D %d", "glc_meas_results", "KVXA:meas_results", glc_meas_results, &iErrorCode); // glc_meas_results的首地址是个int
		THXAtrace("KV", 2, __FUNCTION__, "< %s (%D)=%R", local_OOXA_local_KVXT_singleton_object->component, "glc_meas_results", "KVXA:meas_results", glc_meas_results, iErrorCode);
	}
	// loc_FECC
	if (isOk == TRUE)
	{
		// ld      [%fp+iErrorCode], %g1
		// ------>loc_FEFC
		return iErrorCode;
	}
	// .text:0000FED8
	if (iErrorCode == 0)
	{
		// .text:0000FEE4
		DDXA_C_object_sub_free("KVXA:meas_results", glc_meas_results);
	}
	// loc_FEF4
	PLXAmem_free(&glc_meas_results);
	// loc_FEFC
	return iErrorCode;
}

// 函数名：KVXT_get_global_wafer_wedge
int KVXT_get_global_wafer_wedge(zrxryvect *global_wafer_wedge)
{
	//zrxryvect *global_wafer_wedge = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_global_wafer_wedge)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		zrxryvect *global_wafer_wedge_p) = NULL;
	int iErrorCode = 0;
	zrxryvect *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (isOk == FALSE)
	{
		// .text:0000EB94
		iErrorCode = OOXA_allocate_parameter(0x18, &global_wafer_wedge, &isOk);
	}
	// loc_EBA8
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_EDC4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_EE08
		if (isOk != FALSE)
		{
			// .text:0000EE14
			PLXAmem_free(&global_wafer_wedge);
		}
		// loc_EE20
		return iErrorCode;
	}
	// .text:0000EBF8
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_EC28
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x2C, 0x1C4472B0, &pKVXT_isim_get_global_wafer_wedge);
	}
	else
	{
		// .text:0000EC18
		pKVXT_isim_get_global_wafer_wedge = KVXT_isim_get_global_wafer_wedge;
	}
	// loc_EC5C
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_global_wafer_wedge], %g1
		// ------>loc_EE28
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_EDC4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_EE08
		if (isOk != FALSE)
		{
			// .text:0000EE14
			PLXAmem_free(&global_wafer_wedge);
		}
		// loc_EE20
		return iErrorCode;
	}
	// .text:0000EC6C
	if (pKVXT_isim_get_global_wafer_wedge != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_ED28
		iErrorCode = pKVXT_isim_get_global_wafer_wedge(local_OOXA_local_KVXT_singleton_object, global_wafer_wedge);
		// loc_ED40
		// loc_ED44
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_EDC4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			// loc_EE08
			if (isOk != FALSE)
			{
				// .text:0000EE14
				PLXAmem_free(&global_wafer_wedge);
			}
			// loc_EE20
			return iErrorCode;
		}
		else
		{
			// .text:0000ED50
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_EE08
		if (isOk != FALSE)
		{
			// .text:0000EE14
			PLXAmem_free(&global_wafer_wedge);
		}
		// loc_EE20
		return iErrorCode;
	}
	// .text:0000EC78
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:0000EC90
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT;", 0x2C, 0x1C4472B0,
			req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000ECF0
			global_wafer_wedge->z = rep_msg_data->z;
			global_wafer_wedge->rx = rep_msg_data->rx;
			global_wafer_wedge->ry = rep_msg_data->ry;
			if (rep_msg_data != NULL)
			{
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_ED44
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_EDC4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000ED50
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_EE08
	if (isOk != FALSE)
	{
		// .text:0000EE14
		PLXAmem_free(&global_wafer_wedge);
	}
	// loc_EE20
	return iErrorCode;
}

// 函数名：KVXT_get_high_precision_SA_levelling
int KVXT_get_high_precision_SA_levelling(bool *high_precision_levelling_p)
{
	//bool *high_precision_levelling_p = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_high_precision_SA_levelling)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object, bool *high_precision_levelling_p) = NULL;
	int iErrorCode = 0;
	bool *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (isOk == FALSE)
	{
		// .text:0000A3BC
		iErrorCode = OOXA_allocate_parameter(4, &high_precision_levelling_p, &isOk);
	}
	// loc_A3D0
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_A5DC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_A620
		if (isOk == FALSE)
		{
			// .text:0000A62C
			PLXAmem_free(&high_precision_levelling_p);
		}
		// loc_A638
		return iErrorCode;
	}
	// .text:0000A420
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_A450
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x19, 0x1AEF78CD, &pKVXT_isim_get_high_precision_SA_levelling);
	}
	else
	{
		// .text:0000A440
		pKVXT_isim_get_high_precision_SA_levelling = KVXT_isim_get_high_precision_SA_levelling;
	}
	// loc_A484
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_high_precision_SA_levelling], %g1
		// ------>loc_A640
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_A5DC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_A620
		if (isOk == FALSE)
		{
			// .text:0000A62C
			PLXAmem_free(&high_precision_levelling_p);
		}
		// loc_A638
		return iErrorCode;
	}
	// .text:0000A494
	if (pKVXT_isim_get_high_precision_SA_levelling != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_A540
		iErrorCode = pKVXT_isim_get_high_precision_SA_levelling(local_OOXA_local_KVXT_singleton_object, high_precision_levelling_p);
		// loc_A558
		// loc_A55C
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_A5DC
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:0000A568
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_A620
		if (isOk == FALSE)
		{
			// .text:0000A62C
			PLXAmem_free(&high_precision_levelling_p);
		}
		// loc_A638
		return iErrorCode;
	}
	// .text:0000A4A0
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:0000A4B8
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x19, 0x1AEF78CD,
			req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000A518
			*high_precision_levelling_p = *rep_msg_data;
			if (rep_msg_data != NULL)
			{
				// .text:0000A530
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_A55C
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_A5DC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000A568
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_A620
	if (isOk == FALSE)
	{
		// .text:0000A62C
		PLXAmem_free(&high_precision_levelling_p);
	}
	// loc_A638
	return iErrorCode;
}

// 函数名：KVXT_get_iVSA_update_needed
int KVXT_get_iVSA_update_needed(WPxCHUCK_chuck_id_enum chuck_id,
	bool *LS_drift_corr_update_needed_p,
	bool *fallback_shape_update_needed_p)
{
	//WPxCHUCK_chuck_id_enum chuck_id = i0;
	//bool *LS_drift_corr_update_needed_p = i1;
	//bool *fallback_shape_update_needed_p = i2;
	WPxCHUCK_chuck_id_enum *req_msg_data = NULL;
	int(*pKVXT_isim_get_iVSA_update_needed)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		bool *LS_drift_corr_update_needed_p,
		bool *fallback_shape_update_needed_p) = NULL;
	int iErrorCode = 0;
	KVXT_unk_4 *rep_msg_data = NULL;
	int act_len = 0;
	bool LS_drift_corr_update_needed_p_isOk = FALSE;
	bool fallback_shape_update_needed_p_isOk = FALSE;

	if (LS_drift_corr_update_needed_p == NULL)
	{
		// .text:0000CF44
		iErrorCode = OOXA_allocate_parameter(4, &LS_drift_corr_update_needed_p, &LS_drift_corr_update_needed_p_isOk);
	}
	// loc_CF58
	// 这里需要一个分析过程，先贴代码,iErrorCode错误码，非负，为0或者正数,g1 = fallback_shape_update_needed_p地址，非负，为0或者正数
	// loc_CF58:
	// ld[%fp + iErrorCode], %g1		
	// cmp     %g0, %g1        			// g0 = g0 - g1;		iErrorCode = 0,icc.c = 0    iErrorCode != 0,icc.c = 1
	// subc    %g0, -1, %g2				// g2 = 1 - icc.z;		iErrorCode = 0,g2 = 1		iErrorCode != 0,g2 = 0
	// ld[%fp + fallback_shape_update_needed_p], %g1
	// cmp     %g0, %g1					// g0 = g0 - g1;		fallback_shape_update_needed_p = 0,icc.c = 0		fallback_shape_update_needed_p != 0,icc.c = 1
	// subc    %g0, -1, %g1				// g1 = 1 - icc.z		fallback_shape_update_needed_p = 0,g1 = 1			fallback_shape_update_needed_p != 0,g1 = 0
	// btst    %g1, %g2					// g0 = andcc %g1,%g2
	// be      %icc, loc_CF94			// be:icc.z = 1;            g1=0||g2=0,iErrorCode!=0||fallback_shape_update_needed_p!=0
	// 下面if里的是bne条件				// bne:icc.z = 0			!(iErrorCode!=0||fallback_shape_update_needed_p!=0),iErrorCode=0&&fallback_shape_update_needed_p=0
	if (iErrorCode == 0 && fallback_shape_update_needed_p == NULL)
	{
		// .text:0000CF7C
		iErrorCode = OOXA_allocate_parameter(4, &fallback_shape_update_needed_p, &fallback_shape_update_needed_p_isOk);
	}
	// loc_CF94
	if (iErrorCode == 0)
	{
		// .text:0000CFA0
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	}
	// loc_CFF8
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_D2B4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// ld      [%fp+LS_drift_corr_update_needed_p_isOk], %g1
		// loc_D2F8
		if (LS_drift_corr_update_needed_p_isOk != FALSE)
		{
			// .text:0000D304
			PLXAmem_free(&LS_drift_corr_update_needed_p);
		}
		// ld      [%fp+fallback_shape_update_needed_p_isOk], %g1
		// loc_D310
		if (fallback_shape_update_needed_p_isOk != FALSE)
		{
			// .text:0000D318
			PLXAmem_free(&fallback_shape_update_needed_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_D328
		return iErrorCode;
	}
	// .text:0000D068
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_D098
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x25, 0x2E53E826, &pKVXT_isim_get_iVSA_update_needed);
	}
	else
	{
		// .text:0000D088
		pKVXT_isim_get_iVSA_update_needed = KVXT_isim_get_iVSA_update_needed;
	}
	// loc_D0CC
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_iVSA_update_needed], %g1
		// ------>loc_D330
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_D2B4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// ld      [%fp+LS_drift_corr_update_needed_p_isOk], %g1
		// loc_D2F8
		if (LS_drift_corr_update_needed_p_isOk != FALSE)
		{
			// .text:0000D304
			PLXAmem_free(&LS_drift_corr_update_needed_p);
		}
		// ld      [%fp+fallback_shape_update_needed_p_isOk], %g1
		// loc_D310
		if (fallback_shape_update_needed_p_isOk != FALSE)
		{
			// .text:0000D318
			PLXAmem_free(&fallback_shape_update_needed_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_D328
		return iErrorCode;
	}
	// .text:0000D0DC
	if (pKVXT_isim_get_iVSA_update_needed != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_D1A4
		iErrorCode = pKVXT_isim_get_iVSA_update_needed(local_OOXA_local_KVXT_singleton_object, chuck_id, LS_drift_corr_update_needed_p, fallback_shape_update_needed_p);
		// loc_D1C4
		// ld      [%fp+iErrorCode], %o5
		// loc_D1C8
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_D2B4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:0000D1D4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%4D %4D %d", "LS_drift_corr_update_needed_p", "bool", LS_drift_corr_update_needed_p, "fallback_shape_update_needed_p", "bool", fallback_shape_update_needed_p, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%4D %4D)=%R", local_OOXA_local_KVXT_singleton_object->component, "LS_drift_corr_update_needed_p", "bool", LS_drift_corr_update_needed_p, "fallback_shape_update_needed_p", "bool", fallback_shape_update_needed_p, iErrorCode);
		}
		// ld      [%fp+LS_drift_corr_update_needed_p_isOk], %g1
		// loc_D2F8
		if (LS_drift_corr_update_needed_p_isOk != FALSE)
		{
			// .text:0000D304
			PLXAmem_free(&LS_drift_corr_update_needed_p);
		}
		// ld      [%fp+fallback_shape_update_needed_p_isOk], %g1
		// loc_D310
		if (fallback_shape_update_needed_p_isOk != FALSE)
		{
			// .text:0000D318
			PLXAmem_free(&fallback_shape_update_needed_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_D328
		return iErrorCode;
	}
	// .text:0000D0E8
	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:0000D100
		*req_msg_data = chuck_id;
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x25, 0x2E53E826,
			req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000D16C
			*LS_drift_corr_update_needed_p = rep_msg_data->LS_drift_corr_update_needed;
			*fallback_shape_update_needed_p = rep_msg_data->fallback_shape_update_needed;
			if (rep_msg_data != NULL)
			{
				// .text:0000D194
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_D1C8
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_D2B4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000D1D4
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%4D %4D %d", "LS_drift_corr_update_needed_p", "bool", LS_drift_corr_update_needed_p, "fallback_shape_update_needed_p", "bool", fallback_shape_update_needed_p, &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s (%4D %4D)=%R", local_OOXA_local_KVXT_singleton_object->component, "LS_drift_corr_update_needed_p", "bool", LS_drift_corr_update_needed_p, "fallback_shape_update_needed_p", "bool", fallback_shape_update_needed_p, iErrorCode);
	}
	// ld      [%fp+LS_drift_corr_update_needed_p_isOk], %g1
	// loc_D2F8
	if (LS_drift_corr_update_needed_p_isOk != FALSE)
	{
		// .text:0000D304
		PLXAmem_free(&LS_drift_corr_update_needed_p);
	}
	// ld      [%fp+fallback_shape_update_needed_p_isOk], %g1
	// loc_D310
	if (fallback_shape_update_needed_p_isOk != FALSE)
	{
		// .text:0000D318
		PLXAmem_free(&fallback_shape_update_needed_p);
	}
	// ld      [%fp+iErrorCode], %i0
	// loc_D328
	return iErrorCode;
}

// 函数名：KVXT_get_le_spot_id_SA
int KVXT_get_le_spot_id_SA(LEXAxSPOT_spot_selection_t *le_spot_id_sa)
{
	//LEXAxSPOT_spot_selection_t le_spot_id_sa = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_le_spot_id_SA)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		LEXAxSPOT_spot_selection_t *le_spot_id_sa) = NULL;
	int iErrorCode = 0;
	LEXAxSPOT_spot_selection_t *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (isOk == FALSE)
	{
		// .text:0000973C
		iErrorCode = OOXA_allocate_parameter(4, &le_spot_id_sa, &isOk);
	}
	// loc_9750
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_995C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_99A0
		if (isOk != FALSE)
		{
			// .text:000099AC
			PLXAmem_free(&le_spot_id_sa);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_99B8
		return iErrorCode;
	}
	// .text:000097A0
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_97D0
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x15, 0x302FAE40, &pKVXT_isim_get_le_spot_id_SA);
	}
	else
	{
		// .text:000097C0
		pKVXT_isim_get_le_spot_id_SA = KVXT_isim_get_le_spot_id_SA;
	}
	// st      %o0, [%fp+iErrorCode]
	// loc_9804
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_le_spot_id_SA], %g1
		// ------>loc_99C0
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_995C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_99A0
		if (isOk != FALSE)
		{
			// .text:000099AC
			PLXAmem_free(&le_spot_id_sa);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_99B8
		return iErrorCode;
	}
	// .text:00009814
	if (pKVXT_isim_get_le_spot_id_SA != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_98C0
		iErrorCode = pKVXT_isim_get_le_spot_id_SA(local_OOXA_local_KVXT_singleton_object, le_spot_id_sa);
		// loc_98D8
		// ld      [%fp+iErrorCode], %o5
		// loc_98DC
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// loc_995C
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:000098E8
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_99A0
		if (isOk != FALSE)
		{
			// .text:000099AC
			PLXAmem_free(&le_spot_id_sa);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_99B8
		return iErrorCode;
	}
	// .text:00009820
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00009838
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x15, 0x302FAE40, req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:00009898
			le_spot_id_sa = *rep_msg_data;
			if (rep_msg_data != NULL)
			{
				// .text:000098B0
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_98DC
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// loc_995C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:000098E8
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_99A0
	if (isOk != FALSE)
	{
		// .text:000099AC
		PLXAmem_free(&le_spot_id_sa);
	}
	// ld      [%fp+iErrorCode], %i0
	// loc_99B8
	return iErrorCode;
}

// 函数名：KVXT_get_le_spot_id_WM
int KVXT_get_le_spot_id_WM(LEXAxSPOT_spot_selection_t *spot_id_p)
{
	//LEXAxSPOT_spot_selection_t *spot_id_p = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_le_spot_id_WM)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		LEXAxSPOT_spot_selection_t *spot_id) = NULL;
	int iErrorCode = 0;
	LEXAxSPOT_spot_selection_t *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (spot_id_p == 0)
	{
		// .text:00010630
		OOXA_allocate_parameter(4, &spot_id_p, &isOk);
	}
	// loc_10644
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_10850
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_10894
		if (isOk != FALSE)
		{
			// .text:000108A0
			PLXAmem_free(&spot_id_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_108AC
		return iErrorCode;
	}
	// .text:00010694
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) != 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_106C4
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x34, 0x3338DF28, &pKVXT_isim_get_le_spot_id_WM);
	}
	else
	{
		// .text:000106B4
		pKVXT_isim_get_le_spot_id_WM = KVXT_isim_get_le_spot_id_WM;
	}
	// loc_106F8
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_le_spot_id_WM], %g1
		// ------>loc_108B4
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_10850
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_10894
		if (isOk != FALSE)
		{
			// .text:000108A0
			PLXAmem_free(&spot_id_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_108AC
		return iErrorCode;
	}
	// .text:00010708
	if (pKVXT_isim_get_le_spot_id_WM != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_107B4
		iErrorCode = pKVXT_isim_get_le_spot_id_WM(local_OOXA_local_KVXT_singleton_object, spot_id_p);
		// loc_107CC
		// ld      [%fp+iErrorCode], %o5
		// loc_107D0
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_10850
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:000107DC
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_10894
		if (isOk != FALSE)
		{
			// .text:000108A0
			PLXAmem_free(&spot_id_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_108AC
		return iErrorCode;
	}
	// .text:00010714
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:0001072C
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x34, 0x3338DF28, req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0001078C
			*spot_id_p = *rep_msg_data;
			if (rep_msg_data != NULL)
			{
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_107D0
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_10850
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:000107DC
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_10894
	if (isOk != FALSE)
	{
		// .text:000108A0
		PLXAmem_free(&spot_id_p);
	}
	// ld      [%fp+iErrorCode], %i0
	// ------>loc_108AC
	return iErrorCode;
}

// 函数名：KVXT_get_le_spot_xyz
int KVXT_get_le_spot_xyz(LEXAxSPOT_spot_id_t spot_id,
	xyzvect *le_spot_xyz)
{
	//LEXAxSPOT_spot_id_t spot_id = i0;
	//xyzvect *le_spot_xyz = i1;
	LEXAxSPOT_spot_id_t *req_msg_data = NULL;
	int(*pKVXT_isim_get_le_spot_xyz)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		LEXAxSPOT_spot_id_t spot_id,
		xyzvect *le_spot_xyz) = NULL;
	int iErrorCode = 0;
	xyzvect *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (le_spot_xyz != NULL)
	{
		// clr     [%fp+isOk]
		// ------>loc_5790
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "spot_id", "LEXAxSPOT:spot_id_t", &spot_id);
	}
	else
	{
		// .text:00005774
		iErrorCode = OOXA_allocate_parameter(0x18, &le_spot_xyz, &isOk);
		if (iErrorCode == 0)
		{
			// loc_5790
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "spot_id", "LEXAxSPOT:spot_id_t", &spot_id);
		}
	}
	// loc_57E4
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "spot_id", "LEXAxSPOT:spot_id_t", &spot_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_5A34
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_5A78
		if (isOk != FALSE)
		{
			// .text:00005A84
			PLXAmem_free(&le_spot_xyz);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_5A90
		return iErrorCode;
	}
	// .text:00005858
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_5888
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 3, 0x7FDA46F3, &local_OOXA_local_KVXT_singleton_object);
	}
	else
	{
		// .text:00005878
		pKVXT_isim_get_le_spot_xyz = KVXT_isim_get_le_spot_xyz;
	}
	// loc_58BC
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_le_spot_xyz], %g1
		// ------>loc_5A98
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_5A34
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_5A78
		if (isOk != FALSE)
		{
			// .text:00005A84
			PLXAmem_free(&le_spot_xyz);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_5A90
		return iErrorCode;
	}
	// .text:000058CC
	if (pKVXT_isim_get_le_spot_xyz != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_5994
		iErrorCode = pKVXT_isim_get_le_spot_xyz(local_OOXA_local_KVXT_singleton_object, spot_id, le_spot_xyz);
		// loc_59B0
		// ld      [%fp+iErrorCode], %o5
		// loc_59B4
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_5A34
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:000059C0
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_5A78
		if (isOk != FALSE)
		{
			// .text:00005A84
			PLXAmem_free(&le_spot_xyz);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_5A90
		return iErrorCode;
	}
	// .text:000058D8
	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:000058F0
		*req_msg_data = spot_id;
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 3, 0x7FDA46F3, req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000595C
			le_spot_xyz->x = rep_msg_data->x;
			le_spot_xyz->y = rep_msg_data->y;
			le_spot_xyz->z = rep_msg_data->z;
			if (rep_msg_data != NULL)
			{
				// .text:00005984
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_59B4
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_5A34
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:000059C0
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_5A78
	if (isOk != FALSE)
	{
		// .text:00005A84
		PLXAmem_free(&le_spot_xyz);
	}
	// ld      [%fp+iErrorCode], %i0
	// loc_5A90
	return iErrorCode;
}

// 函数名：KVXT_get_lot_GLC_params
int KVXT_get_lot_GLC_params(KVXAxLOTxPAR_GLC_lot_data *glc_lot_data)
{
	//KVXAxLOTxPAR_GLC_lot_data *glc_lot_data = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_lot_GLC_params)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		KVXAxLOTxPAR_GLC_lot_data *pKVXAxLOTxPAR_GLC_lot_data) = NULL;
	int iErrorCode = 0;
	KVXAxLOTxPAR_GLC_lot_data *rep_msg_data = NULL;
	KVXAxLOTxPAR_GLC_lot_data *buffer_p = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (glc_lot_data == NULL)
	{
		// .text:0000F248
		iErrorCode = OOXA_allocate_parameter(0xC, &glc_lot_data, &isOk);
	}
	// loc_F25C
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_F488
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_F4CC
		if (isOk != FALSE)
		{
			// ld      [%fp+iErrorCode], %g1
			// ------>loc_F4FC
			return iErrorCode;
		}
		// .text:0000F4D8
		if (iErrorCode == 0)
		{
			// .text:0000F4E4
			DDXA_C_object_sub_free("KVXAxLOTxPAR:GLC_lot_data", glc_lot_data);
		}
		// loc_F4F4
		PLXAmem_free(&glc_lot_data);
		// loc_F4FC
		return iErrorCode;
	}
	// .text:0000F2AC
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_F2DC
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x2E, 0x3B74080E, &pKVXT_isim_get_lot_GLC_params);
	}
	else
	{
		// .text:0000F2CC
		pKVXT_isim_get_lot_GLC_params = KVXT_isim_get_lot_GLC_params;
	}
	// loc_F310
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_lot_GLC_params], %g1
		// ------>loc_F508
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_F488
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_F4CC
		if (isOk != FALSE)
		{
			// ld      [%fp+iErrorCode], %g1
			// ------>loc_F4FC
			return iErrorCode;
		}
		// .text:0000F4D8
		if (iErrorCode == 0)
		{
			// .text:0000F4E4
			DDXA_C_object_sub_free("KVXAxLOTxPAR:GLC_lot_data", glc_lot_data);
		}
		// loc_F4F4
		PLXAmem_free(&glc_lot_data);
		// loc_F4FC
		return iErrorCode;
	}
	// .text:0000F320
	if (pKVXT_isim_get_lot_GLC_params != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_F3EC
		iErrorCode = pKVXT_isim_get_lot_GLC_params(local_OOXA_local_KVXT_singleton_object, glc_lot_data);
		// ld      [%fp+iErrorCode], %o5
		// loc_F408
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_F488
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:0000F414
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_F4CC
		if (isOk != FALSE)
		{
			// ld      [%fp+iErrorCode], %g1
			// ------>loc_F4FC
			return iErrorCode;
		}
		// .text:0000F4D8
		if (iErrorCode == 0)
		{
			// .text:0000F4E4
			DDXA_C_object_sub_free("KVXAxLOTxPAR:GLC_lot_data", glc_lot_data);
		}
		// loc_F4F4
		PLXAmem_free(&glc_lot_data);
		// loc_F4FC
		return iErrorCode;
	}
	// .text:0000F32C
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:0000F344
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x2E, 0x3B74080E,
			req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000F3A4
			buffer_p = rep_msg_data;
			iErrorCode = DDXAxSERIALIZE_sub_unpack("KVXAxLOTxPAR:GLC_lot_data", &buffer_p, NULL, glc_lot_data);
		}
	}
	// loc_F3CC
	if (buffer_p != NULL)
	{
		// .text:0000F3DC
		OOXA_release_buffer(rep_msg_data);
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_F408
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_F488
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000F414
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_F4CC
	if (isOk != FALSE)
	{
		// ld      [%fp+iErrorCode], %g1
		// ------>loc_F4FC
		return iErrorCode;
	}
	// .text:0000F4D8
	if (iErrorCode == 0)
	{
		// .text:0000F4E4
		DDXA_C_object_sub_free("KVXAxLOTxPAR:GLC_lot_data", glc_lot_data);
	}
	// loc_F4F4
	PLXAmem_free(&glc_lot_data);
	// loc_F4FC
	return iErrorCode;
}

// 函数名：KVXT_get_lot_WM_params
int KVXT_get_lot_WM_params(KVXAxLOTxPAR_WM_lot_data_t *wm_lot_data)
{
	//KVXAxLOTxPAR_WM_lot_data_t *wm_lot_data = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_lot_WM_params)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		KVXAxLOTxPAR_WM_lot_data_t *pKVXAxLOTxPAR_WM_lot_data_t) = NULL;
	int iErrorCode = 0;
	KVXAxLOTxPAR_WM_lot_data_t *rep_msg_data = NULL;
	KVXAxLOTxPAR_WM_lot_data_t *buffer_p = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (isOk == FALSE)
	{
		// .text:00010C54
		iErrorCode = OOXA_allocate_parameter(0xB8, &wm_lot_data, &isOk);
	}
	// loc_10C68
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_10E94
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_10ED8
		if (isOk == FALSE)
		{
			// ld      [%fp+iErrorCode], %g1
			// ------>loc_10F08
			return iErrorCode;
		}
		// .text:00010EE4
		if (iErrorCode == 0)
		{
			// .text:00010EF0
			DDXA_C_object_sub_free("KVXAxLOTxPAR:WM_lot_data_t", wm_lot_data);
		}
		// loc_10F00
		PLXAmem_free(&wm_lot_data);
		// loc_10F08
		return iErrorCode;
	}
	// .text:00010CB8
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_10CE8
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x36, 0x2A64566C, &pKVXT_isim_get_lot_WM_params);
	}
	else
	{
		// .text:00010CD8
		pKVXT_isim_get_lot_WM_params = KVXT_isim_get_lot_WM_params;
	}
	// loc_10D1C
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_lot_WM_params], %g1
		// ------>loc_10F14
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_10E94
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_10ED8
		if (isOk == FALSE)
		{
			// ld      [%fp+iErrorCode], %g1
			// ------>loc_10F08
			return iErrorCode;
		}
		// .text:00010EE4
		if (iErrorCode == 0)
		{
			// .text:00010EF0
			DDXA_C_object_sub_free("KVXAxLOTxPAR:WM_lot_data_t", wm_lot_data);
		}
		// loc_10F00
		PLXAmem_free(&wm_lot_data);
		// loc_10F08
		return iErrorCode;
	}
	// .text:00010D2C
	if (pKVXT_isim_get_lot_WM_params != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_10DF8
		iErrorCode = pKVXT_isim_get_lot_WM_params(local_OOXA_local_KVXT_singleton_object, wm_lot_data);
		// ld      [%fp+iErrorCode], %o5
		// loc_10E14
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_10E94
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:00010E20
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", iErrorCode);
		}
		// loc_10ED8
		if (isOk == FALSE)
		{
			// ld      [%fp+iErrorCode], %g1
			// ------>loc_10F08
			return iErrorCode;
		}
		// .text:00010EE4
		if (iErrorCode == 0)
		{
			// .text:00010EF0
			DDXA_C_object_sub_free("KVXAxLOTxPAR:WM_lot_data_t", wm_lot_data);
		}
		// loc_10F00
		PLXAmem_free(&wm_lot_data);
		// loc_10F08
		return iErrorCode;
	}
	// .text:00010D38
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00010D50
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x36, 0x2A64566C, req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:00010DB0
			buffer_p = rep_msg_data;
			iErrorCode = DDXAxSERIALIZE_sub_unpack("KVXAxLOTxPAR:WM_lot_data_t", &buffer_p, 0, wm_lot_data);
		}
	}
	// loc_10DD8
	if (buffer_p != NULL)
	{
		// .text:00010DE8
		OOXA_release_buffer(rep_msg_data);
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_10E14
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_10E94
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:00010E20
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", iErrorCode);
	}
	// loc_10ED8
	if (isOk == FALSE)
	{
		// ld      [%fp+iErrorCode], %g1
		// ------>loc_10F08
		return iErrorCode;
	}
	// .text:00010EE4
	if (iErrorCode == 0)
	{
		// .text:00010EF0
		DDXA_C_object_sub_free("KVXAxLOTxPAR:WM_lot_data_t", wm_lot_data);
	}
	// loc_10F00
	PLXAmem_free(&wm_lot_data);
	// loc_10F08
	return iErrorCode;
}

// 函数名：KVXT_get_LS_drift_SOSI_update_needed
int KVXT_get_LS_drift_SOSI_update_needed(WPxCHUCK_chuck_id_enum chuck_id,
	bool *LS_drift_SOSI_corr_update_needed_p)
{
	//WPxCHUCK_chuck_id_enum chuck_id = i0;
	//bool *LS_drift_SOSI_corr_update_needed_p = i1;
	WPxCHUCK_chuck_id_enum *req_msg_data = NULL;
	int(*pKVXT_isim_get_LS_drift_SOSI_update_needed)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		bool *LS_drift_SOSI_corr_update_needed_p) = NULL;
	int iErrorCode = 0;
	bool *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (LS_drift_SOSI_corr_update_needed_p != NULL)
	{
		// loc_C8A4
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	}
	else
	{
		// .text:0000C888
		iErrorCode = OOXA_allocate_parameter(4, &LS_drift_SOSI_corr_update_needed_p, &isOk);
		if (iErrorCode == 0)
		{
			// loc_C8A4
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
		}
	}
	// loc_C8F8
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_CB78
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_CBBC
		if (isOk == FALSE)
		{
			// .text:0000CBC8
			PLXAmem_free(&LS_drift_SOSI_corr_update_needed_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_CBD4
		return iErrorCode;
	}
	// .text:0000C96C
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_C99C
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x23, 0x43585E40, &pKVXT_isim_get_LS_drift_SOSI_update_needed);
	}
	else
	{
		// .text:0000C98C
		pKVXT_isim_get_LS_drift_SOSI_update_needed = KVXT_isim_get_LS_drift_SOSI_update_needed;
	}
	// loc_C9D0
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_LS_drift_SOSI_update_needed], %g1
		// ------>loc_CBDC
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_CB78
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_CBBC
		if (isOk == FALSE)
		{
			// .text:0000CBC8
			PLXAmem_free(&LS_drift_SOSI_corr_update_needed_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_CBD4
		return iErrorCode;
	}
	// .text:0000C9E0
	if (pKVXT_isim_get_LS_drift_SOSI_update_needed != NULL)
	{
		// sethi   %hi(0x400), %g2
		// -------->loc_CA98
		iErrorCode = pKVXT_isim_get_LS_drift_SOSI_update_needed(local_OOXA_local_KVXT_singleton_object, chuck_id, LS_drift_SOSI_corr_update_needed_p);
		// loc_CAB4
		// ld      [%fp+iErrorCode], %o5
		// loc_CAB8
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_CB78
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:0000CAC4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%4D %d", "LS_drift_SOSI_corr_update_needed_p", "bool", LS_drift_SOSI_corr_update_needed_p, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%4D)=%R", local_OOXA_local_KVXT_singleton_object->component, "LS_drift_SOSI_corr_update_needed_p", "bool", LS_drift_SOSI_corr_update_needed_p, iErrorCode);
		}
		// loc_CBBC
		if (isOk == FALSE)
		{
			// .text:0000CBC8
			PLXAmem_free(&LS_drift_SOSI_corr_update_needed_p);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_CBD4
		return iErrorCode;
	}
	// .text:0000C9EC
	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:0000CA04
		*req_msg_data = chuck_id;
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x23, 0x43585E40,
			req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000CA70
			*LS_drift_SOSI_corr_update_needed_p = *rep_msg_data;
			if (rep_msg_data != NULL)
			{
				// .text:0000CA88
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_CAB8
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_CB78
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000CAC4
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%4D %d", "LS_drift_SOSI_corr_update_needed_p", "bool", LS_drift_SOSI_corr_update_needed_p, &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s (%4D)=%R", local_OOXA_local_KVXT_singleton_object->component, "LS_drift_SOSI_corr_update_needed_p", "bool", LS_drift_SOSI_corr_update_needed_p, iErrorCode);
	}
	// loc_CBBC
	if (isOk == FALSE)
	{
		// .text:0000CBC8
		PLXAmem_free(&LS_drift_SOSI_corr_update_needed_p);
	}
	// ld      [%fp+iErrorCode], %i0
	// loc_CBD4
	return iErrorCode;
}

// 函数名：KVXT_get_period_XVSA，改好了
// 对结构体MBXA_period_struct进行了一定改动，不确定正确
int KVXT_get_period_XVSA(MBXA_period_struct *period)
{
	//MBXA_period_struct *period = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_period_XVSA)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		MBXA_period_struct *period) = NULL;
	int iErrorCode = 0;
	MBXA_period_struct *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (isOk == FALSE)
	{
		// .text:0000BE58
		iErrorCode = OOXA_allocate_parameter(0x10, &period, &isOk);
	}
	// st      %o0, [%fp+iErrorCode]
	// loc_BE6C
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_C0D0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_C114
		if (isOk != FALSE)
		{
			// .text:0000C120
			PLXAmem_free(&period);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_C12C
		return iErrorCode;
	}
	// .text:0000BEBC
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_BEEC
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x20, 0x56CEF61D, &pKVXT_isim_get_period_XVSA);
	}
	else
	{
		// .text:0000BEDC
		pKVXT_isim_get_period_XVSA = KVXT_isim_get_period_XVSA;
	}
	// loc_BF20
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_period_XVSA], %g1
		// ------>loc_C134
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_C0D0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_C114
		if (isOk != FALSE)
		{
			// .text:0000C120
			PLXAmem_free(&period);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_C12C
		return iErrorCode;
	}
	// .text:0000BF30
	if (pKVXT_isim_get_period_XVSA != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_BFF4
		iErrorCode = pKVXT_isim_get_period_XVSA(local_OOXA_local_KVXT_singleton_object, period);
		// loc_C00C
		// ld      [%fp+iErrorCode], %o5
		// loc_C010
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_C0D0
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:0000C01C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%16D %d", "period", "MBXA:period_struct", period, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%16D)=%R", local_OOXA_local_KVXT_singleton_object->component, "period", "MBXA:period_struct", period, iErrorCode);
		}
		// loc_C114
		if (isOk != FALSE)
		{
			// .text:0000C120
			PLXAmem_free(&period);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_C12C
		return iErrorCode;
	}
	// .text:0000BF3C
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:0000BF54
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x20, 0x56CEF61D, req_msg_data, 0, &req_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000BFB4
			period->unit = rep_msg_data->unit;
			period->type = rep_msg_data->type;
			period->typical = rep_msg_data->typical;
			period->maximum = rep_msg_data->maximum;
			if (rep_msg_data != NULL)
			{
				// .text:0000BFE4
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_C010
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_C0D0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000C01C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%16D %d", "period", "MBXA:period_struct", period, &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s (%16D)=%R", local_OOXA_local_KVXT_singleton_object->component, "period", "MBXA:period_struct", period, iErrorCode);
	}
	// loc_C114
	if (isOk != FALSE)
	{
		// .text:0000C120
		PLXAmem_free(&period);
	}
	// ld      [%fp+iErrorCode], %i0
	// loc_C12C
	return iErrorCode;
}

// 函数名：KVXT_get_plate_drift_refs
int KVXT_get_plate_drift_refs(WPxCHUCK_chuck_id_enum stage_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXT_TIS_drift_ref_struct *drift_refs,
	bool *validity)
{
	//WPxCHUCK_chuck_id_enum stage_id = i0;
	//MEXAxWAFxPLATE_wafer_level_plate plate_id = i1;
	//KVXT_TIS_drift_ref_struct *drift_refs = i2;
	//bool *validity = i3;
	KVXT_chuck_plate_id *req_msg_data = NULL;
	int(*pKVXT_isim_get_plate_drift_refs)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		MEXAxWAFxPLATE_wafer_level_plate plate_id,
		KVXT_TIS_drift_ref_struct *drift_refs,
		bool *validity) = NULL;
	int iErrorCode = 0;
	KVXT_unk_6 *rep_msg_data = NULL;
	int act_len = 0;
	bool drift_refs_isOk = FALSE;
	bool validity_isOk = FALSE;

	if (drift_refs == NULL)
	{
		// .text:00007558
		iErrorCode = OOXA_allocate_parameter(0x50, &drift_refs, &drift_refs_isOk);
	}
	// loc_756C
	// 这里需要对指令进行分析，粘贴代码：
	// ld[%fp + iErrorCode], %g1			// g1取值0或者正数（错误码一般是非负数）
	//	cmp     %g0, %g1					// g1 = 0,icc.c = 0		g1 != 0,icc.c = 1
	//	subc    %g0, -1, %g2				// g2 = 1 - icc.c;		g1 = 0,g2 = 1			g1 != 0,g2 = 0
	//	ld[%fp + validity], %g1				// validity取值0或者正数（地址为非负数）
	//	cmp     %g0, %g1					// g1 = 0,icc.c = 0		g1 != 0,icc.c = 1
	//	subc    %g0, -1, %g1				// g1 = 1 - icc.c;		validity = 0,g1 = 1		validity != 0,g1 = 0
	//	btst    %g1, %g2					// g0 = andcc %g1, %g2;	
	//	be      %icc, loc_75A8				// be:icc.z = 1			g1=0||g2=0,iErrorCode!=0||validity!=0
	//	ld[%fp + iErrorCode], %g1
	// 下面是bne的条件：!(iErrorCode!=0||validity!=0)	iErrorCode == 0 && validity == NULL
	if (iErrorCode == 0 && validity == NULL)
	{
		// .text:00007590
		iErrorCode = OOXA_allocate_parameter(4, &validity, &validity_isOk);
	}
	// loc_75A8
	if (iErrorCode == 0)
	{
		// .text:000075B4
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D", "stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
	}
	// loc_7634
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %4D)", local_OOXA_local_KVXT_singleton_object->component, "stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_7934
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_7978
		if (drift_refs_isOk != FALSE)
		{
			// .text:00007984
			PLXAmem_free(&drift_refs);
		}
		// ld      [%fp+validity_isOk], %g1
		// ------>loc_7990
		if (validity_isOk != FALSE)
		{
			// .text:0000799C
			PLXAmem_free(&validity);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_79A8
		return iErrorCode;
	}
	// .text:000076CC
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_76FC
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xC, 0x745041D6, &pKVXT_isim_get_plate_drift_refs);
	}
	else
	{
		// .text:000076EC
		pKVXT_isim_get_plate_drift_refs = KVXT_isim_get_plate_drift_refs;
	}
	// loc_7730
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_plate_drift_refs], %g1
		// ------>loc_79B0
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_7934
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_7978
		if (drift_refs_isOk != FALSE)
		{
			// .text:00007984
			PLXAmem_free(&drift_refs);
		}
		// ld      [%fp+validity_isOk], %g1
		// ------>loc_7990
		if (validity_isOk != FALSE)
		{
			// .text:0000799C
			PLXAmem_free(&validity);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_79A8
		return iErrorCode;
	}
	// .text:00007740
	if (pKVXT_isim_get_plate_drift_refs != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_7814
		iErrorCode = pKVXT_isim_get_plate_drift_refs(local_OOXA_local_KVXT_singleton_object, stage_id, plate_id, drift_refs, validity);
		// loc_7838
		// loc_783C
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_7934
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:00007848
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%80D %4D %d", "drift_refs", "KVXT:TIS_drift_ref_struct", drift_refs, "validity", "bool", validity, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%80D %4D)=%R", local_OOXA_local_KVXT_singleton_object->component, "drift_refs", "KVXT:TIS_drift_ref_struct", drift_refs, "validity", "bool", validity, iErrorCode);
		}
		// loc_7978
		if (drift_refs_isOk != FALSE)
		{
			// .text:00007984
			PLXAmem_free(&drift_refs);
		}
		// ld      [%fp+validity_isOk], %g1
		// ------>loc_7990
		if (validity_isOk != FALSE)
		{
			// .text:0000799C
			PLXAmem_free(&validity);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_79A8
		return iErrorCode;
	}
	// .text:0000774C
	iErrorCode = OOXA_allocate_buffer(8, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00007764
		req_msg_data->chuck_id = stage_id;
		req_msg_data->plate_id = plate_id;
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xC, 0x745041D6,
			req_msg_data, 8, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:000077D8
			memcpy(drift_refs, rep_msg_data, 0x50);
			*validity = rep_msg_data->b0x50;
			if (rep_msg_data != NULL)
			{
				// .text:00007804
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_783C
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_7934
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:00007848
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%80D %4D %d", "drift_refs", "KVXT:TIS_drift_ref_struct", drift_refs, "validity", "bool", validity, &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s (%80D %4D)=%R", local_OOXA_local_KVXT_singleton_object->component, "drift_refs", "KVXT:TIS_drift_ref_struct", drift_refs, "validity", "bool", validity, iErrorCode);
	}
	// loc_7978
	if (drift_refs_isOk != FALSE)
	{
		// .text:00007984
		PLXAmem_free(&drift_refs);
	}
	// ld      [%fp+validity_isOk], %g1
	// ------>loc_7990
	if (validity_isOk != FALSE)
	{
		// .text:0000799C
		PLXAmem_free(&validity);
	}
	// ld      [%fp+iErrorCode], %i0
	// ------>loc_79A8
	return iErrorCode;
}

// 函数名：KVXT_get_plate_level_ref_xyz
int KVXT_get_plate_level_ref_xyz(WPxCHUCK_chuck_id_enum stage_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	xyzvect *plate_level_ref_xyz)
{
	//WPxCHUCK_chuck_id_enum stage_id = i0;
	//MEXAxWAFxPLATE_wafer_level_plate plate_id = i1;
	//xyzvect *plate_level_ref_xyz = i2;
	KVXT_chuck_plate_id *req_msg_data = NULL;
	int(*pKVXT_isim_get_plate_level_ref_xyz)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		MEXAxWAFxPLATE_wafer_level_plate plate_id,
		xyzvect *plate_level_ref_xyz) = NULL;
	int iErrorCode = 0;
	xyzvect *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (plate_level_ref_xyz != NULL)
	{
		// clr     [%fp+isOk]
		// ------>loc_4FC0
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D", "stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
	}
	else
	{
		// .text:00004FA4
		iErrorCode = OOXA_allocate_parameter(0x18, &plate_level_ref_xyz, &isOk);
		if (iErrorCode == 0)
		{
			// loc_4FC0
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D", "stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
		}
	}
	// loc_503C
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %4D)", local_OOXA_local_KVXT_singleton_object->component, "stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// loc_52C0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_5304
		if (isOk != FALSE)
		{
			// .text:00005310
			PLXAmem_free(&plate_level_ref_xyz);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_531C
		return iErrorCode;
	}
	// .text:000050D8
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_5108
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 1, 0x16457AF1, &pKVXT_isim_get_plate_level_ref_xyz);
	}
	else
	{
		// .text:000050F8
		pKVXT_isim_get_plate_level_ref_xyz = KVXT_isim_get_plate_level_ref_xyz;
	}
	// loc_513C
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_plate_level_ref_xyz], %g1
		// ------>loc_5324
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_52C0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_5304
		if (isOk != FALSE)
		{
			// .text:00005310
			PLXAmem_free(&plate_level_ref_xyz);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_531C
		return iErrorCode;
	}
	// .text:0000514C
	if (pKVXT_isim_get_plate_level_ref_xyz != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_521C
		iErrorCode = pKVXT_isim_get_plate_level_ref_xyz(local_OOXA_local_KVXT_singleton_object, stage_id, plate_id, plate_level_ref_xyz);
		// loc_523C
		// ld      [%fp+iErrorCode], %o5
		// loc_5240
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_52C0
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:0000524C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_5304
		if (isOk != FALSE)
		{
			// .text:00005310
			PLXAmem_free(&plate_level_ref_xyz);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_531C
		return iErrorCode;
	}
	// .text:00005158
	iErrorCode = OOXA_allocate_buffer(8, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00005170
		req_msg_data->chuck_id = stage_id; // 这里stage_id用的chuck_id的类型
		req_msg_data->plate_id = plate_id;
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 1, 0x16457AF1, req_msg_data, 8, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:000051E4
			plate_level_ref_xyz->x = rep_msg_data->x;
			plate_level_ref_xyz->y = rep_msg_data->y;
			plate_level_ref_xyz->z = rep_msg_data->z;
			if (rep_msg_data != NULL)
			{
				// .text:0000520C
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_5240
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_52C0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000524C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_5304
	if (isOk != FALSE)
	{
		// .text:00005310
		PLXAmem_free(&plate_level_ref_xyz);
	}
	// ld      [%fp+iErrorCode], %i0
	// loc_531C
	return iErrorCode;
}

// 函数名：KVXT_get_plate_wedge
int KVXT_get_plate_wedge(WPxCHUCK_chuck_id_enum stage_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	zrxryvect *plate_wedge)
{
	//WPxCHUCK_chuck_id_enum stage_id = i0;
	//MEXAxWAFxPLATE_wafer_level_plate plate_id = i1;
	//zrxryvect *plate_wedge = i2;
	KVXT_chuck_plate_id *req_msg_data = NULL;
	int(*pKVXT_isim_get_plate_wedge)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		MEXAxWAFxPLATE_wafer_level_plate plate_id,
		zrxryvect *plate_wedge) = NULL;
	int iErrorCode = 0;
	zrxryvect *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (isOk != FALSE)
	{
		// clr     [%fp+isOk]
		// ------>loc_65D4
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D", "stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
	}
	else
	{
		// .text:000065B8
		iErrorCode = OOXA_allocate_parameter(0x18, &plate_wedge, &isOk);
		if (iErrorCode == 0)
		{
			// loc_65D4
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D", "stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
		}
	}
	// loc_6650
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %4D)", local_OOXA_local_KVXT_singleton_object->component, "stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_68D4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_6918
		if (isOk != FALSE)
		{
			// .text:00006924
			PLXAmem_free(&plate_wedge);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_6930
		return iErrorCode;
	}
	// .text:000066EC
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_671C
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 7, 0x10CA0B0B, &pKVXT_isim_get_plate_wedge);
	}
	else
	{
		// .text:0000670C
		pKVXT_isim_get_plate_wedge = KVXT_isim_get_plate_wedge;
	}
	// loc_6750
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_plate_wedge], %g1
		// ------>loc_6938
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_68D4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_6918
		if (isOk != FALSE)
		{
			// .text:00006924
			PLXAmem_free(&plate_wedge);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_6930
		return iErrorCode;
	}
	// .text:00006760
	if (pKVXT_isim_get_plate_wedge != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_6830
		iErrorCode = pKVXT_isim_get_plate_wedge(local_OOXA_local_KVXT_singleton_object, stage_id, plate_id, plate_wedge);
		// loc_6850
		// ld      [%fp+iErrorCode], %o5
		// loc_6854
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_68D4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:00006860
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_6918
		if (isOk != FALSE)
		{
			// .text:00006924
			PLXAmem_free(&plate_wedge);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_6930
		return iErrorCode;
	}
	// .text:0000676C
	iErrorCode = OOXA_allocate_buffer(8, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00006784
		req_msg_data->chuck_id = stage_id;
		req_msg_data->plate_id = plate_id;
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 7,
			0x10CA0B0B, req_msg_data, 8, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:000067F8
			plate_wedge->z = rep_msg_data->z;
			plate_wedge->rx = rep_msg_data->rx;
			plate_wedge->ry = rep_msg_data->ry;
			if (rep_msg_data != NULL)
			{
				// .text:00006820
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_6854
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_68D4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:00006860
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_6918
	if (isOk != FALSE)
	{
		// .text:00006924
		PLXAmem_free(&plate_wedge);
	}
	// ld      [%fp+iErrorCode], %i0
	// ------>loc_6930
	return iErrorCode;
}

// 函数名：KVXT_get_SA_capture_params，改好了
// 这里需要把bool看成4字节
int KVXT_get_SA_capture_params(KVXA_capture_params *capture_params)
{
	//KVXA_capture_params *capture_params = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_SA_capture_params)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		KVXA_capture_params *capture_params) = NULL;
	int iErrorCode = 0;
	KVXA_capture_params *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (capture_params == NULL)
	{
		// .text:00009DB4
		iErrorCode = OOXA_allocate_parameter(0x38, &capture_params, &isOk);
	}
	// loc_9DC8
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_A004
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_A048
		if (isOk != FALSE)
		{
			// .text:0000A054
			PLXAmem_free(&capture_params);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_A060
		return iErrorCode;
	}
	// .text:00009E18
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// -------->loc_9E48
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x17, 0xF32131C, &pKVXT_isim_get_SA_capture_params);
	}
	else
	{
		// .text:00009E38
		pKVXT_isim_get_SA_capture_params = KVXT_isim_get_SA_capture_params;
	}
	// loc_9E7C
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_SA_capture_params], %g1
		// ------>loc_A068
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_A004
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_A048
		if (isOk != FALSE)
		{
			// .text:0000A054
			PLXAmem_free(&capture_params);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_A060
		return iErrorCode;
	}
	// .text:00009E8C
	if (pKVXT_isim_get_SA_capture_params != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_9F68
		iErrorCode = pKVXT_isim_get_SA_capture_params(local_OOXA_local_KVXT_singleton_object, capture_params);
		// loc_9F80
		// ld      [%fp+iErrorCode], %o5
		// loc_9F84
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_A004
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:00009F90
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_A048
		if (isOk != FALSE)
		{
			// .text:0000A054
			PLXAmem_free(&capture_params);
		}
		// ld      [%fp+iErrorCode], %i0
		// ------>loc_A060
		return iErrorCode;
	}
	// .text:00009E98
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00009EB0
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x17, 0xF32131C,
			req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:00009F10
			//arg_44->d0x0 = rep_msg_data->d0x0;
			//arg_44->d0x8 = rep_msg_data->d0x8;
			//arg_44->d0x10 = rep_msg_data->d0x10;
			//arg_44->d0x18 = rep_msg_data->d0x18;
			//arg_44->d0x20 = rep_msg_data->d0x20;
			//arg_44->d0x28 = rep_msg_data->d0x28;
			//arg_44->d0x30 = rep_msg_data->d0x30;
			capture_params->capture_needed = rep_msg_data->capture_needed; // 0x0
			capture_params->capture_zrxry.z = rep_msg_data->capture_zrxry.z; // 0x8
			capture_params->capture_zrxry.rx = rep_msg_data->capture_zrxry.rx; // 0x10
			capture_params->capture_zrxry.ry = rep_msg_data->capture_zrxry.ry; // 0x18
			capture_params->capture_def.Z_capture_spot_selection = rep_msg_data->capture_def.Z_capture_spot_selection; // 0x20
			capture_params->capture_def.Ry_capture_needed = rep_msg_data->capture_def.Ry_capture_needed; // 0x24
			capture_params->capture_def.Ry_capture_spot_selection = rep_msg_data->capture_def.Ry_capture_spot_selection; // 0x28
			capture_params->capture_def.change_of_process = rep_msg_data->capture_def.change_of_process; // 0x2C
			capture_params->capture_def.on_process = rep_msg_data->capture_def.on_process; // 0x30
			if (rep_msg_data != NULL)
			{
				// .text:00009F58
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_9F84
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_A004
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:00009F90
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_A048
	if (isOk != FALSE)
	{
		// .text:0000A054
		PLXAmem_free(&capture_params);
	}
	// ld      [%fp+iErrorCode], %i0
	// ------>loc_A060
	return iErrorCode;
}

// 函数名：KVXT_get_SA_level_high_precision_count
int KVXT_get_SA_level_high_precision_count(int *precision_count)
{
	//int *precision_count = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_SA_level_high_precision_count)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		int *precision_count) = NULL;
	int iErrorCode = 0;
	int *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (isOk == FALSE)
	{
		// .text:00006C9C
		iErrorCode = OOXA_allocate_parameter(4, &precision_count, &isOk);
	}
	// loc_6CB0
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_6EBC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_6F00
		if (isOk != FALSE)
		{
			// .text:00006F0C
			PLXAmem_free(&precision_count);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_6F18
		return iErrorCode;
	}
	// .text:00006D00
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_6D30
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 9, 0xA641FF2, &pKVXT_isim_get_SA_level_high_precision_count);
	}
	else
	{
		// .text:00006D20
		pKVXT_isim_get_SA_level_high_precision_count = KVXT_isim_get_SA_level_high_precision_count;
	}
	// loc_6D64
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_SA_level_high_precision_count], %g1
		// ------>loc_6F20
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_6EBC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_6F00
		if (isOk != FALSE)
		{
			// .text:00006F0C
			PLXAmem_free(&precision_count);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_6F18
		return iErrorCode;
	}
	// .text:00006D74
	if (pKVXT_isim_get_SA_level_high_precision_count != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_6E20
		iErrorCode = pKVXT_isim_get_SA_level_high_precision_count(local_OOXA_local_KVXT_singleton_object, precision_count);
		// loc_6E38
		// ld      [%fp+iErrorCode], %o5
		// loc_6E3C
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_6EBC
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:00006E48
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_6F00
		if (isOk != FALSE)
		{
			// .text:00006F0C
			PLXAmem_free(&precision_count);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_6F18
		return iErrorCode;
	}
	// .text:00006D80
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00006D98
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 9, 0xA641FF2, req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:00006DF8
			*precision_count = *rep_msg_data;
			if (rep_msg_data != NULL)
			{
				// .text:00006E10
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_6E3C
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_6EBC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:00006E48
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_6F00
	if (isOk != FALSE)
	{
		// .text:00006F0C
		PLXAmem_free(&precision_count);
	}
	// ld      [%fp+iErrorCode], %i0
	// loc_6F18
	return iErrorCode;
}

// 函数名：KVXT_get_SA_model_done
int KVXT_get_SA_model_done(bool *sa_model_done)
{
	//bool *sa_model_done = i0;
	char *req_msg_data = NULL;
	int(*pKVXT_isim_get_SA_model_done)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		bool *sa_model_done) = NULL;
	int iErrorCode = 0;
	bool *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (isOk == FALSE)
	{
		// .text:0000A994
		iErrorCode = OOXA_allocate_parameter(4, &sa_model_done, &isOk);
	}
	// loc_A9A8
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_ABB4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_ABF8
		if (isOk != FALSE)
		{
			// .text:0000AC04
			PLXAmem_free(&sa_model_done);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_AC10
		return iErrorCode;
	}
	// .text:0000A9F8
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_AA28
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1B, 0x6B525E63, &pKVXT_isim_get_SA_model_done);
	}
	else
	{
		// .text:0000AA18
		pKVXT_isim_get_SA_model_done = KVXT_isim_get_SA_model_done;
	}
	// loc_AA5C
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_SA_model_done], %g1
		// ------>loc_AC18
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_ABB4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_ABF8
		if (isOk != FALSE)
		{
			// .text:0000AC04
			PLXAmem_free(&sa_model_done);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_AC10
		return iErrorCode;
	}
	// .text:0000AA6C
	if (pKVXT_isim_get_SA_model_done != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_AB18
		iErrorCode = pKVXT_isim_get_SA_model_done(local_OOXA_local_KVXT_singleton_object, sa_model_done);
		// loc_AB30
		// ld      [%fp+iErrorCode], %o5
		// loc_AB34
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_ABB4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:0000AB40
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_ABF8
		if (isOk != FALSE)
		{
			// .text:0000AC04
			PLXAmem_free(&sa_model_done);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_AC10
		return iErrorCode;
	}
	// .text:0000AA78
	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:0000AA90
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1B, 0x6B525E63,
			req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000AAF0
			*sa_model_done = *rep_msg_data;
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_AB34
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_ABB4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000AB40
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_ABF8
	if (isOk != FALSE)
	{
		// .text:0000AC04
		PLXAmem_free(&sa_model_done);
	}
	// ld      [%fp+iErrorCode], %i0
	// loc_AC10
	return iErrorCode;
}

// 函数名：KVXT_get_SA_plate_level_info
int KVXT_get_SA_plate_level_info(WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXA_plate_level_info *plate_level_info)
{
	//WPxCHUCK_chuck_id_enum chuck_id = i0;
	//MEXAxWAFxPLATE_wafer_level_plate plate_id = i1;
	//KVXA_plate_level_info *plate_level_info = i2;
	KVXT_chuck_plate_id *req_msg_data = NULL;
	int(*pKVXT_isim_get_SA_plate_level_info)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		MEXAxWAFxPLATE_wafer_level_plate plate_id,
		KVXA_plate_level_info *plate_level_info) = NULL;
	int iErrorCode = 0;
	KVXA_plate_level_info *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (plate_level_info != NULL)
	{
		// clr     [%fp+isOk]
		// ------>loc_8920
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
	}
	else
	{
		// .text:00008900
		iErrorCode = OOXA_allocate_parameter(0x21A0, &plate_level_info, &isOk);
		if (iErrorCode == 0)
		{
			// loc_8920
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
		}
	}
	// loc_899C
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_8C1C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_8C60
		if (isOk != FALSE)
		{
			// .text:00008C6C
			PLXAmem_free(&plate_level_info);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_8C78
		return iErrorCode;
	}
	// .text:00008A38
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_8A68
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x11, 0x4CEB4298, &local_OOXA_local_KVXT_singleton_object);
	}
	else
	{
		// .text:00008A58
		pKVXT_isim_get_SA_plate_level_info = KVXT_isim_get_SA_plate_level_info;
	}
	// loc_8A9C
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_SA_plate_level_info], %g1
		// ------>loc_8C80
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_8C1C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_8C60
		if (isOk != FALSE)
		{
			// .text:00008C6C
			PLXAmem_free(&plate_level_info);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_8C78
		return iErrorCode;
	}
	// .text:00008AAC
	if (pKVXT_isim_get_SA_plate_level_info != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_8B78
		iErrorCode = pKVXT_isim_get_SA_plate_level_info(local_OOXA_local_KVXT_singleton_object, chuck_id, plate_id, plate_level_info);
		// loc_8B98
		// ld      [%fp+iErrorCode], %o5
		// loc_8B9C
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_8C1C
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:00008BA8
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_8C60
		if (isOk != FALSE)
		{
			// .text:00008C6C
			PLXAmem_free(&plate_level_info);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_8C78
		return iErrorCode;
	}
	// .text:00008AB8
	iErrorCode = OOXA_allocate_buffer(8, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00008AD0
		req_msg_data->chuck_id = chuck_id;
		req_msg_data->plate_id = plate_id;
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x11, 0x4CEB4298, req_msg_data, 8, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:00008B44
			memcpy(plate_level_info, rep_msg_data, 0x21A0);
			if (rep_msg_data != NULL)
			{
				// .text:00008B68
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_8B9C
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_8C1C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:00008BA8
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_8C60
	if (isOk != FALSE)
	{
		// .text:00008C6C
		PLXAmem_free(&plate_level_info);
	}
	// ld      [%fp+iErrorCode], %i0
	// loc_8C78
	return iErrorCode;
}

// 函数名：KVXT_get_wafer_map
int KVXT_get_wafer_map(WPxCHUCK_chuck_id_enum chuck_id,
	KWXA_wafer_map *wafer_map)
{
	//WPxCHUCK_chuck_id_enum chuck_id = i0;
	//KWXA_wafer_map *wafer_map = i1;
	WPxCHUCK_chuck_id_enum *req_msg_data = NULL;
	int(*pKVXT_isim_get_wafer_map)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		KWXA_wafer_map *wafer_map) = NULL;
	int iErrorCode = 0;
	KWXA_wafer_map *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	THXAtraceTP("KV", 0x4B56F510);
	// 这里有一段指令需要分析：
	// ld[%fp + iErrorCode], %g1	g1为错误码，为0或者一个正数（非0）
	//	cmp     %g0, %g1			g0 = g0 - g1,	iErrorCode = 0,icc.c = 0			iErrorCode != 0,icc.c = 1
	//	subc    %g0, -1, %g2		g2 = 1 - icc.z	iErrorCode = 0,g2 = 1				iErrorCode != 0,g2 = 0
	//	ld[%fp + wafer_map], %g1	wafer_map为地址，为0或者一个正数（非0）
	//	cmp     %g0, %g1			g0 = g0 - g1	wafer_map = 0,icc.c = 0				wafer_map != 0,icc.c = 1
	//	subc    %g0, -1, %g1		g1 = 1 - icc.z	wafer_map = 0,g1 = 1				wafer_map != 0,g1 = 0
	//	btst    %g1, %g2			andcc %g1, %g2, %g0
	//	be      %icc, loc_FFAC		be:icc.z = 1			g1=0||g2=0,iErrorCode != 0 || wafer_map != 0
	//	这里取bne的条件				bne:icc.z = 0			!(iErrorCode != 0 || wafer_map != 0),iErrorCode = 0 && wafer_map = NULL
	if (iErrorCode == 0 && wafer_map == NULL)
	{
		// .text:0000FF90
		iErrorCode = OOXA_allocate_parameter(0x800020, &wafer_map, &isOk);
	}
	// loc_FFAC
	if (iErrorCode == 0)
	{
		// .text:0000FFB8 
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	}
	// loc_10010
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_10258
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_1029C
		if (isOk != FALSE)
		{
			// .text:000102A8
			PLXAmem_free(&wafer_map);
		}
		// sethi   %hi(0), %g1
		// loc_102B4
		THXAtraceTP("KV", 0x4B56F511);
		return iErrorCode;
	}
	// .text:00010080
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_100B0
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x32, 0x3D1F35A1, &pKVXT_isim_get_wafer_map);
	}
	else
	{
		// .text:000100A0
		pKVXT_isim_get_wafer_map = KVXT_isim_get_wafer_map;
	}
	// loc_100E4
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_wafer_map], %g1
		// ------>loc_102D4
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_10258
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_1029C
		if (isOk != FALSE)
		{
			// .text:000102A8
			PLXAmem_free(&wafer_map);
		}
		// sethi   %hi(0), %g1
		// loc_102B4
		THXAtraceTP("KV", 0x4B56F511);
		return iErrorCode;
	}
	// .text:000100F4
	if (pKVXT_isim_get_wafer_map != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_101B8
		iErrorCode = pKVXT_isim_get_wafer_map(local_OOXA_local_KVXT_singleton_object, chuck_id, wafer_map);
		// loc_101D4
		// ld      [%fp+iErrorCode], %o5
		// loc_101D8
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_10258
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:000101E4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_1029C
		if (isOk != FALSE)
		{
			// .text:000102A8
			PLXAmem_free(&wafer_map);
		}
		// sethi   %hi(0), %g1
		// loc_102B4
		THXAtraceTP("KV", 0x4B56F511);
		return iErrorCode;
	}
	// .text:00010100
	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00010118
		*req_msg_data = chuck_id;
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x32, 0x3D1F35A1,
			req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:00010184
			memcpy(wafer_map, rep_msg_data, 0x800020);
			if (rep_msg_data != NULL)
			{
				// .text:000101A8
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// ------>loc_101D8
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_10258
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:000101E4
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_1029C
	if (isOk != FALSE)
	{
		// .text:000102A8
		PLXAmem_free(&wafer_map);
	}
	// sethi   %hi(0), %g1
	// loc_102B4
	THXAtraceTP("KV", 0x4B56F511);
	return iErrorCode;
}

// 函数名：KVXT_get_ws_zeroing_error_zrxry
int KVXT_get_ws_zeroing_error_zrxry(WPxCHUCK_chuck_id_enum chuck_id,
	zrxryvect *ws_zeroing_error_zrxry)
{
	//WPxCHUCK_chuck_id_enum chuck_id = i0;
	//zrxryvect *ws_zeroing_error_zrxry = i1;
	WPxCHUCK_chuck_id_enum *req_msg_data = NULL;
	int(*pKVXT_isim_get_ws_zeroing_error_zrxry)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		zrxryvect *ws_zeroing_error_zrxry) = NULL;
	int iErrorCode = 0;
	zrxryvect *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	THXAtraceTP("KV", 0x4B56F530);
	// 这里需要进行分析，粘贴代码如下：
	// ld[%fp + iErrorCode], %g1
	// cmp     %g0, %g1
	// subc    %g0, -1, %g2
	// ld[%fp + arg_48], %g1
	// cmp     %g0, %g1
	// subc    %g0, -1, %g1
	// btst    %g1, %g2
	// be      %icc, loc_90B4
	// 需要bne
	if (iErrorCode == 0 && ws_zeroing_error_zrxry == NULL)
	{
		// .text:0000909C
		iErrorCode = OOXA_allocate_parameter(0x18, &ws_zeroing_error_zrxry, &isOk);
	}
	// loc_90B4
	if (iErrorCode == 0)
	{
		// .text:000090C0
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	}
	// loc_9118
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_9364
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_93A8
		if (isOk != FALSE)
		{
			// .text:000093B4
			PLXAmem_free(&ws_zeroing_error_zrxry);
		}
		// sethi   %hi(0), %g1
		// loc_93C0
		THXAtraceTP("KV", 0x4B56F531);
		return iErrorCode;
	}
	// .text:00009188
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_91B8
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x13, 0x2447948E, &local_OOXA_local_KVXT_singleton_object);
	}
	else
	{
		// .text:000091A8
		pKVXT_isim_get_ws_zeroing_error_zrxry = KVXT_isim_get_ws_zeroing_error_zrxry;
	}
	// loc_91EC
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_ws_zeroing_error_zrxry], %g1
		// ------>loc_93E0
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_9364
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_93A8
		if (isOk != FALSE)
		{
			// .text:000093B4
			PLXAmem_free(&ws_zeroing_error_zrxry);
		}
		// sethi   %hi(0), %g1
		// loc_93C0
		THXAtraceTP("KV", 0x4B56F531);
		return iErrorCode;
	}
	// .text:000091FC
	if (pKVXT_isim_get_ws_zeroing_error_zrxry != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_92C4
		iErrorCode = pKVXT_isim_get_ws_zeroing_error_zrxry(local_OOXA_local_KVXT_singleton_object, chuck_id, ws_zeroing_error_zrxry);
		// loc_92E0
		// ld      [%fp+iErrorCode], %o5
		// loc_92E4
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// loc_9364
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:000092F0
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		// loc_93A8
		if (isOk != FALSE)
		{
			// .text:000093B4
			PLXAmem_free(&ws_zeroing_error_zrxry);
		}
		// sethi   %hi(0), %g1
		// loc_93C0
		THXAtraceTP("KV", 0x4B56F531);
		return iErrorCode;
	}
	// .text:00009208
	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:00009220
		*req_msg_data = chuck_id;
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x13, 0x2447948E, req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000928C
			ws_zeroing_error_zrxry->z = rep_msg_data->z;
			ws_zeroing_error_zrxry->rx = rep_msg_data->rx;
			ws_zeroing_error_zrxry->ry = rep_msg_data->ry;
			if (rep_msg_data != NULL)
			{
				// .text:000092B4
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_92E4
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// loc_9364
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:000092F0
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	// loc_93A8
	if (isOk != FALSE)
	{
		// .text:000093B4
		PLXAmem_free(&ws_zeroing_error_zrxry);
	}
	// sethi   %hi(0), %g1
	// loc_93C0
	THXAtraceTP("KV", 0x4B56F531);
	return iErrorCode;
}

// 函数名：KVXT_get_XVSA_scan_results
int KVXT_get_XVSA_scan_results(WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	MEXAxVSA_XVSA_scan_data *scan_result)
{
	//WPxCHUCK_chuck_id_enum chuck_id = i0;
	//MEXAxWAFxPLATE_wafer_level_plate plate_id = i1;
	//MEXAxVSA_XVSA_scan_data *scan_result = i2;
	KVXT_chuck_plate_id *req_msg_data = NULL;
	int(*pKVXT_isim_get_XVSA_scan_results)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		MEXAxWAFxPLATE_wafer_level_plate plate_id,
		MEXAxVSA_XVSA_scan_data *scan_data) = NULL;
	int iErrorCode = 0;
	MEXAxVSA_XVSA_scan_data *rep_msg_data = NULL;
	int act_len = 0;
	bool isOk = FALSE;

	if (scan_result != NULL)
	{
		// clr     [%fp+isOk]
		// ------>loc_B1F8
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
	}
	else
	{
		// .text:0000B1D8
		iErrorCode = OOXA_allocate_parameter(0xBB88, &scan_result, &isOk);
		if (iErrorCode == 0)
		{
			// loc_B1F8
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
		}
	}
	// loc_B274
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_B534
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_B578
		if (isOk != FALSE)
		{
			// .text:0000B584
			PLXAmem_free(&scan_result);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_B590
		return iErrorCode;
	}
	// .text:0000B310
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_B340
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1D, 0x5EF6CC44, &pKVXT_isim_get_XVSA_scan_results);
	}
	else
	{
		// .text:0000B330
		pKVXT_isim_get_XVSA_scan_results = KVXT_isim_get_XVSA_scan_results;
	}
	// loc_B374
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_get_XVSA_scan_results], %g1
		// ------>loc_B598
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_B534
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		// loc_B578
		if (isOk != FALSE)
		{
			// .text:0000B584
			PLXAmem_free(&scan_result);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_B590
		return iErrorCode;
	}
	// .text:0000B384
	if (pKVXT_isim_get_XVSA_scan_results != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_B450
		iErrorCode = pKVXT_isim_get_XVSA_scan_results(local_OOXA_local_KVXT_singleton_object, chuck_id, plate_id, scan_result);
		// loc_B470
		// ld      [%fp+iErrorCode], %o5
		// loc_B474
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_B534
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			// .text:0000B480
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%48008D %d", "scan_result", "MEXAxVSA:XVSA_scan_data", scan_result, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%48008D)=%R", local_OOXA_local_KVXT_singleton_object->component, "scan_result", "MEXAxVSA:XVSA_scan_data", scan_result, iErrorCode);
		}
		// loc_B578
		if (isOk != FALSE)
		{
			// .text:0000B584
			PLXAmem_free(&scan_result);
		}
		// ld      [%fp+iErrorCode], %i0
		// loc_B590
		return iErrorCode;
	}
	// .text:0000B390
	iErrorCode = OOXA_allocate_buffer(8, &req_msg_data);
	if (iErrorCode == 0)
	{
		// .text:0000B3A8
		req_msg_data->chuck_id = chuck_id;
		req_msg_data->plate_id = plate_id;
		iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1D, 0x5EF6CC44, req_msg_data, 8, &rep_msg_data, &act_len, 0x41, 0x96);
		if (iErrorCode == 0)
		{
			// .text:0000B41C
			memcpy(scan_result, rep_msg_data, 0xBB88);
			if (rep_msg_data != NULL)
			{
				// .text:0000B440
				OOXA_release_buffer(rep_msg_data);
			}
		}
	}
	// ld      [%fp+iErrorCode], %o5
	// loc_B474
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_B534
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:0000B480
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%48008D %d", "scan_result", "MEXAxVSA:XVSA_scan_data", scan_result, &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s (%48008D)=%R", local_OOXA_local_KVXT_singleton_object->component, "scan_result", "MEXAxVSA:XVSA_scan_data", scan_result, iErrorCode);
	}
	// loc_B578
	if (isOk != FALSE)
	{
		// .text:0000B584
		PLXAmem_free(&scan_result);
	}
	// ld      [%fp+iErrorCode], %i0
	// loc_B590
	return iErrorCode;
}

// 函数名：KVXT_invalidate_iVSA_fallback_shapes
int KVXT_invalidate_iVSA_fallback_shapes(WPxCHUCK_chuck_id_enum chuck_id)
{
	//WPxCHUCK_chuck_id_enum chuck_id = i0;
	WPxCHUCK_chuck_id_enum *req_msg_data = NULL;
	int(*pKVXT_isim_invalidate_iVSA_fallback_shapes)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;

	THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_DFBC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000DDF8
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_DE28
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x28, 0x26E4BE61, &local_OOXA_local_KVXT_singleton_object);
	}
	else
	{
		// .text:0000DE18
		pKVXT_isim_invalidate_iVSA_fallback_shapes = KVXT_isim_invalidate_iVSA_fallback_shapes;
	}
	// loc_DE5C
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXT_isim_invalidate_iVSA_fallback_shapes], %g1
		// ------>loc_E008
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_DFBC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000DE6C
	if (pKVXT_isim_invalidate_iVSA_fallback_shapes != NULL)
	{
		// sethi   %hi(0x400), %g2
		// ------>loc_DF1C
		iErrorCode = pKVXT_isim_invalidate_iVSA_fallback_shapes(local_OOXA_local_KVXT_singleton_object, chuck_id);
		// loc_DF34
		// ld      [%fp+iErrorCode], %o5
		// loc_DF38
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_DFBC
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			// .text:0000DF44
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000DE78
	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{
		// st      %o0, [%fp+iErrorCode]
		// ------>loc_DF34
		// ld      [%fp+iErrorCode], %o5
		// loc_DF38
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_DFBC
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			// .text:0000DF44
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000DE90
	*req_msg_data = chuck_id;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x28, 0x26E4BE61,
		req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		// st      %o0, [%fp+iErrorCode]
		// ------>loc_DF34
		// ld      [%fp+iErrorCode], %o5
		// loc_DF38
		if (iErrorCode != 0)
		{
			// sethi   %hi(0), %g1
			// ------>loc_DFBC
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			// .text:0000DF44
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000DEFC
	if (rep_msg_data == NULL)
	{
		// sethi   %hi(0), %g1
		// ------>loc_DF44
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000DF0C
	OOXA_release_buffer(rep_msg_data);
	// ld      [%fp+iErrorCode], %o5
	// ------>loc_DF38
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_DFBC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{
		// .text:0000DF44
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_isim_get_GLC_capture_params
int KVXT_isim_get_GLC_capture_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXA_capture_params *capture_params)
{
	// 系统自定义宏，__FUNCTION__ = 本函数名,char _FUNCTION_[] = "KVXT_isim_get_GLC_capture_params";
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (capture_params != NULL)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_1775C
		THXAtrace("KV", 2, __FUNCTION__, "> ( capture_params = %s )", "*");
		capture_params->capture_needed = TRUE; // 0x0
		capture_params->capture_zrxry.z = 0; // 0x8
		capture_params->capture_zrxry.rx = 0; // 0x10
		capture_params->capture_zrxry.ry = 0; // 0x18
		capture_params->capture_def.Z_capture_spot_selection = 0x20; // 0x20
		capture_params->capture_def.Ry_capture_needed = FALSE; // 0x24
		capture_params->capture_def.Ry_capture_spot_selection = 0; // 0x28
		capture_params->capture_def.change_of_process = FALSE; // 0x2C
		capture_params->capture_def.on_process = FALSE; // 0x30
		// o4 = "TRUE"
		// o3 = 0
		if (0 == 0)
		{
			// mov     0, %o3
			// loc_17810
			// g4 = "FALSE"
			// loc_1781C
			// loc_17828
			// sp+0x7C = g4 = "FALSE"
			THXAtrace("KV", 2, "========", "< ( {Capture: needed = %s, z = %.6f [mm], rx = %.6f [mrad], ry = %.6f [mrad], spot_selection: height = %X, tilt capture needed = %s, tilt = %X, change_of_process = %s, on_process = %s} )", "TRUE", "FALSE", 0, 0, 0, 0, 0, 0x20, "FALSE", 0, "FALSE", "FALSE");
		}
		else
		{
			// .text:00017808
			// g4 = o4 = "TRUE"
			// mov     %o4, %g4
			// ------>loc_1781C
			// loc_1781C
			// sp+0x7C = g4 = "TRUE"
			THXAtrace("KV", 2, "========", "< ( {Capture: needed = %s, z = %.6f [mm], rx = %.6f [mrad], ry = %.6f [mrad], spot_selection: height = %X, tilt capture needed = %s, tilt = %X, change_of_process = %s, on_process = %s} )", "TRUE", "FALSE", 0, 0, 0, 0, 0, 0x20, "FALSE", 0, "TRUE", "FALSE");
		}
		THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
		return 0;
	}
	else
	{
		// .text:000176F8
		THXAtrace("KV", 2, __FUNCTION__, "> ( capture_params = %s )", "NULL");
		// loc_17828
		THXAtrace("KV", 2, "========", "< ( {Capture: needed = %s, z = %.6f [mm], rx = %.6f [mrad], ry = %.6f [mrad], spot_selection: height = %X, tilt capture needed = %s, tilt = %X, change_of_process = %s, on_process = %s} )", "NULL", 0, 0, 0, 0, 0, 0, 0, "NULL", 0, "NULL", "NULL");
		THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
		return 0;
	}
}

// 函数名：KVXT_isim_get_lot_GLC_params
int KVXT_isim_get_lot_GLC_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXAxLOTxPAR_GLC_lot_data *glc_lot_data_p)
{
	// __FUNCTION__ = "KVXT_isim_get_lot_GLC_params"

	int iErrorCode = 0;
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (glc_lot_data_p == NULL)
	{
		// .text:0001693C
		THXAtrace("KV", 2, "========", "> ( glc_lot_data_p = %s )", "NULL");
		// st      %i1, [%sp+0x5C]
		// ------>loc_16A74
		// loc_16A80
		THXAtrace("KV", 2, "========", "< ( %D )", "glc_lot_data_p", "KVXAxLOTxPAR:GLC_lot_data", glc_lot_data_p);
		// ld      [%l7+%g1], %o4
		// ------>loc_16AF4
		THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
		return 0;
	}
	// sethi   %hi(0x400), %g1
	// ------>loc_16B20
	THXAtrace("KV", 2, "========", "> ( glc_lot_data_p = %s )", "*");
	iErrorCode = DDXAxVARARRAY_ensure_length("KVXAxLOTxPAR:GLC_lot_data", glc_lot_data_p, 1);
	if (iErrorCode == 0)
	{
		// mov     %o0, %i0
		// ------>loc_16978
		glc_lot_data_p->array->capture_xy.x = 0.001;
		glc_lot_data_p->array->capture_xy.y = 0.001;
		glc_lot_data_p->array->centre_xy.x = 0.001;
		glc_lot_data_p->array->capture_xy.y = 0.001;
		glc_lot_data_p->array->start_angle = 1.570796326794897; // pi/2
		glc_lot_data_p->array->end_angle = 3.141592653589793; // pi
		glc_lot_data_p->array->radius = 0.01;

		glc_lot_data_p->array->le_tableset.measgrid_table.numEntries = 2;
		glc_lot_data_p->array->le_tableset.measgrid_table.measPointTbl.element = LEXAxDEF_SCAN_TYPE_ZMAP;
		glc_lot_data_p->array->le_tableset.measgrid_table.measPointTbl.spec.zmap[0].position = 0.001;
		glc_lot_data_p->array->le_tableset.measgrid_table.measPointTbl.spec.zmap[0].pdgcTableId = 2;
		glc_lot_data_p->array->le_tableset.measgrid_table.measPointTbl.spec.zmap[0].index = 2;

		glc_lot_data_p->array->le_tableset.meas_spot_valid_table.numEntries = 1;
		glc_lot_data_p->array->le_tableset.meas_spot_valid_table.validSpots[0].position = 0.001;
		glc_lot_data_p->array->le_tableset.meas_spot_valid_table.validSpots[0].spots = 1;

		glc_lot_data_p->array->le_tableset.scan_servo_spot_valid_table.numEntries = 1;
		glc_lot_data_p->array->le_tableset.scan_servo_spot_valid_table.validSpots[0].position = 0.001;
		glc_lot_data_p->array->le_tableset.scan_servo_spot_valid_table.validSpots[0].spots = 1;
		// loc_16A74
		// loc_16A80
		THXAtrace("KV", 2, "========", "< ( %D )", "glc_lot_data_p", "KVXAxLOTxPAR:GLC_lot_data", glc_lot_data_p);
		// ld      [%l7+%g1], %o4
		// ------>loc_16AF4
		THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
	}
	else
	{
		// .text:00016B78
		THXAtrace("KV", 2, "========", "< ( %D )", "glc_lot_data_p", "KVXAxLOTxPAR:GLC_lot_data", glc_lot_data_p);
		if (iErrorCode == 0x4B560000)
		{
			// .text:00016BD4
			THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "KVXT_SYS_ERROR");
		}
		else if (iErrorCode == 0x4B560101)
		{
			// loc_16AE8
			THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "KVXT_STATE_ERROR");
		}
		else
		{
			// .text:00016ADC
			THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "ERROR");
		}
	}
	return iErrorCode;
}


// 函数名：KVXT_isim_get_lot_WM_params
int KVXT_isim_get_lot_WM_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXAxLOTxPAR_WM_lot_data_t *wm_lot_data_p)
{
	//int iErrorCode = 0;
	int iErrorLink = 0;
	char *psErrorText = NULL;

	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (wm_lot_data_p == NULL)
	{
		// sethi   %hi(0), %g1
		// ------>loc_16D58
		// loc_16D64
		THXAtrace("KV", 2, "========", "> ( wm_lot_data_p = %s )", "NULL");
	}
	else
	{
		// .text:00016D4C
		// loc_16D64
		THXAtrace("KV", 2, "========", "> ( wm_lot_data_p = %s )", "*");
	}
	// .text:00016D90
	iErrorLink = DDXAxVARARRAY_ensure_length("KVXAxLOTxPAR:WM_stroke_array_t", &wm_lot_data_p->strokes, 1);
	if (iErrorLink != 0)
	{
		// mov     %o0, %i0
		// loc_16DCC
		psErrorText = ERXAmakeContext("%s: DDXAxVARARRAY_ensure_length(\"KVXAxLOTxPAR:WM_stroke_array_t\", &wm_lot_data_p->strokes, 1) failed", __FUNCTION__);
		// mov     %o0, %o5
		// loc_16DEC
		ERXAlogExceptionSingleLink(0x4B560000, iErrorLink, "KVXT_isim.c", 0x50A, 0, psErrorText);
	}
	else
	{
		// .text:00016DB4
		if (wm_lot_data_p->strokes.len != 1)
		{
			// sethi   %hi(0x400), %g1
			// ------>loc_17114
			psErrorText = ERXAmakeContext("%s: DDXAxVARARRAY_ensure_length(\"KVXAxLOTxPAR:WM_stroke_array_t\", &wm_lot_data_p->strokes, 1) failed", __FUNCTION__);
			ERXAlogExceptionSingleLink(0x4B560000, iErrorLink, __FILE__, __LINE__, NULL, psErrorText);
		}
		// ld      [%i1+0x70], %o1
		// loc_16E14
		iErrorLink = DDXAxVARARRAY_ensure_length("KVXAxLOTxPAR:WM_area_array_t", &wm_lot_data_p->strokes.array[0].areas, 1);
		if (iErrorLink != 0)
		{
			// mov     %o0, %i0
			// ------>loc_16E64
			psErrorText = ERXAmakeContext("%s: DDXAxVARARRAY_ensure_length(\"KVXAxLOTxPAR:WM_area_array_t\", &wm_lot_data_p->strokes.array[0].areas, 1) failed", __FUNCTION__);
			ERXAlogExceptionSingleLink(0x4B560000, iErrorLink, __FILE__, __LINE__, NULL, psErrorText);
		}
		else
		{
			// .text:00016E40
			if (wm_lot_data_p->strokes.array[0].areas.len != 1)
			{
				// sethi   %hi(0x400), %g1
				// ------>loc_17158
				psErrorText = ERXAmakeContext("%s: DDXAxVARARRAY_ensure_length(\"KVXAxLOTxPAR:WM_area_array_t\", &wm_lot_data_p->strokes.array[0].areas, 1) failed", __FUNCTION__);
				ERXAlogExceptionSingleLink(0x4B560000, iErrorLink, __FILE__, __LINE__, NULL, psErrorText);
			}
			// sethi   %hi(0x400), %g1
			// loc_16EAC
			wm_lot_data_p->strokes.array[0].scan_direction = DTXA_scan_up;
			wm_lot_data_p->strokes.array[0].x = 0.001;
			wm_lot_data_p->strokes.array[0].y_start = 0.0;
			wm_lot_data_p->strokes.array[0].y_end = 1.0;
			//......偏移地址确定不了

			// .text:00016F90
			wm_lot_data_p->strokes.array[0].le_tableset.measgrid_table.numEntries = 2;
			wm_lot_data_p->strokes.array[0].le_tableset.measgrid_table.measPointTbl.spec.zmap[0].position = 0.001;
			wm_lot_data_p->strokes.array[0].le_tableset.measgrid_table.measPointTbl.spec.zmap[0].pdgcTableId = 1;
			wm_lot_data_p->strokes.array[0].le_tableset.measgrid_table.measPointTbl.spec.zmap[0].index = 1;

			wm_lot_data_p->strokes.array[0].le_tableset.meas_spot_valid_table.numEntries = 1;
			wm_lot_data_p->strokes.array[0].le_tableset.meas_spot_valid_table.validSpots[0].position = 0.001;
			wm_lot_data_p->strokes.array[0].le_tableset.meas_spot_valid_table.validSpots[0].spots = 1;

			wm_lot_data_p->strokes.array[0].le_tableset.scan_servo_spot_valid_table.numEntries = 1;
			wm_lot_data_p->strokes.array[0].le_tableset.scan_servo_spot_valid_table.validSpots[0].position = 0.001;
			wm_lot_data_p->strokes.array[0].le_tableset.scan_servo_spot_valid_table.validSpots[0].spots = 1;
		}
	}
	// sethi   %hi(0x400), %g1
	// loc_17010
	// f8 = 0.0
	if (wm_lot_data_p != NULL)
	{
		// .text:00017028
		// f8 = wm_lot_data_p->wafer_plane_deviation_limit;
		// f10 = 1000;
		// f8 = f10 * f8 = 1000 * wm_lot_data_p->wafer_plane_deviation_limit;
		THXAtrace("KV", 2, "========", "< ( {wafer plane deviation limit = %.6f [mm], nr of wm strokes = %d} )", 1000 * wm_lot_data_p->wafer_plane_deviation_limit);
	}
	else
	{
		// loc_17044
		THXAtrace("KV", 2, "========", "< ( {wafer plane deviation limit = %.6f [mm], nr of wm strokes = %d} )", 0);
	}
	// .text:0001707C
	if (iErrorLink == 0)
	{
		THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
	}
	else if (iErrorLink = 0x4B560100)
	{
		THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "KVXT_SYS_ERROR");
	}
	else if (iErrorLink = 0x4B560101)
	{
		THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "KVXT_STATE_ERROR");
	}
	else
	{
		THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "ERROR");
	}
	return iErrorLink;
}

// 函数名：KVXT_isim_get_plate_drift_refs
int KVXT_isim_get_plate_drift_refs(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXT_TIS_drift_ref_struct *TIS_drift_refs_p,
	bool *validity)
{
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (chuck_id == 0)
	{
		// .text:000190A4
		THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_1");
	}
	else
	{
		// cmp     %i1, 1
		// ------>loc_190B4
		if (chuck_id == 1)
		{
			// sethi   %hi(0), %g1
			// ------>loc_190C8
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_2");
		}
		else
		{
			// .text:000190BC
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'");
		}
	}
	// .text:00019100
	switch (plate_id)
	{
	case 0:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER");
		break;
	case 1:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1");
		break;
	case 2:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2");
		break;
	case 3:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR");
		break;
	case 4:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS");
		break;
	case 5:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK");
		break;
	case 6:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1");
		break;
	case 7:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2");
		break;
	case 8:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS");
		break;
	default:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "Undefined 'MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ENUM2STR'");
		break;
	}
	// .text:00019210
	if (TIS_drift_refs_p == NULL)
	{
		// sethi   %hi(0), %g1
		// ------>loc_19228
		THXAtrace("KV", 2, "========", "> ( drift_refs_p = %s )", "NULL");
	}
	else
	{
		// .text:0001921C
		THXAtrace("KV", 2, "========", "> ( drift_refs_p = %s )", "*");
	}
	// .text:00019260
	if (validity == NULL)
	{
		// sethi   %hi(0), %g1
		// ------>loc_1927C
		THXAtrace("KV", 2, "========", "> ( validity_p=%s )", "NULL");
	}
	else
	{
		// .text:0001926C
		THXAtrace("KV", 2, "========", "> ( validity_p=%s )", "*");
	}
	// .text:000192B0
	if (TIS_drift_refs_p != NULL)
	{
		// mov     0, %g1
		// ------>loc_19300
		for (int i = 0; i < 9; i++)
		{
			TIS_drift_refs_p->height[i] = 0.0;
		}
		TIS_drift_refs_p->measValid = 0x3FF;
		THXAtrace("KV", 2, "========", "< ( TIS_drift_refs_p=[%s] {height=[%g, %g, %g, %g, %g, %g, %g, %g, %g] [um], measValid = %lu } )", "*",
			TIS_drift_refs_p->height[0] * 1000000.0, TIS_drift_refs_p->height[1] * 1000000.0, TIS_drift_refs_p->height[2] * 1000000.0, TIS_drift_refs_p->height[3] * 1000000.0,
			TIS_drift_refs_p->height[4] * 1000000.0, TIS_drift_refs_p->height[5] * 1000000.0, TIS_drift_refs_p->height[6] * 1000000.0, TIS_drift_refs_p->height[7] * 1000000.0,
			TIS_drift_refs_p->height[8] * 1000000.0, TIS_drift_refs_p->measValid);
	}
	else
	{
		// .text:000192BC
		THXAtrace("KV", 2, "========", "< ( TIS_drift_refs_p=[%s] {height=[%g, %g, %g, %g, %g, %g, %g, %g, %g] [um], measValid = %lu } )", "NULL",
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	// .text:00019478
	if (validity != NULL)
	{
		// ld      [%i4], %g1
		// ------>loc_19494
		if (*validity == FALSE)
		{
			// sethi   %hi(0x400), %g1
			// ------>loc_194B0
			THXAtrace("KV", 2, "========", "< ( validity_p=%s )", "FALSE");
		}
		else
		{
			// .text:000194A0
			THXAtrace("KV", 2, "========", "< ( validity_p=%s )", "TRUE");
		}
	}
	else
	{
		// loc_19494
		THXAtrace("KV", 2, "========", "< ( validity_p=%s )", "NULL");
	}
	// .text:000194E8
	THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
	return 0;
}

// 函数名：KVXT_isim_get_plate_level_ref_xyz
int KVXT_isim_get_plate_level_ref_xyz(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	xyzvect *plate_level_ref_xyz_p)
{
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (chuck_id == 0)
	{
		// .text:00014098
		THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "WPxCHUCK_CHUCK_ID_1");
	}
	else
	{
		// cmp     %i1, 1
		// ------>loc_140A8
		if (chuck_id == 1)
		{
			// sethi   %hi(0), %g1
			// ------>loc_140BC
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "WPxCHUCK_CHUCK_ID_2");
		}
		else
		{
			// .text:000140B0
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'");
		}
	}
	// .text:000140F4
	switch (plate_id)
	{
	case 0:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER");
		break;
	case 1:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1");
		break;
	case 2:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2");
		break;
	case 3:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR");
		break;
	case 4:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS");
		break;
	case 5:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK");
		break;
	case 6:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1");
		break;
	case 7:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2");
		break;
	case 8:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS");
		break;
	default:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "Undefined 'MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ENUM2STR'");
		break;
	}
	// .text:00014204
	if (plate_level_ref_xyz_p != NULL)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_142EC
		THXAtrace("KV", 2, "========", "> ( plate_level_ref_xyz_p = %s )", "*");
		plate_level_ref_xyz_p->x = 0.02;
		plate_level_ref_xyz_p->y = 0.002;
		plate_level_ref_xyz_p->z = 0.00002;
		THXAtrace("KV", 2, "========", "< ( {x=%.6f [mm], y=%.6f [mm], z=%.6f [mm]} )", 1000.0 * plate_level_ref_xyz_p->x, 1000.0 * plate_level_ref_xyz_p->y, plate_level_ref_xyz_p->z);
	}
	else
	{
		// .text:00014210
		THXAtrace("KV", 2, "========", "> ( plate_level_ref_xyz_p = %s )", "NULL");
		THXAtrace("KV", 2, "========", "< ( {x=%.6f [mm], y=%.6f [mm], z=%.6f [mm]} )", 0, 0, 0);
	}
	// .text:000142BC
	THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
	return 0;
}

// 函数名：KVXT_isim_get_plate_wedge
int KVXT_isim_get_plate_wedge(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	zrxryvect *plate_wedge)
{
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (chuck_id == 0)
	{
		// .text:0001615C
		THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "WPxCHUCK_CHUCK_ID_1");
	}
	else
	{
		// cmp     %i1, 1
		// ------>loc_1616C
		if (chuck_id == 1)
		{
			// sethi   %hi(0), %g1
			// ------>loc_16180
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "WPxCHUCK_CHUCK_ID_2");
		}
		else
		{
			// .text:00016174
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'");
		}
	}
	// .text:000161B8
	switch (plate_id)
	{
	case 0:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER");
		break;
	case 1:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1");
		break;
	case 2:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2");
		break;
	case 3:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR");
		break;
	case 4:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS");
		break;
	case 5:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK");
		break;
	case 6:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1");
		break;
	case 7:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2");
		break;
	case 8:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS");
		break;
	default:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "Undefined 'MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ENUM2STR'");
		break;
	}
	// .text:000162C8
	if (plate_wedge != NULL)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_163B0
		THXAtrace("KV", 2, "========", "> ( plate_wedge = %s )", "*");
		plate_wedge->z = 0.0018;
		plate_wedge->rx = 0.000002;
		plate_wedge->ry = -0.000002;
		THXAtrace("KV", 2, "========", "< ( {z=%.6f [mm], rx=%.6f [mrad], ry=%.6f [mrad]} )", plate_wedge->z * 1000.0, plate_wedge->rx * 1000.0, 1000 * plate_wedge->ry);
	}
	else
	{
		// .text:000162D4
		THXAtrace("KV", 2, "========", "> ( plate_wedge = %s )", "NULL");
		THXAtrace("KV", 2, "========", "< ( {z=%.6f [mm], rx=%.6f [mrad], ry=%.6f [mrad]} )", 0, 0, 0);
	}
	// .text:00016380
	THXAtrace("KV", 2, __FUNCTION__, "OK");
	return 0;
}

// 函数名：KVXT_isim_get_SA_capture_params，这里需要把bool看成4字节
int KVXT_isim_get_SA_capture_params(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	KVXA_capture_params *capture_params)
{
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (capture_params != NULL)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_18600
		THXAtrace("KV", 2, __FUNCTION__, "> ( capture_params = %s )", "*");
		capture_params->capture_zrxry.z = 0; // 0x8
		capture_params->capture_zrxry.rx = 0; // 0x10
		capture_params->capture_zrxry.ry = 0; // 0x18
		capture_params->capture_def.Z_capture_spot_selection = 0x20; // 0x20
		capture_params->capture_def.Ry_capture_needed = FALSE; // 0x24
		capture_params->capture_def.Ry_capture_spot_selection = 0; // 0x28
		capture_params->capture_def.change_of_process = FALSE; // 0x2C
		capture_params->capture_def.on_process = FALSE; // 0x30
		if (0 == 0)
		{
			// mov     0, %g4
			// ------>loc_186B4
			THXAtrace("KV", 2, "========", "< ( {Capture: needed = %s, z = %.6f [mm], rx = %.6f [mrad], ry = %.6f [mrad],spot_selection: height = %X, "
				"tilt capture needed = %s, tilt = %X, change_of_process = %s, on_process = %s} )", "TRUE",
				capture_params->capture_zrxry.z * 1000.0, capture_params->capture_zrxry.rx * 1000.0, capture_params->capture_zrxry.ry *1000.0,
				0x20, "FALSE", 0, "FALSE", "FALSE");
		}
		else
		{
			// .text:000186AC
			// mov     %o4, %i1
			// ------>loc_186C0
			THXAtrace("KV", 2, "========", "< ( {Capture: needed = %s, z = %.6f [mm], rx = %.6f [mrad], ry = %.6f [mrad],spot_selection: height = %X, "
				"tilt capture needed = %s, tilt = %X, change_of_process = %s, on_process = %s} )", "TRUE",
				capture_params->capture_zrxry.z * 1000.0, capture_params->capture_zrxry.rx * 1000.0, capture_params->capture_zrxry.ry *1000.0,
				0x20, "FALSE", 0, "TRUE", "FALSE");
		}
	}
	else
	{
		// .text:000185A0
		THXAtrace("KV", 2, "========", "< ( {Capture: needed = %s, z = %.6f [mm], rx = %.6f [mrad], ry = %.6f [mrad],spot_selection: height = %X, "
			"tilt capture needed = %s, tilt = %X, change_of_process = %s, on_process = %s} )", "TRUE", 0, 0, 0, 0, "NULL", 0, "NULL", "NULL");
	}
	// .text:0001874C 
	THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
	return 0;
}

// 函数名：KVXT_isim_get_SA_plate_level_info，这里需要把bool看成4字节
int KVXT_isim_get_SA_plate_level_info(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXA_plate_level_info *plate_level_info_p)
{
	char *psplate_id = NULL;
	char *psplate_avg_z_valid = NULL;
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (chuck_id == 0)
	{
		// .text:000154A0
		THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_1");
	}
	else
	{
		// cmp     %i1, 1
		// ------>loc_154B0
		if (chuck_id == 1)
		{
			// sethi   %hi(0), %g1
			// ------>loc_154C4
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_2");
		}
		else
		{
			// .text:000154B8
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'");
		}
	}
	// .text:000154FC
	switch (plate_id)
	{
	case 0:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER");
		break;
	case 1:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1");
		break;
	case 2:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2");
		break;
	case 3:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR");
		break;
	case 4:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS");
		break;
	case 5:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK");
		break;
	case 6:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1");
		break;
	case 7:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2");
		break;
	case 8:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS");
		break;
	default:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "Undefined 'MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ENUM2STR'");
		break;
	}
	// .text:0001560C
	if (plate_level_info_p != NULL)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_15910
		THXAtrace("KV", 2, "========", "> ( plate_level_info_p = %s )", "*");
		plate_level_info_p->plate_id = plate_id;
		plate_level_info_p->plate_res[0].plate_level_result.ags_heights_report.numMeasurementErrors[0] = 1;
		plate_level_info_p->plate_res[0].plate_level_result.ags_heights_report.numSystemErrors[0] = 1;
		plate_level_info_p->plate_res[0].plate_level_result.ags_heights_data.zSpot[0] = 0.0035;
		plate_level_info_p->plate_res[0].plate_level_result.ags_heights_data.zSpotStdDev[0] = 0.0005;
		plate_level_info_p->plate_res[0].plate_level_result.ags_heights_data.zCapture = 0.004;
		plate_level_info_p->plate_res[0].plate_level_result.ags_heights_data.zCaptureStdDev = 0.001;
		plate_level_info_p->plate_res[0].plate_level_result.ags_heights_data.zValid = 1;
		plate_level_info_p->plate_res[0].plate_level_result.ags_heights_data.numMeasurements = 1;

		// 把bool看成了4字节，可能别人编程时写了typedef int bool
		// plate_level_info_p->plate_res[1].plate_level_result.ags_heights_report.numMeasurementErrors[0] = 0; // 没有填充4字节的
		plate_level_info_p->plate_res[0].capture_z_valid = FALSE;

		// 偏移地址具体未知，而且进行了or或bset运算，应该是进行了偏移，但算不出具体偏移，根据类型推断如下
		plate_level_info_p->ws_exp_pos_xyrz.x = 0.002;
		plate_level_info_p->ws_exp_pos_xyrz.y = 0.05;
		plate_level_info_p->ws_exp_pos_xyrz.a = 0.000002;

		plate_level_info_p->ws_exp_pos_zrxry.rx = 0.0;
		plate_level_info_p->ws_exp_pos_zrxry.ry = 0.0;
		plate_level_info_p->ws_exp_pos_zrxry.z = 0.0;

		plate_level_info_p->plate_avg_z = 0.0025;
		plate_level_info_p->plate_avg_z_valid = TRUE;
		plate_level_info_p->plate_error_z = 0.003;
		plate_level_info_p->nr_meas_results = 1;
		plate_level_info_p->nr_valid_meas_results = TRUE;

		// .text:00015A7C
		switch (plate_level_info_p->plate_id)
		{
		case 0:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER";
			break;
		case 1:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1";
			break;
		case 2:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2";
			break;
		case 3:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR";
			break;
		case 4:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS";
			break;
		case 5:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK";
			break;
		case 6:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1";
			break;
		case 7:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2";
			break;
		case 8:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS";
			break;
		default:
			psplate_id = "Undefined 'MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ENUM2STR'";
			break;
		}
		if (plate_level_info_p->plate_avg_z_valid == FALSE)
		{
			// ldd     [%i3+%g2], %f14
			// ------>loc_157B4
			psplate_avg_z_valid = "FALSE";
		}
		else
		{
			// .text:000157A4
			psplate_avg_z_valid = "TRUE";
		}
		THXAtrace("KV", 2, "========", "< ( {plate_id = %s, ws_exp_pos: x = %.6f [mm], y = %.6f[mm], rz = %.6f [mrad], z = %.6f [mm], rx = %.6f [mrad], ry = %.6f [mrad], "
			"plate_avg_z = %.6f [mm], plate_avg_z_valid = %s, plate_error_z = %.6f [mm], nr_meas_results = %d, nr_valid_meas_results = %d} )", psplate_id,
			plate_level_info_p->ws_exp_pos_xyrz.x * 1000.0, plate_level_info_p->ws_exp_pos_xyrz.y * 1000.0, plate_level_info_p->ws_exp_pos_xyrz.a * 1000.0,
			plate_level_info_p->ws_exp_pos_zrxry.rx * 1000.0, plate_level_info_p->ws_exp_pos_zrxry.ry * 1000.0, plate_level_info_p->ws_exp_pos_zrxry.z * 1000.0,
			plate_level_info_p->plate_avg_z * 1000.0, psplate_avg_z_valid, plate_level_info_p->plate_error_z * 1000.0, plate_level_info_p->nr_meas_results,
			plate_level_info_p->nr_valid_meas_results);
	}
	else
	{
		// .text:00015618
		THXAtrace("KV", 2, "========", "< ( {plate_id = %s, ws_exp_pos: x = %.6f [mm], y = %.6f[mm], rz = %.6f [mrad], z = %.6f [mm], rx = %.6f [mrad], ry = %.6f [mrad], "
			"plate_avg_z = %.6f [mm], plate_avg_z_valid = %s, plate_error_z = %.6f [mm], nr_meas_results = %d, nr_valid_meas_results = %d} )", "NULL", 0, 0, 0, 0, 0, 0, 0, "NULL", 0, 0, 0);
	}
	// .text:000158E0
	THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
	return 0;
}

// 函数名：KVXT_isim_get_wafer_map
int KVXT_isim_get_wafer_map(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	KWXA_wafer_map *wafer_map)
{
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (chuck_id == 0)
	{
		// .text:000149E8
		THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_1");
	}
	else
	{
		// cmp     %i1, 1
		// ------>loc_149F8
		if (chuck_id == 1)
		{
			// sethi   %hi(0), %g1
			// ------>loc_14A0C
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_2");
		}
		else
		{
			// .text:00014A00
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'");
		}
	}
	// .text:00014A44
	if (wafer_map != NULL)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_14BF8
		THXAtrace("KV", 2, "========", "> ( wafer_map  = %s )", "*");
		wafer_map->size = 0x78;
		wafer_map->chuck_id = chuck_id;
		wafer_map->max_nr_of_x_gridlines = 9;
		wafer_map->max_nr_of_wams = 2;
		wafer_map->nr_of_wams = 0;
		wafer_map->x_gridline_offset_list_bytenr = 0;
		wafer_map->wam_index_ref_list_bytenr = 2;
		wafer_map->wam_id_ref_list_bytenr = 2;
		wafer_map->wafer_map_data[0] = 0.0;
		THXAtrace("KV", 2, "========", "< ( wafer_map->size = %d )", wafer_map->size);
		if (wafer_map->chuck_id == 0)
		{
			// .text:00014CAC
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_1");
		}
		else
		{
			// cmp     %g1, 1
			// ------>loc_14A8C
			if (wafer_map->chuck_id == 1)
			{
				// sethi   %hi(0), %g1
				// ------>loc_14AA0
				THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_2");
			}
			else
			{
				// .text:00014A94
				THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'");
			}
			// .text:00014AE0
			THXAtrace("KV", 2, "========", "< ( wafer_map->max_nr_of_x_gridlines = %d )", wafer_map->max_nr_of_x_gridlines);
			THXAtrace("KV", 2, "========", "< ( wafer_map->max_nr_of_wams = %d )", wafer_map->max_nr_of_wams);
			THXAtrace("KV", 2, "========", "< ( wafer_map->nr_of_wams = %d )", wafer_map->nr_of_wams);
			THXAtrace("KV", 2, "========", "< ( wafer_map->x_gridline_offset_list_bytenr = %d )", wafer_map->x_gridline_offset_list_bytenr);
			THXAtrace("KV", 2, "========", "< ( wafer_map->wam_index_ref_list_bytenr = %d )", wafer_map->wam_index_ref_list_bytenr);
			THXAtrace("KV", 2, "========", "< ( wafer_map->wam_id_ref_list_bytenr = %d )", wafer_map->wam_id_ref_list_bytenr);
			THXAtrace("KV", 2, "========", "< ( wafer_map->wafer_map_data[0] = %f )", wafer_map->wafer_map_data[0]);
		}
	}
	else
	{
		// .text:00014A50
		THXAtrace("KV", 2, "========", "> ( wafer_map  = %s )", "NULL");
	}
	// loc_14BC4
	THXAtrace("KV", 2, __FUNCTION__, "OK");
	return 0;
}

// 函数名：KVXT_isim_get_XVSA_scan_results
int KVXT_isim_get_XVSA_scan_results(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	MEXAxVSA_XVSA_scan_data *scan_data)
{
	char *pschuck_id;
	char *psplate_id;
	if (chuck_id == 0)
	{
		// .text:00019984
		pschuck_id = "WPxCHUCK_CHUCK_ID_1";
	}
	else
	{
		// mov     %i2, %g2
		// ------>loc_19994
		if (chuck_id == 1)
		{
			// sethi   %hi(0), %g1
			// ------>loc_199AC
			pschuck_id = "WPxCHUCK_CHUCK_ID_2";
		}
		else
		{
			// .text:000199A0
			pschuck_id = "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'";
		}
	}
	// loc_199B8
	switch (plate_id)
	{
	case 0:
		psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER";
		break;
	case 1:
		psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1";
		break;
	case 2:
		psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2";
		break;
	case 3:
		psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR";
		break;
	case 4:
		psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS";
		break;
	case 5:
		psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK";
		break;
	case 6:
		psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1";
		break;
	case 7:
		psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2";
		break;
	case 8:
		psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS";
		break;
	default:
		psplate_id = "Undefined 'MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ENUM2STR'";
		break;
	}
	// 
	THXAtrace("KV", 2, "========", "> ( chuck_id = %s, > ( {plate_id = %s} )", pschuck_id, psplate_id);
	if (scan_data != NULL)
	{
		// .text:00019B24
		scan_data->Npts = 0x67;
		//	// int g3 = 0;
		//	int i = 0;
		//	do{
		//		scan_data->data[i].valid = 0x3FE;
		//		// int g2 = (g3 * 2 + g3 * 2 ^ 3 + 1) * 2 ^ 3;
		//		// g2 = g2 + scan_data;
		//		// int g1 = 0;
		//		int j = 0;
		//		do{
		//			scan_data->data[i].zspot[j] = 0.0;
		//			j++;
		//		} while (j != 9);
		//		i++;
		//		// g3 = g3 + 1
		//		// g4 = g4 + 0x50
		//	} while (i <= 0x66);

		for (int i = 0; i < 0x66; i++)
		{
			scan_data->data[i].valid = 0x3FE;
			for (int j = 0; j != 9; j++)
			{
				scan_data->data[i].zspot[j] = 0.0;
			}
		}
	}
	// loc_19B8C
	THXAtrace("KV", 2, __FUNCTION__, "< () = %s", "OK");
	return 0;
}

// 函数名：KVXT_isim_retrieve_XVSA_scan_data
int KVXT_isim_retrieve_XVSA_scan_data(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxVSA_XVSA_scan_data *tis1_scan_data,
	MEXAxVSA_XVSA_scan_data *tis2_scan_data,
	KVXA_XVSA_chuck_model_results *xvsa_results,
	bool *xvsa_results_valid)
{
	char *pschuck_id = NULL;
	if (chuck_id == 0)
	{
		// .text:00019608
		pschuck_id = "WPxCHUCK_CHUCK_ID_1";
	}
	else
	{
		// cmp     %i1, 1
		// ------>loc_19618
		if (chuck_id == 1)
		{
			// sethi   %hi(0), %g1
			// ------>loc_19630
			pschuck_id = "WPxCHUCK_CHUCK_ID_2";
		}
		else
		{
			// .text:0001961C
			pschuck_id = "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'";
		}
	}
	THXAtrace("KV", 2, __FUNCTION__, "> ( chuck_id = {chuck_id = %s}, tis1_scan_data_p = %p, tis2_scan_data_p = %p, xvsa_results_p = %p, xvsa_result_valid_p = %p )",
		pschuck_id, tis1_scan_data, tis2_scan_data, xvsa_results, xvsa_results_valid);
	// .text:000196C8
	MEXAxVSA_XVSA_scan_data_point_zspot scan_data_point_zspot; // 类型为指针类型，所以定义的变量为指针变量
	// g2 = 0
	// g2 = g2 + 8
	// g2 != 0x48
	int l2 = 0;
	int g1 = 2;
	for (int i = 0; i != 9; i++)
	{
		// loc_196E8
		scan_data_point_zspot[i] = 0.0;
		l2 = l2 + g1;
		g1 = g1 * 2;
	}
	// .text:00019700
	int var_30 = g1; // 不知道这个变量什么意思，要做什么
	if (tis1_scan_data != NULL)
	{
		// .text:0001970C
		tis1_scan_data->Npts = 0x65;
		// loc_1971C
		for (int i = 0; i < tis1_scan_data->Npts; i++)
		{
			// loc_1971C
			memcpy(&tis1_scan_data->data[i], scan_data_point_zspot, 0x50);
		}
	}
	// loc_19744
	if (tis2_scan_data != NULL)
	{
		// loc_19760
		for (int i = 0; i < tis2_scan_data->Npts; i++)
		{
			// loc_19760
			memcpy(&tis2_scan_data->data[i], scan_data_point_zspot, 0x50);
		}
	}
	// loc_19788
	if (xvsa_results != NULL)
	{
		// .text:00019794
		xvsa_results->TIS1.plate_drift.Ry = 0.0;
		xvsa_results->TIS1.plate_drift.ref_pos.x = -0.0109;
		xvsa_results->TIS1.plate_drift.ref_pos.y = 0.0;
		xvsa_results->TIS2.plate_drift.Ry = 0.0;
		xvsa_results->TIS2.plate_drift.ref_pos.x = -0.0109;
		xvsa_results->TIS2.plate_drift.ref_pos.y = 0.0;
		xvsa_results->d0x2670 = 0.0; // 填充，因结构体定义不准确
	}
	// sethi   %hi(0x400), %g1
	// ------>loc_197E4
	if (xvsa_results_valid != NULL)
	{
		// mov  -   1, %g1
		// ------>loc_19800
		THXAtrace("KV", 2, __FUNCTION__, "< ( {%D}, xvsa_results_valid_p = %s ) = %s", "xvsa_results_p",
			"KVXA:XVSA_chuck_model_results", xvsa_results, "TRUE", "OK");
	}
	else
	{
		// .text:000197F0
		THXAtrace("KV", 2, __FUNCTION__, "< ( {%D}, xvsa_results_valid_p = %s ) = %s", "xvsa_results_p",
			"KVXA:XVSA_chuck_model_results", xvsa_results, "FALSE", "OK");
	}
	return 0;
}

// 函数名：KVXT_isim_set_plate_drift_refs
int KVXT_isim_set_plate_drift_refs(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXT_TIS_drift_ref_struct *TIS_drift_refs_p,
	bool *validity)
{
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (chuck_id == 0)
	{
		// .text:00018CB0
		THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_1");
	}
	else
	{
		// cmp     %i1, 1
		// ------>loc_18CC0
		if (chuck_id == 1)
		{
			// sethi   %hi(0), %g1
			// ------>loc_18CD4
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_2");
		}
		else
		{
			// .text:00018CC8
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'");
		}
	}
	// .text:00018D0C
	switch (plate_id)
	{
	case 0:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER");
		break;
	case 1:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1");
		break;
	case 2:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2");
		break;
	case 3:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR");
		break;
	case 4:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS");
		break;
	case 5:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK");
		break;
	case 6:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1");
		break;
	case 7:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2");
		break;
	case 8:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS");
		break;
	default:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "Undefined 'MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ENUM2STR'");
		break;
	}
	// .text:00018E1C
	if (TIS_drift_refs_p != NULL)
	{
		// sethi   %hi(0x400), %g1
		// ------>loc_18FA4
		THXAtrace("KV", 2, "========", "< ( TIS_drift_refs_p=[%s] {height=[%g, %g, %g, %g, %g, %g, %g, %g, %g] [um], measValid = %lu } )", "*",
			TIS_drift_refs_p->height[0] * 1000000.0, TIS_drift_refs_p->height[1] * 1000000.0, TIS_drift_refs_p->height[2] * 1000000.0, TIS_drift_refs_p->height[3] * 1000000.0,
			TIS_drift_refs_p->height[4] * 1000000.0, TIS_drift_refs_p->height[5] * 1000000.0, TIS_drift_refs_p->height[6] * 1000000.0, TIS_drift_refs_p->height[7] * 1000000.0,
			TIS_drift_refs_p->height[8] * 1000000.0, TIS_drift_refs_p->measValid);
	}
	else
	{
		// .text:00018E28
		THXAtrace("KV", 2, "========", "< ( TIS_drift_refs_p=[%s] {height=[%g, %g, %g, %g, %g, %g, %g, %g, %g] [um], measValid = %lu } )", "NULL",
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	// .text:00018F54
	THXAtrace("KV", 2, "========", "> ( validity = %b )", validity);
	THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
	return 0;
}

// 函数名：KVXT_isim_set_plate_level_ref_xyz
int KVXT_isim_set_plate_level_ref_xyz(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	xyzvect *plate_level_ref_xyz)
{
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (chuck_id == 0)
	{
		// .text:00013DB8
		THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "WPxCHUCK_CHUCK_ID_1");
	}
	else
	{
		// cmp     %i1, 1
		// ------>loc_13DC8
		if (chuck_id == 1)
		{
			// sethi   %hi(0), %g1
			// ------>loc_13DDC
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "WPxCHUCK_CHUCK_ID_2");
		}
		else
		{
			// .text:00013DD0
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'");
		}
	}
	// .text:00013E14
	switch (plate_id)
	{
	case 0:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER");
		break;
	case 1:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1");
		break;
	case 2:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2");
		break;
	case 3:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR");
		break;
	case 4:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS");
		break;
	case 5:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK");
		break;
	case 6:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1");
		break;
	case 7:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2");
		break;
	case 8:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS");
		break;
	default:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "Undefined 'MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ENUM2STR'");
		break;
	}
	// .text:00013F24
	if (plate_level_ref_xyz != NULL)
	{
		// .text:00013F44
		THXAtrace("KV", 2, "========", "> ( {x=%.6f [mm], y=%.6f [mm], z=%.6f [mm]} )",
			plate_level_ref_xyz->x * 1000.0, plate_level_ref_xyz->y * 1000.0, plate_level_ref_xyz->z * 1000.0);
	}
	else
	{
		// fmovd   %f8, %f10
		// ------>loc_13F6C
		THXAtrace("KV", 2, "========", "> ( {x=%.6f [mm], y=%.6f [mm], z=%.6f [mm]} )", 0, 0, 0);
	}
	// .text:00013FCC
	THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
	return 0;
}

// 函数名：KVXT_isim_set_plate_wedge
int KVXT_isim_set_plate_wedge(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	zrxryvect *plate_wedge)
{
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (chuck_id == 0)
	{
		// .text:00015E90
		THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "WPxCHUCK_CHUCK_ID_1");
	}
	else
	{
		// cmp     %i1, 1
		// ------>loc_15EA0
		if (chuck_id == 1)
		{
			// sethi   %hi(0), %g1
			// ------>loc_15EB4
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "WPxCHUCK_CHUCK_ID_2");
		}
		else
		{
			// .text:00015EA8
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} ) ", "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'");
		}
	}
	// .text:00015EEC
	switch (plate_id)
	{
	case 0:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER");
		break;
	case 1:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1");
		break;
	case 2:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2");
		break;
	case 3:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR");
		break;
	case 4:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS");
		break;
	case 5:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK");
		break;
	case 6:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1");
		break;
	case 7:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2");
		break;
	case 8:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS");
		break;
	default:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "Undefined 'MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ENUM2STR'");
		break;
	}
	// .text:00015FFC
	if (plate_wedge != NULL)
	{
		// .text:0001601C
		THXAtrace("KV", 2, "========", "< ( {z=%.6f [mm], rx=%.6f [mrad], ry=%.6f [mrad]} )", plate_wedge->z * 1000.0, plate_wedge->rx * 1000.0, 1000 * plate_wedge->ry);
	}
	else
	{
		// fmovd   %f8, %f10
		// ------>loc_16044
		THXAtrace("KV", 2, "========", "< ( {z=%.6f [mm], rx=%.6f [mrad], ry=%.6f [mrad]} )", 0, 0, 0);
	}
	// .text:000160A4
	THXAtrace("KV", 2, __FUNCTION__, "OK");
	return 0;
}

// 函数名：KVXT_isim_set_SA_plate_level_info
int KVXT_isim_set_SA_plate_level_info(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXA_plate_level_info *plate_level_info_p)
{
	char *psplate_id = NULL;
	char *psplate_avg_z_valid = NULL;
	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");
	if (chuck_id == 0)
	{
		// .text:00014FA4
		THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_1");
	}
	else
	{
		// cmp     %i1, 1
		// ------>loc_14FB4
		if (chuck_id == 1)
		{
			// sethi   %hi(0), %g1
			// ------>loc_14FC8
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "WPxCHUCK_CHUCK_ID_2");
		}
		else
		{
			// .text:00014FBC
			THXAtrace("KV", 2, "========", "> ( {chuck_id = %s} )", "Undefined 'WPxCHUCK_CHUCK_ID_ENUM2STR'");
		}
	}
	// loc_15000
	switch (plate_id)
	{
	case 0:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER");
		break;
	case 1:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1");
		break;
	case 2:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2");
		break;
	case 3:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR");
		break;
	case 4:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS");
		break;
	case 5:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK");
		break;
	case 6:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1");
		break;
	case 7:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2");
		break;
	case 8:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS");
		break;
	default:
		THXAtrace("KV", 2, "========", "> ( {plate_id = %s} )", "Undefined 'MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ENUM2STR'");
		break;
	}
	// .text:00015110
	if (plate_level_info_p != NULL)
	{
		// ld      [%i3], %g1
		// ------>loc_15164
		switch (plate_level_info_p->plate_id)
		{
		case 0:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_WAFER";
			break;
		case 1:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS1";
			break;
		case 2:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_TIS2";
			break;
		case 3:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SPOTSENSOR";
			break;
		case 4:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ILIAS";
			break;
		case 5:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_CLOSING_DISK";
			break;
		case 6:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_1";
			break;
		case 7:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_SS_SLS_2";
			break;
		case 8:
			psplate_id = "MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_PARIS";
			break;
		default:
			psplate_id = "Undefined 'MEXAxWAFxPLATE_WAFER_LEVEL_PLATE_ENUM2STR'";
			break;
		}
		if (plate_level_info_p->plate_avg_z_valid == FALSE)
		{
			// ldd     [%i3+%g2], %f10
			// ------>loc_152A4
			psplate_avg_z_valid = "FALSE";
		}
		else
		{
			// .text:00015294
			psplate_avg_z_valid = "TRUE";
		}
		THXAtrace("KV", 2, "========", "< ( {plate_id = %s, ws_exp_pos: x = %.6f [mm], y = %.6f[mm], rz = %.6f [mrad], z = %.6f [mm], rx = %.6f [mrad], ry = %.6f [mrad], "
			"plate_avg_z = %.6f [mm], plate_avg_z_valid = %s, plate_error_z = %.6f [mm], nr_meas_results = %d, nr_valid_meas_results = %d} )", psplate_id,
			plate_level_info_p->ws_exp_pos_xyrz.x * 1000.0, plate_level_info_p->ws_exp_pos_xyrz.y * 1000.0, plate_level_info_p->ws_exp_pos_xyrz.a * 1000.0,
			plate_level_info_p->ws_exp_pos_zrxry.rx * 1000.0, plate_level_info_p->ws_exp_pos_zrxry.ry * 1000.0, plate_level_info_p->ws_exp_pos_zrxry.z * 1000.0,
			plate_level_info_p->plate_avg_z * 1000.0, psplate_avg_z_valid, plate_level_info_p->plate_error_z * 1000.0, plate_level_info_p->nr_meas_results,
			plate_level_info_p->nr_valid_meas_results);
	}
	else
	{
		// .text:0001511C
		THXAtrace("KV", 2, "========", "< ( {plate_id = %s, ws_exp_pos: x = %.6f [mm], y = %.6f[mm], rz = %.6f [mrad], z = %.6f [mm], rx = %.6f [mrad], ry = %.6f [mrad], "
			"plate_avg_z = %.6f [mm], plate_avg_z_valid = %s, plate_error_z = %.6f [mm], nr_meas_results = %d, nr_valid_meas_results = %d} )", "NULL", 0, 0, 0, 0, 0, 0, 0, "NULL", 0, 0, 0);
	}
	// loc_153D4
	THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
	return 0;
}


// 函数名：KVXT_isim_set_XVSA_thresholds
int KVXT_isim_set_XVSA_thresholds(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
	//MEXAxVSA_XVSA_thresholds *i1,
	//MEXAxVSA_XVSA_thresholds *i2) // 下面要把i1替换为XVSA_warning_levels,i2替换为XVSA_error_levels
	MEXAxVSA_XVSA_thresholds *XVSA_warning_levels,
	MEXAxVSA_XVSA_thresholds *XVSA_error_levels)
{
	if (XVSA_warning_levels != NULL)
	{
		// sth     %g1, [%fp+var_4]
		// ------>loc_19F68
		// loc_19E34
		if (XVSA_error_levels != NULL)
		{
			// sethi   %hi(0x400), %g1
			// ------>loc_19FB8
			THXAtrace("KV", 2, __FUNCTION__, "> ( [%s] {Ry_uncorrected=%g urad, Ry_corrected=%g urad, LS_Ry=%g urad, deformation=%g nm}, "
				"[%s] {Ry_uncorrected=%g)urad, Ry_corrected=%g urad, LS_Ry=%g urad, deformation=%g nm})",
				"*", XVSA_warning_levels->Ry_uncorrected * 1000000.0, XVSA_warning_levels->Ry_corrected * 1000000.0, XVSA_warning_levels->LS_Ry * 1000000.0, XVSA_warning_levels->deformation * 1.0e9,
				"*", XVSA_error_levels->Ry_uncorrected * 1000000.0, XVSA_error_levels->Ry_corrected * 1000000.0, XVSA_error_levels->LS_Ry * 1000000.0, XVSA_error_levels->deformation * 1.0e9);
		}
		else
		{
			// .text:00019E40
			THXAtrace("KV", 2, __FUNCTION__, "> ( [%s] {Ry_uncorrected=%g urad, Ry_corrected=%g urad, LS_Ry=%g urad, deformation=%g nm}, "
				"[%s] {Ry_uncorrected=%g)urad, Ry_corrected=%g urad, LS_Ry=%g urad, deformation=%g nm})",
				"*", XVSA_warning_levels->Ry_uncorrected * 1000000.0, XVSA_warning_levels->Ry_corrected * 1000000.0, XVSA_warning_levels->LS_Ry * 1000000.0, XVSA_warning_levels->deformation * 1.0e9,
				"NULL", 0, 0, 0, 0);
		}
	}
	else
	{
		// .text:00019E0C
		// loc_19E34
		if (XVSA_error_levels != NULL)
		{
			// sethi   %hi(0x400), %g1
			// ------>loc_19FB8
			THXAtrace("KV", 2, __FUNCTION__, "> ( [%s] {Ry_uncorrected=%g urad, Ry_corrected=%g urad, LS_Ry=%g urad, deformation=%g nm}, "
				"[%s] {Ry_uncorrected=%g)urad, Ry_corrected=%g urad, LS_Ry=%g urad, deformation=%g nm})",
				"NULL", 0, 0, 0, 0,
				"*", XVSA_error_levels->Ry_uncorrected * 1000000.0, XVSA_error_levels->Ry_corrected * 1000000.0, XVSA_error_levels->LS_Ry * 1000000.0, XVSA_error_levels->deformation * 1.0e9);
		}
		else
		{
			// .text:00019E40
			THXAtrace("KV", 2, __FUNCTION__, "> ( [%s] {Ry_uncorrected=%g urad, Ry_corrected=%g urad, LS_Ry=%g urad, deformation=%g nm}, "
				"[%s] {Ry_uncorrected=%g)urad, Ry_corrected=%g urad, LS_Ry=%g urad, deformation=%g nm})",
				"NULL", 0, 0, 0, 0,
				"NULL", 0, 0, 0, 0);
		}
	}
	THXAtrace("KV", 2, __FUNCTION__, "< () = %s", "OK");
	return 0;
}

// 函数名：KVXT_iVSA_to_XVSA
int KVXT_iVSA_to_XVSA(MEXAxVSA_iVSA_level_lanes *measured_iVSA_lanes, 
	xyzvect *plate_level_ref, 
	MEXAxVSA_XVSA_profile *profile)
{
	//MEXAxVSA_XVSA_profile * profile = profile;  //arg_4C
	libKVXT_unk_11 * req_msg_data = NULL;   //s1
	int(*pKVXT_isim_iVSA_to_XVSA)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		MEXAxVSA_iVSA_level_lanes * measured_iVSA_lanes, 
		xyzvect * plate_level_ref, 
		MEXAxVSA_XVSA_profile * profile) = NULL;   //var_8
	int iErrorCode = 0;  //var_C
	MEXAxVSA_XVSA_profile * rep_msg_data = NULL;   //s2
	int act_len = 0;   //var_14
	bool isOk = FALSE;  //var_18
	char * psErrorText = NULL;

	// 这里需要进行分析，粘贴指令，i0和i1都是地址，为0或者正数
	// cmp     %g0, %i0				i0=g0-i0=0-i0				i0=0,icc.c=0	i0!=0,icc.c=1
	// subc    %g0, -1, %g2			g2=g0-(-1)-icc.z)=1-icc.c	i0=0,g2=1		i0!=0,g2=0
	// cmp     %g0, %i1				i1=g0-i1=0-i1				i1=0,icc.c=0	i1!=0,icc.c=1
	// subc    %g0, -1, %g1			g2=g0-(-1)-icc.z)=1-icc.z	i1=0,g2=1		i1!=0,g2=0
	// orcc    %g2, %g1, %g0		g0=g1||g2		
	// be      %icc, loc_E3C0		be,icc.z=1		g1=0&&g2=0,i0!=0&&i1!=0
	// bne							be,icc.z=0		!(i0!=0&&i1!=0),i0=0||i2=0
	if (measured_iVSA_lanes == NULL || plate_level_ref == NULL)
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, __FUNCTION__, __LINE__, 0, psErrorText);
	}

	// 这里需要进行分析，粘贴指令，iErrorCode错误码，为0或者正数，arg_4C是地址，为0或正数
	//ld[%fp + iErrorCode], %g1
	// cmp     %g0, %g1				g1=g0-g1=0-g1				iErrorCode=0,icc.c=0	iErrorCode!=0,icc.c=1
	// subc    %g0, -1, %g2			g2=g0-(-1)-icc.c=1-icc.c	iErrorCode=0,g2=1		iErrorCode!=0,g2=0
	// ld[%fp + arg_4C], %g1
	// cmp     %g0, %g1				g1=g0-g1=0-g1				profile=0,icc.c=0		profile!=0,icc.c=1
	// subc    %g0, -1, %g1			g1=g0-(-1)-icc.c=1-icc.c	profile=0,g1=1			profile!=0,g1=0
	// btst    %g1, %g2				bsts=andcc	g0=g1andccg2
	// be      %icc, loc_E400		icc.z=1		g1=0||g2=0,iErrorCode!=0||profile!=0
	// bne							icc.z=0		!(iErrorCode=!0||profile=!0),iErrorCode=0&&profile=0
	//loc_E3C0
	if (iErrorCode == 0 && profile == NULL)
	{
		OOXA_allocate_parameter(0x12D8, &profile, &isOk);
	}

	//loc_4E00
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%272D %24D", "measured_iVSA_lanes", "MEXAxVSA:iVSA_level_lanes", measured_iVSA_lanes,
			"plate_level_ref", "xyzvect", plate_level_ref);
	}

	//loc_E484
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%272D %24D)", local_OOXA_local_KVXT_singleton_object->component,
		"measured_iVSA_lanes", "MEXAxVSA:iVSA_level_lanes", measured_iVSA_lanes, "plate_level_ref", "xyzvect", plate_level_ref);

	if (iErrorCode != 0)
	{
		//loc_E750 o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		//loc_E794
		if (isOk != FALSE)
		{
			PLXAmem_free(&profile);
		}
		return 0;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_E544
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x2A, 0x10F8DCF2, &pKVXT_isim_iVSA_to_XVSA);
	}
	else
	{
		pKVXT_isim_iVSA_to_XVSA = KVXT_isim_iVSA_to_XVSA;
	}

	//loc_E578
	if (iErrorCode != 0)
	{
		//loc_E7B4
		//loc_E750 o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		//loc_E794
		if (isOk != FALSE)
		{
			PLXAmem_free(&profile);
		}
		return 0;
	}

	if (pKVXT_isim_iVSA_to_XVSA != NULL)
	{
		//loc_E66C
		iErrorCode = pKVXT_isim_iVSA_to_XVSA(local_OOXA_local_KVXT_singleton_object, measured_iVSA_lanes, plate_level_ref, profile);

		//loc_E68C  iErrorCode = o5

		//loc_E690
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%4824D %d", "profile", "MEXAxVSA:XVSA_profile", profile, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%4824D)=%R", local_OOXA_local_KVXT_singleton_object->component,
				"profile", "MEXAxVSA:XVSA_profile", profile, iErrorCode);
		}
		else
		{
			//loc_E750 o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_E794
		if (isOk != FALSE)
		{
			PLXAmem_free(&profile);
		}
		return 0;
	}

	iErrorCode = OOXA_allocate_buffer(0x128, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_E68C  iErrorCode = o5

		//loc_E690
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%4824D %d", "profile", "MEXAxVSA:XVSA_profile", profile, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%4824D)=%R", local_OOXA_local_KVXT_singleton_object->component,
				"profile", "MEXAxVSA:XVSA_profile", profile, iErrorCode);
		}
		else
		{
			//loc_E750 o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_E794
		if (isOk != FALSE)
		{
			PLXAmem_free(&profile);
		}
		return 0;
	}

	memcpy(&req_msg_data->measured_iVSA_lanes, measured_iVSA_lanes, 0x110);
	req_msg_data->plate_level_ref.x = plate_level_ref->x;
	req_msg_data->plate_level_ref.y = plate_level_ref->y;
	req_msg_data->plate_level_ref.z = plate_level_ref->z;

	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x2A, 0x10F8DCF2, 
		req_msg_data, 0x128, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_E68C  iErrorCode = o5

		//loc_E690
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%4824D %d", "profile", "MEXAxVSA:XVSA_profile", profile, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%4824D)=%R", local_OOXA_local_KVXT_singleton_object->component,
				"profile", "MEXAxVSA:XVSA_profile", profile, iErrorCode);
		}
		else
		{
			//loc_E750 o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_E794
		if (isOk != FALSE)
		{
			PLXAmem_free(&profile);
		}
		return 0;
	}
	memcpy(profile, rep_msg_data, 0x12D8);
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}
	//loc_E690
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%4824D %d", "profile", "MEXAxVSA:XVSA_profile", profile, &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s (%4824D)=%R", local_OOXA_local_KVXT_singleton_object->component,
			"profile", "MEXAxVSA:XVSA_profile", profile, iErrorCode);
	}
	else
	{
		//loc_E750 o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	//loc_E794
	if (isOk != FALSE)
	{
		PLXAmem_free(&profile);
	}
	return 0;
}

// 函数名：KVXT_log_stubs_get_last_error_log
int KVXT_log_stubs_get_last_error_log(int * exception_code, 
	int * exception_link)
{
	char * req_msg_data = NULL; //var_4
	int(*pKVXT_isim_log_stubs_get_last_error_log)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		int *exception_code, int *exception_link) = 0; //var_8
	int iErrorCode = 0; //var_C
	libKVXT_unk_12 * rep_msg_data = 0; //var_10
	int act_len = 0; //var_14
	bool exception_code_isOk = FALSE; //var_18
	bool exception_link_isOk = FALSE; //var_1C

	if (exception_code == NULL)
	{
		iErrorCode = OOXA_allocate_parameter(4, &exception_code, &exception_code_isOk);
	}

	// 这里需要进行分析，粘贴指令，iErrorCode错误码，为0或者正数，exception_link为地址，0或者正数
	// ld[%fp + iErrorCode], %g1
	// cmp     %g0, %g1					g1=g0-g1=0-g1					iErrorCode=0,icc.c=0		iErrorCode!=0,icc.c=1
	// subc    %g0, -1, %g2				g2=g0-(-1)-icc.c=1-icc.c		iErrorCode=0,g2=1			iErrorCode!=0,g2=0
	// ld[%fp + exception_link], %g1
	// cmp     %g0, %g1					g1=g0-g1=0-g1					exception_link=0,icc.c=0	exception_link!=0,icc.c=1
	// subc    %g0, -1, %g1				g1=g0-(-1)-icc.c=1-icc.c		exception_link=0,g1=1		exception_Link!=0,g1=0
	// btst    %g1, %g2					btst=andcc,g2=g1andccg2
	// be      %icc, loc_11C40			be,icc.z=1		g1=0||g2=0,iErrorCode!=0||exception_link!=0
	// bne								bne,icc.z=0		!(iErrorCode!=0||exception_link!=0),iErrorCode=0&&exception_link=0
	//loc_11C04
	if (iErrorCode == 0 && exception_link == NULL)
	{
		iErrorCode = OOXA_allocate_parameter(4, &exception_link, &exception_link_isOk);
	}

	//loc_11C40
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{
		//loc_11E5C o5 = iErrorCode 
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);

		//loc_11EA0
		if (exception_code_isOk != FALSE)
		{
			PLXAmem_free(&exception_code);
		}
		if (exception_link_isOk != FALSE)
		{
			PLXAmem_free(&exception_link);
		}
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_11CBC
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x3B, 0x1B47C472, &pKVXT_isim_log_stubs_get_last_error_log);
	}
	else
	{
		pKVXT_isim_log_stubs_get_last_error_log = KVXT_isim_log_stubs_get_last_error_log;
	}

	//loc_11CF0
	if (iErrorCode != 0)
	{
		//loc_11ED8
		//loc_11E5C o5 = iErrorCode 
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);

		//loc_11EA0
		if (exception_code_isOk != FALSE)
		{
			PLXAmem_free(&exception_code);
		}
		if (exception_link_isOk != FALSE)
		{
			PLXAmem_free(&exception_link);
		}
		return iErrorCode;
	}

	if (pKVXT_isim_log_stubs_get_last_error_log != NULL)
	{
		//loc_11DBC
		iErrorCode = pKVXT_isim_log_stubs_get_last_error_log(local_OOXA_local_KVXT_singleton_object, exception_code, exception_link);

		//loc_11DD8 iErrorCode = o5
		//loc_11DDC
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_11E5C o5 = iErrorCode 
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_11EA0
		if (exception_code_isOk != FALSE)
		{
			PLXAmem_free(&exception_code);
		}
		if (exception_link_isOk != FALSE)
		{
			PLXAmem_free(&exception_link);
		}
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_11DD8 iErrorCode = o5
		//loc_11DDC
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_11E5C o5 = iErrorCode 
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_11EA0
		if (exception_code_isOk != FALSE)
		{
			PLXAmem_free(&exception_code);
		}
		if (exception_link_isOk != FALSE)
		{
			PLXAmem_free(&exception_link);
		}
		return iErrorCode;
	}

	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x3B, 0x1B47C472, 
		req_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_11DD8 iErrorCode = o5
		//loc_11DDC
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_11E5C o5 = iErrorCode 
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_11EA0
		if (exception_code_isOk != FALSE)
		{
			PLXAmem_free(&exception_code);
		}
		if (exception_link_isOk != FALSE)
		{
			PLXAmem_free(&exception_link);
		}
		return iErrorCode;
	}

	*exception_code = *rep_msg_data->a;
	*exception_link = *rep_msg_data->b;
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}
	//loc_11DDC
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		//loc_11E5C o5 = iErrorCode 
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	//loc_11EA0
	if (exception_code_isOk != FALSE)
	{
		PLXAmem_free(&exception_code);
	}
	if (exception_link_isOk != FALSE)
	{
		PLXAmem_free(&exception_link);
	}
	return iErrorCode;
}

// 函数名：KVXT_model_iVSA_fallback_shapes
int KVXT_model_iVSA_fallback_shapes(WPxCHUCK_chuck_id_enum chuck_id, 
	KVXA_iVSA_level_results *level_results_TIS1_p,
	KVXA_iVSA_level_results *level_results_TIS2_p, 
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS1_p,
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS2_p)
{
	libKVXT_unk_13 * req_msg_data = NULL; //var_4
	int(*pKVXT_isim_model_iVSA_fallback_shapes)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum  chuck_id, KVXA_iVSA_level_results *level_results_TIS1_p, KVXA_iVSA_level_results *level_results_TIS2_p,
		KVXT_iVSA_plate_fallback_shape  *fallback_shape_TIS1_p, KVXT_iVSA_plate_fallback_shape  *fallback_shape_TIS2_p) = 0; //var_8
	int iErrorCode = 0;  //var_C
	libKVXT_unk_14 * rep_msg_data = NULL;   //s2
	int act_len = 0;   //var_14
	bool fallback_shape_TIS1_p_isOk = FALSE; //var_18
	bool fallback_shape_TIS2_p_isOk = FALSE; //var_10
	char * psErrorText = NULL;

	if (level_results_TIS1_p == NULL || level_results_TIS2_p == NULL)
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTmet.c", 0x1535, 0, psErrorText);
	}

	//loc_D3F8
	if (iErrorCode == 0 && fallback_shape_TIS1_p == NULL)
	{
		iErrorCode = OOXA_allocate_parameter(0x90, &fallback_shape_TIS1_p, &fallback_shape_TIS1_p_isOk);
	}

	//loc_D434
	if (iErrorCode == 0 && fallback_shape_TIS2_p == NULL)
	{
		iErrorCode = OOXA_allocate_parameter(0x90, &fallback_shape_TIS2_p, &fallback_shape_TIS2_p_isOk);
	}

	//loc_D46C
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %904D %904D", "chuck_id", "WPxCHUCK:chuck_id_enum",
			&chuck_id, "level_results_TIS1_p", "KVXA:iVSA_level_results", level_results_TIS1_p, "level_results_TIS2_p", "KVXA:iVSA_level_results", level_results_TIS2_p);
	}

	//loc_D50C
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %904D %904D)", local_OOXA_local_KVXT_singleton_object->component,
		"chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "level_results_TIS1_p", "KVXA:iVSA_level_results", level_results_TIS1_p, "level_results_TIS2_p"
		"KVXA:iVSA_level_results", level_results_TIS2_p);

	if (iErrorCode != 0)
	{
		//loc_D838 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);

		//loc_D87C
		if (fallback_shape_TIS1_p_isOk != FALSE)
		{
			PLXAmem_free(&fallback_shape_TIS1_p);
		}
		//loc_D894
		if (fallback_shape_TIS2_p_isOk != FALSE)
		{
			PLXAmem_free(&fallback_shape_TIS2_p);
		}
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_D5E8
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x26, 0x228C7DB5, &pKVXT_isim_model_iVSA_fallback_shapes);
	}
	else
	{
		pKVXT_isim_model_iVSA_fallback_shapes = KVXT_isim_model_iVSA_fallback_shapes;
	}

	//loc_D61C
	if (iErrorCode != 0)
	{
		//loc_D8B4
		//loc_D838 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);

		//loc_D87C
		if (fallback_shape_TIS1_p_isOk != FALSE)
		{
			PLXAmem_free(&fallback_shape_TIS1_p);
		}
		//loc_D894
		if (fallback_shape_TIS2_p_isOk != FALSE)
		{
			PLXAmem_free(&fallback_shape_TIS2_p);
		}
		return iErrorCode;
	}

	if (pKVXT_isim_model_iVSA_fallback_shapes != NULL)
	{
		iErrorCode = pKVXT_isim_model_iVSA_fallback_shapes(local_OOXA_local_KVXT_singleton_object, chuck_id, level_results_TIS1_p, level_results_TIS2_p, fallback_shape_TIS1_p, fallback_shape_TIS2_p);
		//loc_D748 o5 = iErrorCode
		//loc_D74C
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%144D %144D %d", "fallback_shape_TIS1_p", "KVXT:iVSA_plate_fallback_shape",
				fallback_shape_TIS1_p, "fallback_shape_TIS2_p", "KVXT:iVSA_plate_fallback_shape", fallback_shape_TIS2_p, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%144D %144D)=%R", local_OOXA_local_KVXT_singleton_object->component,
				"fallback_shape_TIS1_p", "KVXT:iVSA_plate_fallback_shape", fallback_shape_TIS1_p, "fallback_shape_TIS2_p", "KVXT:iVSA_plate_fallback_shape",
				fallback_shape_TIS2_p, iErrorCode);
		}
		else
		{
			//loc_D838 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_D87C
		if (fallback_shape_TIS1_p_isOk != FALSE)
		{
			PLXAmem_free(&fallback_shape_TIS1_p);
		}
		//loc_D894
		if (fallback_shape_TIS2_p_isOk != FALSE)
		{
			PLXAmem_free(&fallback_shape_TIS2_p);
		}
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0x718, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_D748 o5 = iErrorCode
		//loc_D74C
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%144D %144D %d", "fallback_shape_TIS1_p", "KVXT:iVSA_plate_fallback_shape",
				fallback_shape_TIS1_p, "fallback_shape_TIS2_p", "KVXT:iVSA_plate_fallback_shape", fallback_shape_TIS2_p, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%144D %144D)=%R", local_OOXA_local_KVXT_singleton_object->component,
				"fallback_shape_TIS1_p", "KVXT:iVSA_plate_fallback_shape", fallback_shape_TIS1_p, "fallback_shape_TIS2_p", "KVXT:iVSA_plate_fallback_shape",
				fallback_shape_TIS2_p, iErrorCode);
		}
		else
		{
			//loc_D838 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_D87C
		if (fallback_shape_TIS1_p_isOk != FALSE)
		{
			PLXAmem_free(&fallback_shape_TIS1_p);
		}
		//loc_D894
		if (fallback_shape_TIS2_p_isOk != FALSE)
		{
			PLXAmem_free(&fallback_shape_TIS2_p);
		}
		return iErrorCode;
	}

	req_msg_data->chuck_id = chuck_id;
	memcpy(&req_msg_data->level_results_TIS1, level_results_TIS1_p, 0x388);
	memcpy(&req_msg_data->level_results_TIS2, level_results_TIS2_p, 0x388);
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x26, 0x228C7DB5, req_msg_data,
		0x718, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_D748 o5 = iErrorCode
		//loc_D74C
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%144D %144D %d", "fallback_shape_TIS1_p", "KVXT:iVSA_plate_fallback_shape",
				fallback_shape_TIS1_p, "fallback_shape_TIS2_p", "KVXT:iVSA_plate_fallback_shape", fallback_shape_TIS2_p, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%144D %144D)=%R", local_OOXA_local_KVXT_singleton_object->component,
				"fallback_shape_TIS1_p", "KVXT:iVSA_plate_fallback_shape", fallback_shape_TIS1_p, "fallback_shape_TIS2_p", "KVXT:iVSA_plate_fallback_shape",
				fallback_shape_TIS2_p, iErrorCode);
		}
		else
		{
			//loc_D838 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_D87C
		if (fallback_shape_TIS1_p_isOk != FALSE)
		{
			PLXAmem_free(&fallback_shape_TIS1_p);
		}
		//loc_D894
		if (fallback_shape_TIS2_p_isOk != FALSE)
		{
			PLXAmem_free(&fallback_shape_TIS2_p);
		}
		return iErrorCode;
	}
	memcpy(fallback_shape_TIS1_p, &rep_msg_data->fallback_shape_TIS1, 0x90);
	memcpy(fallback_shape_TIS2_p, &rep_msg_data->fallback_shape_TIS2, 0x90);
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}
	//loc_D74C
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%144D %144D %d", "fallback_shape_TIS1_p", "KVXT:iVSA_plate_fallback_shape",
			fallback_shape_TIS1_p, "fallback_shape_TIS2_p", "KVXT:iVSA_plate_fallback_shape", fallback_shape_TIS2_p, &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s (%144D %144D)=%R", local_OOXA_local_KVXT_singleton_object->component,
			"fallback_shape_TIS1_p", "KVXT:iVSA_plate_fallback_shape", fallback_shape_TIS1_p, "fallback_shape_TIS2_p", "KVXT:iVSA_plate_fallback_shape",
			fallback_shape_TIS2_p, iErrorCode);
	}
	else
	{
		//loc_D838 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	//loc_D87C
	if (fallback_shape_TIS1_p_isOk != FALSE)
	{
		PLXAmem_free(&fallback_shape_TIS1_p);
	}
	//loc_D894
	if (fallback_shape_TIS2_p_isOk != FALSE)
	{
		PLXAmem_free(&fallback_shape_TIS2_p);
	}
	return iErrorCode;
}

// 函数名：KVXT_reset_chuck_spot_detection
int KVXT_reset_chuck_spot_detection(WPxCHUCK_chuck_id_enum chuck_id)
{
	WPxCHUCK_chuck_id_enum * req_msg_data = NULL; //var_4
	int(*pKVXT_isim_reset_chuck_spot_detection)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id) = NULL;   //var_8
	int iErrorCode = 0;  //var_C
	char * rep_msg_data = NULL; //var_10
	int act_len = 0; //var_14

	THXAtraceTP("KV", 0x4B56F540);
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "int", &chuck_id);
	}

	//loc_10FD8
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "int", chuck_id);
	if (iErrorCode != 0)
	{
		//loc_11208  iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		//loc_1124C
		THXAtraceTP("KV", 0x4B56F541);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_11078
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x37, 0x5A2A0D38, &pKVXT_isim_reset_chuck_spot_detection);
	}
	else
	{
		pKVXT_isim_reset_chuck_spot_detection = KVXT_isim_reset_chuck_spot_detection;
	}

	//loc_110AC
	if (iErrorCode != 0)
	{
		//loc_1126C
		//loc_11208  iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		//loc_1124C
		THXAtraceTP("KV", 0x4B56F541);
		return iErrorCode;
	}

	if (pKVXT_isim_reset_chuck_spot_detection != NULL)
	{
		iErrorCode = pKVXT_isim_reset_chuck_spot_detection(local_OOXA_local_KVXT_singleton_object, chuck_id);
		//loc_11184  o5 = iErrorCode
		//loc_11188
		if (iErrorCode == 0)
		{
			//loc_11194
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_11208
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_1124C
		THXAtraceTP("KV", 0x4B56F541);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_11184  o5 = iErrorCode
		//loc_11188
		if (iErrorCode == 0)
		{
			//loc_11194
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_11208
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_1124C
		THXAtraceTP("KV", 0x4B56F541);
		return iErrorCode;
	}
	*req_msg_data = chuck_id;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x37, 0x5A2A0D38, 
		req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_11184  o5 = iErrorCode
		//loc_11188
		if (iErrorCode == 0)
		{
			//loc_11194
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_11208
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_1124C
		THXAtraceTP("KV", 0x4B56F541);
		return iErrorCode;
	}
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}
	//loc_11188
	if (iErrorCode == 0)
	{
		//loc_11194
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	else
	{
		//loc_11208
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	//loc_1124C
	THXAtraceTP("KV", 0x4B56F541);
	return iErrorCode;
}

// 函数名：KVXT_retrieve_LS_drift_SOSI
int KVXT_retrieve_LS_drift_SOSI(WPxCHUCK_chuck_id_enum chuck_id, 
	double *Ry_drift)
{
	//WPxCHUCK_chuck_id_enum chuck_id = i0; //arg_44
	//double * Ry_drift = i1; //arg_48
	WPxCHUCK_chuck_id_enum * req_msg_data = NULL;  //var_4
	int(*pKVXT_isim_retrieve_LS_drift_SOSI)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id, 
		double * Ry_drift) = NULL;  //var_8
	int iErrorCode = 0;   //var_C
	double * rep_msg_data = NULL; // var_10
	int act_len = 0;  //var_14
	bool isOk = FALSE; //var_18

	if (Ry_drift != NULL)
	{
		//loc_C4F4
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	}
	else
	{
		iErrorCode = OOXA_allocate_parameter(8, &Ry_drift, &isOk);
		if (iErrorCode == 0)
		{
			//loc_C4F4
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
		}
	}

	//loc_C548
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	if (iErrorCode != 0)
	{
		//loc_C7C8 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		//loc_C80C
		if (isOk != FALSE)
		{
			PLXAmem_free(&Ry_drift);
		}
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x22, 0x20299B9F, &pKVXT_isim_retrieve_LS_drift_SOSI);
	}
	else
	{
		pKVXT_isim_retrieve_LS_drift_SOSI = KVXT_isim_retrieve_LS_drift_SOSI;
	}

	//loc_C620
	if (iErrorCode != 0)
	{
		//loc_C82C
		//loc_C7C8 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		//loc_C80C
		if (isOk != FALSE)
		{
			PLXAmem_free(&Ry_drift);
		}
		return iErrorCode;
	}

	if (pKVXT_isim_retrieve_LS_drift_SOSI != NULL)
	{
		//loc_C6E8
		iErrorCode = pKVXT_isim_retrieve_LS_drift_SOSI(local_OOXA_local_KVXT_singleton_object, chuck_id, Ry_drift);
		//loc_C704 iErrorCode = o5
		//loc_C708
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%8D %d", "Ry_drift", "double", Ry_drift, &iErrorCode);
			THXAtrace("KV", 2, "< %s (%8D)=%R", local_OOXA_local_KVXT_singleton_object->component, "Ry_drift", "double", Ry_drift, iErrorCode);
		}
		else
		{
			//loc_C7C8 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_C80C
		if (isOk != FALSE)
		{
			PLXAmem_free(&Ry_drift);
		}
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_C704 iErrorCode = o5
		//loc_C708
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%8D %d", "Ry_drift", "double", Ry_drift, &iErrorCode);
			THXAtrace("KV", 2, "< %s (%8D)=%R", local_OOXA_local_KVXT_singleton_object->component, "Ry_drift", "double", Ry_drift, iErrorCode);
		}
		else
		{
			//loc_C7C8 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_C80C
		if (isOk != FALSE)
		{
			PLXAmem_free(&Ry_drift);
		}
		return iErrorCode;
	}

	*req_msg_data = chuck_id;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x22, 0x20299B9F, 
		req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_C704 iErrorCode = o5
		//loc_C708
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%8D %d", "Ry_drift", "double", Ry_drift, &iErrorCode);
			THXAtrace("KV", 2, "< %s (%8D)=%R", local_OOXA_local_KVXT_singleton_object->component, "Ry_drift", "double", Ry_drift, iErrorCode);
		}
		else
		{
			//loc_C7C8 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_C80C
		if (isOk != FALSE)
		{
			PLXAmem_free(&Ry_drift);
		}
		return iErrorCode;
	}

	*Ry_drift = *rep_msg_data;
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}
	//loc_C708
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%8D %d", "Ry_drift", "double", Ry_drift, &iErrorCode);
		THXAtrace("KV", 2, "< %s (%8D)=%R", local_OOXA_local_KVXT_singleton_object->component, "Ry_drift", "double", Ry_drift, iErrorCode);
	}
	else
	{
		//loc_C7C8 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	//loc_C80C
	if (isOk != FALSE)
	{
		PLXAmem_free(&Ry_drift);
	}
	return iErrorCode;
}

// 函数名：KVXT_retrieve_LS_drift_SOSI
// 函数名：
int KVXT_retrieve_XVSA_scan_data(WPxCHUCK_chuck_id_enum chuck_id,
	MEXAxVSA_XVSA_scan_data *tis1_scan_data,
	MEXAxVSA_XVSA_scan_data *tis2_scan_data,
	KVXA_XVSA_chuck_model_results *xvsa_results,
	bool *xvsa_results_valid)
{
	WPxCHUCK_chuck_id_enum * req_msg_data = NULL; //var_4
	int(*pKVXT_isim_retrieve_XVSA_scan_data)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id, 
		MEXAxVSA_XVSA_scan_data *tis1_scan_data, 
		MEXAxVSA_XVSA_scan_data *tis2_scan_data,
		KVXA_XVSA_chuck_model_results *xvsa_results, 
		bool *xvsa_results_valid) = NULL; //var_8
	int iErrorCode = 0; //var_C
	libKVXT_unk_15 * rep_msg_data = NULL; //var_10
	int act_len = 0; //var_14
	bool tis1_scan_data_isOk = FALSE; //var_18
	bool tis2_scan_data_isOk = FALSE; //var_1C
	bool xvsa_results_isOk = FALSE; //var_20
	bool xvsa_results_valid_isOk = FALSE; //var_24

	if (tis1_scan_data == NULL)
	{
		OOXA_allocate_parameter(0xBB88, &tis1_scan_data, &tis1_scan_data_isOk);
	}

	//loc_AC9C
	if (iErrorCode == 0 && tis2_scan_data == NULL)
	{
		OOXA_allocate_parameter(0xBB88, &tis2_scan_data, &tis2_scan_data_isOk);
	}

	//loc_ACDC
	if (iErrorCode == 0 && xvsa_results == NULL)
	{
		OOXA_allocate_parameter(0x2678, &xvsa_results, &xvsa_results_isOk);
	}

	//loc_AD18
	if (iErrorCode == 0 && xvsa_results_valid == NULL)
	{
		OOXA_allocate_parameter(4, &xvsa_results_valid, &xvsa_results_valid_isOk);
	}

	//loc_AD50
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	}

	//loc_ADB4
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	if (iErrorCode != 0)
	{
		//loc_B0C0 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		//loc_B104
		if (tis1_scan_data_isOk != FALSE)
		{
			PLXAmem_free(&tis1_scan_data);
		}
		//loc_B11C
		if (tis2_scan_data_isOk != FALSE)
		{
			PLXAmem_free(&tis2_scan_data);
		}
		//loc_B134
		if (xvsa_results_isOk != FALSE)
		{
			PLXAmem_free(&xvsa_results);
		}
		//loc_B14C
		if (xvsa_results_valid_isOk != FALSE)
		{
			PLXAmem_free(&xvsa_results_valid);
		}
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_AE54
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1C, 0x2A1FB8F5, &pKVXT_isim_retrieve_XVSA_scan_data);
	}
	else
	{
		pKVXT_isim_retrieve_XVSA_scan_data = KVXT_isim_retrieve_XVSA_scan_data;
	}

	//loc_AE88
	if (iErrorCode != 0)
	{
		//loc_B16C
		//loc_B0C0 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		//loc_B104
		if (tis1_scan_data_isOk != FALSE)
		{
			PLXAmem_free(&tis1_scan_data);
		}
		//loc_B11C
		if (tis2_scan_data_isOk != FALSE)
		{
			PLXAmem_free(&tis2_scan_data);
		}
		//loc_B134
		if (xvsa_results_isOk != FALSE)
		{
			PLXAmem_free(&xvsa_results);
		}
		//loc_B14C
		if (xvsa_results_valid_isOk != FALSE)
		{
			PLXAmem_free(&xvsa_results_valid);
		}
		return iErrorCode;
	}

	if (pKVXT_isim_retrieve_XVSA_scan_data != NULL)
	{
		//loc_AF9C
		iErrorCode = pKVXT_isim_retrieve_XVSA_scan_data(local_OOXA_local_KVXT_singleton_object, chuck_id, tis1_scan_data, tis2_scan_data, xvsa_results, xvsa_results_valid);
		//loc_AFC4 iErrorCode = o5
		//loc_AFC8
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%9848D %4D %d", "xvsa_results", "KVXA:XVSA_chuck_model_results", xvsa_results,
				"xvsa_results_valid", "bool", xvsa_results_valid, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%9848D %4D)=%R", local_OOXA_local_KVXT_singleton_object->component, "xvsa_results", "KVXA:XVSA_chuck_model_results", xvsa_results,
				"xvsa_results_valid", "bool", xvsa_results_valid, iErrorCode);
		}
		else
		{
			//loc_B0C0 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_B104
		if (tis1_scan_data_isOk != FALSE)
		{
			PLXAmem_free(&tis1_scan_data);
		}
		//loc_B11C
		if (tis2_scan_data_isOk != FALSE)
		{
			PLXAmem_free(&tis2_scan_data);
		}
		//loc_B134
		if (xvsa_results_isOk != FALSE)
		{
			PLXAmem_free(&xvsa_results);
		}
		//loc_B14C
		if (xvsa_results_valid_isOk != FALSE)
		{
			PLXAmem_free(&xvsa_results_valid);
		}
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_AFC4 iErrorCode = o5
		//loc_AFC8
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%9848D %4D %d", "xvsa_results", "KVXA:XVSA_chuck_model_results", xvsa_results,
				"xvsa_results_valid", "bool", xvsa_results_valid, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%9848D %4D)=%R", local_OOXA_local_KVXT_singleton_object->component, "xvsa_results", "KVXA:XVSA_chuck_model_results", xvsa_results,
				"xvsa_results_valid", "bool", xvsa_results_valid, iErrorCode);
		}
		else
		{
			//loc_B0C0 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_B104
		if (tis1_scan_data_isOk != FALSE)
		{
			PLXAmem_free(&tis1_scan_data);
		}
		//loc_B11C
		if (tis2_scan_data_isOk != FALSE)
		{
			PLXAmem_free(&tis2_scan_data);
		}
		//loc_B134
		if (xvsa_results_isOk != FALSE)
		{
			PLXAmem_free(&xvsa_results);
		}
		//loc_B14C
		if (xvsa_results_valid_isOk != FALSE)
		{
			PLXAmem_free(&xvsa_results_valid);
		}
		return iErrorCode;
	}

	*req_msg_data = chuck_id;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1C, 0x2A1FB8F5, 
		req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_AFC4 iErrorCode = o5
		//loc_AFC8
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%9848D %4D %d", "xvsa_results", "KVXA:XVSA_chuck_model_results", xvsa_results,
				"xvsa_results_valid", "bool", xvsa_results_valid, &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s (%9848D %4D)=%R", local_OOXA_local_KVXT_singleton_object->component, "xvsa_results", "KVXA:XVSA_chuck_model_results", xvsa_results,
				"xvsa_results_valid", "bool", xvsa_results_valid, iErrorCode);
		}
		else
		{
			//loc_B0C0 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		}
		//loc_B104
		if (tis1_scan_data_isOk != FALSE)
		{
			PLXAmem_free(&tis1_scan_data);
		}
		//loc_B11C
		if (tis2_scan_data_isOk != FALSE)
		{
			PLXAmem_free(&tis2_scan_data);
		}
		//loc_B134
		if (xvsa_results_isOk != FALSE)
		{
			PLXAmem_free(&xvsa_results);
		}
		//loc_B14C
		if (xvsa_results_valid_isOk != FALSE)
		{
			PLXAmem_free(&xvsa_results_valid);
		}
		return iErrorCode;
	}

	memcpy(tis1_scan_data, &rep_msg_data->TIS1, 0xBB88);
	memcpy(tis2_scan_data, &rep_msg_data->TIS2, 0xBB88);
	memcpy(xvsa_results, &rep_msg_data->xvsa_results, 0x2678);
	*xvsa_results_valid = rep_msg_data->xvsa_results_valid;
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}
	//loc_AFC8
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%9848D %4D %d", "xvsa_results", "KVXA:XVSA_chuck_model_results", xvsa_results,
			"xvsa_results_valid", "bool", xvsa_results_valid, &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s (%9848D %4D)=%R", local_OOXA_local_KVXT_singleton_object->component, "xvsa_results", "KVXA:XVSA_chuck_model_results", xvsa_results,
			"xvsa_results_valid", "bool", xvsa_results_valid, iErrorCode);
	}
	else
	{
		//loc_B0C0 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	}
	//loc_B104
	if (tis1_scan_data_isOk != FALSE)
	{
		PLXAmem_free(&tis1_scan_data);
	}
	//loc_B11C
	if (tis2_scan_data_isOk != FALSE)
	{
		PLXAmem_free(&tis2_scan_data);
	}
	//loc_B134
	if (xvsa_results_isOk != FALSE)
	{
		PLXAmem_free(&xvsa_results);
	}
	//loc_B14C
	if (xvsa_results_valid_isOk != FALSE)
	{
		PLXAmem_free(&xvsa_results_valid);
	}
	return iErrorCode;
}

// 函数名：KVXT_set_chuck_id
int KVXT_set_chuck_id(WPxCHUCK_chuck_id_enum  chuck_id)
{
	//WPxCHUCK_chuck_id_enum chuck_id = i0; //arg_44
	WPxCHUCK_chuck_id_enum * req_msg_data = NULL; //var_4
	int(*pKVXT_isim_set_chuck_id)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id) = NULL; //var_8
	int iErrorCode = 0; //var_C
	char * rep_msg_data = NULL; //var_10
	int act_len = 0; //var_14

	THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	if (iErrorCode != 0)
	{
		//loc_8130 o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_7F9C
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xE, 0x432AB4E9, &pKVXT_isim_set_chuck_id);
	}
	else
	{
		pKVXT_isim_set_chuck_id = KVXT_isim_set_chuck_id;
	}

	//loc_7FD0
	if (iErrorCode != 0)
	{
		//loc_817C
		//loc_8130 o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (pKVXT_isim_set_chuck_id != NULL)
	{
		iErrorCode = pKVXT_isim_set_chuck_id(local_OOXA_local_KVXT_singleton_object, chuck_id);
		//loc_80A8 o5 = iErrorCode
		if (iErrorCode == 0)
		{
			//loc_80B8
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_8130 o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_80A8 o5 = iErrorCode
		if (iErrorCode == 0)
		{
			//loc_80B8
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_8130 o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	*req_msg_data = chuck_id;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xE, 0x432AB4E9, req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		// loc_80A8 o5 = iErrorCode
		if (iErrorCode == 0)
		{
			//loc_80B8
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_8130 o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	if (rep_msg_data == NULL)
	{
		//loc_80B8
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);
	//loc_80A8 o5 = iErrorCode
	if (iErrorCode == 0)
	{
		//loc_80B8
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{
		//loc_8130 o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_comp_sim_mode
int KVXT_set_comp_sim_mode(bool comp_sim_mode)
{
	//bool * comp_sim_mode = i0;  //arg_44
	bool * req_msg_data = NULL; //var_4
	int(*pKVXT_isim_set_comp_sim_mode)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		bool comp_sim_mode) = NULL; //var_8
	int iErrorCode = 0; //var_C
	char * rep_msg_data = NULL; //var_10
	int act_len = 0; //var_14

	THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "comp_sim_mode", "bool", &comp_sim_mode);
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "comp_sim_mode", "bool", &comp_sim_mode);
	if (iErrorCode != 0)
	{
		//loc_71D4 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_7040
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xA, 0x2BBEC942, &pKVXT_isim_set_comp_sim_mode);
	}
	else
	{
		pKVXT_isim_set_comp_sim_mode = KVXT_isim_set_comp_sim_mode;
	}

	//loc_7074
	if (iErrorCode != 0)
	{
		//loc_7220
		//loc_71D4 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (pKVXT_isim_set_comp_sim_mode != NULL)
	{
		iErrorCode = pKVXT_isim_set_comp_sim_mode(local_OOXA_local_KVXT_singleton_object, comp_sim_mode);
		//loc_714C iErrorCode = o5
		//loc_7150
		if (iErrorCode == 0)
		{
			//loc_715C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_71D4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_714C iErrorCode = o5
		//loc_7150
		if (iErrorCode == 0)
		{
			//loc_715C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_71D4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	*req_msg_data = comp_sim_mode;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xA, 0x2BBEC942, 
		req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_714C iErrorCode = o5
		//loc_7150
		if (iErrorCode == 0)
		{
			//loc_715C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_71D4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	if (rep_msg_data == NULL)
	{
		//loc_715C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);
	//loc_7150
	if (iErrorCode == 0)
	{
		//loc_715C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{
		//loc_71D4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_context
void KVXT_set_context(MEXAxGL_context_list * context)
{
	MEXAxGL_context_list * req_msg_data = 0;  //s1
	void(*pKVXT_isim_set_context)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		MEXAxGL_context_list *context) = NULL;
	int iErrorCode = 0; //var_C
	char *psErrorText = NULL;

	if (context != NULL)
	{
		//loc_11968
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%32D", "context", "MEXAxGL:context_list", context);
	}
	else
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTmet.c", 0x1FCC, 0, psErrorText);
		if (iErrorCode == 0)
		{
			//loc_11968
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%32D", "context", "MEXAxGL:context_list", context);
		}
	}

	//loc_119BC
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%32D)", local_OOXA_local_KVXT_singleton_object->component, "context", "MEXAxGL:context_list", context);
	if (iErrorCode != 0)
	{
		//loc_11B28
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_11A54
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x3A, 0x42D25BAA, &pKVXT_isim_set_context);
	}
	else
	{
		pKVXT_isim_set_context = KVXT_isim_set_context;
	}

	//loc_11A88
	if (iErrorCode != 0)
	{
		//loc_11B24
		//loc_11B28
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return;
	}

	if (pKVXT_isim_set_context == NULL)
	{
		iErrorCode = OOXA_allocate_buffer(0x20, &req_msg_data);
		if (iErrorCode == 0)
		{
			memcpy(req_msg_data, context, 0x20);
			OOXA_send_trigger(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x3A, 0x42D25BAA, req_msg_data, 0x20, 0x96);
		}
	}
	else
	{
		pKVXT_isim_set_context(local_OOXA_local_KVXT_singleton_object, context);
	}

	//loc_11B24
	//loc_11B28
	THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
	THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
	return;
}

// 函数名：KVXT_set_diagnostics
int KVXT_set_diagnostics(MEXAxGL_state *state)
{
	MEXAxGL_state * req_msg_data = 0;  //s1
	int(*pKVXT_isim_set_diagnostics)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		MEXAxGL_state *state) = NULL;   //
	int iErrorCode = 0;   //var_C
	char * rep_msg_data = NULL;   //var_10
	int act_len = 0;   //var_14
	char * psErrorText = NULL;

	if (state != NULL)
	{
		//loc_11318
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%112D", "state", "MEXAxGL:state", state);
	}
	else
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTmet.c", 0x1ED0, 0, psErrorText);
		if (iErrorCode == 0)
		{
			//loc_11318
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%112D", "state", "MEXAxGL:state", state);
		}
	}

	//loc_1136C
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%112D)", local_OOXA_local_KVXT_singleton_object->component, "state", "MEXAxGL:state", state);
	if (iErrorCode != 0)
	{
		//loc_115A0 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_11408
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x38, 0x3EE9BD34, &pKVXT_isim_set_diagnostics);
	}
	else
	{
		pKVXT_isim_set_diagnostics = KVXT_isim_set_diagnostics;
	}
	//loc_1143C
	if (iErrorCode != 0)
	{
		//loc_115EC
		//loc_115A0 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (pKVXT_isim_set_diagnostics != NULL)
	{
		//loc_11500
		iErrorCode = pKVXT_isim_set_diagnostics(local_OOXA_local_KVXT_singleton_object, state);
		//loc_11518 iErrorCode = o5
		//loc_1151C
		if (iErrorCode == 0)
		{
			//loc_11528
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_115A0 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	iErrorCode = OOXA_allocate_buffer(0x70, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_11518 iErrorCode = o5
		//loc_1151C
		if (iErrorCode == 0)
		{
			//loc_11528
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_115A0 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	memcpy(req_msg_data, state, 0x70);
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x38, 0x3EE9BD34, req_msg_data, 0x70, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_11518 iErrorCode = o5
		//loc_1151C
		if (iErrorCode == 0)
		{
			//loc_11528
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_115A0 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	if (rep_msg_data == NULL)
	{
		//loc_11528
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);
	//loc_1151C
	if (iErrorCode == 0)
	{
		//loc_11528
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{
		//loc_115A0 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_GLC_capture_params
int KVXT_set_GLC_capture_params(KVXA_capture_params *capture_params)
{
	KVXA_capture_params * req_msg_data = NULL;
	int(*pKVXT_isim_set_GLC_capture_params)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		KVXA_capture_params *capture_params) = NULL;
	int iErrorCode = 0;
	char * rep_msg_data = NULL;
	int act_len = 0;
	char * psErrorText = NULL;

	if (capture_params != NULL)
	{
		//loc_F5B0
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%56D", "capture_params", "KVXA:capture_params", capture_params);
	}
	else
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTmet.c", 0x1A36, 0, psErrorText);
		if (iErrorCode == 0)
		{
			//loc_F5B0
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%56D", "capture_params", "KVXA:capture_params", capture_params);
		}
	}

	//loc_F604
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%56D)", local_OOXA_local_KVXT_singleton_object->component, "capture_params", "KVXA:capture_params", capture_params);
	if (iErrorCode != 0)
	{
		//loc_F864 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_F6A0
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x2F, 0x3B03C081, &pKVXT_isim_set_GLC_capture_params);
	}
	else
	{
		pKVXT_isim_set_GLC_capture_params = KVXT_isim_set_GLC_capture_params;
	}

	//loc_F6D4
	if (iErrorCode != 0)
	{
		//loc_F8B0
		//loc_F864 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (pKVXT_isim_set_GLC_capture_params != NULL)
	{
		//loc_F7C4
		iErrorCode = pKVXT_isim_set_GLC_capture_params(local_OOXA_local_KVXT_singleton_object, capture_params);
		//loc_F7DC iErrorCode = o5
		//loc_F7E0
		if (iErrorCode == 0)
		{
			//loc_F7EC
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_F864
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	iErrorCode = OOXA_allocate_buffer(0x38, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_F7DC iErrorCode = o5
		//loc_F7E0
		if (iErrorCode == 0)
		{
			//loc_F7EC
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_F864
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	req_msg_data->capture_needed = capture_params->capture_needed;
	req_msg_data->capture_zrxry.z = capture_params->capture_zrxry.z;
	req_msg_data->capture_zrxry.rx = capture_params->capture_zrxry.rx;
	req_msg_data->capture_zrxry.ry = capture_params->capture_zrxry.ry;
	req_msg_data->capture_def.Z_capture_spot_selection = capture_params->capture_def.Z_capture_spot_selection;
	req_msg_data->capture_def.Ry_capture_needed = capture_params->capture_def.Ry_capture_needed;
	req_msg_data->capture_def.Ry_capture_spot_selection = capture_params->capture_def.Ry_capture_spot_selection;
	req_msg_data->capture_def.change_of_process = capture_params->capture_def.change_of_process;
	req_msg_data->capture_def.on_process = capture_params->capture_def.on_process;

	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x2F, 0x3B03C081, req_msg_data, 0x38, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_F7DC iErrorCode = o5
		//loc_F7E0
		if (iErrorCode == 0)
		{
			//loc_F7EC
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_F864
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	if (rep_msg_data == NULL)
	{
		//loc_F7EC
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);
	//loc_F7E0
	if (iErrorCode == 0)
	{
		//loc_F7EC
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{
		//loc_F864
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_global_wafer_wedge
int KVXT_set_global_wafer_wedge(zrxryvect *global_wafer_wedge)
{
	zrxryvect * req_msg_data = NULL;
	int(*pKVXT_isim_set_global_wafer_wedge)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		zrxryvect *global_wafer_wedge) = NULL;
	int iErrorCode = 0;
	char * rep_msg_data = NULL;
	int act_len = 0;
	char * psErrorText = NULL;

	if (global_wafer_wedge != NULL)
	{
		//loc_E864
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%24D", "global_wafer_wedge", "zrxryvect", global_wafer_wedge);
	}
	else
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTmet.c", 0x1822, 0, psErrorText);
		if (iErrorCode == 0)
		{
			//loc_E864
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%24D", "global_wafer_wedge", "zrxryvect", global_wafer_wedge);
		}
	}

	//loc_E8B8
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%24D)", local_OOXA_local_KVXT_singleton_object->component, "global_wafer_wedge", "zrxryvect", global_wafer_wedge);
	if (iErrorCode != 0)
	{
		//loc_EAF8 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x2B, 0x2DDD7AE3, &pKVXT_isim_set_global_wafer_wedge);
	}
	else
	{
		pKVXT_isim_set_global_wafer_wedge = KVXT_isim_set_global_wafer_wedge;
	}

	//loc_E988
	if (iErrorCode != 0)
	{
		//loc_EB44
		//loc_EAF8 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (pKVXT_isim_set_global_wafer_wedge != NULL)
	{
		//loc_EA58
		iErrorCode = pKVXT_isim_set_global_wafer_wedge(local_OOXA_local_KVXT_singleton_object, global_wafer_wedge);
		//loc_EA70 iErrorCode = o5
		//loc_EA74
		if (iErrorCode == 0)
		{
			//loc_EA80
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_EAF8 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	iErrorCode = OOXA_allocate_buffer(0x18, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_EA70 iErrorCode = o5
		//loc_EA74
		if (iErrorCode == 0)
		{
			//loc_EA80
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_EAF8 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	req_msg_data->z = global_wafer_wedge->z;
	req_msg_data->rx = global_wafer_wedge->rx;
	req_msg_data->ry = global_wafer_wedge->ry;

	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x2B, 0x2DDD7AE3, req_msg_data, 0x18, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_EA70 iErrorCode = o5
		//loc_EA74
		if (iErrorCode == 0)
		{
			//loc_EA80
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_EAF8 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	if (rep_msg_data == NULL)
	{
		//loc_EA80
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);
	//loc_EA74
	if (iErrorCode == 0)
	{
		//loc_EA80
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{
		//loc_EAF8 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_high_precision_SA_levelling
int KVXT_set_high_precision_SA_levelling(bool high_precision_levelling)
{
	bool * req_msg_data;
	int(*pKVXT_isim_set_high_precision_SA_levelling)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		bool high_precision_levelling) = NULL;
	int iErrorCode = 0;
	char * rep_msg_data;
	int act_len = 0;

	THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "high_precision_levelling", "bool", &high_precision_levelling);
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component, "high_precision_levelling", "bool", &high_precision_levelling);
	if (iErrorCode != 0)
	{
		//loc_A31C o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x18, 0x5EEA3956, &pKVXT_isim_set_high_precision_SA_levelling);
	}
	else
	{
		pKVXT_isim_set_high_precision_SA_levelling = KVXT_isim_set_high_precision_SA_levelling;
	}

	//loc_A1BC
	if (iErrorCode != 0)
	{
		//loc_A368 iErrorCode = o5
		//loc_A31C o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (pKVXT_isim_set_high_precision_SA_levelling != NULL)
	{
		//loc_A27C
		iErrorCode = pKVXT_isim_set_high_precision_SA_levelling(local_OOXA_local_KVXT_singleton_object, high_precision_levelling);
		//loc_A294 o5 = iErrorCode
		//loc_A298
		if (iErrorCode == 0)
		{
			//loc_A2A4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_A31C o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_A294 o5 = iErrorCode
		//loc_A298
		if (iErrorCode == 0)
		{
			//loc_A2A4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_A31C o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	*req_msg_data = high_precision_levelling;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x18, 0x5EEA3956, req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_A294 o5 = iErrorCode
		//loc_A298
		if (iErrorCode == 0)
		{
			//loc_A2A4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_A31C o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	if (rep_msg_data == NULL)
	{
		//loc_A2A4
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);
	//loc_A298
	if (iErrorCode == 0)
	{
		//loc_A2A4
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{
		//loc_A31C o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_iVSA_fallback_shapes
int KVXT_set_iVSA_fallback_shapes(WPxCHUCK_chuck_id_enum chuck_id, 
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS1_p,
	KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS2_p)
{
	libKVXT_unk_16 * req_msg_data = NULL;
	int(*pKVXT_isim_set_iVSA_fallback_shapes)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id, 
		KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS1_p, 
		KVXT_iVSA_plate_fallback_shape *fallback_shape_TIS2_p) = NULL;
	int iErrorCode = 0;
	char * rep_msg_data = NULL;
	int act_len = 0;
	char * psErrorText = NULL;

	if (fallback_shape_TIS1_p != NULL && fallback_shape_TIS2_p != NULL)
	{
		//loc_D984
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %144D %144D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "fallback_shape_TIS1_p",
			"KVXT:iVSA_plate_fallback_shape", &fallback_shape_TIS1_p, "fallback_shape_TIS2_p", "KVXT:iVSA_plate_fallback_shape", &fallback_shape_TIS2_p);
	}
	else
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTmet.c", 0x15F1, 0, psErrorText);
		if (iErrorCode == 0)
		{
			//loc_D984
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %144D %144D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "fallback_shape_TIS1_p",
				"KVXT:iVSA_plate_fallback_shape", &fallback_shape_TIS1_p, "fallback_shape_TIS2_p", "KVXT:iVSA_plate_fallback_shape", &fallback_shape_TIS2_p);
		}
	}

	//loc_DA18
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %144D %144D)", local_OOXA_local_KVXT_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum",
		&chuck_id, "fallback_shape_TIS1_p", "KVXT:iVSA_plate_fallback_shape", &fallback_shape_TIS1_p, "fallback_shape_TIS2_p", "KVXT:iVSA_plate_fallback_shape", &fallback_shape_TIS2_p);
	if (iErrorCode != 0)
	{
		//loc_DCB0 o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x27, 0x26F16E08, &pKVXT_isim_set_iVSA_fallback_shapes);
	}
	else
	{
		pKVXT_isim_set_iVSA_fallback_shapes = KVXT_isim_set_iVSA_fallback_shapes;
	}

	//loc_DB28
	if (iErrorCode != 0)
	{
		//loc_DCFC
		//loc_DCB0 o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (pKVXT_isim_set_iVSA_fallback_shapes != NULL)
	{
		iErrorCode = pKVXT_isim_set_iVSA_fallback_shapes(local_OOXA_local_KVXT_singleton_object, chuck_id, fallback_shape_TIS1_p, fallback_shape_TIS2_p);
		//loc_DC28 iErrorCode = o5
		//loc_DC2C
		if (iErrorCode == 0)
		{
			//loc_DC38
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_DCB0 o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	iErrorCode = OOXA_allocate_buffer(0x128, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_DC28 iErrorCode = o5
		//loc_DC2C
		if (iErrorCode == 0)
		{
			//loc_DC38
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_DCB0 o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	req_msg_data->chuck_id = chuck_id;
	memcpy(&req_msg_data->fallback_shape_TIS1, fallback_shape_TIS1_p, 0x90);
	memcpy(&req_msg_data->fallback_shape_TIS2, fallback_shape_TIS2_p, 0x90);

	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x27, 0x26F16E08, req_msg_data, 0x128, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_DC28 iErrorCode = o5
		//loc_DC2C
		if (iErrorCode == 0)
		{
			//loc_DC38
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_DCB0 o5 = iErrorCode
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	if (rep_msg_data == NULL)
	{
		//loc_DC38
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);
	//loc_DC2C
	if (iErrorCode == 0)
	{
		//loc_DC38
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{
		//loc_DCB0 o5 = iErrorCode
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_al_athena_zrxry
int KVXT_set_al_athena_zrxry(zrxryvect *al_athena_zrxry)
{
	zrxryvect * req_msg_data = NULL;
	int(*pKVXT_isim_set_al_athena_zrxry)(KVXT_local_OOXA_local_KVXT_singleton_object * local_OOXA_local_KVXT_singleton_object,
		zrxryvect *al_athena_zrxry) = 0;
	int iErrorCode = 0;
	char * rep_msg_data = NULL;
	int act_len = 0;
	char * psErrorText = NULL;

	if (al_athena_zrxry != NULL)
	{
		//loc_5B44
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%24D", "al_athena_zrxry", "zrxryvect", al_athena_zrxry);
	}
	else
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(0x4F4F0003, 0, "../inc/bld/KVXTmet.c", 0x2C2, 0, psErrorText);
		if (iErrorCode == 0)
		{
			//loc_5B44
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%24D", "al_athena_zrxry", "zrxryvect", al_athena_zrxry);
		}
	}

	//loc_5B98
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%24D)", local_OOXA_local_KVXT_singleton_object->component, "al_athena_zrxry", "zrxryvect", al_athena_zrxry);
	if (iErrorCode != 0)
	{
		//loc_5DD8 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 4, 0x5C6B205, &pKVXT_isim_set_al_athena_zrxry);
	}
	else
	{
		pKVXT_isim_set_al_athena_zrxry = KVXT_isim_set_al_athena_zrxry;
	}

	//loc_5C68
	if (iErrorCode != 0)
	{
		//loc_5E24 
		//loc_5DD8 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (pKVXT_isim_set_al_athena_zrxry != NULL)
	{
		//loc_5D38
		iErrorCode = pKVXT_isim_set_al_athena_zrxry(local_OOXA_local_KVXT_singleton_object, al_athena_zrxry);
		//loc_5D50 o5 = iErrorCode
		//loc_5D54
		if (iErrorCode == 0)
		{
			//loc_5D60
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_5DD8 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	iErrorCode = OOXA_allocate_buffer(0x18, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_5D50 o5 = iErrorCode
		//loc_5D54
		if (iErrorCode == 0)
		{
			//loc_5D60
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_5DD8 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	req_msg_data->z = al_athena_zrxry->z;
	req_msg_data->rx = al_athena_zrxry->rx;
	req_msg_data->ry = al_athena_zrxry->ry;

	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 4, 0x5C6B2056, req_msg_data, 0x18, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_5D50 o5 = iErrorCode
		//loc_5D54
		if (iErrorCode == 0)
		{
			//loc_5D60
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_5DD8 iErrorCode = o5
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	if (rep_msg_data == NULL)
	{
		//loc_5D60
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);
	//loc_5D54
	if (iErrorCode == 0)
	{
		//loc_5D60
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{
		//loc_5DD8 iErrorCode = o5
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_le_spot_id_SA
int KVXT_set_le_spot_id_SA(const LEXAxSPOT_spot_selection_t spot_id)
{
	LEXAxSPOT_ag_spot_id_t *req_msg_data = NULL;
	int(*pKVXT_isim_set_le_spot_id_SA)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		LEXAxSPOT_spot_selection_t spot_id) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;

	THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", 
		"spot_id", "LEXAxSPOT:spot_selection_t", &spot_id);
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component,
		"spot_id", "LEXAxSPOT:spot_selection_t", &spot_id);
	if (iErrorCode == 0)
	{//loc_969C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", "KV", iErrorCode);
		return iErrorCode;
	}
	// .text:000094D8
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_9508
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x14, 0x6738F029, &pKVXT_isim_set_le_spot_id_SA);
	}
	else
	{
		pKVXT_isim_set_le_spot_id_SA = KVXT_isim_set_le_spot_id_SA;
	}
	//loc_953C
	if (iErrorCode != 0)
	{//loc_96E8→loc_969C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000954C
	if (pKVXT_isim_set_le_spot_id_SA != NULL)
	{//loc_95FC
		iErrorCode = pKVXT_isim_set_le_spot_id_SA(local_OOXA_local_KVXT_singleton_object, spot_id);
		//loc_9614→loc_9618
		if (iErrorCode != 0)
		{//loc_969C
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_9624
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00009558
	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{//loc_9614→loc_9618
		if (iErrorCode != 0)
		{//loc_969C
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_9624
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00009570
	*req_msg_data = spot_id;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x14, 0x6738F029,
		req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		// loc_9614
		// loc_9618
		if (iErrorCode != 0)
		{//loc_969C
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_9624
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:000095DC
	if (rep_msg_data == NULL)
	{//loc_9624
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:000095EC
	OOXA_release_buffer(rep_msg_data);
	// loc_9618
	if (iErrorCode != 0)
	{//loc_969C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_9624
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_le_spot_id_WM
int KVXT_set_le_spot_id_WM(const LEXAxSPOT_spot_selection_t spot_id)
{
	LEXAxSPOT_ag_spot_id_t *req_msg_data = NULL;
	int(*pKVXT_isim_set_le_spot_id_WM)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		LEXAxSPOT_spot_selection_t spot_id) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;

	THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", 
		"spot_id", "LEXAxSPOT:spot_selection_t", &spot_id);
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_OOXA_local_KVXT_singleton_object->component,
		"spot_id", "LEXAxSPOT:spot_selection_t", &spot_id);
	if (iErrorCode != 0)
	{//loc_10590
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component , iErrorCode);
		return iErrorCode;
	}
	// .text:000103CC
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_103FC
		OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x33, 0x6A422111, &pKVXT_isim_set_le_spot_id_WM);
	}
	else
	{
		pKVXT_isim_set_le_spot_id_WM = KVXT_isim_set_le_spot_id_WM;
	}
	//loc_10430
	if (iErrorCode != 0)
	{//loc_105DC→loc_10590
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00010440
	if (pKVXT_isim_set_le_spot_id_WM != NULL)
	{//loc_104F0
		iErrorCode = pKVXT_isim_set_le_spot_id_WM(local_OOXA_local_KVXT_singleton_object, spot_id);
		//loc_10508→loc_1050C
		if (iErrorCode != 0)
		{//loc_10590
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_10518
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0001044C
	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{//loc_10508→loc_1050C
		if (iErrorCode != 0)
		{//loc_10590
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_10518
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00010464
	*req_msg_data = spot_id;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x33, 0x6A422111, 
		rep_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{//loc_10508→loc_1050C
		if (iErrorCode != 0)
		{//loc_10590
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_10518
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:000104D0
	if (rep_msg_data == NULL)
	{//loc_10518
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:000104E0
	OOXA_release_buffer(rep_msg_data);
	if (iErrorCode != 0)
	{//loc_10590
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_10518
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_le_spot_xyz
int KVXT_set_le_spot_xyz(const LEXAxSPOT_spot_id_t spot_id,
	const xyzvect *le_spot_xyz)
{
	KVXT_unk_10 *req_msg_data = NULL;
	int(*pKVXT_isim_set_le_spot_xyz)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		LEXAxSPOT_spot_id_t spot_id,
		xyzvect *le_spot_xyz) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	char *psErrorText = NULL;

	if (le_spot_xyz != NULL)
	{//loc_53DC
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %24D", 
			"spot_id", "LEXAxSPOT:spot_id_t", &spot_id, "le_spot_xyz", "xyzvect", le_spot_xyz);
	}
	else
	{
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, __FUNCTION__, __LINE__, 0, psErrorText);
		if (iErrorCode == 0)
		{//loc_53DC
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %24D",
				"spot_id", "LEXAxSPOT:spot_id_t", &spot_id, "le_spot_xyz", "xyzvect", le_spot_xyz);
		}
	}
	//loc_5458
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %24D)", local_OOXA_local_KVXT_singleton_object->component, 
		"spot_id", "LEXAxSPOT:spot_id_t", &spot_id, "le_spot_xyz", "xyzvect", le_spot_xyz);
	if (iErrorCode != 0)
	{//loc_56CC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:000054EC
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_551C
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 2, 0x67C278EE, &pKVXT_isim_set_le_spot_xyz);
	}
	else
	{
		pKVXT_isim_set_le_spot_xyz = KVXT_isim_set_le_spot_xyz;
	}
	//loc_5550
	if (iErrorCode != 0)
	{//loc_5718→loc_56CC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00005560
	if (*pKVXT_isim_set_le_spot_xyz != 0)
	{//loc_5628
		iErrorCode = pKVXT_isim_set_le_spot_xyz(local_OOXA_local_KVXT_singleton_object, spot_id, le_spot_xyz);
		//loc_5644→loc_5648
		if (iErrorCode != 0)
		{//loc_56CC
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_5654
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000556C 
	iErrorCode = OOXA_allocate_buffer(0x20, &req_msg_data);
	if (iErrorCode != 0)
	{//loc_5644
		if (iErrorCode != 0)
		{//loc_56CC
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_5654
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00005584
	req_msg_data->spot_id = spot_id;
	req_msg_data->le_spot_xyz.x = le_spot_xyz->x;
	req_msg_data->le_spot_xyz.y = le_spot_xyz->y;
	req_msg_data->le_spot_xyz.z = le_spot_xyz->z;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 2, 0x67C278EE, 
		req_msg_data, 0x20, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode == 0)
	{//loc_5644
		if (iErrorCode != 0)
		{//loc_56CC
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_5654
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00005608
	if (rep_msg_data == NULL)
	{//loc_5654
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00005618
	OOXA_release_buffer(rep_msg_data);
	if (iErrorCode != 0)
	{//loc_56CC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_5654
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_lot_GLC_params
int KVXT_set_lot_GLC_params(const KVXAxLOTxPAR_GLC_lot_data *glc_lot_data)
{
	char *req_msg_data = NULL;
	char *buffer = NULL; // buffer是req_msg_data结构体类型的指针
	int(*pKVXT_isim_set_lot_GLC_params)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		KVXAxLOTxPAR_GLC_lot_data *glc_lot_data) = NULL;
	int iErrorCode = 0;
	size_t packet_size = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	char *psErrorText = NULL;
	if (glc_lot_data != NULL)
	{//loc_EED8
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%D", 
			"glc_lot_data", "KVXAxLOTxPAR:GLC_lot_data", glc_lot_data);
	}
	else
	{
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, __FUNCTION__, __LINE__, 0, psErrorText);
		if (iErrorCode == 0)
		{//loc_EED8
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%D",
				"glc_lot_data", "KVXAxLOTxPAR:GLC_lot_data", glc_lot_data);
		}
	}
	//loc_EF2C
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%D)", local_OOXA_local_KVXT_singleton_object->component, 
		"glc_lot_data", "KVXAxLOTxPAR:GLC_lot_data", glc_lot_data);
	if (iErrorCode != 0)
	{//loc_F1A8
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000EF98
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_EFC8
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x2D, 0x5A545BF1, &pKVXT_isim_set_lot_GLC_params);
	}
	else
	{
		pKVXT_isim_set_lot_GLC_params = KVXT_isim_set_lot_GLC_params;
	}
	//loc_EFFC
	if (iErrorCode != 0)
	{//loc_F1F4→loc_F1A8
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000F00C
	if (pKVXT_isim_set_lot_GLC_params != NULL)
	{//loc_F108
		iErrorCode = pKVXT_isim_set_lot_GLC_params(local_OOXA_local_KVXT_singleton_object, glc_lot_data);
		//loc_F120
		if (iErrorCode != 0)
		{//loc_F1A8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_F130
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000F018
	iErrorCode = DDXAxSERIALIZE_get_packed_size("KVXAxLOTxPAR:GLC_lot_data", glc_lot_data, &packet_size);
	if (iErrorCode != 0)
	{//loc_F120
		if (iErrorCode != 0)
		{//loc_F1A8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_F130
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000F03C
	iErrorCode = OOXA_allocate_buffer(packet_size, &req_msg_data);
	if (iErrorCode != 0)
	{//loc_F120
		if (iErrorCode != 0)
		{//loc_F1A8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_F130
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000F058
	buffer = req_msg_data;
	iErrorCode = DDXAxSERIALIZE_pack("KVXAxLOTxPAR:GLC_lot_data", glc_lot_data, &buffer, 0);
	if (iErrorCode != 0)
	{//loc_F120
		if (iErrorCode != 0)
		{//loc_F1A8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_F130
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000F088
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x2D, 0x5A545BF1, 
		req_msg_data, packet_size, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{//loc_F120
		if (iErrorCode != 0)
		{//loc_F1A8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_F130
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000F0E8
	if (rep_msg_data == NULL)
	{//loc_F130
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000F0F8
	OOXA_release_buffer(rep_msg_data);
	if (iErrorCode != 0)
	{//loc_F1A8
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_F130
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_lot_WM_params
int KVXT_set_lot_WM_params(const KVXAxLOTxPAR_WM_lot_data_t *wm_lot_data)
{
	char *req_msg_data = NULL; // 体现不出结构体，暂用char *代替
	char *buffer = NULL; // buffer是req_msg_data结构体类型的指针
	int(*pKVXT_isim_set_lot_WM_params)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		KVXAxLOTxPAR_WM_lot_data_t *wm_lot_data) = NULL;
	int iErrorCode = 0;
	size_t packed_size;
	char *rep_msg_data = NULL;
	int act_len = 0;
	char *psErrorText = NULL;
	if (wm_lot_data == NULL)
	{
		// .text:00010904
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, __FILE__, __LINE__, 0, psErrorText);
	}
	//loc_10954
	THXAtrace("KV", 2, __FUNCTION__, "> %s ()", local_OOXA_local_KVXT_singleton_object->component);
	if (iErrorCode != 0)
	{//loc_10BB4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:000109A4
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_109D4
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x35, 0x681376D, &pKVXT_isim_set_lot_WM_params);
	}
	else
	{
		pKVXT_isim_set_lot_WM_params = KVXT_isim_set_lot_WM_params;
	}
	//loc_10A08
	if (iErrorCode != 0)
	{//loc_10C00→loc_10BB4
		THXAtrace("KV", 2, "KVXT_set_lot_W,M_params", "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00010A18
	if (pKVXT_isim_set_lot_WM_params != 0)
	{//loc_10B14→loc_10B2C
		iErrorCode = pKVXT_isim_set_lot_WM_params(local_OOXA_local_KVXT_singleton_object->component, wm_lot_data);
		//loc_10B30
		if (iErrorCode != 0)
		{//loc_10BB4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_10B3C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00010A24
	iErrorCode = DDXAxSERIALIZE_get_packed_size("KVXAxLOTxPAR:WM_lot_data_t", wm_lot_data, &packed_size);
	if (iErrorCode != 0)
	{//loc_10B2C
		//loc_10B30
		if (iErrorCode != 0)
		{//loc_10BB4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_10B3C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00010A48
	iErrorCode = OOXA_allocate_buffer(packed_size, &req_msg_data);
	if (iErrorCode != 0)
	{//loc_10B2C
		//loc_10B30
		if (iErrorCode != 0)
		{//loc_10BB4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_10B3C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00010A64
	buffer = req_msg_data;
	iErrorCode = DDXAxSERIALIZE_pack("KVXAxLOTxPAR:WM_lot_data_t", wm_lot_data, &buffer, 0);
	if (iErrorCode != 0)
	{//loc_10B2C
		//loc_10B30
		if (iErrorCode != 0)
		{//loc_10BB4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_10B3C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00010A94
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x35, 0x681376D,
		req_msg_data, packed_size, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{//loc_10B2C
		//loc_10B30
		if (iErrorCode != 0)
		{//loc_10BB4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_10B3C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00010AF4
	if (rep_msg_data == NULL)
	{//loc_10B3C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00010B04
	OOXA_release_buffer(rep_msg_data);
	//loc_10B30
	if (iErrorCode != 0)
	{//loc_10BB4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_10B3C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_plate_drift_refs
int KVXT_set_plate_drift_refs(const WPxCHUCK_chuck_id_enum stage_id,
	const MEXAxWAFxPLATE_wafer_level_plate plate_id,
	const KVXT_TIS_drift_ref_struct *drift_refs,
	const bool validity)
{
	KVXT_unk_2 *req_msg_data = NULL;
	int(*pKVXT_isim_set_plate_drift_refs)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum stage_id,
		MEXAxWAFxPLATE_wafer_level_plate plate_id,
		KVXT_TIS_drift_ref_struct *drift_refs,
		bool validity) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	char *psErrorText = NULL;
	if (drift_refs != NULL)
	{//loc_7A74
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D %80D %4D", 
			"stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id,
			"drift_refs", "KVXT:TIS_drift_ref_struct", drift_refs, "validity", "bool", &validity);
	}
	else
	{
		// .text:00007A18
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, __FUNCTION__, __LINE__, 0, psErrorText);
		if (iErrorCode == 0)
		{//loc_7A74
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D %80D %4D",
				"stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id,
				"drift_refs", "KVXT:TIS_drift_ref_struct", drift_refs, "validity", "bool", &validity);
		}
	}
	// loc_7B40
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %4D %80D %4D)", local_OOXA_local_KVXT_singleton_object->component, 
		"stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id,
		"drift_refs", "KVXT:TIS_drift_ref_struct", drift_refs, "validity", "bool", &validity);
	if (iErrorCode != 0)
	{//loc_7E18
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00007C24
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_7C54
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xD, 0x8728D14, &pKVXT_isim_set_plate_drift_refs);
	}
	else
	{
		pKVXT_isim_set_plate_drift_refs = KVXT_isim_set_plate_drift_refs;
	}
	//loc_7C88
	if (iErrorCode != 0)
	{//loc_7E64→loc_7E18
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00007C98
	if (pKVXT_isim_set_plate_drift_refs != NULL)
	{//loc_7D6C
		iErrorCode = pKVXT_isim_set_plate_drift_refs(local_OOXA_local_KVXT_singleton_object, stage_id, plate_id, drift_refs, validity);
		//loc_7D90→loc_7D94
		if (iErrorCode != 0)
		{//loc_7E18
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{// loc_7DA0
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00007CA4
	if (OOXA_allocate_buffer(0x5C, &req_msg_data) != 0)
	{//loc_7D90→loc_7D94
		if (iErrorCode != 0)
		{//loc_7E18
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{// loc_7DA0
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00007CBC
	req_msg_data->stage_id = stage_id;
	req_msg_data->plate_id = plate_id;
	memcpy(&req_msg_data->drift_refs, drift_refs, 0x50);
	req_msg_data->validity = validity;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0xD, 0x8728D14, 
		req_msg_data, 0x5C, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{//loc_7D90→loc_7D94
		if (iErrorCode != 0)
		{//loc_7E18
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{// loc_7DA0
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00007D4C
	if (rep_msg_data == NULL)
	{//loc_7DA0
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00007D5C
	OOXA_release_buffer(rep_msg_data);
	//loc_7D94
	if (iErrorCode != 0)
	{//loc_7E18
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{// loc_7DA0
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_plate_level_ref_xyz
int KVXT_set_plate_level_ref_xyz(const WPxCHUCK_chuck_id_enum stage_id,
	const MEXAxWAFxPLATE_wafer_level_plate plate_id,
	const xyzvect *plate_level_ref_xyz)
{
	KVXT_unk_9 *req_msg_data = NULL;
	int(*pKVXT_isim_set_plate_level_ref_xyz)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum stage_id,
		MEXAxWAFxPLATE_wafer_level_plate plate_id,
		xyzvect *plate_level_ref_xyz) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	char *psErrorText = NULL;
	if (plate_level_ref_xyz != NULL)
	{//loc_4BA0
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D %24D", 
			"stage_id", "WPxCHUCK:chuck_id_enum", stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", plate_id,
			"plate_level_ref_xyz", "xyzvect", plate_level_ref_xyz);
	}
	else
	{
		// .text:00004B44
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, __FUNCTION__, __LINE__, 0, psErrorText);
		if (iErrorCode = 0)
		{//loc_4BA0
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D %24D",
				"stage_id", "WPxCHUCK:chuck_id_enum", stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", plate_id,
				"plate_level_ref_xyz", "xyzvect", plate_level_ref_xyz);
		}
	}
	// loc_4C44
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %4D %24D)", local_OOXA_local_KVXT_singleton_object->component,
		"stage_id", "WPxCHUCK:chuck_id_enum", stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", plate_id, 
		"plate_level_ref_xyz", "xyzvect", plate_level_ref_xyz);
	if (iErrorCode != 0)
	{//loc_4EF0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00004D00 
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_4D30
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0, 0x18DEEF8C, &pKVXT_isim_set_plate_level_ref_xyz);
	}
	else
	{
		pKVXT_isim_set_plate_level_ref_xyz = KVXT_isim_set_XVSA_scan_refs;
	}
	//loc_4D64
	if (iErrorCode != 0)
	{//loc_4F3C→loc_4EF0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00004D74
	if (pKVXT_isim_set_plate_level_ref_xyz != 0)
	{//loc_4E48
		iErrorCode = pKVXT_isim_set_plate_level_ref_xyz(local_OOXA_local_KVXT_singleton_object, stage_id, plate_id, plate_level_ref_xyz);
		//loc_4E68
		//loc_4E6C
		if (iErrorCode != 0)
		{//loc_4EF0
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_4E78
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00004D80
	iErrorCode = OOXA_allocate_buffer(0x20, req_msg_data);
	if (iErrorCode != 0)
	{//loc_4E68→loc_4E6C
		if (iErrorCode != 0)
		{//loc_4EF0
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_4E78
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00004D98
	req_msg_data->chuck_id = stage_id;
	req_msg_data->plate_id = plate_id;
	req_msg_data->plate_level_ref_xyz.x = plate_level_ref_xyz->x;
	req_msg_data->plate_level_ref_xyz.y = plate_level_ref_xyz->y;
	req_msg_data->plate_level_ref_xyz.z = plate_level_ref_xyz->z;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0, 0x18DEEF8C, 
		rep_msg_data, 0x20, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{//loc_4E68
		if (iErrorCode != 0)
		{//loc_4EF0
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_4E78
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00004E28
	if (rep_msg_data == NULL)
	{//loc_4E78
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00004E38
	OOXA_release_buffer(rep_msg_data);
	//loc_4E6C
	if (iErrorCode != 0)
	{//loc_4EF0
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_4E78
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_plate_wedge
int KVXT_set_plate_wedge(const WPxCHUCK_chuck_id_enum stage_id,
	const MEXAxWAFxPLATE_wafer_level_plate plate_id,
	const zrxryvect *plate_wedge)
{
	KVXT_unk_8 *req_msg_data = NULL;
	int(*pKVXT_isim_set_plate_wedge)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum stage_id,
		MEXAxWAFxPLATE_wafer_level_plate plate_id,
		zrxryvect *plate_wedge) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	char *psErrorText = NULL;
	if (plate_wedge != NULL)
	{//loc_61B4
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D %24D", 
			"stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id, 
			"plate_wedge", "zrxryvect", plate_wedge);
	}
	else
	{
		// .text:00006158 
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTmet.c", 0x3C5, 0, psErrorText);
		if (iErrorCode == 0)
		{//loc_61B4
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D %24D",
				"stage_id", "WPxCHUCK:chuck_id_enum", &stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id,
				"plate_wedge", "zrxryvect", plate_wedge);
		}
	}
	// loc_6258
	//loc_6258
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %4D %24D)", 
		local_OOXA_local_KVXT_singleton_object->component, 
		"stage_id", "WPxCHUCK:chuck_id_enum", stage_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", plate_id,
		"plate_wedge", "zrxryvect", plate_wedge);
	if (iErrorCode != 0)
	{//loc_6504
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00006314
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_6344
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 6, 0x4688A126, &pKVXT_isim_set_plate_wedge);
	}
	else
	{
		pKVXT_isim_set_plate_wedge = KVXT_isim_set_plate_wedge;
	}
	//loc_6378
	if (iErrorCode != 0)
	{//loc_6550→loc_6504
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00006388 
	if (pKVXT_isim_set_plate_wedge != 0)
	{//loc_645C
		iErrorCode = pKVXT_isim_set_plate_wedge(local_OOXA_local_KVXT_singleton_object, stage_id, plate_id, plate_wedge);
		//loc_647C→loc_6480
		if (iErrorCode != 0)
		{//loc_6504
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_648C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00006394
	iErrorCode = OOXA_allocate_buffer(0x20, &req_msg_data);
	if (iErrorCode != 0)
	{//loc_647C→loc_6480
		if (iErrorCode != 0)
		{//loc_6504
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_648C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:000063AC 
	req_msg_data->chuck_id = stage_id;
	req_msg_data->plate_id = plate_id;
	req_msg_data->plate_wedge.z = plate_wedge->z;
	req_msg_data->plate_wedge.rx = plate_wedge->rx;
	req_msg_data->plate_wedge.ry = plate_wedge->ry;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 6, 0x4688A126, 
		req_msg_data, 0x20, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{//loc_647C→loc_6480
		if (iErrorCode != 0)
		{//loc_6504
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_648C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000643C
	if (rep_msg_data = NULL)
	{//loc_648C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000644C
	OOXA_release_buffer(rep_msg_data);
	//loc_6480
	if (iErrorCode != 0)
	{//loc_6504
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_648C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_SA_capture_params
int KVXT_set_SA_capture_params(const KVXA_capture_params *capture_params)
{
	KVXA_capture_params *req_msg_data = NULL;
	int(*pKVXT_isim_set_SA_capture_params)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		KVXA_capture_params *capture_params) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	char *psErrorText = NULL;
	if (capture_params != NULL)
	{//loc_9A64
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%56D", 
			"capture_params", "KVXA:capture_params", capture_params);
	}
	else
	{
		// .text:00009A08
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, __FUNCTION__, __LINE__, 0, psErrorText);
		if (iErrorCode == 0)
		{
			// loc_9A64
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%56D", "capture_params", "KVXA:capture_params", capture_params);
		}
	}
	//loc_9AB8
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%56D)", 
		local_OOXA_local_KVXT_singleton_object->component, "capture_params", "KVXA:capture_params", capture_params);
	if (iErrorCode != 0)
	{//loc_9D18
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00009B24
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_9B54
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x16, 0x3688ACF7, &pKVXT_isim_set_SA_capture_params);
	}
	else
	{
		pKVXT_isim_set_SA_capture_params = KVXT_isim_set_SA_capture_params;
	}
	//loc_9B88
	if (iErrorCode != 0)
	{//loc_9D64→loc_9D18
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00009B98 
	if (pKVXT_isim_set_SA_capture_params != NULL)
	{//loc_9C78
		iErrorCode = pKVXT_isim_set_SA_capture_params(local_OOXA_local_KVXT_singleton_object, capture_params);
		//loc_9C90→loc_9C94
		if (iErrorCode != 0)
		{//loc_9D18
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_9CA0
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00009BA4
	req_msg_data->capture_needed = capture_params->capture_needed;
	req_msg_data->capture_zrxry.z = capture_params->capture_zrxry.z;
	req_msg_data->capture_zrxry.rx = capture_params->capture_zrxry.rx;
	req_msg_data->capture_zrxry.ry = capture_params->capture_zrxry.ry;
	req_msg_data->capture_def.Z_capture_spot_selection = capture_params->capture_def.Z_capture_spot_selection;
	req_msg_data->capture_def.Ry_capture_needed = capture_params->capture_def.Ry_capture_needed;
	req_msg_data->capture_def.Ry_capture_spot_selection = capture_params->capture_def.Ry_capture_spot_selection;
	req_msg_data->capture_def.change_of_process = capture_params->capture_def.change_of_process;
	req_msg_data->capture_def.on_process = capture_params->capture_def.on_process;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x16, 0x3688ACF7,
		req_msg_data, 0x38, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{//loc_9C90→loc_9C94
		if (iErrorCode != 0)
		{//loc_9D18
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_9CA0
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00009C58
	if (rep_msg_data == NULL)
	{//loc_9CA0
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00009C68
	OOXA_release_buffer(rep_msg_data);
	//loc_9C94
	if (iErrorCode != 0)
	{//loc_9D18
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_9CA0
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_SA_level_high_precision_count
int KVXT_set_SA_level_high_precision_count(const int precision_count)
{
	int *req_msg_data = NULL;
	int(*pKVXT_isim_set_SA_level_high_precision_count)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		int precision_count) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "precision_count", "int", &precision_count);
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", 
		local_OOXA_local_KVXT_singleton_object->component, "precision_count", "int", &precision_count);
	if (iErrorCode != 0)
	{//loc_6BFC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_6A68
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 8, 0x670B48DB, &pKVXT_isim_set_SA_level_high_precision_count);
	}
	else
	{
		pKVXT_isim_set_SA_level_high_precision_count = KVXT_isim_set_SA_level_high_precision_count;
	}
	//loc_6A9C
	if (iErrorCode != 0)
	{//loc_6C48→loc_6BFC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00006AAC
	if (pKVXT_isim_set_SA_level_high_precision_count != NULL)
	{//loc_6B5C
		iErrorCode = pKVXT_isim_set_SA_level_high_precision_count(local_OOXA_local_KVXT_singleton_object, precision_count);
		//loc_6B74→loc_6B78
		if (iErrorCode != 0)
		{//loc_6BFC
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_6B84
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00006AB8
	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{//loc_6B74
		if (iErrorCode != 0)
		{//loc_6BFC
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_6B84
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00006AD0
	*req_msg_data = precision_count;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 8, 0x670B48DB, 
		req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{//loc_6B74
		if (iErrorCode != 0)
		{//loc_6BFC
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", 
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_6B84
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
				local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00006B3C
	if (rep_msg_data == NULL)
	{//loc_6B84
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	OOXA_release_buffer(rep_msg_data);
	//loc_6B78
	if (iErrorCode != 0)
	{//loc_6BFC
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_6B84
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R",
			local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_SA_model_done
int KVXT_set_SA_model_done(const bool sa_model_done)
{
	bool *req_msg_data = NULL;
	int(*pKVXT_isim_set_SA_model_done)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		bool sa_model_done) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "sa_model_done", "bool", &sa_model_done);
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)",
		local_OOXA_local_KVXT_singleton_object->component, "sa_model_done", "bool", &sa_model_done);
	if (iErrorCode != 0)
	{//loc_A8F4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000A730
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_A760
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1A, 0x225BA04C, &pKVXT_isim_set_SA_model_done);
	}
	else
	{
		pKVXT_isim_set_SA_model_done = KVXT_isim_set_SA_model_done;
	}
	//loc_A794
	if (iErrorCode != 0)
	{//loc_A940→loc_A8F4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000A7A4
	if (pKVXT_isim_set_SA_model_done != 0)
	{//loc_A854
		iErrorCode = pKVXT_isim_set_SA_model_done(local_OOXA_local_KVXT_singleton_object, sa_model_done);
		//loc_A86C→loc_A870
		if (iErrorCode != 0)
		{//loc_A8F4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_A87C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000A7B0
	iErrorCode = OOXA_allocate_buffer(0, req_msg_data);
	if (iErrorCode != 0)
	{//loc_A86C
		if (iErrorCode != 0)
		{//loc_A8F4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_A87C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000A7C8
	*req_msg_data = sa_model_done;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1A, 0x225BA04C,
		req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{//loc_A86C
		if (iErrorCode != 0)
		{//loc_A8F4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_A87C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	if (rep_msg_data == NULL)
	{//loc_A87C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000A844
	OOXA_release_buffer(rep_msg_data);
	//loc_A870
	if (iErrorCode != 0)
	{//loc_A8F4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_A87C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

}

// 函数名：KVXT_set_SA_plate_level_info
int KVXT_set_SA_plate_level_info(const WPxCHUCK_chuck_id_enum chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate plate_id,
	const KVXA_plate_level_info *plate_level_info)
{
	KVXT_unk_3 *req_msg_data = NULL;
	int(*pKVXT_isim_set_SA_plate_level_info)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		MEXAxWAFxPLATE_wafer_level_plate plate_id,
		KVXA_plate_level_info *plate_level_info) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	char *psErrorText = NULL;
	if (plate_level_info != NULL)
	{//loc_8500
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D %8608D", 
			"chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id,
			"plate_level_info", "KVXA:plate_level_info", plate_level_info);
	}
	else
	{
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, __FUNCTION__, __LINE__, 0, psErrorText);
		if (iErrorCode == 0)
		{
			// loc_8500
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D %8608D",
				"chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id,
				"plate_level_info", "KVXA:plate_level_info", plate_level_info);
		}
	}
	// loc_85A4
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %4D %8608D)", 
		"KV", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id,
		"plate_level_info", "KVXA:plate_level_info", plate_level_info);
	if (iErrorCode != 0)
	{//loc_884C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00008660
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_8690
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x10, 0x326E9B91, pKVXT_isim_set_SA_plate_level_info);
	}
	else
	{
		pKVXT_isim_set_SA_plate_level_info = KVXT_isim_set_SA_plate_level_info;
	}
	if (iErrorCode != 0)
	{//loc_8898→loc_884C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:000086D4
	if (pKVXT_isim_set_SA_plate_level_info != NULL)
	{//loc_87A4→loc_87C4→loc_87C8
		iErrorCode = pKVXT_isim_set_SA_plate_level_info(local_OOXA_local_KVXT_singleton_object, chuck_id, plate_id, plate_level_info);
		if (iErrorCode != 0)
		{//loc_884C
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_87D4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:000086E0
	iErrorCode = OOXA_allocate_buffer(0x21A8, &req_msg_data);
	if (iErrorCode != 0)
	{//loc_87C4→loc_87C8
		if (iErrorCode != 0)
		{//loc_884C
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_87D4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:000086FC
	req_msg_data->chuck_id = chuck_id;
	req_msg_data->plate_id = plate_id;
	memcpy(&req_msg_data->plate_level_info, plate_level_info, 0x21A0);
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x10, 0x326E9B91, 
		req_msg_data, 0x21A8, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{//loc_87C4
		if (iErrorCode != 0)
		{//loc_884C
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_87D4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00008784
	if (rep_msg_data == NULL)
	{//loc_87D4
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00008794
	OOXA_release_buffer(rep_msg_data);
	//loc_87C8
	if (iErrorCode != 0)
	{//loc_884C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_87D4
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_ws_zeroing_error_zrxry
int KVXT_set_ws_zeroing_error_zrxry(zrxryvect *ws_zeroing_error_zrxry)
{
	zrxryvect *req_msg_data = NULL;
	int(*pKVXT_isim_set_ws_zeroing_error_zrxry)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		zrxryvect *ws_zeroing_error_zrxry) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	char *psErrorText = NULL;
	if (ws_zeroing_error_zrxry != NULL)
	{//loc_8D34
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%24D", 
			"ws_zeroing_error_zrxry", "zrxryvect", ws_zeroing_error_zrxry);
	}
	else
	{
		// .text:00008CD8
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, __FUNCTION__, __LINE__, 0, psErrorText);
		if (iErrorCode == 0)
		{//loc_8D34
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%24D",
				"ws_zeroing_error_zrxry", "zrxryvect", ws_zeroing_error_zrxry);
		}
	}
	// loc_8D88
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%24D)", 
		"KV", "ws_zeroing_error_zrxry", "zrxryvect", ws_zeroing_error_zrxry);
	if (iErrorCode != 0)
	{//loc_8FC8
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00008DF4
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_8E24
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x12, 0x366D68D1, &pKVXT_isim_set_ws_zeroing_error_zrxry);
	}
	else
	{
		pKVXT_isim_set_ws_zeroing_error_zrxry = KVXT_isim_set_ws_zeroing_error_zrxry;
	}
	//loc_8E58
	if (iErrorCode != 0)
	{//loc_9014→loc_8FC8
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00008E68
	if (pKVXT_isim_set_ws_zeroing_error_zrxry != NULL)
	{//loc_8F28
		iErrorCode = pKVXT_isim_set_ws_zeroing_error_zrxry(local_OOXA_local_KVXT_singleton_object, ws_zeroing_error_zrxry);
		//loc_8F40→loc_8F44
		if (iErrorCode != 0)
		{//loc_8FC8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_8F50
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00008E74
	iErrorCode = OOXA_allocate_buffer(0x18, &req_msg_data);
	if (iErrorCode != 0)
	{//loc_8F40→loc_8F44
		if (iErrorCode != 0)
		{//loc_8FC8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_8F50
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00008E8C
	req_msg_data->z = ws_zeroing_error_zrxry->z;
	req_msg_data->rx = ws_zeroing_error_zrxry->rx;
	req_msg_data->ry = ws_zeroing_error_zrxry->ry;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x12, 0x366D68D1, 
		req_msg_data, 0x18, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode == 0)
	{//loc_8F40→loc_8F44
		if (iErrorCode != 0)
		{//loc_8FC8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_8F50
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:00008F08
	if (rep_msg_data == NULL)
	{//loc_8F50
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:00008F18
	OOXA_release_buffer(rep_msg_data);
	//loc_8F44
	if (iErrorCode != 0)
	{//loc_8FC8
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_8F50
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_XVSA_drift_ref_profile
int KVXT_set_XVSA_drift_ref_profile(const WPxCHUCK_chuck_id_enum chuck_id,
	const bool found_stable_chuck_profile)
{
	KVXT_unk_5 *req_msg_data = NULL;
	int(*pKVXT_isim_set_XVSA_drift_ref_profile)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		bool found_stable_chuck_profile) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D", 
		"KV", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "found_stable_chuck_profile", "bool", &found_stable_chuck_profile);
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %4D)", 
		"KV", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "found_stable_chuck_profile", "bool", &found_stable_chuck_profile);
	if (iErrorCode != 0)
	{//loc_C42C
		THXAtrace("KV", 2, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component);
		return iErrorCode;
	}
	// .text:0000C25C
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_C28C
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x21, 0x7A549A5B, &pKVXT_isim_set_XVSA_drift_ref_profile);
	}
	else
	{
		pKVXT_isim_set_XVSA_drift_ref_profile = KVXT_isim_set_XVSA_drift_ref_profile;
	}
	//loc_C2C0
	if (iErrorCode != 0)
	{//loc_C478→loc_C42C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000C2D0
	if (pKVXT_isim_set_XVSA_drift_ref_profile != NULL)
	{//loc_C388
		iErrorCode = pKVXT_isim_set_XVSA_drift_ref_profile(local_OOXA_local_KVXT_singleton_object, chuck_id, found_stable_chuck_profile);
		//loc_C3A4→loc_C3A8
		if (iErrorCode != 0)
		{//loc_C42C
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_C3B4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000C2DC
	iErrorCode = OOXA_allocate_buffer(8, &rep_msg_data);
	if (iErrorCode != 0)
	{//loc_C3A4→loc_C3A8
		if (iErrorCode != 0)
		{//loc_C42C
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_C3B4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000C2F4
	req_msg_data->chuck_id = chuck_id;
	req_msg_data->found_stable_chuck_profile = found_stable_chuck_profile;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x21, 0x7A549A5B, 
		&req_msg_data, 8, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		//loc_C3A4→loc_C3A8
		if (iErrorCode != 0)
		{//loc_C42C
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_C3B4
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000C368
	if (rep_msg_data == NULL)
	{//loc_C3B4
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000C378
	OOXA_release_buffer(rep_msg_data);
	//loc_C3A8
	if (iErrorCode != 0)
	{//loc_C42C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_C3B4
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_XVSA_scan_refs
int KVXT_set_XVSA_scan_refs(const WPxCHUCK_chuck_id_enum chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate plate_id,
	const MEXAxVSA_XVSA_scan_data *scan_result)
{
	KVXT_unk_7 *req_msg_data = NULL;
	int(*pKVXT_isim_set_XVSA_scan_refs)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		MEXAxWAFxPLATE_wafer_level_plate plate_id,
		MEXAxVSA_XVSA_scan_data *scan_result) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	char *psErrorText = NULL;
	if (scan_result != NULL)
	{
		// clr     [%fp+act_len]
		// ------>loc_B658
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D %48008D", 
			"chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id,
			"scan_result", "MEXAxVSA:XVSA_scan_data", scan_result);
	}
	else
	{
		// .text:0000B5F8
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, __FUNCTION__, __LINE__, NULL, psErrorText);
		if (iErrorCode == 0)
		{//loc_B658
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D %4D %48008D",
				"chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id,
				"scan_result", "MEXAxVSA:XVSA_scan_data", scan_result);
		}
	}
	// loc_B6FC
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D %4D %48008D)", "KV", 
		"chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "chuck_id", "MEXAxWAFxPLATE:wafer_level_plate", &chuck_id, 
		"scan_result", "MEXAxVSA:XVSA_scan_data", scan_result);
	if (iErrorCode != 0)
	{//loc_B9A4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000B7B8
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_B7E8
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1E, 0x72308531, &pKVXT_isim_set_XVSA_scan_refs);
	}
	else
	{
		pKVXT_isim_set_XVSA_scan_refs = KVXT_isim_set_XVSA_scan_refs;
	}
	//汇聚loc_B81C
	if (iErrorCode != 0)
	{//loc_B9F0→loc_B9A4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000B82C
	if (pKVXT_isim_set_XVSA_scan_refs != NULL)
	{
		//loc_B8FC
		iErrorCode = pKVXT_isim_set_XVSA_scan_refs(local_OOXA_local_KVXT_singleton_object, chuck_id, plate_id, scan_result);
		if (iErrorCode != 0)
		{//loc_B9A4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_B92C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000B838
	iErrorCode = OOXA_allocate_buffer(0, &rep_msg_data);
	if (iErrorCode != 0)
	{//loc_B91C→loc_B920
		if (iErrorCode != 0)
		{//loc_B9A4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_B92C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000B854
	req_msg_data->chuck_id = chuck_id;
	req_msg_data->plate_id = plate_id;
	memcpy(&req_msg_data->scan_result, scan_result, 0xBB88);
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1E, 0x72308531, 
		rep_msg_data, 0, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{//loc_B91C→loc_B920
		if (iErrorCode != 0)
		{//loc_B9A4
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_B92C
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000B8DC
	if (rep_msg_data == NULL)
	{//loc_B92C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000B8EC
	OOXA_release_buffer(rep_msg_data);
	//强制执行loc_1920
	if (iErrorCode != 0)
	{//loc_B9A4
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{//loc_B92C
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

// 函数名：KVXT_set_XVSA_thresholds
int KVXT_set_XVSA_thresholds(const MEXAxVSA_XVSA_thresholds *XVSA_warning_levels,
	const MEXAxVSA_XVSA_thresholds *XVSA_error_levels)
{
	KVXT_unk_1 *req_msg_data = NULL;
	int(*pKVXT_isim_set_XVSA_thresholds)(KVXT_local_OOXA_local_KVXT_singleton_object *local_OOXA_local_KVXT_singleton_object,
		MEXAxVSA_XVSA_thresholds *XVSA_warning_levels,
		MEXAxVSA_XVSA_thresholds *XVSA_error_levels) = NULL;
	int iErrorCode = 0;
	char *rep_msg_data = NULL;
	int act_len = 0;
	char *psErrorText = NULL;

	// 这里需要一个分析过程，粘贴指令如下：i0和i1都是地址，为0或者正数
	// cmp     %g0, %i0			i0=g0-i0=0-i0				i0=0,icc.c=0	i0=1,icc.c=1
	// subc    %g0, -1, %g2		g2=g0-(-1)-icc.c=1-icc.c	i0=0,g2=1		i0=1,g2=0
	// cmp     %g0, %i1			i1=g0-i1=0-i1				i1=0,icc.c=0	i1=1,icc.c=1
	// subc    %g0, -1, %g1		g1=g0-(-1)-icc.c=1-icc.c	i1=0,g1=1		i1=1,g1=0
	// orcc    %g2, %g1, %g0	g0=g2||g1
	// be      %icc, loc_BAB8	be,icc.z=0		g1=0&&g2=0,i0!=0&&i1!=0
	if (XVSA_warning_levels != NULL && XVSA_error_levels != NULL)
	{
		// clr     [%fp+act_len]
		// ------>loc_BAB8
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%40D %40D", "XVSA_warning_levels", "MEXAxVSA:XVSA_thresholds",
			XVSA_warning_levels, "XVSA_error_levels", "MEXAxVSA:XVSA_thresholds", XVSA_error_levels);
	}
	else
	{
		// .text:0000BA58
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", __FUNCTION__);
		ERXAlogExceptionSingleLink(iErrorCode, 0, __FILE__, __LINE__, NULL, psErrorText);
		if (iErrorCode == 0)
		{
			// loc_BAB8
			THXAdataRequest("KV", 4, __FUNCTION__, 0, "%40D %40D", "XVSA_warning_levels", "MEXAxVSA:XVSA_thresholds",
				XVSA_warning_levels, "XVSA_error_levels", "MEXAxVSA:XVSA_thresholds", XVSA_error_levels);
		}
	}
	// loc_BB24
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%40D %40D)", local_OOXA_local_KVXT_singleton_object->component,
		"XVSA_warning_levels", "MEXAxVSA:XVSA_thresholds", XVSA_warning_levels, "XVSA_error_levels", "MEXAxVSA:XVSA_thresholds", XVSA_error_levels);
	if (iErrorCode != 0)
	{
		// loc_BDB8
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000BBA8
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{//loc_BBD8
		iErrorCode = OOXA_find_method(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1F, 0x53944896, &pKVXT_isim_set_XVSA_thresholds);
	}
	else
	{
		pKVXT_isim_set_XVSA_thresholds = KVXT_isim_set_XVSA_thresholds;
	}
	//汇聚loc_BC0C
	if (iErrorCode != 0)
	{//loc_BBD8
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	// .text:0000BC1C
	if (*pKVXT_isim_set_XVSA_thresholds != NULL)
	{//loc_BD14
		iErrorCode = (*pKVXT_isim_set_XVSA_thresholds)(local_OOXA_local_KVXT_singleton_object, XVSA_warning_levels, XVSA_error_levels);
		if (iErrorCode != 0)//loc_BD30  loc_BD34
		{//loc_BDB8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_BD40
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000BC28
	iErrorCode = OOXA_allocate_buffer(0x50, &req_msg_data);
	if (iErrorCode != 0)
	{
		// st      %o0, [%fp+iErrorCode]
		// ------>loc_BD30
		if (iErrorCode != 0)
		{//loc_BDB8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_BD40
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000BC40
	req_msg_data->XVSA_warning_levels.Ry_uncorrected = XVSA_warning_levels->Ry_uncorrected;
	req_msg_data->XVSA_warning_levels.Ry_corrected = XVSA_warning_levels->Ry_corrected;
	req_msg_data->XVSA_warning_levels.LS_Ry = XVSA_warning_levels->LS_Ry;
	req_msg_data->XVSA_warning_levels.deformation = XVSA_warning_levels->deformation;
	req_msg_data->XVSA_warning_levels.deformation_value = XVSA_warning_levels->deformation_value;
	req_msg_data->XVSA_error_levels.Ry_uncorrected = XVSA_error_levels->Ry_uncorrected;
	req_msg_data->XVSA_error_levels.Ry_corrected = XVSA_error_levels->Ry_corrected;
	req_msg_data->XVSA_error_levels.LS_Ry = XVSA_error_levels->LS_Ry;
	req_msg_data->XVSA_error_levels.deformation = XVSA_error_levels->deformation;
	req_msg_data->XVSA_error_levels.deformation_value = XVSA_error_levels->deformation_value;
	iErrorCode = OOXA_send_receive(local_OOXA_local_KVXT_singleton_object, "KVXT:", 0x1F, 0x53944896,
		req_msg_data, 0x50, &rep_msg_data, &act_len, 0x41, 0x96);
	if (iErrorCode != 0)
	{
		// loc_BD30
		if (iErrorCode != 0)//loc_BD30  loc_BD34
		{//loc_BDB8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_BD40
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
	// .text:0000BCF4
	if (rep_msg_data == NULL)
	{
		// loc_BD40
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{
		// .text:0000BD04
		OOXA_release_buffer(rep_msg_data);
		// loc_BD34
		if (iErrorCode != 0)//loc_BD30  loc_BD34
		{//loc_BDB8
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{//loc_BD40
			THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_OOXA_local_KVXT_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}
}
