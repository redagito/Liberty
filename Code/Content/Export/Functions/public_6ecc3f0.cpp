#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecc3f0);

PROC_DECLARE(0x6ecc3f0, internal_6ecc3f0, public_6ecc3f0);
extern "C" NAKED register_t __cdecl internal_6ecc3f0()
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
        mov dword ptr ds : [esi+0x18], eax
        mov byte ptr ds : [esi+0x1C], al
        mov dword ptr ds : [esi+0x4C], eax
        mov dword ptr ds : [esi], offset public_6fb5ecc
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecc3f0)
    }
}
