#include "Content-PCH.h"

PROC_DECLARE(0x6ea33c0, internal_6ea33c0, public_6ea33c0);
extern "C" NAKED register_t __cdecl internal_6ea33c0()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6ea33c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fceae0], eax
        ret 
        UNREACHABLE_TRAP(0x6ea33c0)
    }
}
