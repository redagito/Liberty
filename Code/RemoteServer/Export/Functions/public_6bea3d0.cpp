#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6beb300);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea3fa _public_6bea3fa

PROC_DECLARE(0x6bea3d0, internal_6bea3d0, public_6bea3d0);
extern "C" NAKED register_t __cdecl internal_6bea3d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x30
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea3fa
        mov ecx, eax
        call public_6beb300
        test eax, eax
        je public_6bea3fa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea3fa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea3d0)
    }
}

#undef public_6bea3fa
