#include "Content-PCH.h"

PROC_DECLARE(0x6eb6c20, internal_6eb6c20, public_6eb6c20);
extern "C" NAKED register_t __cdecl internal_6eb6c20()
{
    __asm
    {
/*FIXUP push offset public_6fb36f0 @0x6eb6c20*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36f0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcefac], eax
        ret 
        UNREACHABLE_TRAP(0x6eb6c20)
    }
}
