#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ec10, internal_620ec10, public_620ec10);
extern "C" NAKED register_t __cdecl internal_620ec10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x80]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0x14]
        UNREACHABLE_TRAP(0x620ec10)
    }
}
