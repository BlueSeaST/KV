/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 :
* 所属组件 : KV
* 模块名称 : KVXTxMC
* 文件名称 : KVXTxMC.c
* 概要描述 :
*
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#include <KVXTxMC.h>





/*----------------------- 外部变量声明 -----------------------*/




/*----------------------- 外部函数声明 -----------------------*/





/*----------------------- 全局变量声明 -----------------------*/

KVXTxMC_singleton_object *local_KVXTxMC_singleton_object;







/*----------------------- 静态函数声明 -----------------------*/







/*----------------------- 函数实现 -----------------------*/
// 不用翻译的模块内部函数的空实现
int KVXTxMC_isim_set_iVSA_plate_PDGC(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id, MEXAxWAFxPLATE_wafer_level_plate plate_id, KVXTxMC_iVSA_plate_PDGC * plate_PDGC_p)
{
	return 0;
}

int KVXTxMC_isim_get_iVSA_plate_PDGC(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id, MEXAxWAFxPLATE_wafer_level_plate plate_id, KVXTxMC_iVSA_plate_PDGC * plate_PDGC_p)
{
	return 0;
}


int KVXTxMC_isim_set_ag_ls_chuck_resist_offsets(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	int chuck_ix, KVXTxMC_AG_LS_resist_offsets_mcs * ag_ls_resist_offsets)
{
	return 0;
}

int KVXTxMC_isim_set_LS_drift_correction(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_drift_correction * LS_drift_corr_p)
{
	return 0;
}

int KVXTxMC_isim_get_LS_drift_correction(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_drift_correction * LS_drift_corr_p)
{
	return 0;
}

int KVXTxMC_isim_set_LS_stroke_tilt(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_stroke_tilt * LS_stroke_tilt_p)
{
	return 0;
}

int KVXTxMC_isim_get_ag_ls_chuck_resist_offsets(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	int chuck_ix, KVXTxMC_AG_LS_resist_offsets_mcs *ag_ls_resist_offsets)
{
	return 0;
}

int KVXTxMC_isim_set_WM_scaninout_GLC_candidate_area_extension_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params * extensions_p)
{
	return 0;
}

int KVXTxMC_isim_get_fsm_ero_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	bool *ero_correction_p, double *ero_dist_edge_p)
{
	return 0;
}

int KVXTxMC_isim_set_WM_scaninout_plane_area_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC_WM_scaninout_minimum_scan_plane_area_params * scaninout_plane_area_params_p)
{
	return 0;
}

int KVXTxMC_isim_set_SUSD_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC__set_SUSD_params_SUSD_correction_params * SUSD_correction_params)
{
	return 0;
}

int KVXTxMC_isim_get_LS_stroke_tilt(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_stroke_tilt * LS_stroke_tilt_p)
{
	return 0;
}

int KVXTxMC_isim_save(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, KVXTxMC__save_id *id)
{
	return 0;
}

int KVXTxMC_isim_get_SUSD_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC__get_SUSD_params_SUSD_correction_params *SUSD_correction_params)
{
	return 0;
}

int KVXTxMC_isim_get_WM_scaninout_GLC_candidate_area_extension_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params *extensions_p)
{
	return 0;
}

int KVXTxMC_isim_get_AGILE_ref_meas_mcs(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC_agile_reference_measurement_mcs * agile_ref_meas_params)
{
	return 0;
}

int KVXTxMC_isim_get_WM_scaninout_plane_area_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC_WM_scaninout_minimum_scan_plane_area_params *scaninout_plane_area_params_p)
{
	return 0;
}

int KVXTxMC_isim_get_high_precision_XVSA_scan_mcs(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC_high_precision_XVSA_scan * high_precision_XVSA_scan_p)
{
	return 0;
}

// 需要翻译的函数的实现
int KVXTxMC_set_iVSA_plate_PDGC(WPxCHUCK_chuck_id_enum chuck_id, MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXTxMC_iVSA_plate_PDGC *plate_PDGC_p)
{
	KVXTxMC_unk_1 * req_msg_data = NULL;
	int(*pKVXTxMC_isim_set_iVSA_plate_PDGC)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		MEXAxWAFxPLATE_wafer_level_plate plate_id,
		KVXTxMC_iVSA_plate_PDGC * plate_PDGC_p) = NULL;
	int iErrorCode = 0;  //
	char *rep_msg_data = NULL;
	int act_len = 0;
	char * psErrorText = NULL;

	THXAtraceTP("KV", 0x4B56F6A0);

	if (plate_PDGC_p == NULL)  //plate_PDGC_p != NULL -> loc_4AF4
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", "KVXTxMC_set_iVSA_plate_PDGC");
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTxMCmet.c", 0x682, 0, psErrorText);
	}

	//loc_4AF4
	if (iErrorCode == 0) //iErrorCode != 0 -> loc_4BA4
	{
		THXAdataRequest("KV", 4, "KVXTxMC_set_iVSA_plate_PDGC", 0, "%4D %4D %216D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id",
			"MEXAxWAFxPLATE:wafer_level_plate", &plate_id, "plate_PDGC_p", "KVXTxMC:iVSA_plate_PDGC", plate_PDGC_p);
	}

	// loc_4BA4
	THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "> %s (%4D %4D %216D)", local_KVXTxMC_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum",
		&chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id, "plate_PDGC_p", "KVXTxMC:iVSA_plate_PDGC", plate_PDGC_p);

	if (iErrorCode != 0)
	{
		//loc_4E40 
		THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_4E84
		THXAtraceTP("KV", 0x4B56F6A1);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_4C90
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xC, 0xADEBC27, (int(**))&pKVXTxMC_isim_set_iVSA_plate_PDGC);
	}
	else
	{
		pKVXTxMC_isim_set_iVSA_plate_PDGC = KVXTxMC_isim_set_iVSA_plate_PDGC;
	}

	//loc_4CC4
	if (iErrorCode != 0)
	{
		//loc_4EA4 pKVXTxMC_isim_set_iVSA_plate_PDGC = g1

		//loc_4E40 
		THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_4E84
		THXAtraceTP("KV", 0x4B56F6A1);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_set_iVSA_plate_PDGC != NULL)
	{
		//loc_4D9C
		iErrorCode = pKVXTxMC_isim_set_iVSA_plate_PDGC(local_KVXTxMC_singleton_object, chuck_id, plate_id, plate_PDGC_p);

		//loc_4DBC iErrorCode= o5

		//loc_4DC0
		if (iErrorCode == 0)
		{
			//loc_4DCC
			THXAdataRequest("KV", 5, "KVXTxMC_set_iVSA_plate_PDGC", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_4E40
			THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_4E84
		THXAtraceTP("KV", 0x4B56F6A1);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0xE0, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_4DBC iErrorCode= o5

		//loc_4DC0
		if (iErrorCode == 0)
		{
			//loc_4DCC
			THXAdataRequest("KV", 5, "KVXTxMC_set_iVSA_plate_PDGC", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_4E40
			THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_4E84
		THXAtraceTP("KV", 0x4B56F6A1);
		return iErrorCode;
	}

	req_msg_data->chuck_id = chuck_id;
	req_msg_data->plate_id = plate_id;
	memcpy(req_msg_data->plate_PDGC_p, plate_PDGC_p, 0xD8);

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xC, 0xADEBC27, req_msg_data, 0xE0, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_4DBC iErrorCode= o5

		//loc_4DC0
		if (iErrorCode == 0)
		{
			//g
			THXAdataRequest("KV", 5, "KVXTxMC_set_iVSA_plate_PDGC", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_4E40
			THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_4E84
		THXAtraceTP("KV", 0x4B56F6A1);
		return iErrorCode;
	}

	if (rep_msg_data == NULL)
	{
		//loc_4DCC
		THXAdataRequest("KV", 5, "KVXTxMC_set_iVSA_plate_PDGC", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_4E84
		THXAtraceTP("KV", 0x4B56F6A1);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);
	//loc_4DC0
	if (iErrorCode == 0)
	{
		//LOC_4DCC
		THXAdataRequest("KV", 5, "KVXTxMC_set_iVSA_plate_PDGC", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	else
	{
		//loc_4E40
		THXAtrace("KV", 2, "KVXTxMC_set_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	//loc_4E84
	THXAtraceTP("KV", 0x4B56F6A1);
	return iErrorCode;

}

int KVXTxMC_get_iVSA_plate_PDGC(WPxCHUCK_chuck_id_enum chuck_id, MEXAxWAFxPLATE_wafer_level_plate plate_id,
	KVXTxMC_iVSA_plate_PDGC * plate_PDGC_p)
{

	KVXTxMC_unk_2 * req_msg_data = NULL;   //var_4
	int(*pKVXTxMC_isim_get_iVSA_plate_PDGC)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, WPxCHUCK_chuck_id_enum chuck_id, MEXAxWAFxPLATE_wafer_level_plate plate_id, void * s1) = NULL;  //var_8
	int iErrorCode = 0;   //var_C
	bool isOk = FALSE; //  var_18
	KVXTxMC_iVSA_plate_PDGC * rep_msg_data = NULL;    //s2
	int act_len = 0;    //var_14

	THXAtraceTP("KV", 0x4B56F690);

	if (!(iErrorCode != 0 || plate_PDGC_p != NULL))//var_C != 0 || s1 != 0 -> loc_4688  
	{
		iErrorCode = OOXA_allocate_parameter(0xD8, &plate_PDGC_p, &isOk);
	}

	//loc_4688
	if (iErrorCode == 0)   //var_C != 0 -> loc_46F4
	{
		THXAdataRequest("KV", 4, "KVXTxMC_get_iVSA_plate_PDGC", 0, "%4D %4D", "chuck_id",
			"WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);
	}

	//loc_46F4
	THXAtrace("KV", 2, "KVXTxMC_get_iVSA_plate_PDGC", "> %s (%4D %4D)", local_KVXTxMC_singleton_object->component, "chuck_id",
		"WPxCHUCK:chuck_id_enum", &chuck_id, "plate_id", "MEXAxWAFxPLATE:wafer_level_plate", &plate_id);

	if (iErrorCode != 0)
	{
		//loc_49AC iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_49F0
		if (isOk != FALSE)
		{
			PLXAmem_free(&plate_PDGC_p);
		}

		//loc_4A08
		THXAtraceTP("KV", 0x4B56F691);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_47BC
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xB, 0x4C713156, (void**)&pKVXTxMC_isim_get_iVSA_plate_PDGC);
	}
	else
	{
		pKVXTxMC_isim_get_iVSA_plate_PDGC = KVXTxMC_isim_get_iVSA_plate_PDGC;
	}

	//loc_47F0
	if (iErrorCode != 0)
	{
		//loc_4A28

		//loc_49AC iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_49F0
		if (isOk != FALSE)
		{
			PLXAmem_free(&plate_PDGC_p);
		}

		//loc_4A08
		THXAtraceTP("KV", 0x4B56F691);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_get_iVSA_plate_PDGC != NULL)
	{
		//loc_48C8
		iErrorCode = pKVXTxMC_isim_get_iVSA_plate_PDGC(local_KVXTxMC_singleton_object, chuck_id, plate_id, plate_PDGC_p);

		//loc_48E8 iErrorCode = o5

		//loc_48EC
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_iVSA_plate_PDGC", 0, "%216D %d", "plate_PDGC_p",
				"KVXTxMC:iVSA_plate_PDGC", plate_PDGC_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_iVSA_plate_PDGC", "< %s (%216D)=%R", local_KVXTxMC_singleton_object->component,
				"plate_PDGC_p", "KVXTxMC:iVSA_plate_PDGC", plate_PDGC_p, iErrorCode);
		}
		else
		{
			//loc_49AC
			THXAtrace("KV", 2, "KVXTxMC_get_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_49F0
		if (isOk != FALSE)
		{
			PLXAmem_free(&plate_PDGC_p);
		}

		//loc_4A08
		THXAtraceTP("KV", 0x4B56F691);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(8, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_48E8 iErrorCode = o5

		//loc_48EC
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_iVSA_plate_PDGC", 0, "%216D %d", "plate_PDGC_p",
				"KVXTxMC:iVSA_plate_PDGC", plate_PDGC_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_iVSA_plate_PDGC", "< %s (%216D)=%R", local_KVXTxMC_singleton_object->component,
				"plate_PDGC_p", "KVXTxMC:iVSA_plate_PDGC", plate_PDGC_p, iErrorCode);
		}
		else
		{
			//loc_49AC
			THXAtrace("KV", 2, "KVXTxMC_get_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_49F0
		if (isOk != FALSE)
		{
			PLXAmem_free(&plate_PDGC_p);
		}

		//loc_4A08
		THXAtraceTP("KV", 0x4B56F691);
		return iErrorCode;
	}

	req_msg_data->chuck_id = chuck_id;
	req_msg_data->chuck_id = plate_id;

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xB, 0x4C713156, req_msg_data, 8, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_48E8 iErrorCode = o5

		//loc_48EC
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_iVSA_plate_PDGC", 0, "%216D %d", "plate_PDGC_p",
				"KVXTxMC:iVSA_plate_PDGC", plate_PDGC_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_iVSA_plate_PDGC", "< %s (%216D)=%R", local_KVXTxMC_singleton_object->component,
				"plate_PDGC_p", "KVXTxMC:iVSA_plate_PDGC", plate_PDGC_p, iErrorCode);
		}
		else
		{
			//loc_49AC
			THXAtrace("KV", 2, "KVXTxMC_get_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_49F0
		if (isOk != FALSE)
		{
			PLXAmem_free(&plate_PDGC_p);
		}

		//loc_4A08
		THXAtraceTP("KV", 0x4B56F691);
		return iErrorCode;
	}

	memcpy(rep_msg_data, plate_PDGC_p, 0xD8);
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}

	//loc_48EC
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, "KVXTxMC_get_iVSA_plate_PDGC", 0, "%216D %d", "plate_PDGC_p",
			"KVXTxMC:iVSA_plate_PDGC", plate_PDGC_p, &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_get_iVSA_plate_PDGC", "< %s (%216D)=%R", local_KVXTxMC_singleton_object->component,
			"plate_PDGC_p", "KVXTxMC:iVSA_plate_PDGC", plate_PDGC_p, iErrorCode);
	}
	else
	{
		//loc_49AC
		THXAtrace("KV", 2, "KVXTxMC_get_iVSA_plate_PDGC", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	//loc_49F0
	if (isOk != FALSE)
	{
		PLXAmem_free(&plate_PDGC_p);
	}

	//loc_4A08
	THXAtraceTP("KV", 0x4B56F691);
	return iErrorCode;
}

int KVXTxMC_set_ag_ls_chuck_resist_offsets(int chuck_ix, KVXTxMC_AG_LS_resist_offsets_mcs *ag_ls_resist_offsets)
{
	int iErrorCode = 0; // var_C
	KVXTxMC_unk_3 * req_msg_data = NULL; //  var_4
	int(*pKVXTxMC_isim_set_ag_ls_chuck_resist_offsets)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, int chuck_ix,
		KVXTxMC_AG_LS_resist_offsets_mcs * ag_ls_resist_offsets) = NULL; // var_8
	char * rep_msg_data = NULL; // var_10
	int act_len = 0;   // var_14
	char * psErrorText = NULL;

	THXAtraceTP("KV", 0x4B56F6E0);

	if (ag_ls_resist_offsets == NULL)   // ag_ls_resist_offsets != 0 -> loc_3B58  iErrorCode = g1
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", "KVXTxMC_set_ag_ls_chuck_resist_offsets");
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTxMCmet.c", 0x444, 0, psErrorText);
	}

	//loc_3B58
	if (iErrorCode == 0)  //iErrorCode != 0 ->loc_3BE0
	{
		THXAdataRequest("KV", 4, "KVXTxMC_set_ag_ls_chuck_resist_offsets", 0, "%4D %72D", "chuck_ix", "int",
			&chuck_ix, "ag_ls_resist_offsets", "KVXTxMC:AG_LS_resist_offsets_mcs", ag_ls_resist_offsets);
	}

	//loc_3BE0
	THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "> %s (%4D %72D)", local_KVXTxMC_singleton_object->component,
		"chuck_ix", "int", &chuck_ix, "ag_ls_resist_offsets", "KVXTxMC:AG_LS_resist_offsets_mcs", ag_ls_resist_offsets);

	if (iErrorCode != 0)
	{
		//loc_3E48   iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_3E8C
		THXAtraceTP("KV", 0x4B56F6E1);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0) // loc_3CA4
	{
		//loc_3CA4
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 8, 0x31BCF9C2, (void**)&pKVXTxMC_isim_set_ag_ls_chuck_resist_offsets);
	}
	else
	{
		pKVXTxMC_isim_set_ag_ls_chuck_resist_offsets = KVXTxMC_isim_set_ag_ls_chuck_resist_offsets;
	}

	//loc_3CD8
	if (iErrorCode != 0)
	{
		//loc_3EAC  pKVXTxMC_isim_set_ag_ls_chuck_resist_offsets = g1

		//loc_3E48   iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_3E8C
		THXAtraceTP("KV", 0x4B56F6E1);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_set_ag_ls_chuck_resist_offsets != NULL)
	{
		//loc_3DA8
		iErrorCode = pKVXTxMC_isim_set_ag_ls_chuck_resist_offsets(local_KVXTxMC_singleton_object, chuck_ix, ag_ls_resist_offsets);

		//loc_3DC4
		//iErrorCode = o5

		//loc_3DC8
		if (iErrorCode == 0)
		{
			//loc_3E48
			THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else {
			//loc_3DD4
			THXAdataRequest("KV", 5, "KVXTxMC_set_ag_ls_chuck_resist_offsets", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_3E8C
		THXAtraceTP("KV", 0x4B56F6E1);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0x50, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_3DC4
		//iErrorCode = o5

		//loc_3DC8
		if (iErrorCode == 0)
		{
			//loc_3E48
			THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else {
			//loc_3DD4
			THXAdataRequest("KV", 5, "KVXTxMC_set_ag_ls_chuck_resist_offsets", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_3E8C
		THXAtraceTP("KV", 0x4B56F6E1);
		return iErrorCode;
	}

	req_msg_data->a = chuck_ix;
	memcpy(req_msg_data->ag_ls_resist_offsets, ag_ls_resist_offsets, 0x48);

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 8, 0x31BCF9C2, req_msg_data, 0x50, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_3DC4
		//iErrorCode = o5

		//loc_3DC8
		if (iErrorCode == 0)
		{
			//loc_3E48
			THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else {
			//loc_3DD4
			THXAdataRequest("KV", 5, "KVXTxMC_set_ag_ls_chuck_resist_offsets", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_3E8C
		THXAtraceTP("KV", 0x4B56F6E1);
		return iErrorCode;
	}

	if (rep_msg_data == NULL)
	{
		//loc_3DD4
		THXAdataRequest("KV", 5, "KVXTxMC_set_ag_ls_chuck_resist_offsets", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_3E8C
		THXAtraceTP("KV", 0x4B56F6E1);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);

	//loc_3DC8
	if (iErrorCode == 0)
	{
		//loc_3E48
		THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	else {
		//loc_3DD4
		THXAdataRequest("KV", 5, "KVXTxMC_set_ag_ls_chuck_resist_offsets", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	//loc_3E8C
	THXAtraceTP("KV", 0x4B56F6E1);
	return iErrorCode;
}

int KVXTxMC_set_LS_drift_correction(WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_drift_correction *LS_drift_corr_p)
{
	KVXTxMC_unk_4 * req_msg_data = NULL; //var_4
	int(*pKVXTxMC_isim_set_LS_drift_correction)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, WPxCHUCK_chuck_id_enum chuck_id,
		KVXTxMC_LS_drift_correction * LS_drift_corr_p) = NULL;  //var_8
	int iErrorCode = 0;  //var_C 
	char * rep_msg_data = NULL; // var_10
	int act_len = 0;  //var_14
	char *psErrorText = NULL;

	THXAtraceTP("KV", 0x4B56F6C0);

	if (LS_drift_corr_p == NULL)  // LS_drift_corr_p != NULL -> loc_569C  iErrorCode = g1
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", "KVXTxMC_set_LS_drift_correction");
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTxMCmet.c", 0x830, 0, psErrorText);
	}

	//loc_569C
	if (iErrorCode == 0) //iErrorCode != 0 -> loc_5724
	{
		THXAdataRequest("KV", 4, "KVXTxMC_set_LS_drift_correction", 0, "%4D %96D", "chuck_id", "WPxCHUCK:chuck_id_enum",
			&chuck_id, "LS_drift_corr_p", "KVXTxMC:LS_drift_correction", LS_drift_corr_p);
	}

	//loc_5724
	THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "> %s (%4D %96D)", local_KVXTxMC_singleton_object->component, "chuck_id",
		"WPxCHUCK:chuck_id_enum", &chuck_id, "LS_drift_corr_p", "KVXTxMC:LS_drift_correction", LS_drift_corr_p);

	if (iErrorCode != 0)
	{
		//loc_598C
		THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_59D0
		THXAtraceTP("KV", 0x4B56F6C1);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_57E8
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xF, 0x7DF79248, (void**)&pKVXTxMC_isim_set_LS_drift_correction);
	}
	else
	{
		pKVXTxMC_isim_set_LS_drift_correction = KVXTxMC_isim_set_LS_drift_correction;
	}

	//loc_581C
	if (iErrorCode != 0)
	{
		//loc_59F0 iErrorCode = o5
		//loc_598C
		THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_59D0
		THXAtraceTP("KV", 0x4B56F6C1);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_set_LS_drift_correction != NULL)
	{
		//loc_58EC
		iErrorCode = pKVXTxMC_isim_set_LS_drift_correction(local_KVXTxMC_singleton_object, chuck_id, LS_drift_corr_p);

		//loc_5908 iErrorCode = o5

		//loc_590C
		if (iErrorCode == 0)
		{
			//loc_5918
			THXAdataRequest("KV", 5, "KVXTxMC_set_LS_drift_correction", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_598C
			THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_59D0
		THXAtraceTP("KV", 0x4B56F6C1);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0x68, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_5908 iErrorCode = o5

		//loc_590C
		if (iErrorCode == 0)
		{
			//loc_5918
			THXAdataRequest("KV", 5, "KVXTxMC_set_LS_drift_correction", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_598C
			THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_59D0
		THXAtraceTP("KV", 0x4B56F6C1);
		return iErrorCode;
	}

	req_msg_data->chuck_id = chuck_id;
	memcpy(req_msg_data->LS_drift_corr_p, LS_drift_corr_p, 0x60);

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xF, 0x7DF79248, req_msg_data, 0x68, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_5908 iErrorCode = o5

		//loc_590C
		if (iErrorCode == 0)
		{
			//loc_5918
			THXAdataRequest("KV", 5, "KVXTxMC_set_LS_drift_correction", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_598C
			THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_59D0
		THXAtraceTP("KV", 0x4B56F6C1);
		return iErrorCode;
	}

	if (rep_msg_data == NULL)
	{
		//loc_5918
		THXAdataRequest("KV", 5, "KVXTxMC_set_LS_drift_correction", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_59D0
		THXAtraceTP("KV", 0x4B56F6C1);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);

	//loc_590C
	if (iErrorCode == 0)
	{
		//loc_5918
		THXAdataRequest("KV", 5, "KVXTxMC_set_LS_drift_correction", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	else
	{
		//loc_598C
		THXAtrace("KV", 2, "KVXTxMC_set_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	//loc_59D0
	THXAtraceTP("KV", 0x4B56F6C1);
	return iErrorCode;
}

int KVXTxMC_get_LS_drift_correction(WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_drift_correction * LS_drift_corr_p)
{

	WPxCHUCK_chuck_id_enum * req_msg_data = NULL;  //var_4
	int(*pKVXTxMC_isim_get_LS_drift_correction)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, WPxCHUCK_chuck_id_enum chuck_id,
		KVXTxMC_LS_drift_correction * LS_drift_corr_p) = NULL;  //var_8
	int iErrorCode = 0;  //var_C
	KVXTxMC_LS_drift_correction * rep_msg_data = NULL;  //s2
	int act_len = 0;  //var_14
	bool isOk = FALSE;  // var_18

	THXAtraceTP("KV", 0x4B56F6B0);

	if (!(iErrorCode != 0 || LS_drift_corr_p != NULL))
	{
		iErrorCode = OOXA_allocate_parameter(0x60, &LS_drift_corr_p, &isOk);
	}

	//loc_5278
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 4, "KVXTxMC_get_LS_drift_correction", 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	}

	//loc_52DC
	THXAtrace("KV", 2, "KVXTxMC_get_LS_drift_correction", "> %s (%4D)", local_KVXTxMC_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);

	if (iErrorCode != 0)
	{
		//loc_5560  
		THXAtrace("KV", 2, "KVXTxMC_get_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_55A4
		if (isOk != FALSE)
		{
			PLXAmem_free(&LS_drift_corr_p);
		}

		//loc_55BC
		THXAtraceTP("KV", 0x4B56F6B1);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_537C
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xE, 0x292CE017, (void**)&pKVXTxMC_isim_get_LS_drift_correction);
	}
	else
	{
		pKVXTxMC_isim_get_LS_drift_correction = KVXTxMC_isim_get_LS_drift_correction;
	}

	if (iErrorCode != 0)
	{
		//loc_55DC var_8 = g1
		//loc_5560  
		THXAtrace("KV", 2, "KVXTxMC_get_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_55A4
		if (isOk != FALSE)
		{
			PLXAmem_free(&LS_drift_corr_p);
		}

		//loc_55BC
		THXAtraceTP("KV", 0x4B56F6B1);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_get_LS_drift_correction != NULL)
	{
		//loc_5480
		iErrorCode = pKVXTxMC_isim_get_LS_drift_correction(local_KVXTxMC_singleton_object, chuck_id, LS_drift_corr_p);

		//loc_549C iErrorCode = o5

		//loc_54A0
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_LS_drift_correction", 0, "%96D %d", "LS_drift_corr_p", "KVXTxMC:LS_drift_correction", LS_drift_corr_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_LS_drift_correction", "< %s (%96D)=%R", local_KVXTxMC_singleton_object->component, LS_drift_corr_p, iErrorCode);
		}
		else
		{
			//loc_5560  
			THXAtrace("KV", 2, "KVXTxMC_get_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_55A4
		if (isOk != FALSE)
		{
			PLXAmem_free(&LS_drift_corr_p);
		}

		//loc_55BC
		THXAtraceTP("KV", 0x4B56F6B1);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_549C iErrorCode = o5

		//loc_54A0
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_LS_drift_correction", 0, "%96D %d", "LS_drift_corr_p", "KVXTxMC:LS_drift_correction", LS_drift_corr_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_LS_drift_correction", "< %s (%96D)=%R", local_KVXTxMC_singleton_object->component, LS_drift_corr_p, iErrorCode);
		}
		else
		{
			//loc_5560  
			THXAtrace("KV", 2, "KVXTxMC_get_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_55A4
		if (isOk != FALSE)
		{
			PLXAmem_free(&LS_drift_corr_p);
		}

		//loc_55BC
		THXAtraceTP("KV", 0x4B56F6B1);
		return iErrorCode;
	}

	*req_msg_data = chuck_id;
	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xE, 0x292CE017, req_msg_data, 4, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_549C iErrorCode = o5

		//loc_54A0
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_LS_drift_correction", 0, "%96D %d", "LS_drift_corr_p", "KVXTxMC:LS_drift_correction", LS_drift_corr_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_LS_drift_correction", "< %s (%96D)=%R", local_KVXTxMC_singleton_object->component, LS_drift_corr_p, iErrorCode);
		}
		else
		{
			//loc_5560  
			THXAtrace("KV", 2, "KVXTxMC_get_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_55A4
		if (isOk != FALSE)
		{
			PLXAmem_free(&LS_drift_corr_p);
		}

		//loc_55BC
		THXAtraceTP("KV", 0x4B56F6B1);
		return iErrorCode;
	}

	memcpy(LS_drift_corr_p, rep_msg_data, 0x60);

	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}


	//loc_54A0
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, "KVXTxMC_get_LS_drift_correction", 0, "%96D %d", "LS_drift_corr_p", "KVXTxMC:LS_drift_correction", LS_drift_corr_p, &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_get_LS_drift_correction", "< %s (%96D)=%R", local_KVXTxMC_singleton_object->component, LS_drift_corr_p, iErrorCode);
	}
	else
	{
		//loc_5560  
		THXAtrace("KV", 2, "KVXTxMC_get_LS_drift_correction", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	//loc_55A4
	if (isOk != FALSE)
	{
		PLXAmem_free(&LS_drift_corr_p);
	}

	//loc_55BC
	THXAtraceTP("KV", 0x4B56F6B1);
	return iErrorCode;
}

int KVXTxMC_set_LS_stroke_tilt(WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_stroke_tilt *LS_stroke_tilt_p)
{
	KVXTxMC_unk_5 * req_msg_data = NULL;  //var_4
	int(*pKVXTxMC_isim_set_LS_stroke_tilt)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_stroke_tilt * LS_stroke_tilt_p) = NULL;   //var_8
	int iErrorCode = 0;  // var_C
	char * rep_msg_data = NULL; // var_10
	int act_len;  //var_14
	char * psErrorText = NULL;

	if (LS_stroke_tilt_p == NULL)
	{
		//loc_5E50
		THXAdataRequest("KV", 4, "KVXTxMC_set_LS_stroke_tilt", 0, "%4D %8D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "LS_stroke_tilt_p",
			"KVXTxMC:LS_stroke_tilt", LS_stroke_tilt_p);
	}
	else
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", "KVXTxMC_set_LS_stroke_tilt");
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTxMCmet.c", 0x951, 0, psErrorText);

		if (iErrorCode == 0)
		{
			//loc_5E50
			THXAdataRequest("KV", 4, "KVXTxMC_set_LS_stroke_tilt", 0, "%4D %8D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id, "LS_stroke_tilt_p",
				"KVXTxMC:LS_stroke_tilt", LS_stroke_tilt_p);
		}
	}

	//loc_5ECC
	THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "> %s (%4D %8D)", local_KVXTxMC_singleton_object->component, "chuck_id",
		"WPxCHUCK:chuck_id_enum", &chuck_id, "LS_stroke_tilt_p", "KVXTxMC:LS_stroke_tilt", LS_stroke_tilt_p);

	if (iErrorCode != 0)
	{
		//loc_6130 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_5F90
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0x11, 0x2B9805F9, (void**)&pKVXTxMC_isim_set_LS_stroke_tilt);
	}
	else
	{
		pKVXTxMC_isim_set_LS_stroke_tilt = KVXTxMC_isim_set_LS_stroke_tilt;
	}

	//loc_5FC4
	if (iErrorCode != 0)
	{
		//loc_617C 

		//loc_6130 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_set_LS_stroke_tilt != NULL)
	{
		//loc_608C
		iErrorCode = pKVXTxMC_isim_set_LS_stroke_tilt(local_KVXTxMC_singleton_object, chuck_id, LS_stroke_tilt_p);

		//loc_60A8 iErrorCode = o5

		//loc_60AC

		if (iErrorCode == 0)
		{
			//loc_60B8
			THXAdataRequest("KV", 5, "KVXTxMC_set_LS_stroke_tilt", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_6130
			THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	iErrorCode = OOXA_allocate_buffer(0x10, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_60A8 iErrorCode = o5

		//loc_60AC

		if (iErrorCode == 0)
		{
			//loc_60B8
			THXAdataRequest("KV", 5, "KVXTxMC_set_LS_stroke_tilt", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_6130
			THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	req_msg_data->chuck_id = chuck_id;
	req_msg_data->LS_stroke_tilt_p = LS_stroke_tilt_p;

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0x11, 0x2B9805F9, req_msg_data, 0x10, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_60A8 iErrorCode = o5

		//loc_60AC

		if (iErrorCode == 0)
		{
			//loc_60B8
			THXAdataRequest("KV", 5, "KVXTxMC_set_LS_stroke_tilt", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
		else
		{
			//loc_6130
			THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
			return iErrorCode;
		}
	}

	if (rep_msg_data == NULL)
	{
		//loc_60B8
		THXAdataRequest("KV", 5, "KVXTxMC_set_LS_stroke_tilt", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);

	//loc_60AC

	if (iErrorCode == 0)
	{
		//loc_60B8
		THXAdataRequest("KV", 5, "KVXTxMC_set_LS_stroke_tilt", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
	else
	{
		//loc_6130
		THXAtrace("KV", 2, "KVXTxMC_set_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		return iErrorCode;
	}
}

int KVXTxMC_get_ag_ls_chuck_resist_offsets(int chuck_ix, KVXTxMC_AG_LS_resist_offsets_mcs *ag_ls_resist_offsets)
{
	//int chuck_ix = i0;   // arg_44
	//void *ag_ls_resist_offsets = i1;   //ag_ls_resist_offsets

	int * req_msg_data = NULL;   // var_4
	int(*pKVXTxMC_isim_get_ag_ls_chuck_resist_offsets)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		int chuck_ix, KVXTxMC_AG_LS_resist_offsets_mcs *ag_ls_resist_offsets) = NULL;  // var_8
	int iErrorCode = 0;  // var_C
	KVXTxMC_AG_LS_resist_offsets_mcs * rep_msg_data = NULL;  //s2
	int act_len = 0;  //var_14
	bool isOk = FALSE; // var_18

	THXAtraceTP("KV", 0x4B56F6D0);

	if (!(iErrorCode != 0 || ag_ls_resist_offsets != NULL))
	{
		iErrorCode = OOXA_allocate_parameter(0x48, &ag_ls_resist_offsets, &isOk);
	}

	//loc_3774
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 4, "KVXTxMC_get_ag_ls_chuck_resist_offsets", 0, "%4D", "chuck_ix", "int", &chuck_ix);
	}

	//loc_37D8
	THXAtrace("KV", 2, "KVXTxMC_get_ag_ls_chuck_resist_offsets", "> %s (%4D)", local_KVXTxMC_singleton_object->component, "chuck_ix", "int", &chuck_ix);


	if (iErrorCode != 0)
	{
		//loc_3A1C 
		THXAtrace("KV", 2, "KVXTxMC_get_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_3A60 isOk  = g1
		if (isOk != FALSE)
		{
			PLXAmem_free(&ag_ls_resist_offsets);
		}

		//loc_3A78
		THXAtraceTP("KV", 0x4B56F6D1);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_3878
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 7, 0x557774AF, (void**)&pKVXTxMC_isim_get_ag_ls_chuck_resist_offsets);
	}
	else
	{
		pKVXTxMC_isim_get_ag_ls_chuck_resist_offsets = KVXTxMC_isim_get_ag_ls_chuck_resist_offsets;
	}

	//loc_38AC
	if (iErrorCode != 0)
	{
		//loc_3A98  pKVXTxMC_isim_get_ag_ls_chuck_resist_offsets = g1

		//loc_3A1C  iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_3A60 isOk  = g1
		if (isOk != FALSE)
		{
			PLXAmem_free(&ag_ls_resist_offsets);
		}

		//loc_3A78
		THXAtraceTP("KV", 0x4B56F6D1);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_get_ag_ls_chuck_resist_offsets != NULL)
	{
		iErrorCode = pKVXTxMC_isim_get_ag_ls_chuck_resist_offsets(local_KVXTxMC_singleton_object, chuck_ix, ag_ls_resist_offsets);

		//loc_3998  iErrorCode =o5

		//loc_399C
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_ag_ls_chuck_resist_offsets", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_3A1C
			THXAtrace("KV", 2, "KVXTxMC_get_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_3A60 isOk  = g1
		if (isOk != FALSE)
		{
			PLXAmem_free(&ag_ls_resist_offsets);
		}

		//loc_3A78
		THXAtraceTP("KV", 0x4B56F6D1);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);

	if (iErrorCode != 0)
	{

		//loc_3998  iErrorCode =o5

		//loc_399C
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_ag_ls_chuck_resist_offsets", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_3A1C
			THXAtrace("KV", 2, "KVXTxMC_get_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_3A60 isOk  = g1
		if (isOk != FALSE)
		{
			PLXAmem_free(&ag_ls_resist_offsets);
		}

		//loc_3A78
		THXAtraceTP("KV", 0x4B56F6D1);
		return iErrorCode;
	}

	*req_msg_data = chuck_ix;
	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 7, 0x557774AF, req_msg_data, 4, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_3998  iErrorCode =o5

		//loc_399C
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_ag_ls_chuck_resist_offsets", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_3A1C
			THXAtrace("KV", 2, "KVXTxMC_get_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_3A60 isOk  = g1
		if (isOk != FALSE)
		{
			PLXAmem_free(&ag_ls_resist_offsets);
		}

		//loc_3A78
		THXAtraceTP("KV", 0x4B56F6D1);
		return iErrorCode;
	}

	memcpy(ag_ls_resist_offsets, rep_msg_data, 0x48);
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}

	//loc_399C
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, "KVXTxMC_get_ag_ls_chuck_resist_offsets", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_get_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	else
	{
		//loc_3A1C
		THXAtrace("KV", 2, "KVXTxMC_get_ag_ls_chuck_resist_offsets", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	//loc_3A60 isOk  = g1
	if (isOk != FALSE)
	{
		PLXAmem_free(&ag_ls_resist_offsets);
	}

	//loc_3A78
	THXAtraceTP("KV", 0x4B56F6D1);
	return iErrorCode;
}

int KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params(KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params *extensions_p)
{
	KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params * req_msg_data = NULL;  //var_4
	int(*pKVXTxMC_isim_set_WM_scaninout_GLC_candidate_area_extension_params)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params * extensions_p) = NULL;  // var_8
	int iErrorCode = 0;  // var_C
	char * rep_msg_data = NULL;  //var_10
	int act_len = 0;   //var_14
	char * psErrorText = NULL;

	THXAtraceTP("KV", 0x4B56F630);

	if (extensions_p == NULL)  //extensions_p != 0 -> loc_29D0 iErrorCode =g1
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params");
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTxMCmet.c", 0x1A3, 0, psErrorText);
	}

	//loc_29D0
	if (iErrorCode == 0)  //iErrorCode != 0 -> loc_2A30
	{
		THXAdataRequest("KV", 4, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", 0, "%32D", "extensions_p",
			"KVXTxMC:WM_scaninout_GLC_candidate_area_extension_params", extensions_p);
	}

	//loc_2A30
	THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "> %s (%32D)", local_KVXTxMC_singleton_object->component,
		"extensions_p", "KVXTxMC:WM_scaninout_GLC_candidate_area_extension_params", extensions_p);

	if (iErrorCode != 0)
	{
		//loc_2C74 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_2CB8
		THXAtraceTP("KV", 0x4B56F631);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_2ACC
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 3, 0x6F23A9F1, (void**)&pKVXTxMC_isim_set_WM_scaninout_GLC_candidate_area_extension_params);
	}
	else
	{
		pKVXTxMC_isim_set_WM_scaninout_GLC_candidate_area_extension_params = KVXTxMC_isim_set_WM_scaninout_GLC_candidate_area_extension_params;
	}

	//loc_2B00
	if (iErrorCode != 0)
	{
		//loc_2CD8 

		//loc_2C74 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_2CB8
		THXAtraceTP("KV", 0x4B56F631);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_set_WM_scaninout_GLC_candidate_area_extension_params != NULL)
	{
		iErrorCode = pKVXTxMC_isim_set_WM_scaninout_GLC_candidate_area_extension_params(local_KVXTxMC_singleton_object, extensions_p);

		//loc_2BF0 iErrorCode = o5

		//loc_2BF4
		if (iErrorCode == 0)
		{
			//loc_2C00
			THXAdataRequest("KV", 5, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component,
				iErrorCode);
		}
		else
		{
			//loc_2C74 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_2CB8
		THXAtraceTP("KV", 0x4B56F631);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0x20, &req_msg_data);
	if (iErrorCode == 0)  //iErrorCode != 0 ->loc_2BF0
	{
		//loc_2BF0 iErrorCode = o5

		//loc_2BF4
		if (iErrorCode == 0)
		{
			//loc_2C00
			THXAdataRequest("KV", 5, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component,
				iErrorCode);
		}
		else
		{
			//loc_2C74 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_2CB8
		THXAtraceTP("KV", 0x4B56F631);
		return iErrorCode;
	}

	req_msg_data->extension_x_neg = extensions_p->extension_x_neg;
	req_msg_data->extension_x_pos = extensions_p->extension_x_pos;
	req_msg_data->extension_y_neg = extensions_p->extension_y_neg;
	req_msg_data->extension_y_pos = extensions_p->extension_y_pos;
	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 3, 0x6F23A9F1, req_msg_data, 0x20, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode == 0)  //iErrorCode != 0 ->loc_2BF0
	{
		//loc_2BF0 iErrorCode = o5

		//loc_2BF4
		if (iErrorCode == 0)
		{
			//loc_2C00
			THXAdataRequest("KV", 5, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component,
				iErrorCode);
		}
		else
		{
			//loc_2C74 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_2CB8
		THXAtraceTP("KV", 0x4B56F631);
		return iErrorCode;
	}

	if (rep_msg_data == NULL)
	{
		//loc_2C00
		THXAdataRequest("KV", 5, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component,
			iErrorCode);

		//loc_2CB8
		THXAtraceTP("KV", 0x4B56F631);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);


	//loc_2BF4
	if (iErrorCode == 0)
	{
		//loc_2C00
		THXAdataRequest("KV", 5, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component,
			iErrorCode);
	}
	else
	{
		//loc_2C74 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	//loc_2CB8
	THXAtraceTP("KV", 0x4B56F631);
	return iErrorCode;
}

int KVXTxMC_get_fsm_ero_params(bool *ero_correction_p, double *ero_dist_edge_p)
{

	char * req_msg_data = NULL;   //var_4
	int(*pKVXTxMC_isim_get_fsm_ero_params)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		bool *ero_correction_p, double *ero_dist_edge_p) = NULL;  //var_8
	int iErrorCode = 0;  //var_C
	KVXTxMC_unk_6 * rep_msg_data = NULL;  //var_10
	int act_len = 0;   //var_14 
	bool isOk = FALSE;  //var_18
	bool var_1C = FALSE;//var_1C

	if (ero_correction_p == NULL)
	{
		iErrorCode = OOXA_allocate_parameter(4, &ero_correction_p, &isOk);
	}

	//loc_61F0
	if (!(iErrorCode != 0 || ero_dist_edge_p != NULL))
	{
		iErrorCode = OOXA_allocate_parameter(8, &ero_dist_edge_p, &var_1C);
	}

	//loc_622C
	THXAtrace("KV", 2, "KVXTxMC_get_fsm_ero_params", "> %s ()", local_KVXTxMC_singleton_object->component);

	//iErrorCode = o5
	if (iErrorCode != 0)
	{
		//loc_64C0
		THXAtrace("KV", 2, "KVXTxMC_get_fsm_ero_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_6504 
		if (isOk != FALSE)
		{
			PLXAmem_free(&ero_correction_p);
		}

		//loc_651C
		if (var_1C != FALSE)
		{
			PLXAmem_free(&ero_dist_edge_p);
			return iErrorCode;
		}
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_62A8
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0x12, 0x43A7C820, (void**)&pKVXTxMC_isim_get_fsm_ero_params);
	}
	else
	{
		pKVXTxMC_isim_get_fsm_ero_params = KVXTxMC_isim_get_fsm_ero_params;
	}

	//loc_6D2C
	if (iErrorCode != 0)
	{
		//loc_653C pKVXTxMC_isim_get_fsm_ero_params =g1

		//loc_64C0
		THXAtrace("KV", 2, "KVXTxMC_get_fsm_ero_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_6504 
		if (isOk != FALSE)
		{
			PLXAmem_free(&ero_correction_p);
		}

		//loc_651C
		if (var_1C != FALSE)
		{
			PLXAmem_free(&ero_dist_edge_p);
			return iErrorCode;
		}
		return iErrorCode;
	}

	if (pKVXTxMC_isim_get_fsm_ero_params != NULL)
	{
		//loc_63A8
		iErrorCode = pKVXTxMC_isim_get_fsm_ero_params(local_KVXTxMC_singleton_object, ero_correction_p, ero_dist_edge_p);

		//loc_63C4  iErrorCode = o5

		//loc_63C8
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_fsm_ero_params", 0, "%4D %8D %d", "ero_correction_p", "bool", ero_dist_edge_p,
				"ero_dist_edge_p", "double", ero_dist_edge_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_fsm_ero_params", "< %s (%4D %8D)=%R", local_KVXTxMC_singleton_object->component,
				"ero_correction_p", "bool", ero_dist_edge_p, "ero_dist_edge_p", "double", ero_dist_edge_p, iErrorCode);
		}
		else
		{
			//loc_64C0
			THXAtrace("KV", 2, "KVXTxMC_get_fsm_ero_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_6504 
		if (isOk != FALSE)
		{
			PLXAmem_free(&ero_correction_p);
		}

		//loc_651C
		if (var_1C != FALSE)
		{
			PLXAmem_free(&ero_dist_edge_p);
			return iErrorCode;
		}
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);

	if (iErrorCode != 0)
	{
		//loc_63C4  iErrorCode = o5

		//loc_63C8
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_fsm_ero_params", 0, "%4D %8D %d", "ero_correction_p", "bool", ero_dist_edge_p,
				"ero_dist_edge_p", "double", ero_dist_edge_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_fsm_ero_params", "< %s (%4D %8D)=%R", local_KVXTxMC_singleton_object->component,
				"ero_correction_p", "bool", ero_dist_edge_p, "ero_dist_edge_p", "double", ero_dist_edge_p, iErrorCode);
		}
		else
		{
			//loc_64C0
			THXAtrace("KV", 2, "KVXTxMC_get_fsm_ero_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_6504 
		if (isOk != FALSE)
		{
			PLXAmem_free(&ero_correction_p);
		}

		//loc_651C
		if (var_1C != FALSE)
		{
			PLXAmem_free(&ero_dist_edge_p);
			return iErrorCode;
		}
		return iErrorCode;
	}

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0x12, 0x43A7C820, req_msg_data, 0, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_63C4  iErrorCode = o5

		//loc_63C8
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_fsm_ero_params", 0, "%4D %8D %d", "ero_correction_p", "bool", ero_dist_edge_p,
				"ero_dist_edge_p", "double", ero_dist_edge_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_fsm_ero_params", "< %s (%4D %8D)=%R", local_KVXTxMC_singleton_object->component,
				"ero_correction_p", "bool", ero_dist_edge_p, "ero_dist_edge_p", "double", ero_dist_edge_p, iErrorCode);
		}
		else
		{
			//loc_64C0
			THXAtrace("KV", 2, "KVXTxMC_get_fsm_ero_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_6504 
		if (isOk != FALSE)
		{
			PLXAmem_free(&ero_correction_p);
		}

		//loc_651C
		if (var_1C != FALSE)
		{
			PLXAmem_free(&ero_dist_edge_p);
			return iErrorCode;
		}
		return iErrorCode;
	}

	*ero_correction_p = rep_msg_data->ero_correction_p;
	*ero_dist_edge_p = rep_msg_data->ero_dist_edge_p;
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}
	//loc_63C8
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, "KVXTxMC_get_fsm_ero_params", 0, "%4D %8D %d", "ero_correction_p", "bool", ero_dist_edge_p,
			"ero_dist_edge_p", "double", ero_dist_edge_p, &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_get_fsm_ero_params", "< %s (%4D %8D)=%R", local_KVXTxMC_singleton_object->component,
			"ero_correction_p", "bool", ero_dist_edge_p, "ero_dist_edge_p", "double", ero_dist_edge_p, iErrorCode);
	}
	else
	{
		//loc_64C0
		THXAtrace("KV", 2, "KVXTxMC_get_fsm_ero_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	//loc_6504 
	if (isOk != FALSE)
	{
		PLXAmem_free(&ero_correction_p);
	}

	//loc_651C
	if (var_1C != FALSE)
	{
		PLXAmem_free(&ero_dist_edge_p);
		return iErrorCode;
	}
	return iErrorCode;
}

int KVXTxMC_set_WM_scaninout_plane_area_params(KVXTxMC_WM_scaninout_minimum_scan_plane_area_params *scaninout_plane_area_params_p)
{
	KVXTxMC_WM_scaninout_minimum_scan_plane_area_params * req_msg_data = NULL;   // var_4
	int(*pKVXTxMC_isim_set_WM_scaninout_plane_area_params)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		KVXTxMC_WM_scaninout_minimum_scan_plane_area_params * scaninout_plane_area_params_p) = NULL;  //  var_8
	int iErrorCode = 0;    // var_C
	char * rep_msg_data = NULL;  // var_10
	int act_len = 0;   // var_14
	char *psErrorText = NULL;

	THXAtraceTP("KV", 0x4B56F650);

	if (scaninout_plane_area_params_p == NULL) //iErrorCode != 0 ->loc_30B4 iErrorCode = g1
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", "KVXTxMC_set_WM_scaninout_plane_area_params");
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTxMCmet.c", 0x2AA, 0, psErrorText);
	}

	//30B4
	if (iErrorCode == 0) //iErrorCode != 0 -> loc_3114
	{
		THXAdataRequest("KV", 4, "KVXTxMC_set_WM_scaninout_plane_area_params", 0, "%16D", "scaninout_plane_area_params_p",
			"KVXTxMC:WM_scaninout_minimum_scan_plane_area_params", scaninout_plane_area_params_p);
	}

	//loc_3114
	THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "> %s (%16D)", local_KVXTxMC_singleton_object->component,
		"scaninout_plane_area_params_p", "KVXTxMC:WM_scaninout_minimum_scan_plane_area_params", scaninout_plane_area_params_p);

	if (iErrorCode != 0)
	{
		//loc_3348 o5 = iErrorCode
		THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_338C
		THXAtraceTP("KV", 0x4B56F651);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_31B0
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 5, 0x34BF5663, (void**)&pKVXTxMC_isim_set_WM_scaninout_plane_area_params);
	}
	else
	{
		pKVXTxMC_isim_set_WM_scaninout_plane_area_params = KVXTxMC_isim_set_WM_scaninout_plane_area_params;
	}

	//loc_31E4
	if (iErrorCode != 0)
	{
		//loc_33AC 

		//loc_3348 o5 = iErrorCode
		THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_338C
		THXAtraceTP("KV", 0x4B56F651);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_set_WM_scaninout_plane_area_params != NULL)
	{
		iErrorCode = pKVXTxMC_isim_set_WM_scaninout_plane_area_params(local_KVXTxMC_singleton_object, scaninout_plane_area_params_p);

		//loc_32C4 iErrorCode = o5

		//loc_32C8
		if (iErrorCode == 0)
		{
			//loc_32D4
			THXAdataRequest("KV", 5, "KVXTxMC_set_WM_scaninout_plane_area_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_3348
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_338C
		THXAtraceTP("KV", 0x4B56F651);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0x10, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_32C4 iErrorCode = o5

		//loc_32C8
		if (iErrorCode == 0)
		{
			//loc_32D4
			THXAdataRequest("KV", 5, "KVXTxMC_set_WM_scaninout_plane_area_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_3348
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_338C
		THXAtraceTP("KV", 0x4B56F651);
		return iErrorCode;
	}

	req_msg_data->min_x_size = scaninout_plane_area_params_p->min_x_size;
	req_msg_data->min_y_size = scaninout_plane_area_params_p->min_y_size;
	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 5, 0x34BF5663, req_msg_data, 0x10, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_32C4 iErrorCode = o5

		//loc_32C8
		if (iErrorCode == 0)
		{
			//loc_32D4
			THXAdataRequest("KV", 5, "KVXTxMC_set_WM_scaninout_plane_area_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_3348
			THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_338C
		THXAtraceTP("KV", 0x4B56F651);
		return iErrorCode;
	}

	if (rep_msg_data == NULL)
	{
		//loc_32D4
		THXAdataRequest("KV", 5, "KVXTxMC_set_WM_scaninout_plane_area_params", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		//loc_338C
		THXAtraceTP("KV", 0x4B56F651);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);
	//loc_32C8
	if (iErrorCode == 0)
	{
		//loc_32D4
		THXAdataRequest("KV", 5, "KVXTxMC_set_WM_scaninout_plane_area_params", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	else
	{
		//loc_3348
		THXAtrace("KV", 2, "KVXTxMC_set_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	//loc_338C
	THXAtraceTP("KV", 0x4B56F651);
	return iErrorCode;
}

int KVXTxMC_set_SUSD_params(KVXTxMC__set_SUSD_params_SUSD_correction_params *SUSD_correction_params)
{
	KVXTxMC__set_SUSD_params_SUSD_correction_params * req_msg_data = 0;  //s1
	int(*pKVXTxMC_isim_set_SUSD_params)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		KVXTxMC__set_SUSD_params_SUSD_correction_params * SUSD_correction_params) = NULL;  // var_8
	int iErrorCode = 0;  //var_C
	char * rep_msg_data = NULL;  // var_10
	int act_len = 0;   //var_14
	char *psErrorText = NULL;

	THXAtraceTP("KV", 0x4B56F682);

	if (SUSD_correction_params == NULL) //SUSD_correction_params != 0 ->loc_42D0  iErrorCode = g1
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", "KVXTxMC_set_SUSD_params");
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTxMCmet.c", 0x557, 0, psErrorText);
	}

	//loc_42D0
	if (iErrorCode == 0)  //iErrorCode != 0 ->loc_4330
	{
		THXAdataRequest("KV", 4, "KVXTxMC_set_SUSD_params", 0, "%96D", "SUSD_correction_params", "KVXTxMC:.set_SUSD_params.SUSD_correction_params", SUSD_correction_params);
	}

	//loc_4330
	THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "> %s (%96D)", local_KVXTxMC_singleton_object->component, "SUSD_correction_params", "KVXTxMC:.set_SUSD_params.SUSD_correction_params", SUSD_correction_params);

	if (iErrorCode != 0)
	{
		//loc_4560 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_45A4
		THXAtraceTP("KV", 0x4B56F683);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_43CC
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xA, 0x87103FF, (void**)&pKVXTxMC_isim_set_SUSD_params);
	}
	else
	{
		pKVXTxMC_isim_set_SUSD_params = KVXTxMC_isim_set_SUSD_params;
	}

	//loc_4400
	if (iErrorCode != 0)
	{
		//loc_45C4 var_8 = g1
		//loc_4560 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_45A4
		THXAtraceTP("KV", 0x4B56F683);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_set_SUSD_params != NULL)
	{
		iErrorCode = pKVXTxMC_isim_set_SUSD_params(local_KVXTxMC_singleton_object, SUSD_correction_params);

		//loc_44DC iErrorCode = o5

		//loc_44E0
		if (iErrorCode == 0)
		{
			//loc_44EC
			THXAdataRequest("KV", 5, "KVXTxMC_set_SUSD_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_4560 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_45A4
		THXAtraceTP("KV", 0x4B56F683);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0x60, (void**)&req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_44DC iErrorCode = o5

		//loc_44E0
		if (iErrorCode == 0)
		{
			//loc_44EC
			THXAdataRequest("KV", 5, "KVXTxMC_set_SUSD_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_4560 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_45A4
		THXAtraceTP("KV", 0x4B56F683);
		return iErrorCode;
	}

	memcpy(req_msg_data, SUSD_correction_params, 0x60);
	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xA, 0x87103FF, req_msg_data, 0x60, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_44DC iErrorCode = o5

		//loc_44E0
		if (iErrorCode == 0)
		{
			//loc_44EC
			THXAdataRequest("KV", 5, "KVXTxMC_set_SUSD_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_4560 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_45A4
		THXAtraceTP("KV", 0x4B56F683);
		return iErrorCode;
	}

	if (rep_msg_data == NULL)
	{
		//loc_44EC
		THXAdataRequest("KV", 5, "KVXTxMC_set_SUSD_params", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_45A4
		THXAtraceTP("KV", 0x4B56F683);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);

	//loc_44E0
	if (iErrorCode == 0)
	{
		//loc_44EC
		THXAdataRequest("KV", 5, "KVXTxMC_set_SUSD_params", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	else
	{
		//loc_4560 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_set_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	//loc_45A4
	THXAtraceTP("KV", 0x4B56F683);
	return iErrorCode;
}

int KVXTxMC_get_LS_stroke_tilt(WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_stroke_tilt *LS_stroke_tilt_p)
{
	WPxCHUCK_chuck_id_enum * req_msg_data = NULL; //var_4
	int(*pKVXTxMC_isim_get_LS_stroke_tilt)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_stroke_tilt * LS_stroke_tilt_p) = 0; //var_8
	int iErrorCode = 0; //var_C
	KVXTxMC_LS_stroke_tilt * rep_msg_data = 0; //var_10
	int act_len = 0; //var_14
	bool isOk = FALSE; //var_18

	if (LS_stroke_tilt_p != 0)
	{
		//loc_5A68
		THXAdataRequest("KV", 4, "KVXTxMC_get_LS_stroke_tilt", 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	}
	else
	{
		if (OOXA_allocate_parameter(8, &LS_stroke_tilt_p, &isOk) == 0)
		{
			//loc_5A68
			THXAdataRequest("KV", 4, "KVXTxMC_get_LS_stroke_tilt", 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
		}
	}

	//loc_5ABC
	THXAtrace("KV", 2, "KVXTxMC_get_LS_stroke_tilt", "> %s (%4D)", local_KVXTxMC_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", chuck_id);

	if (iErrorCode != 0)
	{
		//loc_5D3C iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//isOk = g1
		//loc_5D80
		if (isOk != FALSE)
		{
			PLXAmem_free(&LS_stroke_tilt_p);
			return iErrorCode;
		}

		//loc_5D98
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_5B60
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0x10, 0xE77ADAE, (void**)&pKVXTxMC_isim_get_LS_stroke_tilt);
	}
	else
	{
		pKVXTxMC_isim_get_LS_stroke_tilt = KVXTxMC_isim_get_LS_stroke_tilt;
	}

	//loc_5B94
	if (iErrorCode != 0)
	{
		//loc_5DA0 g1 = pKVXTxMC_isim_get_LS_stroke_tilt
		//loc_5D3C iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//isOk = g1
		//loc_5D80
		if (isOk != FALSE)
		{
			PLXAmem_free(&LS_stroke_tilt_p);
			return iErrorCode;
		}

		//loc_5D98
		return iErrorCode;
	}

	if (pKVXTxMC_isim_get_LS_stroke_tilt != NULL)
	{
		//loc_5C5C
		iErrorCode = pKVXTxMC_isim_get_LS_stroke_tilt(local_KVXTxMC_singleton_object, chuck_id, LS_stroke_tilt_p);

		//loc_5C78 iErrorCode = o5

		//loc_5C7C
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_LS_stroke_tilt", 0, "%8D %d", "LS_stroke_tilt_p", "KVXTxMC:LS_stroke_tilt", LS_stroke_tilt_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_LS_stroke_tilt", "< %s (%8D)=%R", local_KVXTxMC_singleton_object->component, "LS_stroke_tilt_p", "KVXTxMC:LS_stroke_tilt", LS_stroke_tilt_p, iErrorCode);
		}
		else
		{
			//loc_5D3C iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		}
		//loc_5D80
		if (isOk != FALSE)
		{
			PLXAmem_free(&LS_stroke_tilt_p);
			return iErrorCode;
		}

		//loc_5D98
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_5C78 o0 = iErrorCode

		//loc_5C7C
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_LS_stroke_tilt", 0, "%8D %d", "LS_stroke_tilt_p", "KVXTxMC:LS_stroke_tilt", LS_stroke_tilt_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_LS_stroke_tilt", "< %s (%8D)=%R", local_KVXTxMC_singleton_object->component, "LS_stroke_tilt_p", "KVXTxMC:LS_stroke_tilt", LS_stroke_tilt_p, iErrorCode);
		}
		else
		{
			//loc_5D3C iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		}
		//loc_5D80
		if (isOk != FALSE)
		{
			PLXAmem_free(&LS_stroke_tilt_p);
			return iErrorCode;
		}

		//loc_5D98
		return iErrorCode;
	}

	*req_msg_data = chuck_id;
	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0x10, 0xE77ADAE, req_msg_data, 4, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_5C78 o0 = iErrorCode

		//loc_5C7C
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_LS_stroke_tilt", 0, "%8D %d", "LS_stroke_tilt_p", "KVXTxMC:LS_stroke_tilt", LS_stroke_tilt_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_LS_stroke_tilt", "< %s (%8D)=%R", local_KVXTxMC_singleton_object->component, "LS_stroke_tilt_p", "KVXTxMC:LS_stroke_tilt", LS_stroke_tilt_p, iErrorCode);
		}
		else
		{
			//loc_5D3C iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		}
		//loc_5D80
		if (isOk != FALSE)
		{
			PLXAmem_free(&LS_stroke_tilt_p);
			return iErrorCode;
		}

		//loc_5D98
		return iErrorCode;
	}

	rep_msg_data->dRy = LS_stroke_tilt_p->dRy;
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}

	//loc_5C7C
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, "KVXTxMC_get_LS_stroke_tilt", 0, "%8D %d", "LS_stroke_tilt_p", "KVXTxMC:LS_stroke_tilt", LS_stroke_tilt_p, &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_get_LS_stroke_tilt", "< %s (%8D)=%R", local_KVXTxMC_singleton_object->component, "LS_stroke_tilt_p", "KVXTxMC:LS_stroke_tilt", LS_stroke_tilt_p, iErrorCode);
	}
	else
	{
		//loc_5D3C iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_LS_stroke_tilt", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

	}
	//loc_5D80
	if (isOk != FALSE)
	{
		PLXAmem_free(&LS_stroke_tilt_p);
		return iErrorCode;
	}

	//loc_5D98
	return iErrorCode;
}

int KVXTxMC_save(KVXTxMC__save_id *id)
{
	//i0 %s 是字符串
	KVXTxMC__save_id * req_msg_data = 0; //s1
	int(*pKVXTxMC_isim_save)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, KVXTxMC__save_id *id) = NULL; //var_8
	int iErrorCode = 0; // var_C
	char * rep_msg_data = NULL; //var_10
	int act_len = 0; //var_14
	char *psErrorText = NULL;

	THXAtraceTP("KV", 0x4B56F610);

	if (id == NULL)
	{
		iErrorCode = 0x4F4F0003;
		psErrorText = ERXAmakeContext("'NULL' parameter in %$FUNC_NAME$s", "KVXTxMC_save");
		ERXAlogExceptionSingleLink(iErrorCode, 0, "../inc/bld/KVXTxMCmet.c", 0x9B, 0, psErrorText);
	}

	//loc_2320
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 4, "KVXTxMC_save", 0, "id=%s", id);
	}

	//loc_2364
	THXAtrace("KV", 2, "KVXTxMC_save", "> %s (id=%s)", local_KVXTxMC_singleton_object->component, id);

	if (iErrorCode != 0)
	{
		//loc_2580 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_save", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_25C4
		THXAtraceTP("KV", 0x4B56F611);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_23E4
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 1, 0xF3C336, (void**)&pKVXTxMC_isim_save);
	}
	else
	{
		pKVXTxMC_isim_save = KVXTxMC_isim_save;
	}

	//loc_2418
	if (iErrorCode != 0)
	{
		//loc_25E4

		//loc_2580 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_save", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_25C4
		THXAtraceTP("KV", 0x4B56F611);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_save != NULL)
	{
		iErrorCode = pKVXTxMC_isim_save(local_KVXTxMC_singleton_object, id);

		//loc_24FC iErrorCode = o5
		//loc_2500
		if (iErrorCode == 0)
		{
			//loc_250C
			THXAdataRequest("KV", 5, "KVXTxMC_save", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_save", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_2580 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_save", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_25C4
		THXAtraceTP("KV", 0x4B56F611);
		return iErrorCode;
	}
	iErrorCode = OOXA_allocate_buffer(0x408, (void**)&req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_24FC iErrorCode = o5
		//loc_2500
		if (iErrorCode == 0)
		{
			//loc_250C
			THXAdataRequest("KV", 5, "KVXTxMC_save", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_save", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_2580 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_save", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_25C4
		THXAtraceTP("KV", 0x4B56F611);
		return iErrorCode;
	}

	rep_msg_data[0x400] = '\0';
	strncpy((char*)req_msg_data, (char*)id, 0x400);
	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 1, 0xF3C336, req_msg_data, 0x408, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_24FC iErrorCode = o5
		//loc_2500
		if (iErrorCode == 0)
		{
			//loc_250C
			THXAdataRequest("KV", 5, "KVXTxMC_save", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_save", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_2580 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_save", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_25C4
		THXAtraceTP("KV", 0x4B56F611);
		return iErrorCode;
	}

	if (rep_msg_data == NULL)
	{
		//loc_250C
		THXAdataRequest("KV", 5, "KVXTxMC_save", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_save", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_25C4
		THXAtraceTP("KV", 0x4B56F611);
		return iErrorCode;
	}

	OOXA_release_buffer(rep_msg_data);

	//loc_2500
	if (iErrorCode == 0)
	{
		//loc_250C
		THXAdataRequest("KV", 5, "KVXTxMC_save", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_save", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	else
	{
		//loc_2580 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_save", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	//loc_25C4
	THXAtraceTP("KV", 0x4B56F611);
	return iErrorCode;
}

int KVXTxMC_get_SUSD_params(KVXTxMC__get_SUSD_params_SUSD_correction_params *SUSD_correction_params)
{
	char * req_msg_data = NULL;  //var_4
	int(*pKVXTxMC_isim_get_SUSD_params)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		KVXTxMC__get_SUSD_params_SUSD_correction_params *SUSD_correction_params) = 0;  //var_8
	int iErrorCode = 0; //var_C
	KVXTxMC__get_SUSD_params_SUSD_correction_params * rep_msg_data = NULL; //s2
	int act_len = 0; //var_14
	bool isOk = FALSE; //var_18

	THXAtraceTP("KV", 0x4B56F681);

	if (!(iErrorCode != 0 || SUSD_correction_params != NULL))
	{
		iErrorCode = OOXA_allocate_parameter(0x60, (void**)&SUSD_correction_params, &isOk);
	}
	//loc_3F50
	THXAtrace("KV", 2, "KVXTxMC_get_SUSD_params", "> %s ()", local_KVXTxMC_singleton_object->component);

	if (iErrorCode != 0)
	{
		//loc_41A0 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_41E4
		if (isOk != FALSE)
		{
			PLXAmem_free((void**)&SUSD_correction_params);
		}
		//loc_41FC
		THXAtraceTP("KV", 0x4B56F682);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_3FCC
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 9, 0x5F5DB796, (void**)&pKVXTxMC_isim_get_SUSD_params);
	}
	else
	{
		pKVXTxMC_isim_get_SUSD_params = KVXTxMC_isim_get_SUSD_params;
	}

	//loc_4000
	if (iErrorCode != 0)
	{
		//loc_421C

		//loc_41A0 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_41E4
		if (isOk != FALSE)
		{
			PLXAmem_free((void**)&SUSD_correction_params);
		}
		//loc_41FC
		THXAtraceTP("KV", 0x4B56F682);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_get_SUSD_params != NULL)
	{
		//loc_40C4
		iErrorCode = pKVXTxMC_isim_get_SUSD_params(local_KVXTxMC_singleton_object, SUSD_correction_params);

		//loc_40DC iErrorCode = o5

		//loc_40E0
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_SUSD_params", 0, "%96D %d", "SUSD_correction_params",
				"KVXTxMC:.get_SUSD_params.SUSD_correction_params", SUSD_correction_params, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_SUSD_params", "< %s (%96D)=%R", local_KVXTxMC_singleton_object->component, "SUSD_correction_params",
				"KVXTxMC:.get_SUSD_params.SUSD_correction_params", SUSD_correction_params, iErrorCode);
		}
		else
		{
			//loc_41A0
			THXAtrace("KV", 2, "KVXTxMC_get_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_41E4
		if (isOk != FALSE)
		{
			PLXAmem_free((void**)&SUSD_correction_params);
		}
		//loc_41FC
		THXAtraceTP("KV", 0x4B56F682);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_40DC iErrorCode = o5

		//loc_40E0
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_SUSD_params", 0, "%96D %d", "SUSD_correction_params",
				"KVXTxMC:.get_SUSD_params.SUSD_correction_params", SUSD_correction_params, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_SUSD_params", "< %s (%96D)=%R", local_KVXTxMC_singleton_object->component, "SUSD_correction_params",
				"KVXTxMC:.get_SUSD_params.SUSD_correction_params", SUSD_correction_params, iErrorCode);
		}
		else
		{
			//loc_41A0
			THXAtrace("KV", 2, "KVXTxMC_get_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_41E4
		if (isOk != FALSE)
		{
			PLXAmem_free((void**)&SUSD_correction_params);
		}
		//loc_41FC
		THXAtraceTP("KV", 0x4B56F682);
		return iErrorCode;
	}

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 9, 0x5F5DB796, req_msg_data, 0, (void**)&rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_40DC iErrorCode = o5

		//loc_40E0
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_SUSD_params", 0, "%96D %d", "SUSD_correction_params",
				"KVXTxMC:.get_SUSD_params.SUSD_correction_params", SUSD_correction_params, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_SUSD_params", "< %s (%96D)=%R", local_KVXTxMC_singleton_object->component, "SUSD_correction_params",
				"KVXTxMC:.get_SUSD_params.SUSD_correction_params", SUSD_correction_params, iErrorCode);
		}
		else
		{
			//loc_41A0
			THXAtrace("KV", 2, "KVXTxMC_get_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_41E4
		if (isOk != FALSE)
		{
			PLXAmem_free((void**)&SUSD_correction_params);
		}
		//loc_41FC
		THXAtraceTP("KV", 0x4B56F682);
		return iErrorCode;
	}

	memcpy(SUSD_correction_params, rep_msg_data, 0x60);
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}
	//loc_40E0
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, "KVXTxMC_get_SUSD_params", 0, "%96D %d", "SUSD_correction_params",
			"KVXTxMC:.get_SUSD_params.SUSD_correction_params", SUSD_correction_params, &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_get_SUSD_params", "< %s (%96D)=%R", local_KVXTxMC_singleton_object->component, "SUSD_correction_params",
			"KVXTxMC:.get_SUSD_params.SUSD_correction_params", SUSD_correction_params, iErrorCode);
	}
	else
	{
		//loc_41A0
		THXAtrace("KV", 2, "KVXTxMC_get_SUSD_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	//loc_41E4
	if (isOk != FALSE)
	{
		PLXAmem_free((void**)&SUSD_correction_params);
	}
	//loc_41FC
	THXAtraceTP("KV", 0x4B56F682);
	return iErrorCode;

}

int KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params(KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params *extensions_p)
{
	char * req_msg_data = NULL; //var_4
	int(*pKVXTxMC_isim_get_WM_scaninout_GLC_candidate_area_extension_params)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params *extensions_p) = 0; //var_8
	int iErrorCode = 0;  //var_C
	KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params * rep_msg_data = NULL; //var_10
	int act_len = 0; //var_14
	bool isOk = FALSE; //var_18

	THXAtraceTP("KV", 0x4B56F620);
	if (!(iErrorCode != 0 || extensions_p != 0))
	{
		iErrorCode = OOXA_allocate_parameter(0x20, &extensions_p, &isOk);
	}

	//loc_2680
	THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", "> %s ()", local_KVXTxMC_singleton_object->component);
	if (iErrorCode != 0)
	{
		//loc_28A0 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_28E4
		if (isOk != FALSE)
		{
			PLXAmem_free(&extensions_p);
		}
		THXAtraceTP("KV", 0x4B56F621);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_26FC
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 2, 0x35B38E50, (void**)&pKVXTxMC_isim_get_WM_scaninout_GLC_candidate_area_extension_params);
	}
	else
	{
		pKVXTxMC_isim_get_WM_scaninout_GLC_candidate_area_extension_params = KVXTxMC_isim_get_WM_scaninout_GLC_candidate_area_extension_params;
	}

	if (iErrorCode != 0)
	{
		//loc_291C 

		//loc_28A0 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_28E4
		if (isOk != FALSE)
		{
			PLXAmem_free(&extensions_p);
		}
		THXAtraceTP("KV", 0x4B56F621);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_get_WM_scaninout_GLC_candidate_area_extension_params != NULL)
	{
		iErrorCode = pKVXTxMC_isim_get_WM_scaninout_GLC_candidate_area_extension_params(local_KVXTxMC_singleton_object, extensions_p);

		//loc_281C  iErrorCode = o5

		//loc_2820
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_28A0 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_28E4
		if (isOk != FALSE)
		{
			PLXAmem_free(&extensions_p);
		}
		THXAtraceTP("KV", 0x4B56F621);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_281C  iErrorCode = o5

		//loc_2820
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_28A0 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_28E4
		if (isOk != FALSE)
		{
			PLXAmem_free(&extensions_p);
		}
		THXAtraceTP("KV", 0x4B56F621);
		return iErrorCode;
	}

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 2, 0x35B38E50, req_msg_data, 0, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_281C  iErrorCode = o5

		//loc_2820
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_28A0 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_28E4
		if (isOk != FALSE)
		{
			PLXAmem_free(&extensions_p);
		}
		THXAtraceTP("KV", 0x4B56F621);
		return iErrorCode;
	}

	extensions_p->extension_x_pos = rep_msg_data->extension_x_pos;
	extensions_p->extension_y_pos = rep_msg_data->extension_y_pos;
	extensions_p->extension_x_neg = rep_msg_data->extension_x_neg;
	extensions_p->extension_y_neg = rep_msg_data->extension_y_neg;

	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}

	//loc_2820
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	else
	{
		//loc_28A0 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_GLC_candidate_area_extension_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	//loc_28E4
	if (isOk != FALSE)
	{
		PLXAmem_free(&extensions_p);
	}
	THXAtraceTP("KV", 0x4B56F621);
	return iErrorCode;
}

int KVXTxMC_get_AGILE_ref_meas_mcs(KVXTxMC_agile_reference_measurement_mcs *agile_ref_meas_params)
{
	//KVXTxMC_agile_reference_measurement_mcs * agile_ref_meas_params = agile_ref_meas_params; //arg_44
	char * req_msg_data = NULL; //var_4
	int(*pKVXTxMC_isim_get_AGILE_ref_meas_mcs)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		KVXTxMC_agile_reference_measurement_mcs * agile_ref_meas_params) = 0; //var_8
	int iErrorCode = 0; //var_C
	KVXTxMC_agile_reference_measurement_mcs * rep_msg_data = NULL; //var_10
	int act_len = 0; //var_14
	bool isOk = FALSE; //var_18

	if (agile_ref_meas_params == NULL)
	{
		iErrorCode = OOXA_allocate_parameter(0x20, &agile_ref_meas_params, &isOk);
	}

	//loc_65A4
	THXAtrace("KV", 2, "KVXTxMC_get_AGILE_ref_meas_mcs", "> %s ()", local_KVXTxMC_singleton_object->component);
	if (iErrorCode != 0)
	{
		//loc_6808  iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_AGILE_ref_meas_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_684C
		if (isOk != FALSE)
		{
			PLXAmem_free(&agile_ref_meas_params);
		}
		//loc_6864
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_6624
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0x13, 0x44E65ED6, (void**)&pKVXTxMC_isim_get_AGILE_ref_meas_mcs);
	}
	else
	{
		pKVXTxMC_isim_get_AGILE_ref_meas_mcs = KVXTxMC_isim_get_AGILE_ref_meas_mcs;
	}

	if (iErrorCode != 0)
	{
		//loc_686C
		//loc_6808  iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_AGILE_ref_meas_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_684C
		if (isOk != FALSE)
		{
			PLXAmem_free(&agile_ref_meas_params);
		}
		//loc_6864
		return iErrorCode;
	}

	if (pKVXTxMC_isim_get_AGILE_ref_meas_mcs != NULL)
	{
		iErrorCode = pKVXTxMC_isim_get_AGILE_ref_meas_mcs(local_KVXTxMC_singleton_object, agile_ref_meas_params);

		//loc_6744  iErrorCode = o5

		//loc_6748
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_AGILE_ref_meas_mcs", 0, "%32D %d", "agile_ref_meas_params", "KVXTxMC:agile_reference_measurement_mcs", agile_ref_meas_params, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_AGILE_ref_meas_mcs", "< %s (%32D)=%R", local_KVXTxMC_singleton_object->component, "agile_ref_meas_params", "KVXTxMC:agile_reference_measurement_mcs", agile_ref_meas_params, iErrorCode);
		}
		else
		{
			//loc_6808  iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_AGILE_ref_meas_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_684C
		if (isOk != FALSE)
		{
			PLXAmem_free(&agile_ref_meas_params);
		}
		//loc_6864
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_6744  iErrorCode = o5

		//loc_6748
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_AGILE_ref_meas_mcs", 0, "%32D %d", "agile_ref_meas_params", "KVXTxMC:agile_reference_measurement_mcs", agile_ref_meas_params, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_AGILE_ref_meas_mcs", "< %s (%32D)=%R", local_KVXTxMC_singleton_object->component, "agile_ref_meas_params", "KVXTxMC:agile_reference_measurement_mcs", agile_ref_meas_params, iErrorCode);
		}
		else
		{
			//loc_6808  iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_AGILE_ref_meas_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_684C
		if (isOk != FALSE)
		{
			PLXAmem_free(&agile_ref_meas_params);
		}
		//loc_6864
		return iErrorCode;
	}

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0x13, 0x44E65ED6, req_msg_data, 0, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_6744  iErrorCode = o5

		//loc_6748
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_AGILE_ref_meas_mcs", 0, "%32D %d", "agile_ref_meas_params", "KVXTxMC:agile_reference_measurement_mcs", agile_ref_meas_params, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_AGILE_ref_meas_mcs", "< %s (%32D)=%R", local_KVXTxMC_singleton_object->component, "agile_ref_meas_params", "KVXTxMC:agile_reference_measurement_mcs", agile_ref_meas_params, iErrorCode);
		}
		else
		{
			//loc_6808  iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_AGILE_ref_meas_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_684C
		if (isOk != FALSE)
		{
			PLXAmem_free(&agile_ref_meas_params);
		}
		//loc_6864
		return iErrorCode;
	}

	agile_ref_meas_params->x_pos = rep_msg_data->x_pos;
	agile_ref_meas_params->y_pos = rep_msg_data->y_pos;
	agile_ref_meas_params->ls_spot = rep_msg_data->ls_spot;
	agile_ref_meas_params->droplet_threshold = rep_msg_data->droplet_threshold;

	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}
	//loc_6748
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, "KVXTxMC_get_AGILE_ref_meas_mcs", 0, "%32D %d", "agile_ref_meas_params", "KVXTxMC:agile_reference_measurement_mcs", agile_ref_meas_params, &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_get_AGILE_ref_meas_mcs", "< %s (%32D)=%R", local_KVXTxMC_singleton_object->component, "agile_ref_meas_params", "KVXTxMC:agile_reference_measurement_mcs", agile_ref_meas_params, iErrorCode);
	}
	else
	{
		//loc_6808  iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_AGILE_ref_meas_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	//loc_684C
	if (isOk != FALSE)
	{
		PLXAmem_free(&agile_ref_meas_params);
	}
	//loc_6864
	return iErrorCode;
}

int KVXTxMC_get_machine_constants(KVXTxMC_MACH_CONST_STRUCT *mach_const_p)
{

	char * req_msg_data = NULL; //var_4
	int(*pKVXTxMC_isim_get_machine_constants)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		KVXTxMC_MACH_CONST_STRUCT *mach_const_p) = 0; //var_8
	int iErrorCode = 0; //var_C
	KVXTxMC_MACH_CONST_STRUCT * rep_msg_data = NULL; //s2
	int act_len = 0;
	bool isOk = FALSE; //var_18

	if (!(iErrorCode != 0 || mach_const_p != NULL))
	{
		iErrorCode = OOXA_allocate_parameter(0x1B0, &mach_const_p, &isOk);
	}

	//loc_3448
	THXAtrace("KV", 2, "KVXTxMC_get_machine_constants", "> %s ()", local_KVXTxMC_singleton_object->component);

	if (iErrorCode != 0)
	{
		//loc_3658  iErrorCode = o5

		THXAtrace("KV", 2, "KVXTxMC_get_machine_constants", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_369C
		if (isOk != FALSE)
		{
			PLXAmem_free(&mach_const_p);
		}
		THXAtraceTP("KV", 0x4B56F661);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_34C4
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 6, 0x5B17421A, (void**)&pKVXTxMC_isim_get_machine_constants);
	}
	else
	{
		pKVXTxMC_isim_get_machine_constants = KVXTxMC_isim_get_machine_constants;
	}

	if (iErrorCode != 0)
	{
		//loc_36D4

		//loc_3658  iErrorCode = o5

		THXAtrace("KV", 2, "KVXTxMC_get_machine_constants", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_369C
		if (isOk != FALSE)
		{
			PLXAmem_free(&mach_const_p);
		}
		THXAtraceTP("KV", 0x4B56F661);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_get_machine_constants != NULL)
	{
		iErrorCode = pKVXTxMC_isim_get_machine_constants(local_KVXTxMC_singleton_object, mach_const_p);

		//loc_35D4 iErrorCode = o5

		//loc_35D8
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_machine_constants", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_machine_constants", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_3658  iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_machine_constants", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_369C
		if (isOk != FALSE)
		{
			PLXAmem_free(&mach_const_p);
		}
		THXAtraceTP("KV", 0x4B56F661);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_35D4 iErrorCode = o5

		//loc_35D8
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_machine_constants", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_machine_constants", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_3658  iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_machine_constants", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_369C
		if (isOk != FALSE)
		{
			PLXAmem_free(&mach_const_p);
		}
		THXAtraceTP("KV", 0x4B56F661);
		return iErrorCode;
	}

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 6, 0x5B17421A, req_msg_data, 0, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode)
	{
		//loc_35D4 iErrorCode = o5

		//loc_35D8
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_machine_constants", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_machine_constants", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_3658  iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_machine_constants", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		//loc_369C
		if (isOk != FALSE)
		{
			PLXAmem_free(&mach_const_p);
		}
		THXAtraceTP("KV", 0x4B56F661);
		return iErrorCode;
	}

	memcpy(mach_const_p, rep_msg_data, 0x1B0);
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}

	//loc_35D8
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, "KVXTxMC_get_machine_constants", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_get_machine_constants", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	else
	{
		//loc_3658  iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_machine_constants", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	//loc_369C
	if (isOk != FALSE)
	{
		PLXAmem_free(&mach_const_p);
	}
	THXAtraceTP("KV", 0x4B56F661);
	return iErrorCode;
}

int KVXTxMC_get_WM_scaninout_plane_area_params(KVXTxMC_WM_scaninout_minimum_scan_plane_area_params *scaninout_plane_area_params_p)
{
	char * req_msg_data = NULL; //var_4
	int(*pKVXTxMC_isim_get_WM_scaninout_plane_area_params)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		KVXTxMC_WM_scaninout_minimum_scan_plane_area_params *scaninout_plane_area_params_p) = 0; //var_8
	int iErrorCode = 0;  // var_C
	KVXTxMC_WM_scaninout_minimum_scan_plane_area_params * rep_msg_data = NULL;  //var_10
	int act_len = 0;  //var_14
	bool isOk = FALSE; //var_18

	THXAtraceTP("KV", 0x4B56F640);
	if (!(iErrorCode != 0 || scaninout_plane_area_params_p != NULL))
	{
		iErrorCode = OOXA_allocate_parameter(0x10, &scaninout_plane_area_params_p, &isOk);
	}

	//loc_2D74
	THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_plane_area_params", "> %s ()", local_KVXTxMC_singleton_object->component);
	if (iErrorCode != 0)
	{
		//loc_2F84 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_2FC8
		if (isOk != FALSE)
		{
			PLXAmem_free(&scaninout_plane_area_params_p);
		}
		//loc_2FE0
		THXAtraceTP("KV", 0x4B56F641);
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_2DF0
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 4, 0x461FEC3A, (void**)&pKVXTxMC_isim_get_WM_scaninout_plane_area_params);
	}
	else
	{
		pKVXTxMC_isim_get_WM_scaninout_plane_area_params = KVXTxMC_isim_get_WM_scaninout_plane_area_params;
	}

	//loc_2E24
	if (iErrorCode != 0)
	{
		//loc_3000
		//loc_2F84 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		//loc_2FC8
		if (isOk != FALSE)
		{
			PLXAmem_free(&scaninout_plane_area_params_p);
		}
		//loc_2FE0
		THXAtraceTP("KV", 0x4B56F641);
		return iErrorCode;
	}

	if (pKVXTxMC_isim_get_WM_scaninout_plane_area_params != NULL)
	{
		//loc_2EE8
		iErrorCode = pKVXTxMC_isim_get_WM_scaninout_plane_area_params(local_KVXTxMC_singleton_object, scaninout_plane_area_params_p);

		//loc_2F00 iErrorCode = o5
		//loc_2F04
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_WM_scaninout_plane_area_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_2F84 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_2FC8
		if (isOk != FALSE)
		{
			PLXAmem_free(&scaninout_plane_area_params_p);
		}
		//loc_2FE0
		THXAtraceTP("KV", 0x4B56F641);
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0, &rep_msg_data);
	if (iErrorCode != 0)
	{
		//loc_2F00 iErrorCode = o5
		//loc_2F04
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_WM_scaninout_plane_area_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_2F84 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_2FC8
		if (isOk != FALSE)
		{
			PLXAmem_free(&scaninout_plane_area_params_p);
		}
		//loc_2FE0
		THXAtraceTP("KV", 0x4B56F641);
		return iErrorCode;
	}

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 4, 0x461FEC3A, req_msg_data, 0, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_2F00 iErrorCode = o5
		//loc_2F04
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_WM_scaninout_plane_area_params", 0, "%d", &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		else
		{
			//loc_2F84 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}
		//loc_2FC8
		if (isOk != FALSE)
		{
			PLXAmem_free(&scaninout_plane_area_params_p);
		}
		//loc_2FE0
		THXAtraceTP("KV", 0x4B56F641);
		return iErrorCode;
	}

	scaninout_plane_area_params_p->min_x_size = rep_msg_data->min_x_size;
	scaninout_plane_area_params_p->min_y_size = rep_msg_data->min_y_size;
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}
	//loc_2F04
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, "KVXTxMC_get_WM_scaninout_plane_area_params", 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	else
	{
		//loc_2F84 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_WM_scaninout_plane_area_params", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}
	//loc_2FC8
	if (isOk != FALSE)
	{
		PLXAmem_free(&scaninout_plane_area_params_p);
	}
	//loc_2FE0
	THXAtraceTP("KV", 0x4B56F641);
	return iErrorCode;


}

int KVXTxMC_get_high_precision_XVSA_scan_mcs(KVXTxMC_high_precision_XVSA_scan * high_precision_XVSA_scan_p)
{
	char * req_msg_data = NULL;  //var_4
	int(*pKVXTxMC_isim_get_high_precision_XVSA_scan_mcs)(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
		KVXTxMC_high_precision_XVSA_scan * high_precision_XVSA_scan_p) = 0; //var_8
	int iErrorCode = 0; //var_C
	KVXTxMC_high_precision_XVSA_scan *rep_msg_data = NULL; //var_10
	int act_len = 0; //var_14
	bool isOk = FALSE;  //var_18

	if (high_precision_XVSA_scan_p == NULL)
	{
		iErrorCode = OOXA_allocate_parameter(0x18, &high_precision_XVSA_scan_p, &isOk);
	}

	//loc_4F18
	THXAtrace("KV", 2, "KVXTxMC_get_high_precision_XVSA_scan_mcs", "> %s ()", local_KVXTxMC_singleton_object->component);
	if (iErrorCode != 0)
	{
		//loc_5174 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_high_precision_XVSA_scan_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		if (isOk != FALSE)
		{
			PLXAmem_free(&high_precision_XVSA_scan_p);
		}
		return iErrorCode;
	}

	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		//loc_4F98
		iErrorCode = OOXA_find_method((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xD, 0x2C0F9989, (void**)&pKVXTxMC_isim_get_high_precision_XVSA_scan_mcs);
	}
	else
	{
		pKVXTxMC_isim_get_high_precision_XVSA_scan_mcs = KVXTxMC_isim_get_high_precision_XVSA_scan_mcs;
	}

	//loc_4FCC
	if (iErrorCode != 0)
	{
		//loc_51D8
		//loc_5174 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_high_precision_XVSA_scan_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);

		if (isOk != FALSE)
		{
			PLXAmem_free(&high_precision_XVSA_scan_p);
		}
		return iErrorCode;
	}

	if (pKVXTxMC_isim_get_high_precision_XVSA_scan_mcs != NULL)
	{
		iErrorCode = pKVXTxMC_isim_get_high_precision_XVSA_scan_mcs(local_KVXTxMC_singleton_object, high_precision_XVSA_scan_p);

		//loc_50B0 iErrorCode = o5
		//loc_50B4
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_high_precision_XVSA_scan_mcs", 0, "%24D %d",
				"high_precision_XVSA_scan_p", "KVXTxMC:high_precision_XVSA_scan", high_precision_XVSA_scan_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_high_precision_XVSA_scan_mcs", "< %s (%24D)=%R", local_KVXTxMC_singleton_object->component,
				"high_precision_XVSA_scan_p", "KVXTxMC:high_precision_XVSA_scan", high_precision_XVSA_scan_p, iErrorCode);
		}
		else
		{
			//loc_5174 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_high_precision_XVSA_scan_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		if (isOk != FALSE)
		{
			PLXAmem_free(&high_precision_XVSA_scan_p);
		}
		return iErrorCode;
	}

	iErrorCode = OOXA_allocate_buffer(0, &req_msg_data);
	if (iErrorCode != 0)
	{
		//loc_50B0 iErrorCode = o5
		//loc_50B4
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_high_precision_XVSA_scan_mcs", 0, "%24D %d",
				"high_precision_XVSA_scan_p", "KVXTxMC:high_precision_XVSA_scan", high_precision_XVSA_scan_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_high_precision_XVSA_scan_mcs", "< %s (%24D)=%R", local_KVXTxMC_singleton_object->component,
				"high_precision_XVSA_scan_p", "KVXTxMC:high_precision_XVSA_scan", high_precision_XVSA_scan_p, iErrorCode);
		}
		else
		{
			//loc_5174 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_high_precision_XVSA_scan_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		if (isOk != FALSE)
		{
			PLXAmem_free(&high_precision_XVSA_scan_p);
		}
		return iErrorCode;
	}

	iErrorCode = OOXA_send_receive((OOXA_object_t*)local_KVXTxMC_singleton_object, "KVXTxMC:", 0xD, 0x2C0F9989, req_msg_data, 0, &rep_msg_data, &act_len, -1, 0x96);
	if (iErrorCode != 0)
	{
		//loc_50B0 iErrorCode = o5
		//loc_50B4
		if (iErrorCode == 0)
		{
			THXAdataRequest("KV", 5, "KVXTxMC_get_high_precision_XVSA_scan_mcs", 0, "%24D %d",
				"high_precision_XVSA_scan_p", "KVXTxMC:high_precision_XVSA_scan", high_precision_XVSA_scan_p, &iErrorCode);
			THXAtrace("KV", 2, "KVXTxMC_get_high_precision_XVSA_scan_mcs", "< %s (%24D)=%R", local_KVXTxMC_singleton_object->component,
				"high_precision_XVSA_scan_p", "KVXTxMC:high_precision_XVSA_scan", high_precision_XVSA_scan_p, iErrorCode);
		}
		else
		{
			//loc_5174 iErrorCode = o5
			THXAtrace("KV", 2, "KVXTxMC_get_high_precision_XVSA_scan_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
		}

		if (isOk != FALSE)
		{
			PLXAmem_free(&high_precision_XVSA_scan_p);
		}
		return iErrorCode;
	}

	high_precision_XVSA_scan_p->use_high_precision = rep_msg_data->use_high_precision;
	high_precision_XVSA_scan_p->settle_time = rep_msg_data->settle_time;
	high_precision_XVSA_scan_p->y_speed = rep_msg_data->y_speed;
	if (rep_msg_data != NULL)
	{
		OOXA_release_buffer(rep_msg_data);
	}
	//loc_50B4
	if (iErrorCode == 0)
	{
		THXAdataRequest("KV", 5, "KVXTxMC_get_high_precision_XVSA_scan_mcs", 0, "%24D %d",
			"high_precision_XVSA_scan_p", "KVXTxMC:high_precision_XVSA_scan", high_precision_XVSA_scan_p, &iErrorCode);
		THXAtrace("KV", 2, "KVXTxMC_get_high_precision_XVSA_scan_mcs", "< %s (%24D)=%R", local_KVXTxMC_singleton_object->component,
			"high_precision_XVSA_scan_p", "KVXTxMC:high_precision_XVSA_scan", high_precision_XVSA_scan_p, iErrorCode);
	}
	else
	{
		//loc_5174 iErrorCode = o5
		THXAtrace("KV", 2, "KVXTxMC_get_high_precision_XVSA_scan_mcs", "< %s ()=%R", local_KVXTxMC_singleton_object->component, iErrorCode);
	}

	if (isOk != FALSE)
	{
		PLXAmem_free(&high_precision_XVSA_scan_p);
	}
	return iErrorCode;
}

int KVXTxMC_isim_get_machine_constants(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC_MACH_CONST_STRUCT *mach_const_p)
{

	THXAtrace("KV", 2, __FUNCTION__, "> ( START )");

	if (mach_const_p == NULL)
	{
		THXAtrace("KV", 2, "========", "> ( mach_const_p = %s )", "NULL");
		THXAtrace("KV", 2, "========", "< ( {extensions:  x_pos = %.6f [mm], y_pos = %.6f [mm], x_neg = %.6f [mm], y_neg = %.6f [mm], "
			"xy plane areas:  min_x_size = %.6f [mm], min_y_size = %.6f [mm], sa_level_high_precision_count = %d} )",
			0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
	}
	else
	{
		//loc_79F4
		THXAtrace("KV", 2, "========", "> ( mach_const_p = %s )", "*");

		mach_const_p->wm_scaninout_glc_candidate_area_extension_params.extension_x_pos = 0.005;  //0x0
		mach_const_p->wm_scaninout_glc_candidate_area_extension_params.extension_y_pos = 0.005;  //0x8
		mach_const_p->wm_scaninout_glc_candidate_area_extension_params.extension_x_neg = 0.005;  //x010
		mach_const_p->wm_scaninout_glc_candidate_area_extension_params.extension_y_neg = 0.005;  //0x18
		mach_const_p->wm_scaninout_minimum_scan_plane_area_params.min_x_size = 0.005;  //0x20
		mach_const_p->wm_scaninout_minimum_scan_plane_area_params.min_y_size = 0.005;  //0x28
		mach_const_p->sa_level_high_precision_count = 0xA; //0x30

		THXAtrace("KV", 2, "========", "< ( {extensions:  x_pos = %.6f [mm], y_pos = %.6f [mm], x_neg = %.6f [mm], y_neg = %.6f [mm], "
			"xy plane areas:  min_x_size = %.6f [mm], min_y_size = %.6f [mm], sa_level_high_precision_count = %d} )",
			mach_const_p->wm_scaninout_glc_candidate_area_extension_params.extension_x_pos * 1000.0,
			mach_const_p->wm_scaninout_glc_candidate_area_extension_params.extension_y_pos * 1000.0,
			mach_const_p->wm_scaninout_glc_candidate_area_extension_params.extension_x_neg * 1000.0,
			mach_const_p->wm_scaninout_glc_candidate_area_extension_params.extension_y_neg * 1000.0,
			mach_const_p->wm_scaninout_minimum_scan_plane_area_params.min_x_size * 1000.0,
			mach_const_p->wm_scaninout_minimum_scan_plane_area_params.min_y_size * 1000.0, "@$");
	}


	THXAtrace("KV", 2, __FUNCTION__, "< ( END ) = %s", "OK");
	return 0;
}
