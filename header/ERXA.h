/*****************************************************************************
* Copyright (C) 2010
* All rights reserved.
* 产品号 : 
* 所属组件 : ER
* 模块名称 : ERXA
* 文件名称 : ERXA.h
* 概要描述 :
*	ER组件ERXA对外接口声明
* 历史记录 :
* 版本    日期    作者    内容
* 1.0
*****************************************************************************/
#ifndef _ERXA_H_ 
#define _ERXA_H_

/*-------------------- 头文件 --------------------*/
#include <base.h>
#include <setjmp.h>




/*-------------------- 宏定义 --------------------*/







/*----------------------- 枚举定义 -----------------------*/







/*------------------------ 结构体 ------------------------*/











/*-------------------- 对外全局变量声明 --------------------*/
extern int ERXA_nr_sigsegv;
extern jmp_buf *ERXA_current_env;
extern void *ERXA_log_exception;







/*----------------------- 对外接口声明 -----------------------*/
void ERXAlogExceptionEx(int iErrorCode,
	int *iParam1,
	char *pcFileName,
	int iLine,
	char *pcSccsId,
	char *pcContext);

void ERXAdeactivate(int iErrorCode,
	int iParam1,
	char *pcFileName,
	int iLine,
	char *pcSccsId,
	...);

void ERXAsignalInstall(void);
void ERXAsignalUnInstall(void);
void ERXAsetLogMode(int LogMode);

//构造错误描述信息字符串
char *ERXAmakeContext(const char *psFormat, ...);

//记录错误信息
void ERXAlogExceptionSingleLink(int iErrorCode,
	int iErrorLink,     //0
	const char *psFile,   //文件名，解析时用__FILE__
	int iLine,            //当前行号，解析时用__LINE__
	char *psSccsId,       //0
	char *psContext);     //通常为ERXAmakeContext的返回值

//记录错误信息, 执行本函数后*piErrorCode赋值为iNewErrorCode.
void ERXAlogExceptionSingleLink_id(int iNewErrorCode,
	int iErrorCode, int *piErrorCode, //这两个参数通常为调用函数的返回值，一个传值，一个传地址
	const char *psFile,               //文件名，解析时用__FILE__
	int iLine,                        //当前行号，解析时用__LINE__
	char *psSccsId,                   //0
	char *psContext);                 //通常为ERXAmakeContext的返回值


 //记录错误信息
void ERXAshowExceptionSingleLink(int iErrorCode,
	int iErrorCode2,     //0
	const char *psFile,   //文件名，解析时用__FILE__
	int iLine,            //当前行号，解析时用__LINE__
	char *psSccsId,       //0
	char *psContext,      //通常为ERXAmakeContext的返回值
	int *select1,
	int *select2);




#endif // _ERXA_H_

