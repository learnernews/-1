
// 第六周实验1View.cpp : C第六周实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第六周实验1.h"
#endif

#include "第六周实验1Doc.h"
#include "第六周实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第六周实验1View

IMPLEMENT_DYNCREATE(C第六周实验1View, CView)

BEGIN_MESSAGE_MAP(C第六周实验1View, CView)
	ON_WM_MOUSEWHEEL()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_CHAR()
	ON_WM_CREATE()
END_MESSAGE_MAP()

// C第六周实验1View 构造/析构

C第六周实验1View::C第六周实验1View()
{
	// TODO: 在此处添加构造代码

}

C第六周实验1View::~C第六周实验1View()
{
}

BOOL C第六周实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第六周实验1View 绘制

void C第六周实验1View::OnDraw(CDC* pDC)
{
	C第六周实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(190, 190, 510, 500);

}


// C第六周实验1View 诊断

#ifdef _DEBUG
void C第六周实验1View::AssertValid() const
{
	CView::AssertValid();
}

void C第六周实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第六周实验1Doc* C第六周实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第六周实验1Doc)));
	return (C第六周实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// C第六周实验1View 消息处理程序




void C第六周实验1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnMouseMove(nFlags, point);
}


void C第六周实验1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	x = point.x;
	y = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void C第六周实验1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonUp(nFlags, point);
}


void C第六周实验1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
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


int C第六周实验1View::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码

	return 0;
}
