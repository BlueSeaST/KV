/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 :
* 所属组件 : CC
* 模块名称 : CCXX
* 文件名称 : CCXX.h
* 概要描述 :
*
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _KVXPKU_H_
#define _KVXPKU_H_

/*-------------------- 头文件 --------------------*/
#include <stdlib.h>
#include<string.h>
//#include <stdbool.h>

#include <KVXPKU_extern.h>
#include<base.h>
#include<THXA.h>
#include<OOXA.h>
#include<DDXA.h>
#include<PLXA.h>
#include<WPxCHUCK_tc.h>
#include<KWXA_tc.h>




/*-------------------- 宏定义 --------------------*/
#define _CRT_SECURE_NO_WARNINGS




/*----------------------- 枚举定义 -----------------------*/




/*------------------------ 结构体 ------------------------*/
typedef struct {
	char unk_s0x0[0x10];
	char component[0x64];
}KVXPKU_local_KVXPKU_singleton_object;

typedef struct
{
	bool fingerprints_available;
	KWXA_small_wafer_map wafermap_fingerprints;
}KVXPKU_unk_1;



/*----------------------- 函数声明 -----------------------*/

int KVXPKU_isim_get_wafermap_fingerprints(KVXPKU_local_KVXPKU_singleton_object *local_KVXPKU_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	bool *fingerprints_available,
	KWXA_fingerprint_mapping_list *fingerprint_mapping_list,
	KWXA_small_wafer_map *wafermap_fingerprints); // 返回值默认0

int KVXPKU_isim_get_wafer_map(KVXPKU_local_KVXPKU_singleton_object *local_KVXPKU_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	KWXA_wafer_map *wafer_map_p); // 返回值默认0



#endif // _KVXPKU_H_