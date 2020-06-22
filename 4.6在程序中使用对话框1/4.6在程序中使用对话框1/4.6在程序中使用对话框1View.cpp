
// 4.6在程序中使用对话框1View.cpp : CMy46在程序中使用对话框1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.6在程序中使用对话框1.h"
#endif

#include "4.6在程序中使用对话框1Doc.h"
#include "4.6在程序中使用对话框1View.h"
#include"SHOW.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy46在程序中使用对话框1View

IMPLEMENT_DYNCREATE(CMy46在程序中使用对话框1View, CView)

BEGIN_MESSAGE_MAP(CMy46在程序中使用对话框1View, CView)
	ON_COMMAND(ID_SHOW, &CMy46在程序中使用对话框1View::OnShow)
END_MESSAGE_MAP()

// CMy46在程序中使用对话框1View 构造/析构

CMy46在程序中使用对话框1View::CMy46在程序中使用对话框1View()
{
	// TODO: 在此处添加构造代码

}

CMy46在程序中使用对话框1View::~CMy46在程序中使用对话框1View()
{
}

BOOL CMy46在程序中使用对话框1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy46在程序中使用对话框1View 绘制

void CMy46在程序中使用对话框1View::OnDraw(CDC* /*pDC*/)
{
	CMy46在程序中使用对话框1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy46在程序中使用对话框1View 诊断

#ifdef _DEBUG
void CMy46在程序中使用对话框1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy46在程序中使用对话框1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy46在程序中使用对话框1Doc* CMy46在程序中使用对话框1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy46在程序中使用对话框1Doc)));
	return (CMy46在程序中使用对话框1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy46在程序中使用对话框1View 消息处理程序


void CMy46在程序中使用对话框1View::OnShow()
{
	// TODO: 在此添加命令处理程序代码
	SHOW dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s1;
		s1.Format(_T("%s"), dlg.s);
		GetDC()->TextOutW(200, 300, s1);
	}
}
