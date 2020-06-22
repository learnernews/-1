
// 3.23资源View.h : CMy323资源View 类的接口
//

#pragma once


class CMy323资源View : public CView
{
protected: // 仅从序列化创建
	CMy323资源View();
	DECLARE_DYNCREATE(CMy323资源View)

// 特性
public:
	CMy323资源Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	CRect cr1;
	int set;
	int a;
	int b;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy323资源View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 3.23资源View.cpp 中的调试版本
inline CMy323资源Doc* CMy323资源View::GetDocument() const
   { return reinterpret_cast<CMy323资源Doc*>(m_pDocument); }
#endif

