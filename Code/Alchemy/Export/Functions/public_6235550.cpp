#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235550);

#define public_6235575 _public_6235575

PROC_DECLARE(0x6235550, internal_6235550, public_6235550);
extern "C" NAKED register_t __cdecl internal_6235550()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF52B8DD5
        jne public_6235575
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x80]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6235575 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6235550)
    }
}

#undef public_6235575
