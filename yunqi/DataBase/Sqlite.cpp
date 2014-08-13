#include "stdafx.h"
#include "Sqlite.h"

int column_names_printed = 0; 
list<string> lColumn;
list<string> lValues;

void getColumnName(int count, char** values)
{
	for (int i = 0; i < count; ++i) 
	{ 
		lColumn.push_back(values[i]);
	} 
}

void getRowValues(int count, char** values) 
{
	string data;
	for (int i = 0; i < count; ++i) 
	{
		data += values[i];
		data += "\n";
	} 
	lValues.push_back(data);
}

int getResult(void* data, int n_columns, char** column_values, char** column_names) 
{
	if (!column_names_printed) 
	{ 
		getColumnName(n_columns, column_names); 
		column_names_printed = 1; 
	}
	getRowValues(n_columns, column_values);

	return 0; 
}

CSqlite::CSqlite(void)
{   
	m_Db = NULL;
	m_OpenFlag = false;
	m_Path="";
}

void CSqlite::DataBase(string path)
{
	m_Path = path;
	char *errMsg = NULL; 

	int error  = 0; 
	if(!m_OpenFlag)
	{
		//绝对路径
		error = sqlite3_open(m_Path.c_str(), &m_Db);
	}

	if ( error )
	{ 
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(m_Db)); 
		sqlite3_close(m_Db); 
		exit(1); 
	} 
	else
	{
		m_OpenFlag = true;
		_cprintf ("open dabase.db successfully!\n"); 
	}

	lColumn.clear();
	lValues.clear();
}

CSqlite::~CSqlite(void)
{
	lColumn.clear();
	lValues.clear();
}

list<string> CSqlite::split(string &str, string &sep)
{
	list<string> dest;
	size_t pos = 0, found = 0;

	while ( found != string::npos )
	{
		found = str.find(sep, pos);
		dest.push_back(string(str, pos, found-pos));
		pos = found + 1;
	}
	return dest;
}

//获取查询数据的标题名称
list<string> CSqlite::getSqlColumnName()
{
	return lColumn;
}

//获取查询结果值，每个值都是一行数据，以\n作为分隔符
list<string> CSqlite::getSqlValues()
{
	return lValues;
}

CString CSqlite::string2CString(string src )
{
	CString dest;
	TCHAR wchar[255] = L"\0";
	MultiByteToWideChar(CP_ACP, 0, src.c_str(), src.length()+1, wchar, 255/sizeof(wchar[0]));
	dest = wchar;
	return dest;
}

string CSqlite::CStringW2string(CStringW src)
{
	CStringA stra(src.GetBuffer(0));
	src.ReleaseBuffer();
	string strDest = stra.GetBuffer(0);
	stra.ReleaseBuffer();
	return strDest;
}

TbCStr CSqlite::GetRowsCStr(string sql)
{
	TbCStr arrRe;
	if(this->GetRows(sql))
	{
		list<string> FolderValues = this->getSqlValues();
		list<string>::iterator iter = FolderValues.begin();
		if(FolderValues.size()>0)
		{
			TbRowCStr arrTmp;
			for(; iter != FolderValues.end(); iter++)
			{
				arrTmp.clear();
				string data = *iter;
				string sep = "\n";
				list<string> row = this->split(data, sep);//解析查询返回的每行数据
				list<string>::iterator itrow = row.begin();
				for(;itrow!=row.end();itrow++)
				{
					string tmp = *itrow;
					arrTmp.push_back(this->string2CString(tmp));
				}
				arrRe.push_back(arrTmp);
			}
		}
	}

	return arrRe;
}

TbStr CSqlite::GetRowsStr(string sql)
{
	TbStr arrRe;
	if(this->GetRows(sql))
	{
		list<string> FolderValues = this->getSqlValues();
		list<string>::iterator iter = FolderValues.begin();
		if(FolderValues.size()>0)
		{
			TbRowStr arrTmp;
			for(; iter != FolderValues.end(); iter++)
			{
				arrTmp.clear();
				string data = *iter;
				string sep = "\n";
				list<string> row = this->split(data, sep);//解析查询返回的每行数据
				list<string>::iterator itrow = row.begin();
				for(;itrow!=row.end();itrow++)
				{
					string tmp = *itrow;
					arrTmp.push_back(tmp);
				}
				arrRe.push_back(arrTmp);
			}
		}
	}

	return arrRe;
}

bool CSqlite::GetRows(string sql)
{
	lColumn.clear();
	lValues.clear();
	int error = 0;

	if (!m_OpenFlag)
	{
		error = sqlite3_open(m_Path.c_str(), &m_Db); 
	}
	if ( error )
	{ 
		sqlite3_close(m_Db);
		m_Db = NULL;
		return false;
	}
	m_OpenFlag = true;

	char *errMsg = NULL;
	error = sqlite3_exec( m_Db, sql.c_str(), getResult, NULL, &errMsg);
	
	if(0 == error)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CSqlite::QuerySQL(string sql)
{
	int error = 0;
	if (!m_OpenFlag)
	{
		error = sqlite3_open(m_Path.c_str(), &m_Db);
	}
	if ( error )
	{ 
		sqlite3_close(m_Db);
		m_Db = NULL;
		return false;
	}
	m_OpenFlag = true;

	char *errMsg = NULL; 
	error = sqlite3_exec(m_Db, sql.c_str(), NULL, NULL, &errMsg); 

	if(0 == error)
	{
		return true;
	}
	else
	{
		return false;
	}
}