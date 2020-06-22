
// 3.23资源（2）View.cpp : CMy323资源（2）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.23资源（2）.h"
#endif

#include "3.23资源（2）Doc.h"
#include "3.23资源（2）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy323资源（2）View

IMPLEMENT_DYNCREATE(CMy323资源（2）View, CView)

BEGIN_MESSAGE_MAP(CMy323资源（2）View, CView)
	ON_COMMAND(ID_SHOWCR, &CMy323资源（2）View::OnShowcr)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy323资源（2）View 构造/析构

CMy323资源（2）View::CMy323资源（2）View()
{
	// TODO: 在此处添加构造代码
	set = 1;
}

CMy323资源（2）View::~CMy323资源（2）View()
{
}

BOOL CMy323资源（2）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy323资源（2）View 绘制

void CMy323资源（2）View::OnDraw(CDC* pDC)
{
	CMy323资源（2）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	GetClientRect(&cr1);//按下左键显示颜色渐变的圆
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


// CMy323资源（2）View 诊断

#ifdef _DEBUG
void CMy323资源（2）View::AssertValid() const
{
	CView::AssertValid();
}

void CMy323资源（2）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy323资源（2）Doc* CMy323资源（2）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy323资源（2）Doc)));
	return (CMy323资源（2）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy323资源（2）View 消息处理程序


void CMy323资源（2）View::OnShowcr()
{
	// TODO: 在此添加命令处理程序代码

}


void CMy323资源（2）View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	cr.left = a;
	cr.top = b;
	cr.right = a;
	cr.bottom = b;

	CView::OnLButtonDown(nFlags, point);
}


void CMy323资源（2）View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	cr.left -= 1;
	cr.top -= 1;
	cr.right += 1;
	cr.bottom += 1;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
