
// ��������Ҽ�̧�𻭾���View.h : C��������Ҽ�̧�𻭾���View ��Ľӿ�
//

#pragma once


class C��������Ҽ�̧�𻭾���View : public CView
{
protected: // �������л�����
	C��������Ҽ�̧�𻭾���View();
	DECLARE_DYNCREATE(C��������Ҽ�̧�𻭾���View)

// ����
public:
	C��������Ҽ�̧�𻭾���Doc* GetDocument() const;

// ����
public:
	CArray<CPoint, CPoint&> ca;
	int a;
	int b;
	int c;
	int d;
	CString s;
	CPoint point1;
	CPoint point2;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��������Ҽ�̧�𻭾���View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��������Ҽ�̧�𻭾���View.cpp �еĵ��԰汾
inline C��������Ҽ�̧�𻭾���Doc* C��������Ҽ�̧�𻭾���View::GetDocument() const
   { return reinterpret_cast<C��������Ҽ�̧�𻭾���Doc*>(m_pDocument); }
#endif

