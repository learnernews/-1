
// 5.5MFC��ʹ�����ݿ�.h : 5.5MFC��ʹ�����ݿ� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy55MFC��ʹ�����ݿ�App:
// �йش����ʵ�֣������ 5.5MFC��ʹ�����ݿ�.cpp
//

class CMy55MFC��ʹ�����ݿ�App : public CWinApp
{
public:
	CMy55MFC��ʹ�����ݿ�App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy55MFC��ʹ�����ݿ�App theApp;
