#include "RendComp-PCH.h"


#define public_6c221fa _public_6c221fa

PROC_DECLARE(0x6c221d0, internal_6c221d0, public_6c221d0);
extern "C" NAKED register_t __cdecl internal_6c221d0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_6c37144
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_6c221fa
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_6c221fa : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c221d0)
    }
}

#undef public_6c221fa
