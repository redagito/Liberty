#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38210);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b45710);
CLANG_FORWARD_JUMP_SYMBOL(public_6b6a688);

#define public_6b37b93 _public_6b37b93

PROC_DECLARE(0x6b37b00, internal_6b37b00, public_6b37b00);
extern "C" NAKED register_t __cdecl internal_6b37b00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6b6a688 @0x6b37b02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6b6a688
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x3D
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b37b93
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+0x28], ecx
        xor eax, eax
        mov dword ptr ss : [esp+0x24], eax
        push eax
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push eax
        call public_6b38210
        add esp, 0xC
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        call public_6b45710
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_6b3a450
        public_6b37b93 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x6b37b00)
    }
}

#undef public_6b37b93
