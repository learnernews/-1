
// 4.7������ʵ��2View.h : CMy47������ʵ��2View ��Ľӿ�
//

#pragma once


class CMy47������ʵ��2View : public CView
{
protected: // �������л�����
	CMy47������ʵ��2View();
	DECLARE_DYNCREATE(CMy47������ʵ��2View)

// ����
public:
	CMy47������ʵ��2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy47������ʵ��2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onjia();
};

#ifndef _DEBUG  // 4.7������ʵ��2View.cpp �еĵ��԰汾
inline CMy47������ʵ��2Doc* CMy47������ʵ��2View::GetDocument() const
   { return reinterpret_cast<CMy47������ʵ��2Doc*>(m_pDocument); }
#endif

