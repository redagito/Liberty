#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84320);
CLANG_FORWARD_JUMP_SYMBOL(public_6db22cc);

PROC_DECLARE(0x6d84320, internal_6d84320, public_6d84320);
extern "C" NAKED register_t __cdecl internal_6d84320()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db22cc @0x6d84322*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db22cc
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov edi, dword ptr ds : [public_6db3094]
        lea ecx, ds:[esi+0x24]
        mov dword ptr ss : [esp+0x14], 0
        call edi
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call edi
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d84320)
    }
}
