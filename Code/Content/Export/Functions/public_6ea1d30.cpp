#include "Content-PCH.h"

PROC_DECLARE(0x6ea1d30, internal_6ea1d30, public_6ea1d30);
extern "C" NAKED register_t __cdecl internal_6ea1d30()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6ea1d30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce9f0], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1d30)
    }
}
