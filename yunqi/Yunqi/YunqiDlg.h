// YunqiDlg.h : 头文件
//

#pragma once
//#include "../DataBase/TbUrl.h"
//#include "../WebHttp/Json.h"

// CYunqiDlg 对话框
class CYunqiDlg : public CDialog
{
// 构造
public:
	CYunqiDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_YUNQI_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

private:
	IDirectUI*	m_pDirectUI;
	//CTbUrl m_tb;
	//CJson m_http;
};
