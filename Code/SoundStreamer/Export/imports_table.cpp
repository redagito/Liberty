#include "SoundStreamer-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"DACOM.dll", "DACOM_Acquire", -1, _RelativeAddress(public_6efc000, 0x6efc000)},
	{"DACOM.dll", "_FDUMP", -1, _RelativeAddress(public_6efc004, 0x6efc004)},
	{"MSACM32.dll", "acmStreamClose", -1, _RelativeAddress(public_6efc0f4, 0x6efc0f4)},
	{"MSACM32.dll", "acmFormatSuggest", -1, _RelativeAddress(public_6efc0f8, 0x6efc0f8)},
	{"MSACM32.dll", "acmStreamSize", -1, _RelativeAddress(public_6efc0fc, 0x6efc0fc)},
	{"MSACM32.dll", "acmDriverEnum", -1, _RelativeAddress(public_6efc100, 0x6efc100)},
	{"MSACM32.dll", "acmDriverOpen", -1, _RelativeAddress(public_6efc104, 0x6efc104)},
	{"MSACM32.dll", "acmDriverDetailsA", -1, _RelativeAddress(public_6efc108, 0x6efc108)},
	{"MSACM32.dll", "acmStreamPrepareHeader", -1, _RelativeAddress(public_6efc10c, 0x6efc10c)},
	{"MSACM32.dll", "acmStreamConvert", -1, _RelativeAddress(public_6efc110, 0x6efc110)},
	{"MSACM32.dll", "acmStreamUnprepareHeader", -1, _RelativeAddress(public_6efc114, 0x6efc114)},
	{"MSACM32.dll", "acmStreamOpen", -1, _RelativeAddress(public_6efc118, 0x6efc118)},
	{"KERNEL32.dll", "GetModuleFileNameA", -1, _RelativeAddress(public_6efc00c, 0x6efc00c)},
	{"KERNEL32.dll", "GetVersionExA", -1, _RelativeAddress(public_6efc010, 0x6efc010)},
	{"KERNEL32.dll", "HeapDestroy", -1, _RelativeAddress(public_6efc014, 0x6efc014)},
	{"KERNEL32.dll", "RaiseException", -1, _RelativeAddress(public_6efc018, 0x6efc018)},
	{"KERNEL32.dll", "GetModuleHandleA", -1, _RelativeAddress(public_6efc01c, 0x6efc01c)},
	{"KERNEL32.dll", "LoadLibraryA", -1, _RelativeAddress(public_6efc020, 0x6efc020)},
	{"KERNEL32.dll", "GetOEMCP", -1, _RelativeAddress(public_6efc024, 0x6efc024)},
	{"KERNEL32.dll", "GetACP", -1, _RelativeAddress(public_6efc028, 0x6efc028)},
	{"KERNEL32.dll", "GetCPInfo", -1, _RelativeAddress(public_6efc02c, 0x6efc02c)},
	{"KERNEL32.dll", "IsBadCodePtr", -1, _RelativeAddress(public_6efc030, 0x6efc030)},
	{"KERNEL32.dll", "IsBadReadPtr", -1, _RelativeAddress(public_6efc034, 0x6efc034)},
	{"KERNEL32.dll", "CreateEventA", -1, _RelativeAddress(public_6efc038, 0x6efc038)},
	{"KERNEL32.dll", "InitializeCriticalSection", -1, _RelativeAddress(public_6efc03c, 0x6efc03c)},
	{"KERNEL32.dll", "DeleteCriticalSection", -1, _RelativeAddress(public_6efc040, 0x6efc040)},
	{"KERNEL32.dll", "CloseHandle", -1, _RelativeAddress(public_6efc044, 0x6efc044)},
	{"KERNEL32.dll", "WaitForSingleObject", -1, _RelativeAddress(public_6efc048, 0x6efc048)},
	{"KERNEL32.dll", "LeaveCriticalSection", -1, _RelativeAddress(public_6efc04c, 0x6efc04c)},
	{"KERNEL32.dll", "EnterCriticalSection", -1, _RelativeAddress(public_6efc050, 0x6efc050)},
	{"KERNEL32.dll", "Sleep", -1, _RelativeAddress(public_6efc054, 0x6efc054)},
	{"KERNEL32.dll", "SetThreadPriority", -1, _RelativeAddress(public_6efc058, 0x6efc058)},
	{"KERNEL32.dll", "CreateThread", -1, _RelativeAddress(public_6efc05c, 0x6efc05c)},
	{"KERNEL32.dll", "FlushFileBuffers", -1, _RelativeAddress(public_6efc060, 0x6efc060)},
	{"KERNEL32.dll", "SetStdHandle", -1, _RelativeAddress(public_6efc064, 0x6efc064)},
	{"KERNEL32.dll", "LCMapStringW", -1, _RelativeAddress(public_6efc068, 0x6efc068)},
	{"KERNEL32.dll", "LCMapStringA", -1, _RelativeAddress(public_6efc06c, 0x6efc06c)},
	{"KERNEL32.dll", "GetStringTypeW", -1, _RelativeAddress(public_6efc070, 0x6efc070)},
	{"KERNEL32.dll", "GetStringTypeA", -1, _RelativeAddress(public_6efc074, 0x6efc074)},
	{"KERNEL32.dll", "MultiByteToWideChar", -1, _RelativeAddress(public_6efc078, 0x6efc078)},
	{"KERNEL32.dll", "HeapFree", -1, _RelativeAddress(public_6efc07c, 0x6efc07c)},
	{"KERNEL32.dll", "HeapAlloc", -1, _RelativeAddress(public_6efc080, 0x6efc080)},
	{"KERNEL32.dll", "RtlUnwind", -1, _RelativeAddress(public_6efc084, 0x6efc084)},
	{"KERNEL32.dll", "GetCommandLineA", -1, _RelativeAddress(public_6efc088, 0x6efc088)},
	{"KERNEL32.dll", "GetVersion", -1, _RelativeAddress(public_6efc08c, 0x6efc08c)},
	{"KERNEL32.dll", "SetFilePointer", -1, _RelativeAddress(public_6efc090, 0x6efc090)},
	{"KERNEL32.dll", "GetCurrentProcess", -1, _RelativeAddress(public_6efc094, 0x6efc094)},
	{"KERNEL32.dll", "HeapSize", -1, _RelativeAddress(public_6efc098, 0x6efc098)},
	{"KERNEL32.dll", "GetEnvironmentVariableA", -1, _RelativeAddress(public_6efc09c, 0x6efc09c)},
	{"KERNEL32.dll", "SetHandleCount", -1, _RelativeAddress(public_6efc0a0, 0x6efc0a0)},
	{"KERNEL32.dll", "SetUnhandledExceptionFilter", -1, _RelativeAddress(public_6efc0a4, 0x6efc0a4)},
	{"KERNEL32.dll", "HeapCreate", -1, _RelativeAddress(public_6efc0a8, 0x6efc0a8)},
	{"KERNEL32.dll", "VirtualFree", -1, _RelativeAddress(public_6efc0ac, 0x6efc0ac)},
	{"KERNEL32.dll", "VirtualAlloc", -1, _RelativeAddress(public_6efc0b0, 0x6efc0b0)},
	{"KERNEL32.dll", "HeapReAlloc", -1, _RelativeAddress(public_6efc0b4, 0x6efc0b4)},
	{"KERNEL32.dll", "IsBadWritePtr", -1, _RelativeAddress(public_6efc0b8, 0x6efc0b8)},
	{"KERNEL32.dll", "GetProcAddress", -1, _RelativeAddress(public_6efc0bc, 0x6efc0bc)},
	{"KERNEL32.dll", "ExitProcess", -1, _RelativeAddress(public_6efc0c0, 0x6efc0c0)},
	{"KERNEL32.dll", "TerminateProcess", -1, _RelativeAddress(public_6efc0c4, 0x6efc0c4)},
	{"KERNEL32.dll", "GetStartupInfoA", -1, _RelativeAddress(public_6efc0c8, 0x6efc0c8)},
	{"KERNEL32.dll", "WriteFile", -1, _RelativeAddress(public_6efc0cc, 0x6efc0cc)},
	{"KERNEL32.dll", "GetLastError", -1, _RelativeAddress(public_6efc0d0, 0x6efc0d0)},
	{"KERNEL32.dll", "GetStdHandle", -1, _RelativeAddress(public_6efc0d4, 0x6efc0d4)},
	{"KERNEL32.dll", "GetFileType", -1, _RelativeAddress(public_6efc0d8, 0x6efc0d8)},
	{"KERNEL32.dll", "FreeEnvironmentStringsA", -1, _RelativeAddress(public_6efc0dc, 0x6efc0dc)},
	{"KERNEL32.dll", "FreeEnvironmentStringsW", -1, _RelativeAddress(public_6efc0e0, 0x6efc0e0)},
	{"KERNEL32.dll", "WideCharToMultiByte", -1, _RelativeAddress(public_6efc0e4, 0x6efc0e4)},
	{"KERNEL32.dll", "GetEnvironmentStrings", -1, _RelativeAddress(public_6efc0e8, 0x6efc0e8)},
	{"KERNEL32.dll", "GetEnvironmentStringsW", -1, _RelativeAddress(public_6efc0ec, 0x6efc0ec)},
	{"ole32.dll", "CoUninitialize", -1, _RelativeAddress(public_6efc120, 0x6efc120)},
	{"ole32.dll", "CoInitialize", -1, _RelativeAddress(public_6efc124, 0x6efc124)},
	{"ole32.dll", "CoCreateInstance", -1, _RelativeAddress(public_6efc128, 0x6efc128)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

