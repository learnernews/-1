
// �����¿���ϰ��View.cpp : C�����¿���ϰ��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�����¿���ϰ��.h"
#endif

#include "�����¿���ϰ��Doc.h"
#include "�����¿���ϰ��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�����¿���ϰ��View

IMPLEMENT_DYNCREATE(C�����¿���ϰ��View, CView)

BEGIN_MESSAGE_MAP(C�����¿���ϰ��View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C�����¿���ϰ��View::OnFileOpen)
END_MESSAGE_MAP()

// C�����¿���ϰ��View ����/����

C�����¿���ϰ��View::C�����¿���ϰ��View()
{
	// TODO: �ڴ˴���ӹ������

}

C�����¿���ϰ��View::~C�����¿���ϰ��View()
{
}

BOOL C�����¿���ϰ��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�����¿���ϰ��View ����

void C�����¿���ϰ��View::OnDraw(CDC* /*pDC*/)
{
	C�����¿���ϰ��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�����¿���ϰ��View ���

#ifdef _DEBUG
void C�����¿���ϰ��View::AssertValid() const
{
	CView::AssertValid();
}

void C�����¿���ϰ��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�����¿���ϰ��Doc* C�����¿���ϰ��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�����¿���ϰ��Doc)));
	return (C�����¿���ϰ��Doc*)m_pDocument;
}
#endif //_DEBUG


// C�����¿���ϰ��View ��Ϣ�������


void C�����¿���ϰ��View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r == IDOK)
	{
		CString filemane = cfd.GetPathName();
		CImage img;
		img.Load(filemane);
		img.Draw(dc.m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
	}
}
