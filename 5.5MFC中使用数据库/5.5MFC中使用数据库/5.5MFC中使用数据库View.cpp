
// 5.5MFC中使用数据库View.cpp : CMy55MFC中使用数据库View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "5.5MFC中使用数据库.h"
#endif

#include "5.5MFC中使用数据库Set.h"
#include "5.5MFC中使用数据库Doc.h"
#include "5.5MFC中使用数据库View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy55MFC中使用数据库View

IMPLEMENT_DYNCREATE(CMy55MFC中使用数据库View, CRecordView)

BEGIN_MESSAGE_MAP(CMy55MFC中使用数据库View, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT2, &CMy55MFC中使用数据库View::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT3, &CMy55MFC中使用数据库View::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &CMy55MFC中使用数据库View::OnEnChangeEdit4)
END_MESSAGE_MAP()

// CMy55MFC中使用数据库View 构造/析构

CMy55MFC中使用数据库View::CMy55MFC中使用数据库View()
	: CRecordView(IDD_MY55MFC_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CMy55MFC中使用数据库View::~CMy55MFC中使用数据库View()
{
}

void CMy55MFC中使用数据库View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CMy55MFC中使用数据库View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CMy55MFC中使用数据库View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My55MFC中使用数据库Set;
	CRecordView::OnInitialUpdate();

}


// CMy55MFC中使用数据库View 打印

BOOL CMy55MFC中使用数据库View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy55MFC中使用数据库View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy55MFC中使用数据库View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy55MFC中使用数据库View 诊断

#ifdef _DEBUG
void CMy55MFC中使用数据库View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy55MFC中使用数据库View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy55MFC中使用数据库Doc* CMy55MFC中使用数据库View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy55MFC中使用数据库Doc)));
	return (CMy55MFC中使用数据库Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy55MFC中使用数据库View 数据库支持
CRecordset* CMy55MFC中使用数据库View::OnGetRecordset()
{
	return m_pSet;
}



// CMy55MFC中使用数据库View 消息处理程序

