// dllmain.cpp : Defines the entry point for the DLL application.

#include "stdafx.h"
#include <windows.h>

// If a dll falls in the ...
// If you return FALSE from DLL_PROCESS_ATTACH, will you get a DLL_PROCESS_DETACH?
// 
// https://blogs.msdn.microsoft.com/oldnewthing/20080808-00/?p=21313
// Return False From DllMain()
// 


BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
	)
{
	int r = 0;
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
			MessageBox(0, L"Do Yo Stuff Here!", 0, 0);
			return false; 	
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
			MessageBox(0, L"Why O Why, Or Maybe Here", 0, 0);
			return false;
			break;
	}
	return TRUE;
}
