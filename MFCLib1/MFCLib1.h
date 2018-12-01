// MFCLib1.h : main header file for the MFCLib1 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include <iostream>

#ifdef MFCLIB1_EXPORT
#define CALLSTYLE __declspec(dllexport)
#else
#define CALLSTYLE __declspec(dllimport)
#endif

#ifndef TRACE_LOG
#define TRACE_LOG(x) printf("%s\n", x);
#endif


// CMFCLib1App
// See MFCLib1.cpp for the implementation of this class
//

class CMFCLib1App : public CWinApp
{
public:
	CMFCLib1App();

	static CALLSTYLE bool AddDriver();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
