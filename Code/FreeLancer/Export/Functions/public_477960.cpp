#include "FreeLancer-PCH.h"

PROC_DECLARE(0x477960, internal_477960, public_477960);
extern "C" NAKED register_t __cdecl internal_477960()
{
    __asm
    {
/*FIXUP push offset public_5d0e94 @0x477960*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0e94
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_671c64], eax
        ret 
        UNREACHABLE_TRAP(0x477960)
    }
}
