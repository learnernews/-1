
// �����¿���ϰ��.h : �����¿���ϰ�� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�����¿���ϰ��App:
// �йش����ʵ�֣������ �����¿���ϰ��.cpp
//

class C�����¿���ϰ��App : public CWinApp
{
public:
	C�����¿���ϰ��App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�����¿���ϰ��App theApp;
