#include "Content-PCH.h"

PROC_DECLARE(0x6f05ee0, internal_6f05ee0, public_6f05ee0);
extern "C" NAKED register_t __cdecl internal_6f05ee0()
{
    __asm
    {
/*FIXUP push offset public_6fb37b4 @0x6f05ee0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37b4
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd064c], eax
        ret 
        UNREACHABLE_TRAP(0x6f05ee0)
    }
}
