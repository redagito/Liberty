#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2fdd0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58788);

PROC_DECLARE(0x6f2fdd0, internal_6f2fdd0, public_6f2fdd0);
extern "C" NAKED register_t __cdecl internal_6f2fdd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f58788 @0x6f2fdd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58788
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        call public_6f2fa40
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ds : [esi], offset public_6f5a428
        mov dword ptr ds : [esi+0x28], 3
        call public_6f2fac0
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f2fdd0)
    }
}
