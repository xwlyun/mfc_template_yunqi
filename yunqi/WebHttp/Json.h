#pragma once
#include "WinHttpClient.h"

class AFX_EXT_CLASS CJson
{
public:
	CJson();
	~CJson();

	TbCStr SendHttp(const wstring &URL);

};