
// 第六章课堂习题View.h : C第六章课堂习题View 类的接口
//

#pragma once


class C第六章课堂习题View : public CView
{
protected: // 仅从序列化创建
	C第六章课堂习题View();
	DECLARE_DYNCREATE(C第六章课堂习题View)

// 特性
public:
	C第六章课堂习题Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第六章课堂习题View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 第六章课堂习题View.cpp 中的调试版本
inline C第六章课堂习题Doc* C第六章课堂习题View::GetDocument() const
   { return reinterpret_cast<C第六章课堂习题Doc*>(m_pDocument); }
#endif

