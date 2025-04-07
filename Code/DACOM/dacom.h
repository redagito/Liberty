#pragma once

#include <Core/core.h>

#ifndef DACOM_DEC
#define DACOM_DEC __declspec(dllimport)
#endif
#define DACOM_API __stdcall
#define DACOM_DEFMETHOD(method) virtual GENRESULT DACOM_API method
#define DACOM_DEFMETHOD_(type, method) virtual type DACOM_API method
#define DACOM_NO_VTABLE __declspec(novtable)
//#define DACOM_MAKE_IID(name, ver) name "__" #ver
#define DACOM_MAKE_IID(name) DA_XSTR(LIB_MAJOR) "." DA_XSTR(LIB_MINOR) "_" name

#define DA_HEAP_DEFINE_NEW_OPERATOR(...) // #TODO

#include "fdump.h"
#include "IDAComponent.h"
#include "ICOManager.h"
#include "IProfileParser.h"
#include "TComponent.h"

// extern "C" interface to guarantee static linkage without name-mangling 
extern "C"
{
	// All clients of DACOM (including component objects as well as the
	// application itself) must call DACOM_Acquire() to obtain an instance
	// pointer to the DA Component Manager
	DACOM_DEC ICOManager* __cdecl DACOM_Acquire(void);

	// This allows clients to retrieve the version information about a DLL.
	// The version information is pulled out of the product version resource in the DLL and
	// returned.
	DACOM_DEC GENRESULT __cdecl DACOM_GetDllVersion(const char* dll_name, U32* out_major, U32* out_minor, U32* out_build);

	// This allows clients to retrieve DACOM information before acquiring/initializing
	// DACOM itself.  This loads the version out of the product version resource of the 
	// DACOM.dll that will be/would be/was used when the application calls DACOM_Acquire()
	DACOM_DEC GENRESULT __cdecl DACOM_GetVersion(U32* out_major, U32* out_minor, U32* out_build);
}

namespace DACOM_CRC
{
	DACOM_DEC int __cdecl CompareStringsI(char const* String1, char const* String2);
	DACOM_DEC unsigned long __cdecl GetCRC32(char const* start, char const* end);
	DACOM_DEC unsigned long __cdecl GetCRC32(char const* string);
	DACOM_DEC unsigned long __cdecl GetContinuedCRC32(unsigned long, char);
	DACOM_DEC unsigned long __cdecl GetContinuedCRC32(unsigned long, char const*);
}

namespace LogStream
{
	DACOM_DEC void FlushToDisk(void);
	DACOM_DEC void LogEvent(char const*, float, unsigned long);
	DACOM_DEC void LogNamedEvent(char const*, char const*, unsigned long);
	DACOM_DEC bool Startup(char const*);
	DACOM_DEC void Update(float);
};
