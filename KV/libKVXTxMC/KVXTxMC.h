/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 :
* 所属组件 : KV
* 模块名称 : KVXTxMC
* 文件名称 : KVXTxMC.h
* 概要描述 :
*
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _KVXTxMC_H_
#define _KVXTxMC_H_

/*-------------------- 头文件 --------------------*/
#include<stdlib.h>
 // #include<stdbool.h>
#include <string.h>
#include <stdio.h> 

#include <KVXTxMC_tc.h>
#include<KVXTxMC_extern.h>
#include<base.h>
#include <THXA.h>
#include <ERXA.h>
#include <OOXA.h>
#include <PLXA.h>

#include <KVXT_tc.h>


/*-------------------- 宏定义 --------------------*/





/*----------------------- 枚举定义 -----------------------*/





/*------------------------ 结构体 ------------------------*/

typedef struct
{
	// 这个在.got表里可以看到结构体内容
	char unk_s0x0[0x4];
	char unk_s0x4[0xC];
	char component[0x60];
}KVXTxMC_singleton_object;



//未知结构体


//应用于KVXTxMC_set_iVSA_plate_PDGC
typedef struct{
	WPxCHUCK_chuck_id_enum chuck_id;
	MEXAxWAFxPLATE_wafer_level_plate plate_id;
	KVXTxMC_iVSA_plate_PDGC * plate_PDGC_p;
}KVXTxMC_unk_1;

//应用于KVXTxMC_get_iVSA_plate_PDGC
typedef struct{
	WPxCHUCK_chuck_id_enum chuck_id;
	MEXAxWAFxPLATE_wafer_level_plate plate_id;
}KVXTxMC_unk_2;

//应用于KVXTxMC_set_ag_ls_chuck_resist_offsets
typedef struct{
	int a;
	KVXTxMC_AG_LS_resist_offsets_mcs *ag_ls_resist_offsets;
}KVXTxMC_unk_3;

//应用于KVXTxMC_set_LS_drift_correction
typedef struct{
	WPxCHUCK_chuck_id_enum chuck_id;
	KVXTxMC_LS_drift_correction *LS_drift_corr_p;  //这个结构体的大小不符合
}KVXTxMC_unk_4;

//应用于KVXTxMC_set_LS_stroke_tilt
typedef struct{
	WPxCHUCK_chuck_id_enum chuck_id;
	KVXTxMC_LS_stroke_tilt *LS_stroke_tilt_p;
}KVXTxMC_unk_5;

typedef struct{
	bool  ero_correction_p;
	double  ero_dist_edge_p;
}KVXTxMC_unk_6;




/*----------------------- 函数声明 -----------------------*/

int KVXTxMC_isim_set_iVSA_plate_PDGC(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id, MEXAxWAFxPLATE_wafer_level_plate plate_id, KVXTxMC_iVSA_plate_PDGC * plate_PDGC_p);

int KVXTxMC_isim_get_iVSA_plate_PDGC(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id, MEXAxWAFxPLATE_wafer_level_plate plate_id, KVXTxMC_iVSA_plate_PDGC * plate_PDGC_p);

int KVXTxMC_isim_set_ag_ls_chuck_resist_offsets(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	int chuck_ix, KVXTxMC_AG_LS_resist_offsets_mcs * ag_ls_resist_offsets);

int KVXTxMC_isim_set_LS_drift_correction(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_drift_correction * LS_drift_corr_p);

int KVXTxMC_isim_get_LS_drift_correction(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_drift_correction * LS_drift_corr_p);

int KVXTxMC_isim_set_LS_stroke_tilt(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_stroke_tilt * LS_stroke_tilt_p);

int KVXTxMC_isim_get_ag_ls_chuck_resist_offsets(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	int chuck_ix, KVXTxMC_AG_LS_resist_offsets_mcs *ag_ls_resist_offsets);

int KVXTxMC_isim_set_WM_scaninout_GLC_candidate_area_extension_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params * extensions_p);

int KVXTxMC_isim_get_fsm_ero_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, 
	bool *ero_correction_p, double *ero_dist_edge_p);

int KVXTxMC_isim_set_WM_scaninout_plane_area_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC_WM_scaninout_minimum_scan_plane_area_params * scaninout_plane_area_params_p);

int KVXTxMC_isim_set_SUSD_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC__set_SUSD_params_SUSD_correction_params * SUSD_correction_params);

int KVXTxMC_isim_get_LS_stroke_tilt(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, 
	WPxCHUCK_chuck_id_enum chuck_id, KVXTxMC_LS_stroke_tilt * LS_stroke_tilt_p);

int KVXTxMC_isim_save(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, KVXTxMC__save_id *id);

int KVXTxMC_isim_get_SUSD_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, 
	KVXTxMC__get_SUSD_params_SUSD_correction_params *SUSD_correction_params);

int KVXTxMC_isim_get_WM_scaninout_GLC_candidate_area_extension_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, 
	KVXTxMC_WM_scaninout_GLC_candidate_area_extension_params *extensions_p);

int KVXTxMC_isim_get_AGILE_ref_meas_mcs(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, 
	KVXTxMC_agile_reference_measurement_mcs * agile_ref_meas_params);

int KVXTxMC_isim_get_machine_constants(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, 
	KVXTxMC_MACH_CONST_STRUCT *mach_const_p);

int KVXTxMC_isim_get_WM_scaninout_plane_area_params(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object,
	KVXTxMC_WM_scaninout_minimum_scan_plane_area_params *scaninout_plane_area_params_p);

int KVXTxMC_isim_get_high_precision_XVSA_scan_mcs(KVXTxMC_singleton_object *local_KVXTxMC_singleton_object, 
	KVXTxMC_high_precision_XVSA_scan * high_precision_XVSA_scan_p);








#endif  //_KVXTxMC_H_