#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d1a0);
CLANG_FORWARD_PROC_SYMBOL(public_622d3d0);
CLANG_FORWARD_PROC_SYMBOL(public_623ecf0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249550);

#define public_622d1f3 _public_622d1f3

PROC_DECLARE(0x622d1a0, internal_622d1a0, public_622d1a0);
extern "C" NAKED register_t __cdecl internal_622d1a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249550 @0x622d1a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249550
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+8], 0
        mov edi, dword ptr ss : [esp+0x20]
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+0xC], esp
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ds : [eax], edi
        lea eax, ss:[esp+0xC]
        push eax
        call public_622d3d0
        mov eax, dword ptr ds : [edi+8]
        mov byte ptr ss : [esp+0x14], 1
        test eax, eax
        je public_622d1f3
        dec dword ptr ds : [eax+0xE4]
        public_622d1f3 : nop
        mov ecx, dword ptr ds : [esi+8]
        push edi
        call public_623ecf0
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x622d1a0)
    }
}

#undef public_622d1f3
