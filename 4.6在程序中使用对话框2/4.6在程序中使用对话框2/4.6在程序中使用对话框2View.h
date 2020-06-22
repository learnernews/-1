
// 4.6在程序中使用对话框2View.h : CMy46在程序中使用对话框2View 类的接口
//

#pragma once


class CMy46在程序中使用对话框2View : public CView
{
protected: // 仅从序列化创建
	CMy46在程序中使用对话框2View();
	DECLARE_DYNCREATE(CMy46在程序中使用对话框2View)

// 特性
public:
	CMy46在程序中使用对话框2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy46在程序中使用对话框2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShower();
};

#ifndef _DEBUG  // 4.6在程序中使用对话框2View.cpp 中的调试版本
inline CMy46在程序中使用对话框2Doc* CMy46在程序中使用对话框2View::GetDocument() const
   { return reinterpret_cast<CMy46在程序中使用对话框2Doc*>(m_pDocument); }
#endif

