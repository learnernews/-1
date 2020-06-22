// show.cpp : 实现文件
//

#include "stdafx.h"
#include "4.7第七周实验2.h"
#include "show.h"
#include "afxdialogex.h"


// show 对话框

IMPLEMENT_DYNAMIC(show, CDialogEx)

show::show(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, z(0)
{

}

show::~show()
{
}

void show::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
}


BEGIN_MESSAGE_MAP(show, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &show::OnBnClickedButton1)
END_MESSAGE_MAP()


// show 消息处理程序


void show::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	z = x + y;
	UpdateData(false);
}
