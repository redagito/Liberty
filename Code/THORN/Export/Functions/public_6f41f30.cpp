#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f403e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40900);
CLANG_FORWARD_PROC_SYMBOL(public_6f40ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f41f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f41fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6f590c8);

PROC_DECLARE(0x6f41f30, internal_6f41f30, public_6f41f30);
extern "C" NAKED register_t __cdecl internal_6f41f30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6f590c8 @0x6f41f32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f590c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        call public_6f403e0
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ds : [esi], offset public_6f5b0e4
        call public_6f41fe0
        lea eax, ds:[esi+0x38]
        push eax
        lea edi, ds:[esi+0x84]
        push edi
        mov ecx, esi
        call public_6f40900
        lea ecx, ds:[esi+0x44]
        push ecx
        push edi
        mov ecx, esi
        call public_6f40ab0
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6f41f30)
    }
}
