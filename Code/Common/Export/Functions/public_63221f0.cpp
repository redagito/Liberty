#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_63221f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6396dcb);

#define public_6322220 _public_6322220
#define public_6322232 _public_6322232

PROC_DECLARE(0x63221f0, internal_63221f0, public_63221f0);
extern "C" NAKED register_t __cdecl internal_63221f0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6396dcb @0x63221f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6396dcb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        lea esi, ds:[ecx+4]
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x88]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x14], ebx
        je public_6322232
        push edi
        public_6322220 : nop
        mov edi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_6322220
        pop edi
        public_6322232 : nop
        mov eax, dword ptr ds : [esi+0x7C]
        push eax
        call public_6391d5a
        add esp, 4
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [esi+0x7C], ebx
        mov dword ptr ds : [esi+0x80], ebx
        mov dword ptr ds : [esi+0x84], ebx
        call public_630e210
        lea ecx, ds:[esi+0x10]
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_630e210
        mov ecx, dword ptr ss : [esp+0xC]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x63221f0)
    }
}

#undef public_6322220
#undef public_6322232
