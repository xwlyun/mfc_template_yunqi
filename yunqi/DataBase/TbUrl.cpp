#include "stdafx.h"
#include "TbUrl.h"

const string TB_NAME = "tbUrl";

CTbUrl::CTbUrl()
{   
	
}
CTbUrl::~CTbUrl()
{   
	
}

//²é
UrlData CTbUrl::Get(int id)
{
	UrlData re;
	TbCStr tb = m_sqlData.GetRowsCStr("select id,sName,sUrl from "+TB_NAME+" where id='"+this->Int2string(id)+"';");
	for(int i=0;i<tb.size();i++)
	{
		re.id = _ttoi(tb[i][0]);
		re.sName = tb[i][1];
		re.sUrl = tb[i][2];
	}
	return re;
}