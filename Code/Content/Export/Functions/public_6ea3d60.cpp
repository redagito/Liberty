#include "Content-PCH.h"

PROC_DECLARE(0x6ea3d60, internal_6ea3d60, public_6ea3d60);
extern "C" NAKED register_t __cdecl internal_6ea3d60()
{
    __asm
    {
/*FIXUP push offset public_6fb3788 @0x6ea3d60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3788
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceb54], eax
        ret 
        UNREACHABLE_TRAP(0x6ea3d60)
    }
}
