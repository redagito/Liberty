#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1dc40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

PROC_DECLARE(0x6f1dc40, internal_6f1dc40, public_6f1dc40);
extern "C" NAKED register_t __cdecl internal_6f1dc40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        push 0x3C
        mov byte ptr ds : [esi], cl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f1dc40)
    }
}
