#include "Common-PCH.h"


#define public_6294b74 _public_6294b74

PROC_DECLARE(0x6294b60, internal_6294b60, public_6294b60);
extern "C" NAKED register_t __cdecl internal_6294b60()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+8]
        test al, al
        je public_6294b74
        fld dword ptr ds : [public_6399408]
        pop esi
        ret 
        public_6294b74 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [ecx+0x70]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6294b60)
    }
}

#undef public_6294b74
