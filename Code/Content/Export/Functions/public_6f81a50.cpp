#include "Content-PCH.h"

PROC_DECLARE(0x6f81a50, internal_6f81a50, public_6f81a50);
extern "C" NAKED register_t __cdecl internal_6f81a50()
{
    __asm
    {
/*FIXUP push offset public_6fb3724 @0x6f81a50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3724
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3b1c], eax
        ret 
        UNREACHABLE_TRAP(0x6f81a50)
    }
}
