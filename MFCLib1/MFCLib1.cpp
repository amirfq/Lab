// MFCLib1.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include "MFCLib1.h"

#define MFCLIB1_EXPORT 1

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: If this DLL is dynamically linked against the MFC DLLs,
//		any functions exported from this DLL which call into
//		MFC must have the AFX_MANAGE_STATE macro added at the
//		very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

// CMFCLib1App

BEGIN_MESSAGE_MAP(CMFCLib1App, CWinApp)
END_MESSAGE_MAP()


// CMFCLib1App construction

CMFCLib1App::CMFCLib1App()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CMFCLib1App object

CMFCLib1App theApp;


// CMFCLib1App initialization

BOOL CMFCLib1App::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}

extern "C" bool CMFCLib1App::AddDriver()
{
	TRACE_LOG("AddDriver Entered!");
	//DRIVER_INFO_6 
	//BOOL bResult = AddPrinterDriver(NULL, 6, NULL);
	int x, y;
	x = 2;
	y = 5;
	printf("x + y = %d\n", x + y);
	return TRUE;
}