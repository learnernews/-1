
// 3.23��Դ��2��View.cpp : CMy323��Դ��2��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3.23��Դ��2��.h"
#endif

#include "3.23��Դ��2��Doc.h"
#include "3.23��Դ��2��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy323��Դ��2��View

IMPLEMENT_DYNCREATE(CMy323��Դ��2��View, CView)

BEGIN_MESSAGE_MAP(CMy323��Դ��2��View, CView)
	ON_COMMAND(ID_SHOWCR, &CMy323��Դ��2��View::OnShowcr)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy323��Դ��2��View ����/����

CMy323��Դ��2��View::CMy323��Դ��2��View()
{
	// TODO: �ڴ˴���ӹ������
	set = 1;
}

CMy323��Դ��2��View::~CMy323��Դ��2��View()
{
}

BOOL CMy323��Դ��2��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy323��Դ��2��View ����

void CMy323��Դ��2��View::OnDraw(CDC* pDC)
{
	CMy323��Դ��2��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	GetClientRect(&cr1);//���������ʾ��ɫ�����Բ
	CPen NewPen;
	CPen	*poldPen;
	NewPen.CreatePen(PS_SOLID, 1, RGB(0, rand() % 1000, 0));
	poldPen = pDC->SelectObject(&NewPen);
	a = (cr1.right - cr1.left) / 2;
	b = (cr1.bottom - cr1.top) / 2;
	//a = cs.cx/2;
	//b = cs.cy/2;
	if (set == 1)
	{
		SetTimer(NULL, rand() % 400 + 100, NULL);

		set = 0;
	}


	pDC->Ellipse(cr);
	pDC->SelectObject(poldPen);
	NewPen.DeleteObject();
}


// CMy323��Դ��2��View ���

#ifdef _DEBUG
void CMy323��Դ��2��View::AssertValid() const
{
	CView::AssertValid();
}

void CMy323��Դ��2��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy323��Դ��2��Doc* CMy323��Դ��2��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy323��Դ��2��Doc)));
	return (CMy323��Դ��2��Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy323��Դ��2��View ��Ϣ�������


void CMy323��Դ��2��View::OnShowcr()
{
	// TODO: �ڴ���������������

}


void CMy323��Դ��2��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	cr.left = a;
	cr.top = b;
	cr.right = a;
	cr.bottom = b;

	CView::OnLButtonDown(nFlags, point);
}


void CMy323��Դ��2��View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	cr.left -= 1;
	cr.top -= 1;
	cr.right += 1;
	cr.bottom += 1;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
