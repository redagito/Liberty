#include "Content-PCH.h"

PROC_DECLARE(0x6f29100, internal_6f29100, public_6f29100);
extern "C" NAKED register_t __cdecl internal_6f29100()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6f29100*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd07e0], eax
        ret 
        UNREACHABLE_TRAP(0x6f29100)
    }
}
