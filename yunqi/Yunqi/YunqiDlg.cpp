// YunqiDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Yunqi.h"
#include "YunqiDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CYunqiDlg �Ի���


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


// CYunqiDlg ��Ϣ�������

BOOL CYunqiDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

int CYunqiDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������
	m_pDirectUI = (IDirectUI*)theApp.GetDuiRes()->CreateDirectUI(_T("Main20"), (OLE_HANDLE)HandleToLong(GetSafeHwnd()));
	ASSERT(m_pDirectUI);

	//UrlData ud = m_tb.Get(1);
	//AfxMessageBox(ud.sName);

	//TbCStr sss = m_http.SendHttp(L"http://127.0.0.1/test1.php");
	//AfxMessageBox(sss[0][0]);

	return 0;
}
