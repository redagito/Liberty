#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4468e9 _public_4468e9

PROC_DECLARE(0x4468d0, internal_4468d0, public_4468d0);
extern "C" NAKED register_t __cdecl internal_4468d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_5c61b4]
        test byte ptr ss : [esp+8], 1
        je public_4468e9
        push esi
        call public_5b7e1d
        add esp, 4
        public_4468e9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4468d0)
    }
}

#undef public_4468e9
