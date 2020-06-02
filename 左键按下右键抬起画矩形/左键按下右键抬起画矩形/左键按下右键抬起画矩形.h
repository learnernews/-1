
// 左键按下右键抬起画矩形.h : 左键按下右键抬起画矩形 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// C左键按下右键抬起画矩形App:
// 有关此类的实现，请参阅 左键按下右键抬起画矩形.cpp
//

class C左键按下右键抬起画矩形App : public CWinApp
{
public:
	C左键按下右键抬起画矩形App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C左键按下右键抬起画矩形App theApp;
