
// 4.7������ʵ��2View.cpp : CMy47������ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "4.7������ʵ��2.h"
#endif

#include "4.7������ʵ��2Doc.h"
#include "4.7������ʵ��2View.h"
#include"show.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy47������ʵ��2View

IMPLEMENT_DYNCREATE(CMy47������ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy47������ʵ��2View, CView)
	ON_COMMAND(ID_jia, &CMy47������ʵ��2View::Onjia)
END_MESSAGE_MAP()

// CMy47������ʵ��2View ����/����

CMy47������ʵ��2View::CMy47������ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy47������ʵ��2View::~CMy47������ʵ��2View()
{
}

BOOL CMy47������ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy47������ʵ��2View ����

void CMy47������ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy47������ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy47������ʵ��2View ���

#ifdef _DEBUG
void CMy47������ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy47������ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy47������ʵ��2Doc* CMy47������ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy47������ʵ��2Doc)));
	return (CMy47������ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy47������ʵ��2View ��Ϣ�������


void CMy47������ʵ��2View::Onjia()
{
	// TODO: �ڴ���������������
	show dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{

	}
}
