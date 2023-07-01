
// MyThread.cpp : Defines the class behaviors for the application.
//

#include "pch.h"
#include "framework.h"
#include "MyThread.h"
#include "MyThreadDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMyThreadApp

BEGIN_MESSAGE_MAP(CMyThreadApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMyThreadApp construction

CMyThreadApp::CMyThreadApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CMyThreadApp object

CMyThreadApp theApp;


// CMyThreadApp initialization

BOOL CMyThreadApp::InitInstance()
{
	CWinApp::InitInstance();

	CMyThreadDlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
	
	return FALSE;
}

