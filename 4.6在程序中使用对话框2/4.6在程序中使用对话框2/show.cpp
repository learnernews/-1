// show.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "4.6�ڳ�����ʹ�öԻ���2.h"
#include "show.h"
#include "afxdialogex.h"


// show �Ի���

IMPLEMENT_DYNAMIC(show, CDialogEx)

show::show(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(_T(""))
	, y(_T(""))
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
}


BEGIN_MESSAGE_MAP(show, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &show::OnBnClickedButton1)
END_MESSAGE_MAP()


// show ��Ϣ�������


void show::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);
	CString t;
	t = x;
	x = y;
	y = t;
	UpdateData(false);
}
