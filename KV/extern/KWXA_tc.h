/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KW
* 模块名称 : KWXA
* 文件名称 : KWXA_tc.h
* 概要描述 :
*	KW组件KWXA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KWXA_TC_H_
#define _KWXA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <DTXAxIMAGE_tc.h> 
#include <base.h> 
#include <WPxCHUCK_tc.h> 



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    KWXA_FILE_STORAGE_TYPE_ASCII = 0,
} KWXA_file_storage_type;

typedef double KWXA_wafer_map_wafer_map_data[0x100000];

typedef struct
{
    int size; // 0x0
	WPxCHUCK_chuck_id_enum chuck_id; // 0x4
	int max_nr_of_x_gridlines; // 0x8
	int max_nr_of_wams; // 0xC
	int nr_of_wams; // 0x10
	int x_gridline_offset_list_bytenr; // 0x14
	int wam_index_ref_list_bytenr; // 0x18
	int wam_id_ref_list_bytenr; // 0x1C
	KWXA_wafer_map_wafer_map_data wafer_map_data; // 0x20
} KWXA_wafer_map; // 0x800020

typedef double KWXA_small_wafer_map_wafer_map_data[0xC800];

typedef struct
{
    int size;
    WPxCHUCK_chuck_id_enum chuck_id;
    int max_nr_of_x_gridlines;
    int max_nr_of_wams;
    int nr_of_wams;
    int x_gridline_offset_list_bytenr;
    int wam_index_ref_list_bytenr;
    int wam_id_ref_list_bytenr;
    KWXA_small_wafer_map_wafer_map_data wafer_map_data;
} KWXA_small_wafer_map;

typedef double KWXA_wafer_area_measurement_wam_data[0x1];

typedef struct
{
    int size; // 0x0
    int id; // 0x4
	xyvect centre_xy; // 0x8
	double x_gridlines_shift; // 0x20
    int nr_of_x_gridlines; // 0x28
	int nr_of_y_gridlines; // 0x2C
	int x_gridline_id_list_bytenr; // 0x30
	int y_gridline_offset_list_bytenr; // 0x34
	int z_value_list_bytenr; // 0x38
	int valid_flag_list_bytenr; // 0x3C
    KWXA_wafer_area_measurement_wam_data wam_data; // 0x40
} KWXA_wafer_area_measurement; // 0x48

//TBD---可能是这个类型-_-，谁确定了告诉我！
typedef unsigned char KWXA_x_gridline_id;

typedef struct
{
    int wam_id;
    bool FWOL_requested;
} KWXA_wam_info;

typedef struct
{
    int len;
    int max_len;
    KWXA_wam_info* array;
} KWXA_wam_info_list;

typedef struct
{
    int len;
    int max_len;
    int* array;
} KWXA_weight_factors_overruled_wams;

typedef struct
{
    WPxCHUCK_chuck_id_enum chuck_id; // 0x0
    zrxryvect global_wafer_wedge; // 0x8
    KWXA_weight_factors_overruled_wams weight_factors_overruled_wams; // 0x20
    KWXA_wam_info_list wam_info_list; // 0x2C
} KWXA_wafer_map_info; // 0x38

typedef struct
{
    DTXAxIMAGE_image_id_string image_id; // 0x0
    int fingerprint_id; // 0x20
} KWXA_fingerprint_mapping; // 0x24

typedef struct
{
    int len;
    int max_len;
    KWXA_fingerprint_mapping* array;
} KWXA_fingerprint_mapping_list;

typedef double KWXA_binary_wafer_map_wafer_map_data[0x9C4];

typedef struct
{
    int size;
    WPxCHUCK_chuck_id_enum chuck_id;
    int max_nr_of_x_gridlines;
    int max_nr_of_wams;
    int nr_of_wams;
    int x_gridline_offset_list_bytenr;
    int wam_index_ref_list_bytenr;
    int wam_id_ref_list_bytenr;
    KWXA_binary_wafer_map_wafer_map_data wafer_map_data;
} KWXA_binary_wafer_map;

typedef double KWXA_binary_wafer_area_measurement_wam_data[0x1];

typedef struct
{
    int size;
    int id;
    xyvect centre_xy;
    double x_gridlines_shift;
    int nr_of_x_gridlines;
    int nr_of_y_gridlines;
    int x_gridline_id_list_bytenr;
    int y_gridline_offset_list_bytenr;
    int z_value_list_bytenr;
    int valid_flag_list_bytenr;
    KWXA_binary_wafer_area_measurement_wam_data wam_data;
} KWXA_binary_wafer_area_measurement;



#endif // _KWXA_TC_H_
