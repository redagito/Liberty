#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38210);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b3c770);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a568);

#define public_6b33ffc _public_6b33ffc

PROC_DECLARE(0x6b33f80, internal_6b33f80, public_6b33f80);
extern "C" NAKED register_t __cdecl internal_6b33f80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6b6a568 @0x6b33f88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a568
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        lea eax, ss:[esp+8]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x25
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b33ffc
        mov dword ptr ss : [esp+4], eax
        mov edx, dword ptr ss : [esp+0x20]
        push 1
        lea ecx, ss:[esp+8]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6b38210
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 0xC
        lea eax, ss:[esp+4]
        push eax
        call public_6b3c770
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_6b3a450
        public_6b33ffc : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6b33f80)
    }
}

#undef public_6b33ffc
