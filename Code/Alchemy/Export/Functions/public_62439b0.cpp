#include "Alchemy-PCH.h"

PROC_DECLARE(0x62439b0, internal_62439b0, public_62439b0);
extern "C" NAKED register_t __cdecl internal_62439b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+8]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x62439b0)
    }
}
