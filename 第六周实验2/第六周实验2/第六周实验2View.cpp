
// ������ʵ��2View.cpp : C������ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "������ʵ��2.h"
#endif

#include "������ʵ��2Doc.h"
#include "������ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C������ʵ��2View

IMPLEMENT_DYNCREATE(C������ʵ��2View, CView)

BEGIN_MESSAGE_MAP(C������ʵ��2View, CView)
	ON_WM_CHAR()
	ON_WM_SETFOCUS()
END_MESSAGE_MAP()

// C������ʵ��2View ����/����

C������ʵ��2View::C������ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������
	s = "";
	ptCharator.x = 0;
	ptCharator.y = 0;
}

C������ʵ��2View::~C������ʵ��2View()
{
}

BOOL C������ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C������ʵ��2View ����

void C������ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	C������ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C������ʵ��2View ���

#ifdef _DEBUG
void C������ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void C������ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C������ʵ��2Doc* C������ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C������ʵ��2Doc)));
	return (C������ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// C������ʵ��2View ��Ϣ�������


void C������ʵ��2View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	s += (wchar_t)nChar;
	Invalidate();
	if (nChar == 12) {
		ptCharator.x = 0;
		ptCharator.y += 25;
		SetCaretPos(ptCharator);
		ShowCaret();
	}
	else {
		CClientDC dc(this);
		HideCaret();
		dc.TextOutW(ptCharator.x, ptCharator.y, (LPCTSTR)&nChar);
		CSize textsize;
		textsize = dc.GetTextExtent((LPCTSTR)&nChar);
		ptCharator.x += textsize.cx;
		SetCaretPos(ptCharator);
		ShowCaret();

	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void C������ʵ��2View::OnSetFocus(CWnd* pOldWnd)
{
	CView::OnSetFocus(pOldWnd);
	CreateSolidCaret(3, 18);
	SetCaretPos(ptCharator);
	ShowCaret();
	// TODO: �ڴ˴������Ϣ����������
}
