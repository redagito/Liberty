#include "Common-PCH.h"

PROC_DECLARE(0x6333290, internal_6333290, public_6333290);
extern "C" NAKED register_t __cdecl internal_6333290()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], 0xFFFFFFFF
        mov dword ptr ds : [eax+0x14], ecx
        mov byte ptr ds : [eax+0x18], cl
        mov dword ptr ds : [eax], offset public_63a4980
        ret 
        UNREACHABLE_TRAP(0x6333290)
    }
}
