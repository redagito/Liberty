#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2f090);
CLANG_FORWARD_PROC_SYMBOL(public_6f340f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

PROC_DECLARE(0x6f340f0, internal_6f340f0, public_6f340f0);
extern "C" NAKED register_t __cdecl internal_6f340f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6f5a308
        mov eax, dword ptr ds : [esi+0x30]
        push eax
        call public_6f57e26
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov ecx, esi
        pop esi
        jmp public_6f2f090
        UNREACHABLE_TRAP(0x6f340f0)
    }
}
