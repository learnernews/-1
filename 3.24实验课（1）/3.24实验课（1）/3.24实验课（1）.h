
// 3.24ʵ��Σ�1��.h : 3.24ʵ��Σ�1�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy324ʵ��Σ�1��App:
// �йش����ʵ�֣������ 3.24ʵ��Σ�1��.cpp
//

class CMy324ʵ��Σ�1��App : public CWinApp
{
public:
	CMy324ʵ��Σ�1��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy324ʵ��Σ�1��App theApp;
