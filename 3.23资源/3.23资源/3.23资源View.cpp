
// 3.23��ԴView.cpp : CMy323��ԴView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3.23��Դ.h"
#endif

#include "3.23��ԴDoc.h"
#include "3.23��ԴView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy323��ԴView

IMPLEMENT_DYNCREATE(CMy323��ԴView, CView)

BEGIN_MESSAGE_MAP(CMy323��ԴView, CView)
	ON_COMMAND(ID_SHOW, &CMy323��ԴView::OnShow)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy323��ԴView ����/����

CMy323��ԴView::CMy323��ԴView()
{
	// TODO: �ڴ˴���ӹ������
	set = 1;
	
}

CMy323��ԴView::~CMy323��ԴView()
{

}

BOOL CMy323��ԴView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy323��ԴView ����

void CMy323��ԴView::OnDraw(CDC* pDC)
{
	CMy323��ԴDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	GetClientRect(&cr1);
	CClientDC dc(this);
	a = (cr1.right - cr1.left) / 2;
	b = (cr1.bottom - cr1.top) / 2;
	//a = cs.cx/2;
	//b = cs.cy/2;
	if (set == 1)
	{
		SetTimer(NULL, rand() % 400 + 100, NULL);

		set = 0;
	}


	dc.Ellipse(cr);//���������ʾ�����Բ
}


// CMy323��ԴView ���

#ifdef _DEBUG
void CMy323��ԴView::AssertValid() const
{
	CView::AssertValid();
}

void CMy323��ԴView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy323��ԴDoc* CMy323��ԴView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy323��ԴDoc)));
	return (CMy323��ԴDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy323��ԴView ��Ϣ�������


void CMy323��ԴView::OnShow()
{
	// TODO: �ڴ���������������
	

}


void CMy323��ԴView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	cr.left = a;
	cr.top = b;
	cr.right = a;
	cr.bottom = b;
	CView::OnLButtonDown(nFlags, point);
}


void CMy323��ԴView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy323��ԴDoc* pDoc = GetDocument();
	CView::OnTimer(nIDEvent);
	cr.left -= 1;
	cr.top -= 1;
	cr.right += 1;
	cr.bottom += 1;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
