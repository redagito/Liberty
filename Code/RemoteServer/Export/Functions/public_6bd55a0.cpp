#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd55a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

PROC_DECLARE(0x6bd55a0, internal_6bd55a0, public_6bd55a0);
extern "C" NAKED register_t __cdecl internal_6bd55a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6c09aaa
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bd55a0)
    }
}
