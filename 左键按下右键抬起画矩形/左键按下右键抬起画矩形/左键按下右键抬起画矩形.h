
// ��������Ҽ�̧�𻭾���.h : ��������Ҽ�̧�𻭾��� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��������Ҽ�̧�𻭾���App:
// �йش����ʵ�֣������ ��������Ҽ�̧�𻭾���.cpp
//

class C��������Ҽ�̧�𻭾���App : public CWinApp
{
public:
	C��������Ҽ�̧�𻭾���App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��������Ҽ�̧�𻭾���App theApp;
