
// 5.5MFC中使用数据库Doc.h : CMy55MFC中使用数据库Doc 类的接口
//


#pragma once
#include "5.5MFC中使用数据库Set.h"


class CMy55MFC中使用数据库Doc : public CDocument
{
protected: // 仅从序列化创建
	CMy55MFC中使用数据库Doc();
	DECLARE_DYNCREATE(CMy55MFC中使用数据库Doc)

// 特性
public:
	CMy55MFC中使用数据库Set m_My55MFC中使用数据库Set;

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CMy55MFC中使用数据库Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
