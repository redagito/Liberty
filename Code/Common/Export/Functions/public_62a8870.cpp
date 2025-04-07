#include "Common-PCH.h"

PROC_DECLARE(0x62a8870, internal_62a8870, public_62a8870);
extern "C" NAKED register_t __cdecl internal_62a8870()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0x16
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a8870)
    }
}
