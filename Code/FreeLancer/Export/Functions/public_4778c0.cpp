#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4778c0, internal_4778c0, public_4778c0);
extern "C" NAKED register_t __cdecl internal_4778c0()
{
    __asm
    {
/*FIXUP push offset public_5d0e30 @0x4778c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0e30
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [public_671c78], eax
        ret 
        UNREACHABLE_TRAP(0x4778c0)
    }
}
