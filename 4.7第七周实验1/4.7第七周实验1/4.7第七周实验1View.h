
// 4.7第七周实验1View.h : CMy47第七周实验1View 类的接口
//

#pragma once


class CMy47第七周实验1View : public CView
{
protected: // 仅从序列化创建
	CMy47第七周实验1View();
	DECLARE_DYNCREATE(CMy47第七周实验1View)

// 特性
public:
	CMy47第七周实验1Doc* GetDocument() const;

// 操作
public:
	CPoint p;
	CRect c;
	CArray < CRect, CRect&> ca;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy47第七周实验1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 4.7第七周实验1View.cpp 中的调试版本
inline CMy47第七周实验1Doc* CMy47第七周实验1View::GetDocument() const
   { return reinterpret_cast<CMy47第七周实验1Doc*>(m_pDocument); }
#endif

