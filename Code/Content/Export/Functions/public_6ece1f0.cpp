#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece1f0);

PROC_DECLARE(0x6ece1f0, internal_6ece1f0, public_6ece1f0);
extern "C" NAKED register_t __cdecl internal_6ece1f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_6fb3030]
        xor eax, eax
        mov dword ptr ds : [esi+0xC], eax
        mov byte ptr ds : [esi+0x10], al
        mov dword ptr ds : [esi], offset public_6fb5fec
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ece1f0)
    }
}
