
// 3.23资源（2）View.h : CMy323资源（2）View 类的接口
//

#pragma once


class CMy323资源（2）View : public CView
{
protected: // 仅从序列化创建
	CMy323资源（2）View();
	DECLARE_DYNCREATE(CMy323资源（2）View)

// 特性
public:
	CMy323资源（2）Doc* GetDocument() const;

// 操作
public:
	int set;
	CRect cr;
	CRect cr1;
	int a;
	int b;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy323资源（2）View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowcr();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 3.23资源（2）View.cpp 中的调试版本
inline CMy323资源（2）Doc* CMy323资源（2）View::GetDocument() const
   { return reinterpret_cast<CMy323资源（2）Doc*>(m_pDocument); }
#endif

