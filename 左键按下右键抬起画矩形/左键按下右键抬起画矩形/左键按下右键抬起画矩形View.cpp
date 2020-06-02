
// 左键按下右键抬起画矩形View.cpp : C左键按下右键抬起画矩形View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "左键按下右键抬起画矩形.h"
#endif

#include "左键按下右键抬起画矩形Doc.h"
#include "左键按下右键抬起画矩形View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C左键按下右键抬起画矩形View

IMPLEMENT_DYNCREATE(C左键按下右键抬起画矩形View, CView)

BEGIN_MESSAGE_MAP(C左键按下右键抬起画矩形View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C左键按下右键抬起画矩形View 构造/析构

C左键按下右键抬起画矩形View::C左键按下右键抬起画矩形View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(1000);

}

C左键按下右键抬起画矩形View::~C左键按下右键抬起画矩形View()
{
}

BOOL C左键按下右键抬起画矩形View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C左键按下右键抬起画矩形View 绘制

void C左键按下右键抬起画矩形View::OnDraw(CDC* pDC)
{
	C左键按下右键抬起画矩形Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	s.Format(_T("（%d,%d）"), point1);
	CClientDC dc(this);
	dc.TextOutW(200, 200, s);
	CRect rect(point1.x,point1.y,point2.x,point2.y);
	pDC->Rectangle(rect);
	this->Invalidate();



	// TODO: 在此处为本机数据添加绘制代码
}


// C左键按下右键抬起画矩形View 诊断

#ifdef _DEBUG
void C左键按下右键抬起画矩形View::AssertValid() const
{
	CView::AssertValid();
}

void C左键按下右键抬起画矩形View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C左键按下右键抬起画矩形Doc* C左键按下右键抬起画矩形View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C左键按下右键抬起画矩形Doc)));
	return (C左键按下右键抬起画矩形Doc*)m_pDocument;
}
#endif //_DEBUG


// C左键按下右键抬起画矩形View 消息处理程序


void C左键按下右键抬起画矩形View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	
	//s.Format(_T("（%d,%d）"), point);
	//CClientDC dc(this);
	//dc.TextOutW(200, 200, s);
	
	point1 = point;
	

	CView::OnLButtonDown(nFlags, point);
}


void C左键按下右键抬起画矩形View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//c = point.x;
	//d = point.y;
	point2 = point;

	CView::OnLButtonUp(nFlags, point);
}
