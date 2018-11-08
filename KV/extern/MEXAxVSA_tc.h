/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : ME
* 模块名称 : MEXAxVSA
* 文件名称 : MEXAxVSA_tc.h
* 概要描述 :
*	ME组件MEXAxVSA数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _MEXAxVSA_TC_H_
#define _MEXAxVSA_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <MEXAxWAFxPLATE_tc.h> 
#include <WPxCHUCK_tc.h> 
#include <MEXAxSGRID_tc.h> 
#include <base.h> 
//extern MEEWxEVPxTISxLAYOUT_TIS1_CHUCK1_LAYOUT_EXPOSE  E1  //119, 124
//extern MEEWxEVPxTISxLAYOUT_TIS1_CHUCK1_LAYOUT_EXPOSE  E1_6D  //119, 126
//extern MEEWxEVPxTISxLAYOUT_TIS1_CHUCK1_LAYOUT_EXPOSE  E1_6D_DUV  //119, 125
//extern MEEWxEVPxTISxLAYOUT_TIS1_CHUCK2_LAYOUT_EXPOSE  E1  //131, 124
//extern MEEWxEVPxTISxLAYOUT_TIS1_CHUCK2_LAYOUT_EXPOSE  E1_6D  //131, 126
//extern MEEWxEVPxTISxLAYOUT_TIS1_CHUCK2_LAYOUT_EXPOSE  E1_6D_DUV  //131, 125



/*-------------------------------- Defines -------------------------------*/




/*-------------------------- Enums and Structs ---------------------------*/

typedef double MEXAxVSA_XVSA_profile_Z[0x258];

typedef struct
{
    double start; // 0x0
    double end; // 0x8
    int Npts; // 0x10
    MEXAxVSA_XVSA_profile_Z Z; // 0x18
} MEXAxVSA_XVSA_profile; // 0x12D8

typedef struct
{
    double Ry; // 0x0
    double X_curvature; // 0x8
    xyvect ref_pos; // 0x10
    MEXAxVSA_XVSA_profile profile; // 0x20
} MEXAxVSA_XVSA_fiducial_drift; // 0x12E8

typedef struct
{
    MEXAxVSA_XVSA_fiducial_drift TIS1;
    MEXAxVSA_XVSA_fiducial_drift TIS2;
} MEXAxVSA_XVSA_results;

typedef struct
{
    MEXAxSGRID_stage_grid stage_grid;
    MEXAxVSA_XVSA_results XVSA;
    bool both_TIS_measured;
} MEXAxVSA_XSA_results;

typedef double MEXAxVSA_XVSA_scan_data_point_zspot[0x9];

typedef struct
{
    MEXAxVSA_XVSA_scan_data_point_zspot zspot; // 0x0 // 0x8
    int valid; // 0x48
    int requested; // 0x4C
} MEXAxVSA_XVSA_scan_data_point; // 0x50

typedef MEXAxVSA_XVSA_scan_data_point MEXAxVSA_XVSA_scan_data_data[0x258];

typedef struct
{
    int Npts; // 0x0
    MEXAxVSA_XVSA_scan_data_data data; // 0x8 结构体中有double
} MEXAxVSA_XVSA_scan_data; // 0xBB88

typedef struct
{
    MEXAxVSA_XVSA_scan_data TIS1;
    MEXAxVSA_XVSA_scan_data TIS2;
    MEXAxVSA_XVSA_scan_data TIS1_SOSI_ref;
    MEXAxVSA_XVSA_scan_data TIS2_SOSI_ref;
} MEXAxVSA_XVSA_scan_refs;

typedef struct
{
    double Ry_uncorrected; // 0x0
    double Ry_corrected; // 0x8
    double LS_Ry; // 0x10
	double deformation; // 0x18
    double deformation_value; // 0x20
} MEXAxVSA_XVSA_thresholds; // 0x28

typedef enum
{
    MEXAxVSA_IVSA_LANE_1 = 0,
    MEXAxVSA_IVSA_LANE_2 = 1,
    MEXAxVSA_IVSA_LANE_3 = 2,
} MEXAxVSA_iVSA_level_lane_enum;

typedef double MEXAxVSA_iVSA_lane_data_z[0x9];

typedef struct
{
    xyvect position; // 0x0
    MEXAxVSA_iVSA_lane_data_z z; // 0x10
} MEXAxVSA_iVSA_lane_data; // 0x58

typedef MEXAxVSA_iVSA_lane_data MEXAxVSA_iVSA_level_lanes_lane[0x3];

typedef struct
{
    MEXAxVSA_iVSA_level_lanes_lane lane; // 0x0
    bool valid; // 0x108
} MEXAxVSA_iVSA_level_lanes; // 0x110



/*--------------------DD Interfaces --------------------*/

//TBD函数返回值类型、参数传值or指针不确定-_-
int MEXAxVSA_get_XVSA_reference(const WPxCHUCK_chuck_id_enum *chuck_id,
	MEXAxVSA_XVSA_scan_data *XVSA_TIS1_reference,
	MEXAxVSA_XVSA_scan_data *XVSA_TIS2_reference);
int MEXAxVSA_get_XVSA_SOSI_reference(const WPxCHUCK_chuck_id_enum *chuck_id,
	MEXAxVSA_XVSA_scan_data *XVSA_TIS1_SOSI_reference,
	MEXAxVSA_XVSA_scan_data *XVSA_TIS2_SOSI_reference);
int MEXAxVSA_get_XVSA_thresholds(MEXAxVSA_XVSA_thresholds *XVSA_warning_levels,
	MEXAxVSA_XVSA_thresholds *XVSA_error_levels);
int MEXAxVSA_get_iVSA_level_lanes(const WPxCHUCK_chuck_id_enum *chuck_id,
	const MEXAxWAFxPLATE_wafer_level_plate *plate_id,
	MEXAxVSA_iVSA_level_lanes *level_lanes_p);



#endif // _MEXAxVSA_TC_H_
