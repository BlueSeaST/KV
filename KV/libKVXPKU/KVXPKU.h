/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* ��Ʒ�� :
* ������� : CC
* ģ������ : CCXX
* �ļ����� : CCXX.h
* ��Ҫ���� :
*
* ��ʷ��¼ :
* �汾    ����    ����    ����
* 1.0
*****************************************************************************/
#ifndef _KVXPKU_H_
#define _KVXPKU_H_

/*-------------------- ͷ�ļ� --------------------*/
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




/*-------------------- �궨�� --------------------*/
#define _CRT_SECURE_NO_WARNINGS




/*----------------------- ö�ٶ��� -----------------------*/




/*------------------------ �ṹ�� ------------------------*/
typedef struct {
	char unk_s0x0[0x10];
	char component[0x64];
}KVXPKU_local_KVXPKU_singleton_object;

typedef struct
{
	bool fingerprints_available;
	KWXA_small_wafer_map wafermap_fingerprints;
}KVXPKU_unk_1;



/*----------------------- �������� -----------------------*/

int KVXPKU_isim_get_wafermap_fingerprints(KVXPKU_local_KVXPKU_singleton_object *local_KVXPKU_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	bool *fingerprints_available,
	KWXA_fingerprint_mapping_list *fingerprint_mapping_list,
	KWXA_small_wafer_map *wafermap_fingerprints); // ����ֵĬ��0

int KVXPKU_isim_get_wafer_map(KVXPKU_local_KVXPKU_singleton_object *local_KVXPKU_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	KWXA_wafer_map *wafer_map_p); // ����ֵĬ��0



#endif // _KVXPKU_H_