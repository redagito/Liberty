#include "THORN-PCH.h"

PROC_DECLARE(0x6f33520, internal_6f33520, public_6f33520);
extern "C" NAKED register_t __cdecl internal_6f33520()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x28]
        inc ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6f33520)
    }
}
