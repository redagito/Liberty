#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623edf0);

PROC_DECLARE(0x623edf0, internal_623edf0, public_623edf0);
extern "C" NAKED register_t __cdecl internal_623edf0()
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
        UNREACHABLE_TRAP(0x623edf0)
    }
}
