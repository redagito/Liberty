#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62109e0);

PROC_DECLARE(0x62109e0, internal_62109e0, public_62109e0);
extern "C" NAKED register_t __cdecl internal_62109e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62109e0)
    }
}
