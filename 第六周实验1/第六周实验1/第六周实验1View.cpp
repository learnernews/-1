
// ������ʵ��1View.cpp : C������ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʵ��1.h"
#endif

#include "������ʵ��1Doc.h"
#include "������ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ��1View

IMPLEMENT_DYNCREATE(C������ʵ��1View, CView)

BEGIN_MESSAGE_MAP(C������ʵ��1View, CView)
	ON_WM_MOUSEWHEEL()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_CHAR()
	ON_WM_CREATE()
END_MESSAGE_MAP()

// C������ʵ��1View ����/����

C������ʵ��1View::C������ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

C������ʵ��1View::~C������ʵ��1View()
{
}

BOOL C������ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ��1View ����

void C������ʵ��1View::OnDraw(CDC* pDC)
{
	C������ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(190, 190, 510, 500);

}


// C������ʵ��1View ���

#ifdef _DEBUG
void C������ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ��1Doc* C������ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ��1Doc)));
	return (C������ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ��1View ��Ϣ�������




void C������ʵ��1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnMouseMove(nFlags, point);
}


void C������ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	x = point.x;
	y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void C������ʵ��1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonUp(nFlags, point);
}


void C������ʵ��1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CView::OnChar(nChar, nRepCnt, nFlags);
	CClientDC dc(this);
	CRect Rect(200, 200, 500, 500);

	str.Format(_T("%c"), nChar);

	if (x >= 200 && y >= 200) {
		pos = (x - 200) / 10 + (y - 200) / 20 * 30;

		s.Insert(pos, nChar);
	}
	else {
		s.Append(str);
	}

	dc.DrawText(s, Rect, DT_LEFT | DT_WORDBREAK | DT_EDITCONTROL);

	CView::OnChar(nChar, nRepCnt, nFlags);
}


int C������ʵ��1View::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������

	return 0;
}
