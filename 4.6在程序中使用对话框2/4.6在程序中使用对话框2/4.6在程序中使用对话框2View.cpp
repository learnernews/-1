
// 4.6�ڳ�����ʹ�öԻ���2View.cpp : CMy46�ڳ�����ʹ�öԻ���2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.6�ڳ�����ʹ�öԻ���2.h"
#endif

#include "4.6�ڳ�����ʹ�öԻ���2Doc.h"
#include "4.6�ڳ�����ʹ�öԻ���2View.h"
#include"show.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy46�ڳ�����ʹ�öԻ���2View

IMPLEMENT_DYNCREATE(CMy46�ڳ�����ʹ�öԻ���2View, CView)

BEGIN_MESSAGE_MAP(CMy46�ڳ�����ʹ�öԻ���2View, CView)
	ON_COMMAND(ID_SHOWER, &CMy46�ڳ�����ʹ�öԻ���2View::OnShower)
END_MESSAGE_MAP()

// CMy46�ڳ�����ʹ�öԻ���2View ����/����

CMy46�ڳ�����ʹ�öԻ���2View::CMy46�ڳ�����ʹ�öԻ���2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy46�ڳ�����ʹ�öԻ���2View::~CMy46�ڳ�����ʹ�öԻ���2View()
{
}

BOOL CMy46�ڳ�����ʹ�öԻ���2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy46�ڳ�����ʹ�öԻ���2View ����

void CMy46�ڳ�����ʹ�öԻ���2View::OnDraw(CDC* /*pDC*/)
{
	CMy46�ڳ�����ʹ�öԻ���2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy46�ڳ�����ʹ�öԻ���2View ���

#ifdef _DEBUG
void CMy46�ڳ�����ʹ�öԻ���2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy46�ڳ�����ʹ�öԻ���2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy46�ڳ�����ʹ�öԻ���2Doc* CMy46�ڳ�����ʹ�öԻ���2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy46�ڳ�����ʹ�öԻ���2Doc)));
	return (CMy46�ڳ�����ʹ�öԻ���2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy46�ڳ�����ʹ�öԻ���2View ��Ϣ�������


void CMy46�ڳ�����ʹ�öԻ���2View::OnShower()
{
	// TODO: �ڴ���������������
	show dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
	}
}
