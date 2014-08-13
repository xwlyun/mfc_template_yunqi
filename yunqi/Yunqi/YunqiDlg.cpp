// YunqiDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Yunqi.h"
#include "YunqiDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CYunqiDlg 对话框


CYunqiDlg::CYunqiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CYunqiDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CYunqiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CYunqiDlg, CDialog)
	//}}AFX_MSG_MAP
	ON_WM_CREATE()
END_MESSAGE_MAP()


// CYunqiDlg 消息处理程序

BOOL CYunqiDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

int CYunqiDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	m_pDirectUI = (IDirectUI*)theApp.GetDuiRes()->CreateDirectUI(_T("Main20"), (OLE_HANDLE)HandleToLong(GetSafeHwnd()));
	ASSERT(m_pDirectUI);

	//UrlData ud = m_tb.Get(1);
	//AfxMessageBox(ud.sName);

	//TbCStr sss = m_http.SendHttp(L"http://127.0.0.1/test1.php");
	//AfxMessageBox(sss[0][0]);

	return 0;
}
