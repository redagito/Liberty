#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f4f10, internal_4f4f10, public_4f4f10);
extern "C" NAKED register_t __cdecl internal_4f4f10()
{
    __asm
    {
/*FIXUP push offset public_5d9864 @0x4f4f10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d9864
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_674bdc], eax
        ret 
        UNREACHABLE_TRAP(0x4f4f10)
    }
}
