#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3640);
CLANG_FORWARD_PROC_SYMBOL(public_5b3820);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c59f8);

#define public_5b5c40 _public_5b5c40
#define public_5b5c9a _public_5b5c9a
#define public_5b5c9e _public_5b5c9e
#define public_5b5ce1 _public_5b5ce1
#define public_5b5d08 _public_5b5d08

PROC_DECLARE(0x5b5c30, internal_5b5c30, public_5b5c30);
extern "C" NAKED register_t __cdecl internal_5b5c30()
{
    __asm
    {
        mov ecx, offset public_67ece8
        jmp public_5b5c40
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_5b5c40 : nop
        push 0xFFFFFFFF
/*FIXUP push public_5c59f8 @0x5b5c42*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c59f8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        push 0x1C
        mov dword ptr ss : [esp+0x20], ecx
        call public_5b7e84
        xor ebp, ebp
        add esp, 4
        cmp eax, ebp
        je public_5b5c9a
        mov dword ptr ds : [eax+4], offset public_5c78d4
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+0xC], ebp
        mov dword ptr ds : [eax+0x10], ebp
        mov dword ptr ds : [eax+0x14], 0xBF800000
        mov dword ptr ds : [eax+0x18], offset _public_5b3820
        mov dword ptr ds : [eax], offset public_5d6d50
        mov dword ptr ss : [esp+0x18], eax
        jmp public_5b5c9e
        public_5b5c9a : nop
        mov dword ptr ss : [esp+0x18], ebp
        public_5b5c9e : nop
        mov cl, byte ptr ds : [public_67ed0c]
        mov al, 1
        test al, cl
        jne public_5b5ce1
        mov bl, cl
        or bl, al
        mov al, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ds : [public_67ed0c], bl
        mov byte ptr ds : [public_67ed00], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_5b3640 @0x5b5cc9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b3640
        mov dword ptr ds : [public_67ed04], eax
        mov dword ptr ds : [public_67ed08], ebp
        call public_5b7e6c
        add esp, 8
        public_5b5ce1 : nop
        mov dword ptr ss : [esp+0x14], ebp
        mov eax, dword ptr ds : [public_67ed04]
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov dword ptr ss : [esp+0x2C], ebp
        mov ebx, eax
        call public_5b7e84
        add esp, 4
        cmp edi, ebp
        mov dword ptr ds : [eax], ebx
        jne public_5b5d08
        mov edi, eax
        public_5b5d08 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov edx, dword ptr ds : [public_67ed08]
        mov eax, dword ptr ss : [esp+0x1C]
        inc edx
        push eax
        mov dword ptr ds : [public_67ed08], edx
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_67ed04]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        pop edi
        pop esi
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [eax+8], 0x5DA
        mov eax, dword ptr ss : [esp+0x14]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x5b5c30)
    }
}

#undef public_5b5c40
#undef public_5b5c9a
#undef public_5b5c9e
#undef public_5b5ce1
#undef public_5b5d08
