#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b4a0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62101);

#define public_6d1b4d8 _public_6d1b4d8

PROC_DECLARE(0x6d1b4a0, internal_6d1b4a0, public_6d1b4a0);
extern "C" NAKED register_t __cdecl internal_6d1b4a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d62101 @0x6d1b4a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62101
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], esi
        test esi, esi
        mov dword ptr ss : [esp+0x10], 0
        je public_6d1b4d8
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [esi], eax
        public_6d1b4d8 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d1b4a0)
    }
}

#undef public_6d1b4d8
