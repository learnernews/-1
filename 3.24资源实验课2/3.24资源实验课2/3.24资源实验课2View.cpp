
// 3.24资源实验课2View.cpp : CMy324资源实验课2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.24资源实验课2.h"
#endif

#include "3.24资源实验课2Doc.h"
#include "3.24资源实验课2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy324资源实验课2View

IMPLEMENT_DYNCREATE(CMy324资源实验课2View, CView)

BEGIN_MESSAGE_MAP(CMy324资源实验课2View, CView)
END_MESSAGE_MAP()

// CMy324资源实验课2View 构造/析构

CMy324资源实验课2View::CMy324资源实验课2View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

CMy324资源实验课2View::~CMy324资源实验课2View()
{
}

BOOL CMy324资源实验课2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy324资源实验课2View 绘制

void CMy324资源实验课2View::OnDraw(CDC* pDC)
{
	CMy324资源实验课2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0,0,m_nWidth,m_nHeight,&MemDC,0,0,SRCCOPY);
}


// CMy324资源实验课2View 诊断

#ifdef _DEBUG
void CMy324资源实验课2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy324资源实验课2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy324资源实验课2Doc* CMy324资源实验课2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy324资源实验课2Doc)));
	return (CMy324资源实验课2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy324资源实验课2View 消息处理程序
