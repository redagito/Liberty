#include "Content-PCH.h"

PROC_DECLARE(0x6ea2660, internal_6ea2660, public_6ea2660);
extern "C" NAKED register_t __cdecl internal_6ea2660()
{
    __asm
    {
/*FIXUP push offset public_6fb3758 @0x6ea2660*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3758
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcea10], eax
        ret 
        UNREACHABLE_TRAP(0x6ea2660)
    }
}
