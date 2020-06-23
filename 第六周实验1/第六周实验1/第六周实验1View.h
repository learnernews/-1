
// 第六周实验1View.h : C第六周实验1View 类的接口
//

#pragma once


class C第六周实验1View : public CView
{
protected: // 仅从序列化创建
	C第六周实验1View();
	DECLARE_DYNCREATE(C第六周实验1View)

// 特性
public:
	C第六周实验1Doc* GetDocument() const;

// 操作
public:
	int i = 1;
	CString s, str;
	int pos, flag, x, y;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第六周实验1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

#ifndef _DEBUG  // 第六周实验1View.cpp 中的调试版本
inline C第六周实验1Doc* C第六周实验1View::GetDocument() const
   { return reinterpret_cast<C第六周实验1Doc*>(m_pDocument); }
#endif

