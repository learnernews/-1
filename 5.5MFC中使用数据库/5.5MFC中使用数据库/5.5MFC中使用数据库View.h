
// 5.5MFC��ʹ�����ݿ�View.h : CMy55MFC��ʹ�����ݿ�View ��Ľӿ�
//

#pragma once

class CMy55MFC��ʹ�����ݿ�Set;

class CMy55MFC��ʹ�����ݿ�View : public CRecordView
{
protected: // �������л�����
	CMy55MFC��ʹ�����ݿ�View();
	DECLARE_DYNCREATE(CMy55MFC��ʹ�����ݿ�View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY55MFC_FORM };
#endif
	CMy55MFC��ʹ�����ݿ�Set* m_pSet;

// ����
public:
	CMy55MFC��ʹ�����ݿ�Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMy55MFC��ʹ�����ݿ�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit4();
	long ID;
	CString name;
	CString number;
	CString age;
	CString phone;
};

#ifndef _DEBUG  // 5.5MFC��ʹ�����ݿ�View.cpp �еĵ��԰汾
inline CMy55MFC��ʹ�����ݿ�Doc* CMy55MFC��ʹ�����ݿ�View::GetDocument() const
   { return reinterpret_cast<CMy55MFC��ʹ�����ݿ�Doc*>(m_pDocument); }
#endif

