
// 4.6�ڳ�����ʹ�öԻ���2.h : 4.6�ڳ�����ʹ�öԻ���2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy46�ڳ�����ʹ�öԻ���2App:
// �йش����ʵ�֣������ 4.6�ڳ�����ʹ�öԻ���2.cpp
//

class CMy46�ڳ�����ʹ�öԻ���2App : public CWinApp
{
public:
	CMy46�ڳ�����ʹ�öԻ���2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy46�ڳ�����ʹ�öԻ���2App theApp;
