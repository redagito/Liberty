#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebc210);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ebc256 _public_6ebc256

PROC_DECLARE(0x6ebc210, internal_6ebc210, public_6ebc210);
extern "C" NAKED register_t __cdecl internal_6ebc210()
{
    __asm
    {
        push esi
        push 0xC
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6ebc256
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6ed246c
        mov dword ptr ds : [esi], offset public_6ed2480
        call dword ptr ds : [public_6ed1008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6ed246c @0x6ebc242*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed246c
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_6ebc256 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ebc210)
    }
}

#undef public_6ebc256
