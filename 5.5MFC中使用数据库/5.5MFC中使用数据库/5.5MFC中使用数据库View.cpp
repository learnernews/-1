
// 5.5MFC��ʹ�����ݿ�View.cpp : CMy55MFC��ʹ�����ݿ�View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "5.5MFC��ʹ�����ݿ�.h"
#endif

#include "5.5MFC��ʹ�����ݿ�Set.h"
#include "5.5MFC��ʹ�����ݿ�Doc.h"
#include "5.5MFC��ʹ�����ݿ�View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy55MFC��ʹ�����ݿ�View

IMPLEMENT_DYNCREATE(CMy55MFC��ʹ�����ݿ�View, CRecordView)

BEGIN_MESSAGE_MAP(CMy55MFC��ʹ�����ݿ�View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT2, &CMy55MFC��ʹ�����ݿ�View::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &CMy55MFC��ʹ�����ݿ�View::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &CMy55MFC��ʹ�����ݿ�View::OnEnChangeEdit4)
END_MESSAGE_MAP()

// CMy55MFC��ʹ�����ݿ�View ����/����

CMy55MFC��ʹ�����ݿ�View::CMy55MFC��ʹ�����ݿ�View()
	: CRecordView(IDD_MY55MFC_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMy55MFC��ʹ�����ݿ�View::~CMy55MFC��ʹ�����ݿ�View()
{
}

void CMy55MFC��ʹ�����ݿ�View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CMy55MFC��ʹ�����ݿ�View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy55MFC��ʹ�����ݿ�View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My55MFC��ʹ�����ݿ�Set;
	CRecordView::OnInitialUpdate();

}


// CMy55MFC��ʹ�����ݿ�View ��ӡ

BOOL CMy55MFC��ʹ�����ݿ�View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy55MFC��ʹ�����ݿ�View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy55MFC��ʹ�����ݿ�View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy55MFC��ʹ�����ݿ�View ���

#ifdef _DEBUG
void CMy55MFC��ʹ�����ݿ�View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy55MFC��ʹ�����ݿ�View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy55MFC��ʹ�����ݿ�Doc* CMy55MFC��ʹ�����ݿ�View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy55MFC��ʹ�����ݿ�Doc)));
	return (CMy55MFC��ʹ�����ݿ�Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy55MFC��ʹ�����ݿ�View ���ݿ�֧��
CRecordset* CMy55MFC��ʹ�����ݿ�View::OnGetRecordset()
{
	return m_pSet;
}



// CMy55MFC��ʹ�����ݿ�View ��Ϣ�������

