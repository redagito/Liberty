#include "Content-PCH.h"

PROC_DECLARE(0x6ea11c0, internal_6ea11c0, public_6ea11c0);
extern "C" NAKED register_t __cdecl internal_6ea11c0()
{
    __asm
    {
/*FIXUP push offset public_6fb379c @0x6ea11c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb379c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce928], eax
        ret 
        UNREACHABLE_TRAP(0x6ea11c0)
    }
}
