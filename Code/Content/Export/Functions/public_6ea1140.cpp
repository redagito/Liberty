#include "Content-PCH.h"

PROC_DECLARE(0x6ea1140, internal_6ea1140, public_6ea1140);
extern "C" NAKED register_t __cdecl internal_6ea1140()
{
    __asm
    {
/*FIXUP push offset public_6fb3764 @0x6ea1140*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3764
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce938], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1140)
    }
}
