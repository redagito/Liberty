#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c013c0, internal_6c013c0, public_6c013c0);
extern "C" NAKED register_t __cdecl internal_6c013c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e438]
        mov dword ptr ds : [public_6c140d8], eax
        ret 
        UNREACHABLE_TRAP(0x6c013c0)
    }
}
