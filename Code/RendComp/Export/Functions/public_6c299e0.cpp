#include "RendComp-PCH.h"

PROC_DECLARE(0x6c299e0, internal_6c299e0, public_6c299e0);
extern "C" NAKED register_t __cdecl internal_6c299e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x70]
        UNREACHABLE_TRAP(0x6c299e0)
    }
}
