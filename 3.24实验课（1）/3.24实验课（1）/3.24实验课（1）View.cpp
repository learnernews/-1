
// 3.24ʵ��Σ�1��View.cpp : CMy324ʵ��Σ�1��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3.24ʵ��Σ�1��.h"
#endif

#include "3.24ʵ��Σ�1��Doc.h"
#include "3.24ʵ��Σ�1��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy324ʵ��Σ�1��View

IMPLEMENT_DYNCREATE(CMy324ʵ��Σ�1��View, CView)

BEGIN_MESSAGE_MAP(CMy324ʵ��Σ�1��View, CView)
	ON_COMMAND(ID_SHOWNAME, &CMy324ʵ��Σ�1��View::OnShowname)
END_MESSAGE_MAP()

// CMy324ʵ��Σ�1��View ����/����

CMy324ʵ��Σ�1��View::CMy324ʵ��Σ�1��View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy324ʵ��Σ�1��View::~CMy324ʵ��Σ�1��View()
{
}

BOOL CMy324ʵ��Σ�1��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy324ʵ��Σ�1��View ����

void CMy324ʵ��Σ�1��View::OnDraw(CDC* /*pDC*/)
{
	CMy324ʵ��Σ�1��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy324ʵ��Σ�1��View ���

#ifdef _DEBUG
void CMy324ʵ��Σ�1��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy324ʵ��Σ�1��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy324ʵ��Σ�1��Doc* CMy324ʵ��Σ�1��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy324ʵ��Σ�1��Doc)));
	return (CMy324ʵ��Σ�1��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy324ʵ��Σ�1��View ��Ϣ�������


void CMy324ʵ��Σ�1��View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s = _T("����ǿ");
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
}
