// DataBase.h : DataBase DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDataBaseApp
// �йش���ʵ�ֵ���Ϣ������� DataBase.cpp
//

class CDataBaseApp : public CWinApp
{
public:
	CDataBaseApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
