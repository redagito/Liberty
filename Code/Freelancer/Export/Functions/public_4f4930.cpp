#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f4930);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf2bf);

PROC_DECLARE(0x4f4930, internal_4f4930, public_4f4930);
extern "C" NAKED register_t __cdecl internal_4f4930()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf2bf @0x4f4932*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf2bf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0xC], 0xBF800000
        push edi
        xor edi, edi
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x10], edi
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x40], edi
        mov dword ptr ds : [esi+0x44], edi
        mov dword ptr ds : [esi+0x48], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi+0x50], edi
        mov dword ptr ds : [esi+0x54], edi
        lea ecx, ds:[esi+0x1C]
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi+0x58], edi
        call public_4215b0
        mov al, byte ptr ss : [esp+0xB]
        mov dword ptr ds : [esi+0x5C], edi
        mov dword ptr ds : [esi+0x60], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x64], edi
        mov dword ptr ds : [esi+0x68], edi
        mov dword ptr ds : [esi+0x6C], edi
        mov dword ptr ds : [esi+0x70], edi
        mov dword ptr ds : [esi+0x94], edi
        mov dword ptr ds : [esi+0x98], edi
        mov byte ptr ds : [esi+0x9C], al
        mov dword ptr ds : [esi+0xA0], edi
        mov dword ptr ds : [esi+0xA4], edi
        mov dword ptr ds : [esi+0xA8], edi
        mov cl, byte ptr ss : [esp+0xB]
        push 0x10
        mov dword ptr ss : [esp+0x1C], edi
        mov byte ptr ds : [esi+0xAC], cl
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+0xB4], edi
        mov dword ptr ds : [esi+0xB0], eax
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x4f4930)
    }
}
