#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62231a0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_62231e6 _public_62231e6

PROC_DECLARE(0x62231a0, internal_62231a0, public_62231a0);
extern "C" NAKED register_t __cdecl internal_62231a0()
{
    __asm
    {
        push esi
        push 0xC
        call public_624612c
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_62231e6
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_6256280
        mov dword ptr ds : [esi], offset public_624da34
        call dword ptr ds : [public_624b008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_6256280 @0x62231d2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256280
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_62231e6 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62231a0)
    }
}

#undef public_62231e6
