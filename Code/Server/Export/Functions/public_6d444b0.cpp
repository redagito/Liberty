#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d444b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

PROC_DECLARE(0x6d444b0, internal_6d444b0, public_6d444b0);
extern "C" NAKED register_t __cdecl internal_6d444b0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0x20
        mov byte ptr ds : [esi], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d444b0)
    }
}
