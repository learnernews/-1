
// 第六章课堂习题View.cpp : C第六章课堂习题View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第六章课堂习题.h"
#endif

#include "第六章课堂习题Doc.h"
#include "第六章课堂习题View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第六章课堂习题View

IMPLEMENT_DYNCREATE(C第六章课堂习题View, CView)

BEGIN_MESSAGE_MAP(C第六章课堂习题View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C第六章课堂习题View::OnFileOpen)
END_MESSAGE_MAP()

// C第六章课堂习题View 构造/析构

C第六章课堂习题View::C第六章课堂习题View()
{
	// TODO: 在此处添加构造代码

}

C第六章课堂习题View::~C第六章课堂习题View()
{
}

BOOL C第六章课堂习题View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第六章课堂习题View 绘制

void C第六章课堂习题View::OnDraw(CDC* /*pDC*/)
{
	C第六章课堂习题Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第六章课堂习题View 诊断

#ifdef _DEBUG
void C第六章课堂习题View::AssertValid() const
{
	CView::AssertValid();
}

void C第六章课堂习题View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第六章课堂习题Doc* C第六章课堂习题View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第六章课堂习题Doc)));
	return (C第六章课堂习题Doc*)m_pDocument;
}
#endif //_DEBUG


// C第六章课堂习题View 消息处理程序


void C第六章课堂习题View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filemane = cfd.GetPathName();
		CImage img;
		img.Load(filemane);
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	}
}
