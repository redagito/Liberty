#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a3210);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c511b);

#define public_5a4d42 _public_5a4d42
#define public_5a4d44 _public_5a4d44
#define public_5a4d84 _public_5a4d84

PROC_DECLARE(0x5a4d00, internal_5a4d00, public_5a4d00);
extern "C" NAKED register_t __cdecl internal_5a4d00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c511b @0x5a4d02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c511b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x388
        mov edi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+8], eax
        test eax, eax
        mov dword ptr ss : [esp+0x14], 0
        je public_5a4d42
        mov ecx, eax
        call public_5a3210
        mov esi, eax
        jmp public_5a4d44
        public_5a4d42 : nop
        xor esi, esi
        public_5a4d44 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [esi]
        push ecx
        add edi, 0xC
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x10], edi
        call dword ptr ds : [eax+0x24]
        test al, al
        jne public_5a4d84
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        pop edi
        xor eax, eax
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_5a4d84 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x5a4d00)
    }
}

#undef public_5a4d42
#undef public_5a4d44
#undef public_5a4d84
