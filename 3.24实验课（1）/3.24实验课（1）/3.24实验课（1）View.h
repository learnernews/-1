
// 3.24ʵ��Σ�1��View.h : CMy324ʵ��Σ�1��View ��Ľӿ�
//

#pragma once


class CMy324ʵ��Σ�1��View : public CView
{
protected: // �������л�����
	CMy324ʵ��Σ�1��View();
	DECLARE_DYNCREATE(CMy324ʵ��Σ�1��View)

// ����
public:
	CMy324ʵ��Σ�1��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy324ʵ��Σ�1��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // 3.24ʵ��Σ�1��View.cpp �еĵ��԰汾
inline CMy324ʵ��Σ�1��Doc* CMy324ʵ��Σ�1��View::GetDocument() const
   { return reinterpret_cast<CMy324ʵ��Σ�1��Doc*>(m_pDocument); }
#endif

