#include "Content-PCH.h"

PROC_DECLARE(0x6eef250, internal_6eef250, public_6eef250);
extern "C" NAKED register_t __cdecl internal_6eef250()
{
    __asm
    {
/*FIXUP push offset public_6fb3730 @0x6eef250*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3730
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf234], eax
        ret 
        UNREACHABLE_TRAP(0x6eef250)
    }
}
