#include "Content-PCH.h"

PROC_DECLARE(0x6f5c940, internal_6f5c940, public_6f5c940);
extern "C" NAKED register_t __cdecl internal_6f5c940()
{
    __asm
    {
/*FIXUP push offset public_6fb37b4 @0x6f5c940*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb37b4
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd1c30], eax
        ret 
        UNREACHABLE_TRAP(0x6f5c940)
    }
}
