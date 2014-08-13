#include <windows.h>
#include <Winhttp.h>
#include <string>
#include <vector>
using namespace std;

static const int INT_RETRYTIMES = 3;
static wchar_t *SZ_AGENT = L"WinHttpClient";

typedef vector<string> TbRowStr;
typedef vector<TbRowStr> TbStr;

typedef vector<CString> TbRowCStr;
typedef vector<TbRowCStr> TbCStr;

class WinHttpClient
{
public:
    WinHttpClient(const wstring &URL);

    // It is a synchronized method and may take a long time to finish.
    bool SendHttpRequest(bool bUtf8Tans = false, const wstring &httpVerb = L"GET", bool bRawData = false,HWND hWnd=NULL);
    wstring GetHttpResponseHeader(void);
    wstring GetHttpResponse(void);
    wstring GetCharset(void);
    wstring GetHost(void);
	long	GetReadLength(){ return m_nTotalLength; }
	BYTE*	GetRawData(){ return m_pData; }

	WinHttpClient(void);
    WinHttpClient(const WinHttpClient &other);
    WinHttpClient &operator =(const WinHttpClient &other);

    wstring m_URL;
    wstring m_HttpResponseHeader;
    wstring m_HttpResponse;
    wstring m_charset;
    wstring m_host;
	long	m_nTotalLength;
	long	m_nAllocLength;
	BYTE*	m_pData;
};
