#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346d80);

PROC_DECLARE(0x6285700, internal_6285700, public_6285700);
extern "C" NAKED register_t __cdecl internal_6285700()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+4]
        lea ecx, ss:[esp]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        mov eax, dword ptr ds : [edx+0x54]
        fstp dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [eax+0x98]
        call public_6346d80
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6285700)
    }
}
