#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52f3e0, internal_52f3e0, public_52f3e0);
extern "C" NAKED register_t __cdecl internal_52f3e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 0x34
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x52f3e0)
    }
}
