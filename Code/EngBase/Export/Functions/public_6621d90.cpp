#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6621d90);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6621dd2 _public_6621dd2

PROC_DECLARE(0x6621d90, internal_6621d90, public_6621d90);
extern "C" NAKED register_t __cdecl internal_6621d90()
{
    __asm
    {
        push esi
        push 0xC
        call public_66281dc
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6621dd2
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], offset public_662a528
        mov dword ptr ds : [esi], offset public_6629620
        call dword ptr ds : [public_6629000]
        mov ecx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_662a528 @0x6621dc2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_662a528
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+8]
        public_6621dd2 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6621d90)
    }
}

#undef public_6621dd2
