#include "THORN-PCH.h"

PROC_DECLARE(0x6f339d0, internal_6f339d0, public_6f339d0);
extern "C" NAKED register_t __cdecl internal_6f339d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x3C]
        inc ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6f339d0)
    }
}
