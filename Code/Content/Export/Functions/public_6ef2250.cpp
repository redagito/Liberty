#include "Content-PCH.h"

PROC_DECLARE(0x6ef2250, internal_6ef2250, public_6ef2250);
extern "C" NAKED register_t __cdecl internal_6ef2250()
{
    __asm
    {
/*FIXUP push offset public_6fb37b4 @0x6ef2250*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37b4
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf274], eax
        ret 
        UNREACHABLE_TRAP(0x6ef2250)
    }
}
