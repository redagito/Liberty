#include "Freelancer-PCH.h"

PROC_DECLARE(0x51e0e0, internal_51e0e0, public_51e0e0);
extern "C" NAKED register_t __cdecl internal_51e0e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+0x14]
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x51e0e0)
    }
}
