#include "Content-PCH.h"

PROC_DECLARE(0x6efe240, internal_6efe240, public_6efe240);
extern "C" NAKED register_t __cdecl internal_6efe240()
{
    __asm
    {
/*FIXUP push offset public_6fb3764 @0x6efe240*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3764
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3bc], eax
        ret 
        UNREACHABLE_TRAP(0x6efe240)
    }
}
