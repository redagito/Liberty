#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208800);
CLANG_FORWARD_PROC_SYMBOL(public_6209ef0);

PROC_DECLARE(0x6207ea0, internal_6207ea0, public_6207ea0);
extern "C" NAKED register_t __cdecl internal_6207ea0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        push esi
        push edi
        lea esi, ds:[eax+8]
        push ecx
        mov ecx, esi
        call public_6209ef0
        mov edi, eax
        mov ecx, edi
        call public_6208800
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, edi
        sub edx, ecx
        lea ecx, ds:[edi+8]
        sar edx, 3
        sub eax, edx
        shl eax, 3
        push eax
        push ecx
        push edi
        call dword ptr ds : [public_624b060]
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 0xC
        dec eax
        mov dword ptr ds : [esi+0xC], eax
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6207ea0)
    }
}
