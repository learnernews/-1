
// 5.5MFC��ʹ�����ݿ�Set.cpp : CMy55MFC��ʹ�����ݿ�Set ���ʵ��
//

#include "stdafx.h"
#include "5.5MFC��ʹ�����ݿ�.h"
#include "5.5MFC��ʹ�����ݿ�Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy55MFC��ʹ�����ݿ�Set ʵ��

// ���������� 2020��5��8��, 10:52

IMPLEMENT_DYNAMIC(CMy55MFC��ʹ�����ݿ�Set, CRecordset)

CMy55MFC��ʹ�����ݿ�Set::CMy55MFC��ʹ�����ݿ�Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMy55MFC��ʹ�����ݿ�Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f;DBQ=D:\\QQ\x4e0b\x8f7d\\Database1.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CMy55MFC��ʹ�����ݿ�Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ]");
}

void CMy55MFC��ʹ�����ݿ�Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// CMy55MFC��ʹ�����ݿ�Set ���

#ifdef _DEBUG
void CMy55MFC��ʹ�����ݿ�Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMy55MFC��ʹ�����ݿ�Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

