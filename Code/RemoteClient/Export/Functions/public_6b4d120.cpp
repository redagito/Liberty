#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4d120);
CLANG_FORWARD_PROC_SYMBOL(public_6b4d160);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4d14a _public_6b4d14a

PROC_DECLARE(0x6b4d120, internal_6b4d120, public_6b4d120);
extern "C" NAKED register_t __cdecl internal_6b4d120()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x34
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4d14a
        mov ecx, eax
        call public_6b4d160
        test eax, eax
        je public_6b4d14a
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4d14a : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4d120)
    }
}

#undef public_6b4d14a
