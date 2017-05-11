// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdarg.h>
using namespace std;
#include <windows.h>  
#include "commctrl.h"

int _tmain(int argc, _TCHAR* argv[])
{
	
	HWND m_hWnd = (HWND)397762;

	SetWindowLong(m_hWnd, GWL_STYLE, GetWindowLong(m_hWnd, GWL_STYLE) & ~WS_CAPTION);
	SetWindowLong(m_hWnd, GWL_EXSTYLE, GetWindowLong(m_hWnd, GWL_EXSTYLE) & ~(WS_EX_WINDOWEDGE | WS_EX_DLGMODALFRAME));

	

	return 0;
}

