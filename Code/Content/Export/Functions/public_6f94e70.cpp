#include "Content-PCH.h"

PROC_DECLARE(0x6f94e70, internal_6f94e70, public_6f94e70);
extern "C" NAKED register_t __cdecl internal_6f94e70()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6f94e70*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3c48], eax
        ret 
        UNREACHABLE_TRAP(0x6f94e70)
    }
}
