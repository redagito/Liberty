#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0e4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

PROC_DECLARE(0x6d0e4e0, internal_6d0e4e0, public_6d0e4e0);
/* CHUNK of public_6d0e2e0 */
extern "C" NAKED register_t __cdecl internal_6d0e4e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        call public_6d5ffb0
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ds : [esi+0x1C], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d0e4e0)
    }
}
