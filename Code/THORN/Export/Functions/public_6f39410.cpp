#include "THORN-PCH.h"

PROC_DECLARE(0x6f39410, internal_6f39410, public_6f39410);
extern "C" NAKED register_t __cdecl internal_6f39410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x20], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6f39410)
    }
}
