
// 3.23��ԴView.h : CMy323��ԴView ��Ľӿ�
//

#pragma once


class CMy323��ԴView : public CView
{
protected: // �������л�����
	CMy323��ԴView();
	DECLARE_DYNCREATE(CMy323��ԴView)

// ����
public:
	CMy323��ԴDoc* GetDocument() const;

// ����
public:
	CRect cr;
	CRect cr1;
	int set;
	int a;
	int b;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy323��ԴView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShow();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 3.23��ԴView.cpp �еĵ��԰汾
inline CMy323��ԴDoc* CMy323��ԴView::GetDocument() const
   { return reinterpret_cast<CMy323��ԴDoc*>(m_pDocument); }
#endif

