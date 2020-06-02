
// 5.5MFC中使用数据库.h : 5.5MFC中使用数据库 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMy55MFC中使用数据库App:
// 有关此类的实现，请参阅 5.5MFC中使用数据库.cpp
//

class CMy55MFC中使用数据库App : public CWinApp
{
public:
	CMy55MFC中使用数据库App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy55MFC中使用数据库App theApp;
