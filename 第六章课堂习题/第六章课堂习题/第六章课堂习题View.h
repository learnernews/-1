
// �����¿���ϰ��View.h : C�����¿���ϰ��View ��Ľӿ�
//

#pragma once


class C�����¿���ϰ��View : public CView
{
protected: // �������л�����
	C�����¿���ϰ��View();
	DECLARE_DYNCREATE(C�����¿���ϰ��View)

// ����
public:
	C�����¿���ϰ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�����¿���ϰ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // �����¿���ϰ��View.cpp �еĵ��԰汾
inline C�����¿���ϰ��Doc* C�����¿���ϰ��View::GetDocument() const
   { return reinterpret_cast<C�����¿���ϰ��Doc*>(m_pDocument); }
#endif

