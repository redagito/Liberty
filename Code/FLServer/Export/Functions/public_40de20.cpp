#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40de20);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_419020);
CLANG_FORWARD_JUMP_SYMBOL(public_41a268);

PROC_DECLARE(0x40de20, internal_40de20, public_40de20);
extern "C" NAKED register_t __cdecl internal_40de20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_41a268 @0x40de22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a268
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        lea ecx, ds:[esi+0x44]
        mov dword ptr ss : [esp+0x10], 0
        call public_418aa4
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_419020
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x40de20)
    }
}
