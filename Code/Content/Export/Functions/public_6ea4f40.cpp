#include "Content-PCH.h"

PROC_DECLARE(0x6ea4f40, internal_6ea4f40, public_6ea4f40);
extern "C" NAKED register_t __cdecl internal_6ea4f40()
{
    __asm
    {
/*FIXUP push offset public_6fb3778 @0x6ea4f40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3778
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcec68], eax
        ret 
        UNREACHABLE_TRAP(0x6ea4f40)
    }
}
