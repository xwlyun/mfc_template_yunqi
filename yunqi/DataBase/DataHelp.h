#pragma once
#include "Sqlite.h"

class AFX_EXT_CLASS CDataHelp
{
public:
	CSqlite m_sqlData;
	CDataHelp();
	~CDataHelp();

	CString test();
	string GetCurrentTime();	//��ȡ��ǰʱ��2014-01-17 11:40:40
	CString String2CString(string param);	//stringתcstring
	string CStringW2string(CStringW param);	//cstringתstring
	string Int2string(int param);	//intתstring
	CTime CString2Ctime(CString param);	//cstringתctime
	string GetDateTime(CTime tdata);	//ת��ʱ�����2014-01-17 11:40:40
	string GetDate(CTime tdata);	//ת��ʱ�����2014-01-17 00:00:00

};