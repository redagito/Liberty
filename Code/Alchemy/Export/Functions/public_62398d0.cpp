#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62398d0);

PROC_DECLARE(0x62398d0, internal_62398d0, public_62398d0);
extern "C" NAKED register_t __cdecl internal_62398d0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], 0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62398d0)
    }
}
