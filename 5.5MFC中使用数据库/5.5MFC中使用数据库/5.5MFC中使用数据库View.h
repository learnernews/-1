
// 5.5MFC中使用数据库View.h : CMy55MFC中使用数据库View 类的接口
//

#pragma once

class CMy55MFC中使用数据库Set;

class CMy55MFC中使用数据库View : public CRecordView
{
protected: // 仅从序列化创建
	CMy55MFC中使用数据库View();
	DECLARE_DYNCREATE(CMy55MFC中使用数据库View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY55MFC_FORM };
#endif
	CMy55MFC中使用数据库Set* m_pSet;

// 特性
public:
	CMy55MFC中使用数据库Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMy55MFC中使用数据库View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	long ID;
	CString name;
	CString number;
	CString age;
	CString phone;
};

#ifndef _DEBUG  // 5.5MFC中使用数据库View.cpp 中的调试版本
inline CMy55MFC中使用数据库Doc* CMy55MFC中使用数据库View::GetDocument() const
   { return reinterpret_cast<CMy55MFC中使用数据库Doc*>(m_pDocument); }
#endif

