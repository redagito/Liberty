#include "FreeLancer-PCH.h"


#define public_4535b8 _public_4535b8

PROC_DECLARE(0x4535a0, internal_4535a0, public_4535a0);
extern "C" NAKED register_t __cdecl internal_4535a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x58]
        test eax, eax
        je public_4535b8
        mov ecx, dword ptr ds : [eax+0x14]
        add eax, 0x14
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0xC]
        public_4535b8 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x4535a0)
    }
}

#undef public_4535b8
