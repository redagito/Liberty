#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39d70);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e780);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f39d40, internal_6f39d40, public_6f39d40);
extern "C" NAKED register_t __cdecl internal_6f39d40()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd0988
        call public_6f3e780
/*FIXUP push offset _public_6f39d70 @0x6f39d55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f39d70
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f39d40)
    }
}
