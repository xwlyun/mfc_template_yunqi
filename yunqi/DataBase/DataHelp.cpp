#include "stdafx.h"
#include "DataHelp.h"

CDataHelp::CDataHelp()
{   
	TCHAR exeFullPath[MAX_PATH]; // MAX_PATH
	GetModuleFileName(NULL,exeFullPath,MAX_PATH);//得到程序模块名称，全路径
	CString tmpdir=exeFullPath; 
	CString  strdir = tmpdir.Left(tmpdir.ReverseFind('\\'));
	strdir += L"\\model.db";
	strdir.Replace(L"\\", L"/");

	m_sqlData.DataBase(CStringW2string( strdir ));

	m_sqlData.QuerySQL("begin transaction;");
	string sql;

	sql = "create table tbUrl(id integer default 1 not null primary key autoincrement, \
					sName varchar(250), \
					sUrl varchar(250));";
	m_sqlData.QuerySQL(sql);
	
	m_sqlData.QuerySQL("commit transaction;");

}
CDataHelp::~CDataHelp()
{   
	
}

CString CDataHelp::test()
{
	CString date;
	CTime time;
	time = CTime::GetCurrentTime();
	date = time.Format("%Y-%m-%d 00:00:00");//time.Format("%Y-%m-%d %H:%M:%S");
	return date;
}
//获取当前时间2014-01-17 11:40:40
string CDataHelp::GetCurrentTime()
{
	TbStr tb = m_sqlData.GetRowsStr("select datetime('now','localtime');");
	return tb[0][0];
}
//string转cstring
CString CDataHelp::String2CString(string param)
{
	CString re;
	TCHAR wchar[255] = L"\0";
	MultiByteToWideChar(CP_ACP, 0, param.c_str(), param.length()+1, wchar, 255/sizeof(wchar[0]));
	re = wchar;
	return re;
}
//cstring转string
string CDataHelp::CStringW2string(CStringW param)
{
	CStringA stra(param.GetBuffer(0));
	param.ReleaseBuffer();
	string re = stra.GetBuffer(0);
	stra.ReleaseBuffer();
	return re;
}
//int转string
string CDataHelp::Int2string(int param)
{
	CString re;
	re.Format(L"%d",param);
	return this->CStringW2string(re);
}
//转换时间参数
string CDataHelp::GetDateTime(CTime tdata)
{
	string re;	//2014-01-17 11:40:40
	CString str;
	str = tdata.Format("%Y-%m-%d %H:%M:%S");
	re = this->CStringW2string(str);
	return re;
}
//转换时间参数2014-01-17 00:00:00
string CDataHelp::GetDate(CTime tdata)
{
	string re;	//2014-01-17 00:00:00
	CString str;
	str = tdata.Format("%Y-%m-%d 00:00:00");
	re = this->CStringW2string(str);
	return re;
}
//cstring转ctime
CTime CDataHelp::CString2Ctime(CString param)
{
	string date = this->CStringW2string(param);
	int nYear, nMonth, nDate, nHour, nMin, nSec;
	sscanf(date.c_str(), "%d-%d-%d %d:%d:%d", &nYear, &nMonth, &nDate, &nHour, &nMin, &nSec);
	CTime tm(nYear, nMonth, nDate, nHour, nMin, nSec);
	return tm;
}
