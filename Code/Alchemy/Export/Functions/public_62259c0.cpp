#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62259c0);

PROC_DECLARE(0x62259c0, internal_62259c0, public_62259c0);
extern "C" NAKED register_t __cdecl internal_62259c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp], 0
        mov dword ptr ds : [eax], 0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62259c0)
    }
}
