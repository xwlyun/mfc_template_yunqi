/**
 *  Copy right 2008 Cheng Shi.  All rights reserved.
 */

#include "stdafx.h"
#include <comutil.h>
#include "WinHttpClient.h"

//自定义进度条消息
#define      WM_USER_PROGRESS	 WM_USER+1000     

WinHttpClient::WinHttpClient(void)
{

}

WinHttpClient::WinHttpClient(const wstring &URL)
    : m_URL(URL),
      m_HttpResponseHeader(L""),
      m_HttpResponse(L""),
      m_charset(L""),
      m_host(L""),
	  m_nTotalLength(0),
	  m_pData(0),
	  m_nAllocLength(0)
{
}

bool WinHttpClient::SendHttpRequest(bool bUtf8Tans, const wstring &httpVerb, bool bRawData,HWND hWnd)
{
    // Make verb uppercase.
    wstring verb = httpVerb;
    if (wcsicmp(verb.c_str(), L"GET") == 0)
    {
        verb = L"GET";
    }
    else if (wcsicmp(verb.c_str(), L"POST") == 0)
    {
        verb = L"POST";
    }
    else
    {
        return false;
    }
    bool bRetVal = true;
    HINTERNET hSession = NULL;
    hSession = ::WinHttpOpen(SZ_AGENT,  
                             WINHTTP_ACCESS_TYPE_DEFAULT_PROXY,
                             WINHTTP_NO_PROXY_NAME, 
                             WINHTTP_NO_PROXY_BYPASS,
                             0);
    if (hSession == NULL)
    {
        return false;
    }

    wchar_t szHostName[MAX_PATH] = L"";
    wchar_t szURLPath[MAX_PATH * 5] = L"";
    URL_COMPONENTS urlComp;
    memset(&urlComp, 0, sizeof(urlComp));
    urlComp.dwStructSize = sizeof(urlComp);
    urlComp.lpszHostName = szHostName;
    urlComp.dwHostNameLength = MAX_PATH;
    urlComp.lpszUrlPath = szURLPath;
    urlComp.dwUrlPathLength = MAX_PATH * 5;
    urlComp.dwSchemeLength = -1;

	wstring strZipLen;

    if (::WinHttpCrackUrl(m_URL.c_str(), m_URL.size(), 0, &urlComp))
    {
        m_host = szHostName;
        HINTERNET hConnect = NULL;
        hConnect = ::WinHttpConnect(hSession, szHostName, urlComp.nPort, 0);
        if (hConnect != NULL)
        {
            DWORD dwOpenRequestFlag = (urlComp.nScheme == INTERNET_SCHEME_HTTPS) ? WINHTTP_FLAG_SECURE : 0;
            HINTERNET hRequest = NULL;
            hRequest = ::WinHttpOpenRequest(hConnect,
                                            verb.c_str(),
                                            urlComp.lpszUrlPath,
                                            NULL,
                                            WINHTTP_NO_REFERER,
                                            WINHTTP_DEFAULT_ACCEPT_TYPES,
                                            dwOpenRequestFlag);
            if (hRequest != NULL)
            {
                bool bGetReponseSucceed = false;
                int iRetryTimes = 0;

                // Retry for several times if fails.
                while (!bGetReponseSucceed && iRetryTimes++ < INT_RETRYTIMES)
                {
                    // Send HTTP requeest.
                    if (::WinHttpSendRequest(hRequest,
                                             WINHTTP_NO_ADDITIONAL_HEADERS,
                                             0,
                                             WINHTTP_NO_REQUEST_DATA,
                                             0,
                                             0,
                                             NULL))
                    {
                        if (::WinHttpReceiveResponse(hRequest, NULL))
                        {
                            DWORD dwSize = 0;

                            // Get the buffer size of the HTTP response header.
                            BOOL bResult = ::WinHttpQueryHeaders(hRequest,
                                                                 WINHTTP_QUERY_RAW_HEADERS_CRLF,
                                                                 WINHTTP_HEADER_NAME_BY_INDEX,
                                                                 NULL,
                                                                 &dwSize,
                                                                 WINHTTP_NO_HEADER_INDEX);
                            if (bResult || (!bResult && (::GetLastError() == ERROR_INSUFFICIENT_BUFFER)))
                            {
                                wchar_t *szHeader = new wchar_t[dwSize];
                                if (szHeader != NULL)
                                {
                                    memset(szHeader, 0, dwSize* sizeof(wchar_t));

                                    // Get HTTP response header.
                                    if (::WinHttpQueryHeaders(hRequest,
                                                              WINHTTP_QUERY_RAW_HEADERS_CRLF,
                                                              WINHTTP_HEADER_NAME_BY_INDEX,
                                                              szHeader,
                                                              &dwSize,
                                                              WINHTTP_NO_HEADER_INDEX))
                                    {
                                        m_HttpResponseHeader.assign(szHeader);
										if(hWnd)
										{
											int pos = m_HttpResponseHeader.find(L"Content-Length: ");
											int pos2 = m_HttpResponseHeader.find_first_of(L"\r\n",pos);
											strZipLen = m_HttpResponseHeader.substr(pos+lstrlen(L"Content-Length: "),pos2-pos-lstrlen(L"Content-Length: "));
										}

                                        _wcslwr(szHeader);
                                        wstring lwrHeader = szHeader;

                                        // Try to get charset from HTTP reponse header.
                                        int iCharsetIndex = lwrHeader.find(L"charset=");
                                        if (iCharsetIndex != wstring::npos)
                                        {
                                            iCharsetIndex += 8;     // "charset=" has 8 characters.
                                            int iCharsetLength = 0;
                                            for (int i = iCharsetIndex; i < lwrHeader.size(); i++)
                                            {
                                                if (i == lwrHeader.size()-1
                                                    || lwrHeader[i] == ' '
                                                    || lwrHeader[i] == ';'
                                                    || lwrHeader[i] == '\n')
                                                {
                                                    iCharsetLength = i - iCharsetIndex;
                                                    break;
                                                }
                                            }
                                            m_charset = lwrHeader.substr(iCharsetIndex, iCharsetLength);
                                        }
                                        delete[] szHeader;

                                        wstring resource = L"";
                                        do
                                        {
                                            dwSize = 0;
                                            if (::WinHttpQueryDataAvailable(hRequest, &dwSize))
                                            {
												if(hWnd)
												{
													 
													SendMessage(hWnd,WM_USER_PROGRESS,(WPARAM)strZipLen.c_str(),(LPARAM)dwSize);
												}
												

                                                BYTE *pResponse = new BYTE[dwSize];
                                                if (pResponse != NULL)
                                                {
                                                    memset(pResponse, 0, dwSize);
                                                    DWORD dwRead = 0;


                                                    if (::WinHttpReadData(hRequest,
                                                                          pResponse,
                                                                          dwSize,
                                                                          &dwRead))
                                                    {
														if(bRawData)
														{
															if(m_pData == NULL)
															{
																m_pData = new BYTE[1014 * 1024];
																m_nAllocLength = 1014 * 1024;
															}
															else
															{
																if(m_nTotalLength + dwSize > m_nAllocLength)
																{
																	BYTE* pNewData = new BYTE[m_nAllocLength + 1024 * 1024];
																	memcpy(pNewData, m_pData, m_nAllocLength);
																	delete[] m_pData;
																	m_pData = pNewData;
																	m_nAllocLength += 1024 * 1024;
																}
															}

															memcpy(m_pData + m_nTotalLength, pResponse, dwSize);
															m_nTotalLength += dwSize;

														}
														else
														{
															// If the web page is encoded in UTF-8, it needs to be takn care of or garbage characters in the string.
															if (bUtf8Tans || m_charset.find(L"utf-8") != wstring::npos)
															{
																int iLength = ::MultiByteToWideChar(CP_UTF8,
																									MB_ERR_INVALID_CHARS, 
																									(LPCSTR)pResponse, 
																									dwSize, 
																									NULL, 
																									0);
																if (iLength > 0)
																{
																	wchar_t *wideChar = new wchar_t[iLength + 1];
																	if (wideChar != NULL)
																	{
																		memset(wideChar, 0, iLength * sizeof(wchar_t));
																		iLength = ::MultiByteToWideChar(CP_UTF8,
																										MB_ERR_INVALID_CHARS, 
																										(LPCSTR)pResponse, 
																										dwSize, 
																										wideChar, 
																										iLength);
																		if (iLength > 0)
																		{
																			wchar_t oldChar = wideChar[iLength];
																			wideChar[iLength] = 0;
																			resource.append(wideChar);
																			wideChar[iLength] = oldChar;    // Hack.  Set back the original char or the delete operation leads a crash.
																		}
																		delete[] wideChar;
																	}
																}
															}
															else
															{
																int iLength = ::MultiByteToWideChar(CP_ACP,
																									MB_PRECOMPOSED, 
																									(LPCSTR)pResponse, 
																									dwSize, 
																									NULL, 
																									0);
																if (iLength > 0)
																{
																	wchar_t *wideChar = new wchar_t[iLength + 1];
																	if (wideChar != NULL)
																	{
																		memset(wideChar, 0, iLength * sizeof(wchar_t));
																		iLength = ::MultiByteToWideChar(CP_ACP,
																										MB_PRECOMPOSED, 
																										(LPCSTR)pResponse, 
																										dwSize, 
																										wideChar, 
																										iLength);
																		if (iLength > 0)
																		{
																			wchar_t oldChar = wideChar[iLength];
																			wideChar[iLength] = 0;
																			resource.append(wideChar);
																			wideChar[iLength] = oldChar;    // Hack.  Set back the original char or the delete operation leads a crash.
																		}
																		delete[] wideChar;
																	}
																}
															}
														}
														delete[] pResponse;
													}
                                                }
                                            }
                                        }
                                        while (dwSize > 0);

                                        bGetReponseSucceed = true;
                                        m_HttpResponse = resource;
                                    }
                                }
                            }
                        }
                    }
                }
                if (!bGetReponseSucceed)
                {
                    bRetVal = false;
                }

                ::WinHttpCloseHandle(hRequest);
            }
            ::WinHttpCloseHandle(hConnect);
        }

    }

    ::WinHttpCloseHandle(hSession);

    return bRetVal;
}

wstring WinHttpClient::GetHttpResponseHeader(void)
{
    return m_HttpResponseHeader;
}

wstring WinHttpClient::GetHttpResponse(void)
{
    return m_HttpResponse;
}

wstring WinHttpClient::GetCharset(void)
{
    return m_charset;
}

wstring WinHttpClient::GetHost(void)
{
    return m_host;
}
