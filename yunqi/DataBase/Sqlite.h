#ifndef __SQLITEDATABASE__
#define __SQLITEDATABASE__

#pragma once

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

typedef vector<string> TbRowStr;
typedef vector<TbRowStr> TbStr;

typedef vector<CString> TbRowCStr;
typedef vector<TbRowCStr> TbCStr;

class AFX_EXT_CLASS CSqlite
{
public:
	CSqlite(void);
	~CSqlite(void);

	void DataBase(string path);

	sqlite3 *m_Db;
	bool m_OpenFlag;
	string m_Path;

	list<string> split(string &str, string &delimiter);	//list
	list<string> getSqlColumnName();	//list
	list<string> getSqlValues();	//list

	CString string2CString(string src);
	string  CStringW2string(CStringW src); //¿í×Ö½Ú×ªchar*

	bool GetRows(string sql);
	bool QuerySQL(string sql);
	TbStr GetRowsStr(string sql);
	TbCStr GetRowsCStr(string sql);

};

#endif
