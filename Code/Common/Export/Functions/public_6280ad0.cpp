#include "Common-PCH.h"

PROC_DECLARE(0x6280ad0, internal_6280ad0, public_6280ad0);
extern "C" NAKED register_t __cdecl internal_6280ad0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov cl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [eax+0x10], cl
        ret 4
        UNREACHABLE_TRAP(0x6280ad0)
    }
}
