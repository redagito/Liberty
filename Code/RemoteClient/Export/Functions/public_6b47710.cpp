#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47710);
CLANG_FORWARD_PROC_SYMBOL(public_6b48400);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4773a _public_6b4773a

PROC_DECLARE(0x6b47710, internal_6b47710, public_6b47710);
extern "C" NAKED register_t __cdecl internal_6b47710()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x3C
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4773a
        mov ecx, eax
        call public_6b48400
        test eax, eax
        je public_6b4773a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4773a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47710)
    }
}

#undef public_6b4773a
