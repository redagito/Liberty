#include "Content-PCH.h"

PROC_DECLARE(0x6f05e60, internal_6f05e60, public_6f05e60);
extern "C" NAKED register_t __cdecl internal_6f05e60()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6f05e60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd065c], eax
        ret 
        UNREACHABLE_TRAP(0x6f05e60)
    }
}
