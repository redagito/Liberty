#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403850);
CLANG_FORWARD_PROC_SYMBOL(public_40f900);
CLANG_FORWARD_PROC_SYMBOL(public_418a92);
CLANG_FORWARD_JUMP_SYMBOL(public_419bc8);

PROC_DECLARE(0x403850, internal_403850, public_403850);
extern "C" NAKED register_t __cdecl internal_403850()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419bc8 @0x403852*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419bc8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        push eax
        mov esi, ecx
        push 0x97
        mov dword ptr ss : [esp+0xC], esi
        call public_418a92
        lea ecx, ds:[esi+0x60]
        mov dword ptr ss : [esp+0x10], 0
        call public_40f900
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_41c3f8
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x403850)
    }
}
