#pragma once
#include "Sqlite.h"

class AFX_EXT_CLASS CDataHelp
{
public:
	CSqlite m_sqlData;
	CDataHelp();
	~CDataHelp();

	CString test();
	string GetCurrentTime();	//获取当前时间2014-01-17 11:40:40
	CString String2CString(string param);	//string转cstring
	string CStringW2string(CStringW param);	//cstring转string
	string Int2string(int param);	//int转string
	CTime CString2Ctime(CString param);	//cstring转ctime
	string GetDateTime(CTime tdata);	//转换时间参数2014-01-17 11:40:40
	string GetDate(CTime tdata);	//转换时间参数2014-01-17 00:00:00

};