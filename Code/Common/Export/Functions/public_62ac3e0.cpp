#include "Common-PCH.h"

PROC_DECLARE(0x62ac3e0, internal_62ac3e0, public_62ac3e0);
extern "C" NAKED register_t __cdecl internal_62ac3e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639e3a8]
        mov dword ptr ds : [public_63fc2ec], eax
        ret 
        UNREACHABLE_TRAP(0x62ac3e0)
    }
}
