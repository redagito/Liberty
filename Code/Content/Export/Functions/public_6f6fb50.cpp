#include "Content-PCH.h"

PROC_DECLARE(0x6f6fb50, internal_6f6fb50, public_6f6fb50);
extern "C" NAKED register_t __cdecl internal_6f6fb50()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6f6fb50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd1d34], eax
        ret 
        UNREACHABLE_TRAP(0x6f6fb50)
    }
}
