
// 3.24实验课（1）View.cpp : CMy324实验课（1）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "3.24实验课（1）.h"
#endif

#include "3.24实验课（1）Doc.h"
#include "3.24实验课（1）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy324实验课（1）View

IMPLEMENT_DYNCREATE(CMy324实验课（1）View, CView)

BEGIN_MESSAGE_MAP(CMy324实验课（1）View, CView)
	ON_COMMAND(ID_SHOWNAME, &CMy324实验课（1）View::OnShowname)
END_MESSAGE_MAP()

// CMy324实验课（1）View 构造/析构

CMy324实验课（1）View::CMy324实验课（1）View()
{
	// TODO: 在此处添加构造代码

}

CMy324实验课（1）View::~CMy324实验课（1）View()
{
}

BOOL CMy324实验课（1）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy324实验课（1）View 绘制

void CMy324实验课（1）View::OnDraw(CDC* /*pDC*/)
{
	CMy324实验课（1）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy324实验课（1）View 诊断

#ifdef _DEBUG
void CMy324实验课（1）View::AssertValid() const
{
	CView::AssertValid();
}

void CMy324实验课（1）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy324实验课（1）Doc* CMy324实验课（1）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy324实验课（1）Doc)));
	return (CMy324实验课（1）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy324实验课（1）View 消息处理程序


void CMy324实验课（1）View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString s = _T("赖曙强");
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
}
