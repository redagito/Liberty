#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad99b1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c74);

PROC_DECLARE(0x6ad9978, internal_6ad9978, public_6ad9978);
extern "C" NAKED register_t __cdecl internal_6ad9978()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ecx
        lea ecx, ss:[ebp-0x1C]
        call public_6ad99b1
        lea eax, ss:[ebp-0x1C]
/*FIXUP push offset public_6adb5a8 @0x6ad998a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adb5a8
        push eax
        call public_6ad9c74
        UNREACHABLE_TRAP(0x6ad9978)
    }
}
