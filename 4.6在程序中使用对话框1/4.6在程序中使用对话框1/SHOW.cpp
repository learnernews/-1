// SHOW.cpp : 实现文件
//

#include "stdafx.h"
#include "4.6在程序中使用对话框1.h"
#include "SHOW.h"
#include "afxdialogex.h"


// SHOW 对话框

IMPLEMENT_DYNAMIC(SHOW, CDialogEx)

SHOW::SHOW(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
{

}

SHOW::~SHOW()
{
}

void SHOW::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, tui);
}


BEGIN_MESSAGE_MAP(SHOW, CDialogEx)
END_MESSAGE_MAP()


// SHOW 消息处理程序


BOOL SHOW::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	s = "已退出对话框";
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
