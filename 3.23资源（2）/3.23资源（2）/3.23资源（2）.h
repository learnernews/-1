
// 3.23��Դ��2��.h : 3.23��Դ��2�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy323��Դ��2��App:
// �йش����ʵ�֣������ 3.23��Դ��2��.cpp
//

class CMy323��Դ��2��App : public CWinApp
{
public:
	CMy323��Դ��2��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy323��Դ��2��App theApp;
