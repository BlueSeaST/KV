/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : LE
* 模块名称 : LEXAxDEF
* 文件名称 : LEXAxDEF_tc.h
* 概要描述 :
*	LE组件LEXAxDEF数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _LEXAxDEF_TC_H_
#define _LEXAxDEF_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <LFXAxDEF_tc.h> 
#include <LEXAxSPOT_tc.h> 
#include <ADELme_grid_tc.h> 
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    LEXAxDEF_SCAN_TYPE_MIN = -1,
    LEXAxDEF_SCAN_TYPE_ZMAP = 0,
    LEXAxDEF_SCAN_TYPE_PDGC = 1,
    LEXAxDEF_SCAN_TYPE_AG = 2,
    LEXAxDEF_SCAN_TYPE_MAX = 3,
} LEXAxDEF_scan_type_t;

typedef enum
{
    LEXAxDEF_CALIB_PROC_ID_MIN = -1,
    LEXAxDEF_CALIB_PROC_ID_CRYSTAL_FREQ = 0,
    LEXAxDEF_CALIB_PROC_ID_DARK_CURR = 1,
    LEXAxDEF_CALIB_PROC_ID_MAX = 2,
} LEXAxDEF_calib_proc_id_t;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef double LEXAxDEF_pdgc_grid_elem_t;

typedef struct
{
    int len;
    int max_len;
    LEXAxDEF_pdgc_grid_elem_t* array;
} LEXAxDEF_pdgc_grid_array_t;

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned int LEXAxDEF_pdgc_table_id_t;

typedef struct
{
    int len;
    int max_len;
    LEXAxDEF_pdgc_table_id_t* array;
} LEXAxDEF_pdgc_table_id_array_t;

typedef struct
{
    LEXAxDEF_pdgc_table_id_t pdgcTableId;
    ADELgen_RecipeIDType subRecipeName;
    ADELsr_CorrectionSetNameType correctionSetName;
    ADELme_grid_LsGridType LSGrid;
} LEXAxDEF_pdgc_table_params_t;

typedef struct
{
    int len;
    int max_len;
    LEXAxDEF_pdgc_table_params_t* array;
} LEXAxDEF_pdgc_table_params_array_t;

typedef struct
{
    double position; // 0x0
    LEXAxDEF_pdgc_table_id_t pdgcTableId; // 0x8
    int index; // 0xC
} LEXAxDEF_zmap_meas_point_def_t; // 0x10

typedef struct
{
    double position;
    LEXAxDEF_pdgc_table_id_t rawPdgcTableId;
    int index;
} LEXAxDEF_pdgc_meas_point_def_t;

typedef struct
{
    double position;
} LEXAxDEF_AG_meas_point_def_t;

typedef LEXAxDEF_zmap_meas_point_def_t LEXAxDEF_meas_point_def_t_zmap[0x258];

typedef LEXAxDEF_pdgc_meas_point_def_t LEXAxDEF_meas_point_def_t_pdgc[0x258];

typedef LEXAxDEF_AG_meas_point_def_t LEXAxDEF_meas_point_def_t_ag[0x258];

typedef struct
{
    LEXAxDEF_scan_type_t element; // 0x0
    int filler0; // 0x4
    union
    {
        LEXAxDEF_meas_point_def_t_zmap zmap;
        LEXAxDEF_meas_point_def_t_pdgc pdgc;
        LEXAxDEF_meas_point_def_t_ag ag;
        char one_char;
    } spec; // 0x8
} LEXAxDEF_meas_point_def_t; // 0x2588

typedef struct
{
	int numEntries; // 0x0
	LEXAxDEF_meas_point_def_t measPointTbl; // 0x8
} LEXAxDEF_measgrid_table_t; // 0x2590

typedef struct
{
	double position; // 0x0
	LEXAxSPOT_spot_selection_t spots; // 0x8
} LEXAxDEF_spot_switch_point_t; // 0x10

typedef LEXAxDEF_spot_switch_point_t LEXAxDEF_meas_spot_valid_table_t_validSpots[0x258];

typedef struct
{
	int numEntries; // 0x0
	LEXAxDEF_meas_spot_valid_table_t_validSpots validSpots; // 0x8
} LEXAxDEF_meas_spot_valid_table_t; // 0x2588

typedef LEXAxDEF_spot_switch_point_t LEXAxDEF_servo_spot_valid_table_t_validSpots[0x258];

typedef struct
{
	int numEntries; // 0x0
	LEXAxDEF_servo_spot_valid_table_t_validSpots validSpots; // 0x8
} LEXAxDEF_servo_spot_valid_table_t; // 0x2588

typedef int LEXAxDEF_statmeas_report_t_numMeasurementErrors[0x9];

typedef int LEXAxDEF_statmeas_report_t_numSystemErrors[0x9];

typedef struct
{
	LEXAxDEF_statmeas_report_t_numMeasurementErrors numMeasurementErrors; // 0x0
	//LEXAxDEF_statmeas_report_t_numSystemErrors numSystemErrors; // 0x24
	//int numMeasErrorsCapture; // 0x48
	//int numSystemErrorsCapture; // 0x4C
	//unsigned int errorSpec; // 0x50
	//double scanStartTime; // 0x58
	//double scanDuration; // 0x60
	//bool m4InTheCorrectPeriod; // 0x68
	char unk_0x24[4];
	LEXAxDEF_statmeas_report_t_numSystemErrors numSystemErrors; // 0x28
	// 感觉这个地址应该是0x28而不是0x24，后面的偏移赋值才能和类型对应，填充4字节未知
	char unk_0x4C[4];
	int numMeasErrorsCapture; // 感觉这个地方应该是0x50，填充4字节未知
	int numSystemErrorsCapture; // 0x54
	unsigned int errorSpec; // 0x58
	double scanStartTime; // 0x60
	double scanDuration; // 0x68
	bool m4InTheCorrectPeriod; // 0x70
} LEXAxDEF_statmeas_report_t; // 0x78

typedef double LEXAxDEF_statmeas_data_t_zSpot[0x9];

typedef double LEXAxDEF_statmeas_data_t_zSpotStdDev[0x9];

typedef struct
{
	LEXAxDEF_statmeas_data_t_zSpot zSpot; // 0x0 // 0x80
	LEXAxDEF_statmeas_data_t_zSpotStdDev zSpotStdDev; // 0x48
	double zCapture; // 0x90
	double zCaptureStdDev; // 0x98
	unsigned int zValid; // 0xA0
	int numMeasurements; // 0xA4
} LEXAxDEF_statmeas_data_t; // 0xA8

typedef struct
{
	LEXAxDEF_pdgc_table_id_t tableId;	
	int numEntries;
	int numInvalidEntries;
} LEXAxDEF_pdgc_report_t;

typedef struct
{
	int len;
	int max_len;
	LEXAxDEF_pdgc_report_t *array;
} LEXAxDEF_pdgc_report_array_t;

typedef struct
{
	int scanId;
	int numSystemErrors;
	int numMeasurementErrors;
	LFXAxDEF_error_source_t errorSpec;
	double scanStartTime;
	double scanDuration;
	bool m4InTheCorrectPeriod;
	bool periodJumpDetected;
} LEXAxDEF_scan_report_t;

typedef double LEXAxDEF_zmap_scan_meas_t_zSpot[0x9];

typedef struct
{
	LEXAxDEF_zmap_scan_meas_t_zSpot zSpot;	
	double zCapture;
	LEXAxSPOT_spot_selection_t zValid;
	LEXAxSPOT_spot_selection_t zUseable;
	LEXAxSPOT_spot_selection_t measError;
	LEXAxSPOT_spot_selection_t systemError;
	double measPos;
	LEXAxSPOT_spot_selection_t esmOccured;
} LEXAxDEF_zmap_scan_meas_t;

typedef LEXAxDEF_zmap_scan_meas_t LEXAxDEF_scan_data_t_meas[0x9];

typedef struct
{
	int scanId;
	int numMeas;
	LEXAxDEF_scan_data_t_meas meas;
} LEXAxDEF_scan_data_t;

typedef struct
{
	int numMeasurementErrors;
	int numSystemErrors;
	LFXAxDEF_error_source_t errorSpec;
	double scanStartTime;
	double scanDuration;
} LEXAxDEF_AG_statemeas_report_t;



#endif // _LEXAxDEF_TC_H_
