// SHOW.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "4.6�ڳ�����ʹ�öԻ���1.h"
#include "SHOW.h"
#include "afxdialogex.h"


// SHOW �Ի���

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


// SHOW ��Ϣ�������


BOOL SHOW::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	s = "���˳��Ի���";
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
