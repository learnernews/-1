
// 3.24��Դʵ���2View.cpp : CMy324��Դʵ���2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "3.24��Դʵ���2.h"
#endif

#include "3.24��Դʵ���2Doc.h"
#include "3.24��Դʵ���2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy324��Դʵ���2View

IMPLEMENT_DYNCREATE(CMy324��Դʵ���2View, CView)

BEGIN_MESSAGE_MAP(CMy324��Դʵ���2View, CView)
END_MESSAGE_MAP()

// CMy324��Դʵ���2View ����/����

CMy324��Դʵ���2View::CMy324��Դʵ���2View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMy324��Դʵ���2View::~CMy324��Դʵ���2View()
{
}

BOOL CMy324��Դʵ���2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy324��Դʵ���2View ����

void CMy324��Դʵ���2View::OnDraw(CDC* pDC)
{
	CMy324��Դʵ���2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0,0,m_nWidth,m_nHeight,&MemDC,0,0,SRCCOPY);
}


// CMy324��Դʵ���2View ���

#ifdef _DEBUG
void CMy324��Դʵ���2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy324��Դʵ���2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy324��Դʵ���2Doc* CMy324��Դʵ���2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy324��Դʵ���2Doc)));
	return (CMy324��Դʵ���2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy324��Դʵ���2View ��Ϣ�������
