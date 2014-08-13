#pragma once
#include "DataHelp.h"

typedef struct UrlData
{
	int id;
	CString sName;
	CString sUrl;
} URLDATA;

class AFX_EXT_CLASS CTbUrl : CDataHelp
{
public:
	CTbUrl();
	~CTbUrl();
		
	UrlData Get(int id);//²é
};
