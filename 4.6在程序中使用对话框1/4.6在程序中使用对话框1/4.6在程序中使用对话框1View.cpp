
// 4.6�ڳ�����ʹ�öԻ���1View.cpp : CMy46�ڳ�����ʹ�öԻ���1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.6�ڳ�����ʹ�öԻ���1.h"
#endif

#include "4.6�ڳ�����ʹ�öԻ���1Doc.h"
#include "4.6�ڳ�����ʹ�öԻ���1View.h"
#include"SHOW.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy46�ڳ�����ʹ�öԻ���1View

IMPLEMENT_DYNCREATE(CMy46�ڳ�����ʹ�öԻ���1View, CView)

BEGIN_MESSAGE_MAP(CMy46�ڳ�����ʹ�öԻ���1View, CView)
	ON_COMMAND(ID_SHOW, &CMy46�ڳ�����ʹ�öԻ���1View::OnShow)
END_MESSAGE_MAP()

// CMy46�ڳ�����ʹ�öԻ���1View ����/����

CMy46�ڳ�����ʹ�öԻ���1View::CMy46�ڳ�����ʹ�öԻ���1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy46�ڳ�����ʹ�öԻ���1View::~CMy46�ڳ�����ʹ�öԻ���1View()
{
}

BOOL CMy46�ڳ�����ʹ�öԻ���1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy46�ڳ�����ʹ�öԻ���1View ����

void CMy46�ڳ�����ʹ�öԻ���1View::OnDraw(CDC* /*pDC*/)
{
	CMy46�ڳ�����ʹ�öԻ���1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy46�ڳ�����ʹ�öԻ���1View ���

#ifdef _DEBUG
void CMy46�ڳ�����ʹ�öԻ���1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy46�ڳ�����ʹ�öԻ���1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy46�ڳ�����ʹ�öԻ���1Doc* CMy46�ڳ�����ʹ�öԻ���1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy46�ڳ�����ʹ�öԻ���1Doc)));
	return (CMy46�ڳ�����ʹ�öԻ���1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy46�ڳ�����ʹ�öԻ���1View ��Ϣ�������


void CMy46�ڳ�����ʹ�öԻ���1View::OnShow()
{
	// TODO: �ڴ���������������
	SHOW dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s1;
		s1.Format(_T("%s"), dlg.s);
		GetDC()->TextOutW(200, 300, s1);
	}
}
