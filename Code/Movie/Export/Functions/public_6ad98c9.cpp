#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad984f);
CLANG_FORWARD_PROC_SYMBOL(public_6ad98c9);

PROC_DECLARE(0x6ad98c9, internal_6ad98c9, public_6ad98c9);
extern "C" NAKED register_t __cdecl internal_6ad98c9()
{
    __asm
    {
        push esi
        mov esi, ecx
        push dword ptr ss : [esp+8]
        call public_6ad984f
        mov dword ptr ds : [esi], offset public_6adb154
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ad98c9)
    }
}
