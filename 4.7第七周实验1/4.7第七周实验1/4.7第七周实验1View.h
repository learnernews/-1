
// 4.7������ʵ��1View.h : CMy47������ʵ��1View ��Ľӿ�
//

#pragma once


class CMy47������ʵ��1View : public CView
{
protected: // �������л�����
	CMy47������ʵ��1View();
	DECLARE_DYNCREATE(CMy47������ʵ��1View)

// ����
public:
	CMy47������ʵ��1Doc* GetDocument() const;

// ����
public:
	CPoint p;
	CRect c;
	CArray < CRect, CRect&> ca;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy47������ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 4.7������ʵ��1View.cpp �еĵ��԰汾
inline CMy47������ʵ��1Doc* CMy47������ʵ��1View::GetDocument() const
   { return reinterpret_cast<CMy47������ʵ��1Doc*>(m_pDocument); }
#endif

