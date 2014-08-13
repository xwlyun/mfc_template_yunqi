#ifndef __HEAD__DIRECTUIINC__
#define __HEAD__DIRECTUIINC__
#pragma once

#pragma warning(push)
#pragma warning(disable : 4278)
#pragma warning(disable : 4996)
#pragma warning(disable:4189)

#include "DirectUI.h"
#include "KernelAll.h"
#include "AdvancedAll.h"
#include "OfficeAll.h"
#include "IndustryAll.h"

#pragma warning(pop)

#define DIRECTUI_GETCONTROL(objname) \
	(IDUIControlBase*)theApp.m_pDUIRes->GetResObject(DUIOBJTYPE_PLUGIN,objname,m_pDirectUI,TRUE)


extern "C" __declspec(dllimport) IDUIRes* CALLBACK OpenSkinW(wchar_t* strSkinPath,wchar_t *strSknPath, BOOL bSkinCtrls = FALSE, BOOL bAddRef = FALSE, BOOL bAbsPath = FALSE);

extern "C" __declspec(dllimport) IDUIRes* CALLBACK OpenSkinA(char* strSkinPath,char*strSknPath, BOOL bSkinCtrls = FALSE, BOOL bAddRef = FALSE, BOOL bAbsPath = FALSE);

#ifdef _UNICODE
#define OpenSkin OpenSkinW
#else
#define OpenSkin OpenSkinA
#endif

extern "C" __declspec(dllimport) void CALLBACK FreeSkin();

extern "C" __declspec(dllimport) unsigned int CALLBACK DUIGetLastError();
extern "C" __declspec(dllimport) void CALLBACK EnableDebugInfo(BOOL bEnable);
extern "C" __declspec(dllimport) void CALLBACK SetUseMultiLanguage(BOOL bEnable);

#pragma comment(lib,"..\\Lib\\kdui32.lib") 

#endif //__HEAD__DIRECTUI__
