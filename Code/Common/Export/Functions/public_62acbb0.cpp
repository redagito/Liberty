#include "Common-PCH.h"

PROC_DECLARE(0x62acbb0, internal_62acbb0, public_62acbb0);
extern "C" NAKED register_t __cdecl internal_62acbb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e508]
        mov dword ptr ds : [public_63fc30c], eax
        ret 
        UNREACHABLE_TRAP(0x62acbb0)
    }
}
