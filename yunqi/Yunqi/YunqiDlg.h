// YunqiDlg.h : ͷ�ļ�
//

#pragma once
//#include "../DataBase/TbUrl.h"
//#include "../WebHttp/Json.h"

// CYunqiDlg �Ի���
class CYunqiDlg : public CDialog
{
// ����
public:
	CYunqiDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_YUNQI_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

private:
	IDirectUI*	m_pDirectUI;
	//CTbUrl m_tb;
	//CJson m_http;
};
