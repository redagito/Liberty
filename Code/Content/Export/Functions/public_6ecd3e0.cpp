#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecd3e0);

PROC_DECLARE(0x6ecd3e0, internal_6ecd3e0, public_6ecd3e0);
extern "C" NAKED register_t __cdecl internal_6ecd3e0()
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
        mov dword ptr ds : [esi+0x10], eax
        mov byte ptr ds : [esi+0x14], al
        mov dword ptr ds : [esi], offset public_6fb5f3c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecd3e0)
    }
}
