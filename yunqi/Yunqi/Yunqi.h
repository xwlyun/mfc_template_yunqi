// Yunqi.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CYunqiApp:
// �йش����ʵ�֣������ Yunqi.cpp
//

class CYunqiApp : public CWinApp
{
public:
	CYunqiApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
public:
	IDUIRes*  m_pDUIRes;
	inline IDUIRes* GetDuiRes() {return m_pDUIRes;}
};

extern CYunqiApp theApp;