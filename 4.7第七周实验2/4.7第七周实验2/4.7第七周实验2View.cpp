
// 4.7第七周实验2View.cpp : CMy47第七周实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "4.7第七周实验2.h"
#endif

#include "4.7第七周实验2Doc.h"
#include "4.7第七周实验2View.h"
#include"show.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy47第七周实验2View

IMPLEMENT_DYNCREATE(CMy47第七周实验2View, CView)

BEGIN_MESSAGE_MAP(CMy47第七周实验2View, CView)
	ON_COMMAND(ID_jia, &CMy47第七周实验2View::Onjia)
END_MESSAGE_MAP()

// CMy47第七周实验2View 构造/析构

CMy47第七周实验2View::CMy47第七周实验2View()
{
	// TODO: 在此处添加构造代码

}

CMy47第七周实验2View::~CMy47第七周实验2View()
{
}

BOOL CMy47第七周实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy47第七周实验2View 绘制

void CMy47第七周实验2View::OnDraw(CDC* /*pDC*/)
{
	CMy47第七周实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy47第七周实验2View 诊断

#ifdef _DEBUG
void CMy47第七周实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy47第七周实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy47第七周实验2Doc* CMy47第七周实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy47第七周实验2Doc)));
	return (CMy47第七周实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy47第七周实验2View 消息处理程序


void CMy47第七周实验2View::Onjia()
{
	// TODO: 在此添加命令处理程序代码
	show dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{

	}
}
