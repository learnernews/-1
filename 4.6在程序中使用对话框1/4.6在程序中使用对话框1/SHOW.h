#pragma once
#include "afxwin.h"


// SHOW �Ի���

class SHOW : public CDialogEx
{
	DECLARE_DYNAMIC(SHOW)

public:
	SHOW(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SHOW();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CEdit tui;
	CString s;
	virtual BOOL OnInitDialog();
};
