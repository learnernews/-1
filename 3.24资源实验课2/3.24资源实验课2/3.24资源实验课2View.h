
// 3.24��Դʵ���2View.h : CMy324��Դʵ���2View ��Ľӿ�
//

#pragma once


class CMy324��Դʵ���2View : public CView
{
protected: // �������л�����
	CMy324��Դʵ���2View();
	DECLARE_DYNCREATE(CMy324��Դʵ���2View)

// ����
public:
	CMy324��Դʵ���2Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy324��Դʵ���2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 3.24��Դʵ���2View.cpp �еĵ��԰汾
inline CMy324��Դʵ���2Doc* CMy324��Դʵ���2View::GetDocument() const
   { return reinterpret_cast<CMy324��Դʵ���2Doc*>(m_pDocument); }
#endif

