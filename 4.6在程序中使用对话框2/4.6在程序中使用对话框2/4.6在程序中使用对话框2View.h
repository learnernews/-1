
// 4.6�ڳ�����ʹ�öԻ���2View.h : CMy46�ڳ�����ʹ�öԻ���2View ��Ľӿ�
//

#pragma once


class CMy46�ڳ�����ʹ�öԻ���2View : public CView
{
protected: // �������л�����
	CMy46�ڳ�����ʹ�öԻ���2View();
	DECLARE_DYNCREATE(CMy46�ڳ�����ʹ�öԻ���2View)

// ����
public:
	CMy46�ڳ�����ʹ�öԻ���2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy46�ڳ�����ʹ�öԻ���2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShower();
};

#ifndef _DEBUG  // 4.6�ڳ�����ʹ�öԻ���2View.cpp �еĵ��԰汾
inline CMy46�ڳ�����ʹ�öԻ���2Doc* CMy46�ڳ�����ʹ�öԻ���2View::GetDocument() const
   { return reinterpret_cast<CMy46�ڳ�����ʹ�öԻ���2Doc*>(m_pDocument); }
#endif

