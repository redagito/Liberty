#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52ffd0, internal_52ffd0, public_52ffd0);
extern "C" NAKED register_t __cdecl internal_52ffd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push 0x17
        push eax
        mov esi, ecx
        call dword ptr ds : [public_5c67ec]
        add esp, 8
        push 1
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+0x10], eax
        call dword ptr ds : [public_5c67e8]
        mov ecx, dword ptr ds : [esi+0x10]
        xor eax, eax
        test ecx, ecx
        setne al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52ffd0)
    }
}
