
// 3.23��Դ.h : 3.23��Դ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy323��ԴApp:
// �йش����ʵ�֣������ 3.23��Դ.cpp
//

class CMy323��ԴApp : public CWinApp
{
public:
	CMy323��ԴApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy323��ԴApp theApp;
