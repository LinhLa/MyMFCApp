// DialogTab2.cpp : implementation file
//

#include "stdafx.h"
#include "MyApp.h"
#include "DialogTab2.h"
#include "afxdialogex.h"


// CDialogTab2 dialog

IMPLEMENT_DYNAMIC(CDialogTab2, CDialogEx)

CDialogTab2::CDialogTab2(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_TAB2, pParent)
{

}

CDialogTab2::~CDialogTab2()
{
}

void CDialogTab2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialogTab2, CDialogEx)
END_MESSAGE_MAP()


// CDialogTab2 message handlers


void CDialogTab2::PostNcDestroy()
{
	// TODO: Add your specialized code here and/or call the base class
	delete this;
	CDialogEx::PostNcDestroy();
}
