#include "Content-PCH.h"

PROC_DECLARE(0x6fa75c0, internal_6fa75c0, public_6fa75c0);
extern "C" NAKED register_t __cdecl internal_6fa75c0()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6fa75c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd3ddc], eax
        ret 
        UNREACHABLE_TRAP(0x6fa75c0)
    }
}
