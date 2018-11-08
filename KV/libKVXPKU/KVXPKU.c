/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 :
* 所属组件 : KV
* 模块名称 : KVXPKU
* 文件名称 : KVXPKU.c
* 概要描述 :
*
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#include <KVXPKU.h>


/*----------------------- 外部变量声明 -----------------------*/




/*----------------------- 外部函数声明 -----------------------*/





/*----------------------- 全局变量声明 -----------------------*/
KVXPKU_local_KVXPKU_singleton_object* local_KVXPKU_singleton_object;




/*----------------------- 静态函数声明 -----------------------*/





/*----------------------- 函数实现 -----------------------*/
// 不需要翻译的模块内部函数的空实现
int KVXPKU_isim_get_wafermap_fingerprints(KVXPKU_local_KVXPKU_singleton_object *local_KVXPKU_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	bool *fingerprints_available,
	KWXA_fingerprint_mapping_list *fingerprint_mapping_list,
	KWXA_small_wafer_map *wafermap_fingerprints) // 返回值默认0
{
	return 0;
}

int KVXPKU_isim_get_wafer_map(KVXPKU_local_KVXPKU_singleton_object *local_KVXPKU_singleton_object,
	WPxCHUCK_chuck_id_enum chuck_id,
	KWXA_wafer_map *wafer_map_p) // 返回值默认0
{
	return 0;
}

// 需要翻译的函数的实现
// 函数名：KVXPKU_get_wafermap_fingerprints
int KVXPKU_get_wafermap_fingerprints(const WPxCHUCK_chuck_id_enum chuck_id,
	bool *fingerprints_available,
	KWXA_fingerprint_mapping_list *fingerprint_mapping_list,
	KWXA_small_wafer_map *wafermap_fingerprints)
{
	// KWXA_fingerprint_mapping *buffer;
	WPxCHUCK_chuck_id_enum *req_msg_data = NULL;
	int(*pKVXPKU_isim_get_wafermap_fingerprints)(KVXPKU_local_KVXPKU_singleton_object *local_KVXPKU_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		bool *fingerprints_available,
		KWXA_fingerprint_mapping_list *fingerprint_mapping_list,
		KWXA_small_wafer_map *wafermap_fingerprints) = NULL;
	int iErrorCode = 0;
	KVXPKU_unk_1 *rep_msg_data = NULL;
	KWXA_small_wafer_map *buffer = NULL;
	int act_len = 0;
	bool fingerprints_available_isOk = FALSE;
	bool fingerprint_mapping_list_isOk = FALSE;
	bool wafermap_fingerprints_isOk = FALSE;
	
	THXAtraceTP("KV", 0x4B56FB01);
	if (iErrorCode == 0 && fingerprints_available == NULL)
	{
		// .text:0000102C
		iErrorCode = OOXA_allocate_parameter(4, &fingerprints_available, &fingerprints_available_isOk);
	}
	// loc_1044
	if (iErrorCode == 0 && fingerprint_mapping_list == NULL)
	{
		// .text:00001064
		iErrorCode = OOXA_allocate_parameter(0xC, &fingerprint_mapping_list, &fingerprint_mapping_list_isOk);
	}
	// loc_107C
	if (iErrorCode == 0 && wafermap_fingerprints == NULL)
	{
		// .text:0000109C
		iErrorCode = OOXA_allocate_parameter(0x64020, &wafermap_fingerprints, &wafermap_fingerprints_isOk);
	}
	// loc_10B8
	if (iErrorCode == 0)
	{
		// .text:000010C4
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	}
	// loc_111C
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_KVXPKU_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_142C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_KVXPKU_singleton_object->component, iErrorCode);
		// loc_1470
		if (fingerprints_available_isOk != FALSE)
		{
			// .text:0000147C
			PLXAmem_free(&fingerprints_available);
		}
		// loc_1488
		if (fingerprint_mapping_list_isOk != FALSE)
		{
			// .text:00001494
			if (iErrorCode == 0)
			{
				// .text:000014A4
				DDXA_C_object_sub_free("KWXA:fingerprint_mapping_list", fingerprint_mapping_list);
			}
			// loc_14B4
			PLXAmem_free(&fingerprint_mapping_list);
		}
		// loc_14C0
		if (wafermap_fingerprints_isOk != FALSE)
		{
			// .text:000014CC 
			PLXAmem_free(&wafermap_fingerprints);
		}
		// loc_14D8
		THXAtraceTP("KV", 0x4B56FB02);
		return iErrorCode;
	}
	// .text:0000118C
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_11BC
		iErrorCode = OOXA_find_method(local_KVXPKU_singleton_object, "KVXPKU:", 1, 0x12FFE5AB, &pKVXPKU_isim_get_wafermap_fingerprints);
	}
	else
	{
		// .text:000011AC
		pKVXPKU_isim_get_wafermap_fingerprints = KVXPKU_isim_get_wafermap_fingerprints;
	}
	// loc_11F0
	if (iErrorCode != 0)
	{
		// ld      [%fp+pKVXPKU_isim_get_wafermap_fingerprints], %g1
		// ------>loc_14F8
		// loc_142C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_KVXPKU_singleton_object->component, iErrorCode);
		// loc_1470
		if (fingerprints_available_isOk != FALSE)
		{
			// .text:0000147C
			PLXAmem_free(&fingerprints_available);
		}
		// loc_1488
		if (fingerprint_mapping_list_isOk != FALSE)
		{
			// .text:00001494
			if (iErrorCode == 0)
			{
				// .text:000014A4
				DDXA_C_object_sub_free("KWXA:fingerprint_mapping_list", fingerprint_mapping_list);
			}
			// loc_14B4
			PLXAmem_free(&fingerprint_mapping_list);
		}
		// loc_14C0
		if (wafermap_fingerprints_isOk != FALSE)
		{
			// .text:000014CC 
			PLXAmem_free(&wafermap_fingerprints);
		}
		// loc_14D8
		THXAtraceTP("KV", 0x4B56FB02);
		return iErrorCode;
	}
	// .text:00001200
	if (pKVXPKU_isim_get_wafermap_fingerprints != NULL)
	{
		// sethi   %hi(0), %g2
		// ------>loc_130C
		iErrorCode = pKVXPKU_isim_get_wafermap_fingerprints(local_KVXPKU_singleton_object, chuck_id, fingerprints_available, fingerprint_mapping_list, wafermap_fingerprints);
	}
	else
	{
		// .text:0000120C
		iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
		if (iErrorCode == 0)
		{
			// .text:00001224
			*req_msg_data = chuck_id;
			iErrorCode = OOXA_send_receive(local_KVXPKU_singleton_object, "KVXPKU:", 1, 0x12FFE5AB,
				req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
			if (iErrorCode == 0)
			{
				// .text:00001290
				*fingerprints_available = rep_msg_data->fingerprints_available;
				buffer = &rep_msg_data->wafermap_fingerprints;
				iErrorCode = DDXAxSERIALIZE_sub_unpack("KWXA:fingerprint_mapping_list", &buffer, 0, fingerprint_mapping_list);
				if (iErrorCode == 0)
				{
					// .text:000012D8
					memcpy(wafermap_fingerprints, buffer, 0x64020);
				}
			}
		}
		// loc_12EC
		if (buffer != NULL)
		{
			// .text:000012FC
			OOXA_release_buffer(rep_msg_data);
		}
	}
	// loc_1334
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_142C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_KVXPKU_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:00001340
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%4D %D %d", "fingerprints_available", "bool", fingerprints_available,
			"fingerprint_mapping_list", "KWXA:fingerprint_mapping_list", fingerprint_mapping_list, &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s (%4D %D)=%R", local_KVXPKU_singleton_object->component,
			"fingerprints_available", "bool", fingerprints_available, "fingerprint_mapping_list", "KWXA:fingerprint_mapping_list", fingerprint_mapping_list, iErrorCode);
	}
	// loc_1470
	if (fingerprints_available_isOk != FALSE)
	{
		// .text:0000147C
		PLXAmem_free(&fingerprints_available);
	}
	// loc_1488
	if (fingerprint_mapping_list_isOk != FALSE)
	{
		// .text:00001494
		if (iErrorCode == 0)
		{
			// .text:000014A4
			DDXA_C_object_sub_free("KWXA:fingerprint_mapping_list", fingerprint_mapping_list);
		}
		// loc_14B4
		PLXAmem_free(&fingerprint_mapping_list);
	}
	// loc_14C0
	if (wafermap_fingerprints_isOk != FALSE)
	{
		// .text:000014CC 
		PLXAmem_free(&wafermap_fingerprints);
	}
	// loc_14D8
	THXAtraceTP("KV", 0x4B56FB02);
	return iErrorCode;
}

// 函数名：KVXPKU_get_wafer_map
int KVXPKU_get_wafer_map(const WPxCHUCK_chuck_id_enum chuck_id,
	KWXA_wafer_map *wafer_map_p)
{
	WPxCHUCK_chuck_id_enum *req_msg_data = NULL;
	int(*pKVXPKU_isim_get_wafer_map)(KVXPKU_local_KVXPKU_singleton_object *local_KVXPKU_singleton_object,
		WPxCHUCK_chuck_id_enum chuck_id,
		KWXA_wafer_map *wafer_map_p) = NULL;
	int iErrorCode = 0;
	KWXA_wafer_map *rep_msg_data = NULL;
	int act_len = 0;
	bool wafer_map_p_isOk = FALSE;
	THXAtraceTP("KV", 0x4B56FB00);

	if (iErrorCode == 0 && wafer_map_p == NULL)
	{
		// .text:00000C44
		OOXA_allocate_parameter(0x800020, &wafer_map_p, &wafer_map_p_isOk);
	}
	// loc_C60
	if (iErrorCode == 0)
	{
		// .text:00000C6C
		THXAdataRequest("KV", 4, __FUNCTION__, 0, "%4D", "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	}
	// loc_CC4
	THXAtrace("KV", 2, __FUNCTION__, "> %s (%4D)", local_KVXPKU_singleton_object->component, "chuck_id", "WPxCHUCK:chuck_id_enum", &chuck_id);
	if (iErrorCode != 0)
	{
		// ld      [%fp+iErrorCode], %o5
		// ------>loc_F0C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_KVXPKU_singleton_object->component, iErrorCode);
		// loc_F50
		if (wafer_map_p_isOk != FALSE)
		{
			// .text:00000F5C
			PLXAmem_free(&wafer_map_p);
		}
		// loc_F68
		THXAtraceTP("KV", 0x4B56FB01);
		return iErrorCode;
	}
	// .text:00000D34
	if (THXAcheckSimMode("KV", THXA_SIM_MODE_1) == 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_D64
		iErrorCode = OOXA_find_method(local_KVXPKU_singleton_object, "KVXPKU:", 0, 0x3D1F35A1, &pKVXPKU_isim_get_wafer_map);
	}
	else
	{
		// .text:00000D54
		pKVXPKU_isim_get_wafer_map = KVXPKU_isim_get_wafer_map;
	}
	// loc_D98
	if (iErrorCode != 0)
	{
		// ld      [%fp+KVXPKU_isim_get_wafer_map], %g1
		// ------>loc_F88
		// loc_F0C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_KVXPKU_singleton_object->component, iErrorCode);
		// loc_F50
		if (wafer_map_p_isOk != FALSE)
		{
			// .text:00000F5C
			PLXAmem_free(&wafer_map_p);
		}
		// loc_F68
		THXAtraceTP("KV", 0x4B56FB01);
		return iErrorCode;
	}
	// .text:00000DA8
	if (pKVXPKU_isim_get_wafer_map != NULL)
	{
		// sethi   %hi(0), %g2
		// ------>loc_E6C
		iErrorCode = pKVXPKU_isim_get_wafer_map(local_KVXPKU_singleton_object, chuck_id, wafer_map_p);
	}
	else
	{
		// .text:00000DB4
		iErrorCode = OOXA_allocate_buffer(4, &req_msg_data);
		if (iErrorCode == 0)
		{
			// .text:00000DCC
			*req_msg_data = chuck_id;
			iErrorCode = OOXA_send_receive(local_KVXPKU_singleton_object, "KVXPKU:", 0, 0x3D1F35A1,
				req_msg_data, 4, &rep_msg_data, &act_len, 0x41, 0x96);
			if (iErrorCode == 0)
			{
				// .text:00000E38
				memcpy(rep_msg_data, wafer_map_p, 0x800020);
				if (rep_msg_data != NULL)
				{
					// .text:00000E5C
					OOXA_release_buffer(rep_msg_data);
				}
			}
		}
	}
	// loc_E8C
	if (iErrorCode != 0)
	{
		// sethi   %hi(0), %g1
		// ------>loc_F0C
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_KVXPKU_singleton_object->component, iErrorCode);
	}
	else
	{
		// .text:00000E98
		THXAdataRequest("KV", 5, __FUNCTION__, 0, "%d", &iErrorCode);
		THXAtrace("KV", 2, __FUNCTION__, "< %s ()=%R", local_KVXPKU_singleton_object->component, iErrorCode);
	}
	// loc_F50
	if (wafer_map_p_isOk != FALSE)
	{
		// .text:00000F5C
		PLXAmem_free(&wafer_map_p);
	}
	// loc_F68
	THXAtraceTP("KV", 0x4B56FB01);
	return iErrorCode;
}
