#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621e570);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_621e5b6 _public_621e5b6

PROC_DECLARE(0x621e570, internal_621e570, public_621e570);
extern "C" NAKED register_t __cdecl internal_621e570()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_621e5b6
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6256040
        mov dword ptr ds : [esi], offset public_624d7b4
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6256040 @0x621e5a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256040
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_621e5b6 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x621e570)
    }
}

#undef public_621e5b6
