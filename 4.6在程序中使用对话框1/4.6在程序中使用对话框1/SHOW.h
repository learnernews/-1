#pragma once
#include "afxwin.h"


// SHOW 对话框

class SHOW : public CDialogEx
{
	DECLARE_DYNAMIC(SHOW)

public:
	SHOW(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SHOW();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit tui;
	CString s;
	virtual BOOL OnInitDialog();
};
