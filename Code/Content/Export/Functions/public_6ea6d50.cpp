#include "Content-PCH.h"

PROC_DECLARE(0x6ea6d50, internal_6ea6d50, public_6ea6d50);
extern "C" NAKED register_t __cdecl internal_6ea6d50()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6ea6d50*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcee54], eax
        ret 
        UNREACHABLE_TRAP(0x6ea6d50)
    }
}
