#include "Content-PCH.h"

PROC_DECLARE(0x6f24770, internal_6f24770, public_6f24770);
extern "C" NAKED register_t __cdecl internal_6f24770()
{
    __asm
    {
/*FIXUP push offset public_6fb3748 @0x6f24770*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3748
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0770], eax
        ret 
        UNREACHABLE_TRAP(0x6f24770)
    }
}
