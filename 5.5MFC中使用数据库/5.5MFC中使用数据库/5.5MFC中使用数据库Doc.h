
// 5.5MFC��ʹ�����ݿ�Doc.h : CMy55MFC��ʹ�����ݿ�Doc ��Ľӿ�
//


#pragma once
#include "5.5MFC��ʹ�����ݿ�Set.h"


class CMy55MFC��ʹ�����ݿ�Doc : public CDocument
{
protected: // �������л�����
	CMy55MFC��ʹ�����ݿ�Doc();
	DECLARE_DYNCREATE(CMy55MFC��ʹ�����ݿ�Doc)

// ����
public:
	CMy55MFC��ʹ�����ݿ�Set m_My55MFC��ʹ�����ݿ�Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMy55MFC��ʹ�����ݿ�Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
