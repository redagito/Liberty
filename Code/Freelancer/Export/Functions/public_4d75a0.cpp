#include "Freelancer-PCH.h"

PROC_DECLARE(0x4d75a0, internal_4d75a0, public_4d75a0);
extern "C" NAKED register_t __cdecl internal_4d75a0()
{
    __asm
    {
/*FIXUP push offset public_5d82a8 @0x4d75a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d82a8
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674a18], eax
        ret 
        UNREACHABLE_TRAP(0x4d75a0)
    }
}
