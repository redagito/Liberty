#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c307f0);

#define public_6c30810 _public_6c30810

PROC_DECLARE(0x6c307f0, internal_6c307f0, public_6c307f0);
extern "C" NAKED register_t __cdecl internal_6c307f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        je public_6c30810
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [ecx+4], eax
        je public_6c30810
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        public_6c30810 : nop
        ret 
        UNREACHABLE_TRAP(0x6c307f0)
    }
}

#undef public_6c30810
