#include "stdafx.h"
#include "Json.h"

CJson::CJson()
{

}

CJson::~CJson()
{

}

TbCStr CJson::SendHttp(const wstring &URL)
{
	TbCStr re;
	WinHttpClient client(URL);
	client.SendHttpRequest(true);
	wstring httpResponseHeader = client.GetHttpResponseHeader();
	wstring httpResponse = client.GetHttpResponse();
	CString response = httpResponse.c_str();

	//TbRowCStr row;
	//row.push_back(L"11");
	//row.push_back(L"12");
	//re.push_back(row);
	

	return re;
}