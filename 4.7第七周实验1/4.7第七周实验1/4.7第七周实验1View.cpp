
// 4.7������ʵ��1View.cpp : CMy47������ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.7������ʵ��1.h"
#endif

#include "4.7������ʵ��1Doc.h"
#include "4.7������ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy47������ʵ��1View

IMPLEMENT_DYNCREATE(CMy47������ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy47������ʵ��1View, CView)
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy47������ʵ��1View ����/����

CMy47������ʵ��1View::CMy47������ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy47������ʵ��1View::~CMy47������ʵ��1View()
{
}

BOOL CMy47������ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy47������ʵ��1View ����

void CMy47������ʵ��1View::OnDraw(CDC* pDC)
{
	CMy47������ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(c);

	this->Invalidate();
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy47������ʵ��1View ���

#ifdef _DEBUG
void CMy47������ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy47������ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy47������ʵ��1Doc* CMy47������ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy47������ʵ��1Doc)));
	return (CMy47������ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy47������ʵ��1View ��Ϣ�������


void CMy47������ʵ��1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	p = point;

	c.bottom = p.y;
	c.right = p.x;
	c.top = p.y - 100;
	c.left = p.x - 100;
	CView::OnLButtonUp(nFlags, point);
}
