#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54790, internal_6b54790, public_6b54790);
extern "C" NAKED register_t __cdecl internal_6b54790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e434]
        mov dword ptr ds : [public_6b74024], eax
        ret 
        UNREACHABLE_TRAP(0x6b54790)
    }
}
