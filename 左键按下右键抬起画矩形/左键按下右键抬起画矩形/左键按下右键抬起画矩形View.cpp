
// ��������Ҽ�̧�𻭾���View.cpp : C��������Ҽ�̧�𻭾���View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��������Ҽ�̧�𻭾���.h"
#endif

#include "��������Ҽ�̧�𻭾���Doc.h"
#include "��������Ҽ�̧�𻭾���View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��������Ҽ�̧�𻭾���View

IMPLEMENT_DYNCREATE(C��������Ҽ�̧�𻭾���View, CView)

BEGIN_MESSAGE_MAP(C��������Ҽ�̧�𻭾���View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C��������Ҽ�̧�𻭾���View ����/����

C��������Ҽ�̧�𻭾���View::C��������Ҽ�̧�𻭾���View()
{
	// TODO: �ڴ˴���ӹ������
	ca.SetSize(1000);

}

C��������Ҽ�̧�𻭾���View::~C��������Ҽ�̧�𻭾���View()
{
}

BOOL C��������Ҽ�̧�𻭾���View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��������Ҽ�̧�𻭾���View ����

void C��������Ҽ�̧�𻭾���View::OnDraw(CDC* pDC)
{
	C��������Ҽ�̧�𻭾���Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	s.Format(_T("��%d,%d��"), point1);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CRect rect(point1.x,point1.y,point2.x,point2.y);
	pDC->Rectangle(rect);
	this->Invalidate();



	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��������Ҽ�̧�𻭾���View ���

#ifdef _DEBUG
void C��������Ҽ�̧�𻭾���View::AssertValid() const
{
	CView::AssertValid();
}

void C��������Ҽ�̧�𻭾���View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��������Ҽ�̧�𻭾���Doc* C��������Ҽ�̧�𻭾���View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��������Ҽ�̧�𻭾���Doc)));
	return (C��������Ҽ�̧�𻭾���Doc*)m_pDocument;
}
#endif //_DEBUG


// C��������Ҽ�̧�𻭾���View ��Ϣ�������


void C��������Ҽ�̧�𻭾���View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	
	//s.Format(_T("��%d,%d��"), point);
	//CClientDC dc(this);
	//dc.TextOutW(200, 200, s);
	
	point1 = point;
	

	CView::OnLButtonDown(nFlags, point);
}


void C��������Ҽ�̧�𻭾���View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	//c = point.x;
	//d = point.y;
	point2 = point;

	CView::OnLButtonUp(nFlags, point);
}
