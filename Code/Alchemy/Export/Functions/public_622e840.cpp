#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e840);

#define public_622e865 _public_622e865

PROC_DECLARE(0x622e840, internal_622e840, public_622e840);
extern "C" NAKED register_t __cdecl internal_622e840()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF52B8DD5
        jne public_622e865
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x88]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_622e865 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x622e840)
    }
}

#undef public_622e865
