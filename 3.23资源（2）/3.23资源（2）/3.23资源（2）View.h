
// 3.23��Դ��2��View.h : CMy323��Դ��2��View ��Ľӿ�
//

#pragma once


class CMy323��Դ��2��View : public CView
{
protected: // �������л�����
	CMy323��Դ��2��View();
	DECLARE_DYNCREATE(CMy323��Դ��2��View)

// ����
public:
	CMy323��Դ��2��Doc* GetDocument() const;

// ����
public:
	int set;
	CRect cr;
	CRect cr1;
	int a;
	int b;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy323��Դ��2��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowcr();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 3.23��Դ��2��View.cpp �еĵ��԰汾
inline CMy323��Դ��2��Doc* CMy323��Դ��2��View::GetDocument() const
   { return reinterpret_cast<CMy323��Դ��2��Doc*>(m_pDocument); }
#endif

