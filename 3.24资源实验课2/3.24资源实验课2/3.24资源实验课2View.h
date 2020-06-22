
// 3.24资源实验课2View.h : CMy324资源实验课2View 类的接口
//

#pragma once


class CMy324资源实验课2View : public CView
{
protected: // 仅从序列化创建
	CMy324资源实验课2View();
	DECLARE_DYNCREATE(CMy324资源实验课2View)

// 特性
public:
	CMy324资源实验课2Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy324资源实验课2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 3.24资源实验课2View.cpp 中的调试版本
inline CMy324资源实验课2Doc* CMy324资源实验课2View::GetDocument() const
   { return reinterpret_cast<CMy324资源实验课2Doc*>(m_pDocument); }
#endif

