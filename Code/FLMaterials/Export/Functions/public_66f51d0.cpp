#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f51d0);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66f5216 _public_66f5216

PROC_DECLARE(0x66f51d0, internal_66f51d0, public_66f51d0);
extern "C" NAKED register_t __cdecl internal_66f51d0()
{
    __asm
    {
        push esi
        push 0xC
        call public_6700810
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_66f5216
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_67018d8
        mov dword ptr ds : [esi], offset public_67018ec
        call dword ptr ds : [public_6701008]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
/*FIXUP push offset public_67018d8 @0x66f5202*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67018d8
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        mov al, 1
        pop esi
        ret 
        public_66f5216 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66f51d0)
    }
}

#undef public_66f5216
