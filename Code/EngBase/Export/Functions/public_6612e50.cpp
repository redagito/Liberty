#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e50);

#define public_6612e65 _public_6612e65

PROC_DECLARE(0x6612e50, internal_6612e50, public_6612e50);
extern "C" NAKED register_t __cdecl internal_6612e50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6612e65
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6612e65 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6612e50)
    }
}

#undef public_6612e65
