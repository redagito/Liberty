#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235f00);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6235f46 _public_6235f46

PROC_DECLARE(0x6235f00, internal_6235f00, public_6235f00);
extern "C" NAKED register_t __cdecl internal_6235f00()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6235f46
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6256a88
        mov dword ptr ds : [esi], offset public_624eb90
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6256a88 @0x6235f32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256a88
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_6235f46 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6235f00)
    }
}

#undef public_6235f46
