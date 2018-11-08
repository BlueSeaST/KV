/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 所属组件 : KV
* 模块名称 : KVXAxLOTxPAR
* 文件名称 : KVXAxLOTxPAR_tc.h
* 概要描述 :
*	KV组件KVXAxLOTxPAR数据结构定义
* 历史记录 :
* 版本    日期    作者    内容
*****************************************************************************/
#ifndef _KVXAxLOTxPAR_TC_H_
#define _KVXAxLOTxPAR_TC_H_

/*------------------------------- Includes -------------------------------*/
#include <ADELsr_tc.h> 
#include <ADELgen_tc.h> 
#include <DTXA_tc.h> 
#include <DTXAxIMAGE_tc.h> 
#include <LEXAxSPOT_tc.h> 
#include <RLxTABLESET_tc.h> 
#include <base.h> 



/*-------------------------------- Defines -------------------------------*/



/*-------------------------- Enums and Structs ---------------------------*/

typedef enum
{
    KVXAxLOTxPAR_FSD_THRESHOLD_Z_SPEC_RELATIVE = 0,
    KVXAxLOTxPAR_FSD_THRESHOLD_Z_SPEC_ABSOLUTE = 1,
} KVXAxLOTxPAR_FSD_threshold_z_spec;

typedef struct
{
    int len;
    int max_len;
    double* array;
} KVXAxLOTxPAR_double_array;

typedef struct
{
    int len;
    int max_len;
    xyvect* array;
} KVXAxLOTxPAR_xyvect_array;

typedef struct
{
    int len;
    int max_len;
    int* array;
} KVXAxLOTxPAR_int_array;

typedef enum
{
    KVXAxLOTxPAR_GLC_TYPE_LEVELLING = 0,
    KVXAxLOTxPAR_GLC_TYPE_COMBINED = 1,
    KVXAxLOTxPAR_GLC_TYPE_SAFETY = 2,
} KVXAxLOTxPAR_GLC_type_enum;

typedef struct
{
    KVXAxLOTxPAR_GLC_type_enum glc_type; // 0x0
    xyvect capture_xy; //0x8
    xyvect centre_xy; // 0x18
    double start_angle; // 0x28
    double end_angle; // 0x30
    double radius; // 0x38
	RLxTABLESET_table_set_t le_tableset; // 0x40
} KVXAxLOTxPAR_GLC_params; // 0x

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_GLC_params* array;
} KVXAxLOTxPAR_GLC_lot_data;

typedef enum
{
    KVXAxLOTxPAR_GRID_POINT_TYPE_NORMAL = 0,
    KVXAxLOTxPAR_GRID_POINT_TYPE_EXTENDED = 1,
} KVXAxLOTxPAR_grid_point_type_enum;

typedef KVXAxLOTxPAR_grid_point_type_enum KVXAxLOTxPAR_grid_point_x_array_x_array[0x9];

typedef struct
{
    KVXAxLOTxPAR_grid_point_x_array_x_array x_array;
} KVXAxLOTxPAR_grid_point_x_array;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_grid_point_x_array* array;
} KVXAxLOTxPAR_grid_point_y_array;

typedef struct
{
    LEXAxSPOT_spot_selection_t spot_selection;
    KVXAxLOTxPAR_double_array y_gridlines;
    KVXAxLOTxPAR_double_array x_gridlines;
    KVXAxLOTxPAR_grid_point_y_array grid_points;
    bool is_small_image;
} KVXAxLOTxPAR_WM_grid_template;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_WM_grid_template* array;
} KVXAxLOTxPAR_WM_grid_template_array;

typedef enum
{
    KVXAxLOTxPAR_MEAS_POINT_TYPE_INVALID = 0,
    KVXAxLOTxPAR_MEAS_POINT_TYPE_VALID = 1,
    KVXAxLOTxPAR_MEAS_POINT_TYPE_CDFEC = 2,
    KVXAxLOTxPAR_MEAS_POINT_TYPE_FEC = 3,
} KVXAxLOTxPAR_meas_point_type_enum;

typedef KVXAxLOTxPAR_meas_point_type_enum KVXAxLOTxPAR_meas_point_x_array_x_array[0x9];

typedef struct
{
    KVXAxLOTxPAR_meas_point_x_array_x_array x_array;
} KVXAxLOTxPAR_meas_point_x_array;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_meas_point_x_array* array;
} KVXAxLOTxPAR_meas_point_y_array;

typedef struct
{
    xyvect centre_xy;
    KVXAxLOTxPAR_xyvect_array field_ids;
    DTXAxIMAGE_image_id_string image_id;
    int WM_grid_template_id;
    int GWW_grid_template_id;
    KVXAxLOTxPAR_meas_point_y_array meas_points;
    double y_start;
    double y_end;
    int area_id;
    int topology_id;
    bool do_FSD;
    bool do_wafer_plane_deviation_check;
    bool do_EDL;
    bool do_EDL_allow_CDFEC;
    bool do_EDL_fingerprint_correction;
    bool do_FWOL;
} KVXAxLOTxPAR_WM_area_t;

typedef struct
{
    int len; // 0x0
    int max_len; // 0x4
    KVXAxLOTxPAR_WM_area_t* array; // 0x8
} KVXAxLOTxPAR_WM_area_array_t; // 0xC

typedef struct
{
    RLxTABLESET_table_set_t le_tableset; // 0x0
    double x; // 0x70A0
    double y_start; // 0x70A8
    double y_end; // 0x70B0
    DTXA_scan_direction scan_direction; // 0x70B8
    KVXAxLOTxPAR_WM_area_array_t areas; // 0x70BC
    int WSC_grid_template_id; // 0x70C8
    int PJD_grid_template_id; // 0x 0x70CC
} KVXAxLOTxPAR_WM_stroke_t; // 0x70D0

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_WM_stroke_t* array;
} KVXAxLOTxPAR_WM_stroke_array_t;

typedef struct
{
    RLxTABLESET_sosi_table_set_t le_tableset;
    double x;
    double y_start;
    double y_end;
    xyvect next_scan_in_z_pos;
    xyvect next_scan_in_ry_pos;
    LEXAxSPOT_spot_selection_t next_scan_in_z_spot;
    LEXAxSPOT_spot_selection_t next_scan_in_ry_spots;
    DTXA_scan_direction scan_direction;
    KVXAxLOTxPAR_WM_area_array_t areas;
    int WSC_grid_template_id;
    int PJD_grid_template_id;
} KVXAxLOTxPAR_WM_SOSI_stroke_t;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_WM_SOSI_stroke_t* array;
} KVXAxLOTxPAR_WM_SOSI_stroke_array_t;

typedef struct
{
    bool do_FSD; // 0x0
    int min_nr_focus_spots; // 0x4
    int min_nr_exposures; // 0x8
    xyvect filter_size; // 0x10
    KVXAxLOTxPAR_FSD_threshold_z_spec threshold_z_spec; // 0x20
    double relative_threshold; // 0x28
    double absolute_threshold; // 0x30
} KVXAxLOTxPAR_FSD_parameters_t; // 0x38

typedef struct
{
    bool do_CSD; // 0x0
    int min_nr_chuck_spots; // 0x4
    int nr_wafers; // 0x8
} KVXAxLOTxPAR_CSD_parameters_t; // 0xC

typedef struct
{
    double FSM_absolute_limit; // 0x0
    bool FSM_on; // 0x8
} KVXAxLOTxPAR_FSM_parameters; // 0x10

typedef struct
{
    KVXAxLOTxPAR_FSD_parameters_t FSD_parameters; // 0x0
	KVXAxLOTxPAR_CSD_parameters_t CSD_parameters; // 0x38
} KVXAxLOTxPAR_FM_parameters; // 0x48

typedef struct
{
    KVXAxLOTxPAR_FSD_threshold_z_spec thresholdType;
    double relativeThreshold;
    double absoluteThreshold;
} KVXAxLOTxPAR_threshold_t;

typedef struct
{
    double centerX;
    double centerY;
    double width;
    double height;
} KVXAxLOTxPAR_rectArea_t;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_rectArea_t* array;
} KVXAxLOTxPAR_rectAreaList_t;

typedef struct
{
    bool apply;
    KVXAxLOTxPAR_rectAreaList_t waferExclusionAreas;
} KVXAxLOTxPAR_rectangularExclusionAreas_t;

typedef struct
{
    double radius;
    KVXAxLOTxPAR_threshold_t threshold;
} KVXAxLOTxPAR_radThreshold_t;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_radThreshold_t* array;
} KVXAxLOTxPAR_radThresholdList_t;

typedef struct
{
    bool apply;
    KVXAxLOTxPAR_radThresholdList_t thresholdZones;
} KVXAxLOTxPAR_radialThresholdZones_t;

typedef struct
{
    DTXAxIMAGE_image_id_string imageID;
    bool CDFEC;
    int dieLayoutX;
    int dieLayoutY;
} KVXAxLOTxPAR_fmImageData_t;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_fmImageData_t* array;
} KVXAxLOTxPAR_fmImageDataList_t;

typedef struct
{
    bool apply;
    double roundEdgeClearance;
    double flatEdgeClearance;
    KVXAxLOTxPAR_threshold_t spotLoggingThreshold;
    KVXAxLOTxPAR_fmImageDataList_t fmImageDataList;
} KVXAxLOTxPAR_spotLoggingParams_t;

typedef struct
{
    bool apply;
    double exclusion;
} KVXAxLOTxPAR_edgeExclusion_t;

typedef struct
{
    bool extendWaferCoverage;
    bool reoccuringExpHandling;
    KVXAxLOTxPAR_edgeExclusion_t edgeExclusion;
    KVXAxLOTxPAR_rectangularExclusionAreas_t rectangularExclusionAreas;
    KVXAxLOTxPAR_radialThresholdZones_t radialThresholdZones;
    KVXAxLOTxPAR_spotLoggingParams_t spotLoggingParams;
} KVXAxLOTxPAR_FlexPack_parameters_t;

typedef struct
{
    bool EDL_on;
} KVXAxLOTxPAR_EDL_parameters;

typedef struct
{
    xyvect position; // 0x0
    bool do_Ry_capture; // 0x10
    LEXAxSPOT_spot_selection_t spot_selection; // 0x14
} KVXAxLOTxPAR_capture_params_t; // 0x18

typedef struct
{
    double wafer_plane_deviation_limit; // 0x0
    KVXAxLOTxPAR_FSM_parameters FSM_parameters; // 0x8
    KVXAxLOTxPAR_FM_parameters FM_parameters; // 0x18
    KVXAxLOTxPAR_EDL_parameters EDL_parameters; // 0x60
    KVXAxLOTxPAR_WM_stroke_array_t strokes; // 0x68 // 这里应该是0x64吧，但是指令里i1+0x68获得strokes
    KVXAxLOTxPAR_WM_stroke_array_t strokes_reversed; // 0x74
    KVXAxLOTxPAR_WM_SOSI_stroke_array_t sosi_strokes; // 0x80
    KVXAxLOTxPAR_capture_params_t capture_params; // 0x8C
    double focus_edge_clearance; // 0xA8
    bool do_on_the_fly_lvl; // 0xB0
} KVXAxLOTxPAR_WM_lot_data_t; // 0xB8

typedef struct
{
    bool selected;
} KVXAxLOTxPAR_GWW_grid_point;

typedef KVXAxLOTxPAR_GWW_grid_point KVXAxLOTxPAR_GWW_grid_point_x_array[0x9];

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_GWW_grid_point_x_array* array;
} KVXAxLOTxPAR_GWW_grid_point_y_array;

typedef double KVXAxLOTxPAR_GWW_grid_template_x_gridlines[0x9];

typedef struct
{
    int num_selected_points;
    KVXAxLOTxPAR_double_array y_gridlines;
    KVXAxLOTxPAR_GWW_grid_template_x_gridlines x_gridlines;
    KVXAxLOTxPAR_GWW_grid_point_y_array grid_points;
    double coverage;
} KVXAxLOTxPAR_GWW_grid_template;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_GWW_grid_template* array;
} KVXAxLOTxPAR_GWW_grid_template_array;

typedef struct
{
    double angle;
    bool selected;
} KVXAxLOTxPAR_WSC_grid_point;

typedef KVXAxLOTxPAR_WSC_grid_point KVXAxLOTxPAR_WSC_grid_point_x_array[0x9];

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_WSC_grid_point_x_array* array;
} KVXAxLOTxPAR_WSC_grid_point_y_array;

typedef double KVXAxLOTxPAR_WSC_grid_template_x_gridlines[0x9];

typedef struct
{
    int num_selected_points;
    KVXAxLOTxPAR_double_array y_gridlines;
    KVXAxLOTxPAR_WSC_grid_template_x_gridlines x_gridlines;
    KVXAxLOTxPAR_WSC_grid_point_y_array grid_points;
} KVXAxLOTxPAR_WSC_grid_template;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_WSC_grid_template* array;
} KVXAxLOTxPAR_WSC_grid_template_array;

typedef struct
{
    LEXAxSPOT_spot_id_t spot;
    double y_gridline_min;
    double y_gridline_max;
    double meas_pitch;
} KVXAxLOTxPAR_PJD_window;

typedef KVXAxLOTxPAR_PJD_window KVXAxLOTxPAR_PJD_window_set_window[0x3];

typedef struct
{
    KVXAxLOTxPAR_PJD_window_set_window window;
    int stroke_to_compare_with;
} KVXAxLOTxPAR_PJD_window_set;

typedef KVXAxLOTxPAR_PJD_window_set KVXAxLOTxPAR_PJD_grid_template_window_set[0x2];

typedef struct
{
    KVXAxLOTxPAR_PJD_grid_template_window_set window_set;
} KVXAxLOTxPAR_PJD_grid_template;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_PJD_grid_template* array;
} KVXAxLOTxPAR_PJD_grid_template_array;

typedef struct
{
    double x;
    double servo_scan_y_start;
    double servo_scan_y_end;
    double calib_scan_y_start;
    double calib_scan_y_end;
    RLxTABLESET_table_set_t servo_scan_tableset;
    RLxTABLESET_table_set_t calib_scan_tableset;
} KVXAxLOTxPAR_PDGC_scan_params;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_PDGC_scan_params* array;
} KVXAxLOTxPAR_PDGC_scan_params_array;

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_CorrectionSetNameType CorrectionSetName;
    KVXAxLOTxPAR_PDGC_scan_params_array scan_params;
} KVXAxLOTxPAR_PDGC_meas_subrecipe_part_t;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_PDGC_meas_subrecipe_part_t* array;
} KVXAxLOTxPAR_PDGC_meas_subrecipe_part_array_t;

typedef struct
{
    KVXAxLOTxPAR_PDGC_meas_subrecipe_part_array_t meas_subrecipe_parts;
} KVXAxLOTxPAR_PDGC_lot_data;

typedef struct
{
    double x;
    double y_start;
    double y_end;
    DTXA_scan_direction scan_direction;
    bool scan_preceeded_by_travel;
    LEXAxSPOT_spot_id_t ls_spot_id;
    RLxTABLESET_AG_table_set_t ag_tableset;
    KVXAxLOTxPAR_int_array area_ids;
} KVXAxLOTxPAR_AG_stroke_t;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_AG_stroke_t* array;
} KVXAxLOTxPAR_AG_stroke_array;

typedef struct
{
    KVXAxLOTxPAR_WM_stroke_t WM_stroke;
    KVXAxLOTxPAR_AG_stroke_array AG_strokes;
} KVXAxLOTxPAR_PDOC_stroke_set_t;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_PDOC_stroke_set_t* array;
} KVXAxLOTxPAR_PDOC_stroke_set_array;

typedef struct
{
    ADELgen_RecipeIDType SubRecipeName;
    ADELsr_CorrectionSetNameType CorrectionSetName;
    KVXAxLOTxPAR_PDOC_stroke_set_array stroke_sets;
} KVXAxLOTxPAR_PDOC_meas_subrecipe_part_t;

typedef struct
{
    int len;
    int max_len;
    KVXAxLOTxPAR_PDOC_meas_subrecipe_part_t* array;
} KVXAxLOTxPAR_PDOC_meas_subrecipe_part_array_t;

typedef struct
{
    KVXAxLOTxPAR_PDOC_meas_subrecipe_part_array_t meas_subrecipe_parts;
} KVXAxLOTxPAR_PDOC_lot_data;

typedef struct
{
    RLxTABLESET_table_set_t le_tableset;
    double y;
    double x_start;
    double x_end;
} KVXAxLOTxPAR_XVSA_data;

typedef struct
{
    KVXAxLOTxPAR_XVSA_data TIS1;
    KVXAxLOTxPAR_XVSA_data TIS2;
} KVXAxLOTxPAR_XVSA_lot_data;

typedef struct
{
    bool use_high_precision_sa_level;
    bool use_high_precision_xsa_level;
    bool use_high_precision_AG_level;
} KVXAxLOTxPAR_control_HPA;

typedef struct
{
    KVXAxLOTxPAR_WM_grid_template_array WM_grid_templates;
    KVXAxLOTxPAR_GWW_grid_template_array GWW_grid_templates;
    KVXAxLOTxPAR_WSC_grid_template_array WSC_grid_templates;
    KVXAxLOTxPAR_PJD_grid_template_array PJD_grid_templates;
} KVXAxLOTxPAR_grid_templates_t;

typedef struct
{
    bool systematic_fallback;
    bool has_multiple_reticles;
    bool has_non_300mm_wafer;
    bool SOSI_strokes_too_far_apart;
    bool first_SOSI_stroke_too_near_center;
    bool no_suitable_first_SOSI_stroke_found;
    bool no_SOSI_stroke_on_edges;
    bool SOSI_stroke_turn_too_wide;
    bool SOSI_WAM_coverage_area_too_small;
    bool SOSI_WAM_coverage_angle_too_large;
} KVXAxLOTxPAR_sys_fbacks_t;

typedef struct
{
    KVXAxLOTxPAR_control_HPA control_HPA;
    KVXAxLOTxPAR_grid_templates_t grid_templates;
    KVXAxLOTxPAR_GLC_lot_data glc_data;
    KVXAxLOTxPAR_PDGC_lot_data pdgc_data;
    KVXAxLOTxPAR_PDOC_lot_data pdoc_data;
    KVXAxLOTxPAR_WM_lot_data_t wm_data;
    KVXAxLOTxPAR_XVSA_lot_data xvsa_data;
    KVXAxLOTxPAR_sys_fbacks_t fallback_flags;
} KVXAxLOTxPAR_levelling_lot_data_t;



#endif // _KVXAxLOTxPAR_TC_H_
