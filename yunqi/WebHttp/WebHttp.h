// WebHttp.h : WebHttp DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CWebHttpApp
// �йش���ʵ�ֵ���Ϣ������� WebHttp.cpp
//

class CWebHttpApp : public CWinApp
{
public:
	CWebHttpApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
