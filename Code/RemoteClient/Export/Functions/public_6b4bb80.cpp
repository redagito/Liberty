#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4bb80);
CLANG_FORWARD_PROC_SYMBOL(public_6b4bbc0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4bbaa _public_6b4bbaa

PROC_DECLARE(0x6b4bb80, internal_6b4bb80, public_6b4bb80);
extern "C" NAKED register_t __cdecl internal_6b4bb80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x24
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4bbaa
        mov ecx, eax
        call public_6b4bbc0
        test eax, eax
        je public_6b4bbaa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4bbaa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4bb80)
    }
}

#undef public_6b4bbaa
