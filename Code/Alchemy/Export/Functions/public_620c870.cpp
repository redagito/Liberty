#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f00);
CLANG_FORWARD_PROC_SYMBOL(public_620a5c0);
CLANG_FORWARD_PROC_SYMBOL(public_620c870);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_6247979);

#define public_620c8ed _public_620c8ed
#define public_620c8f7 _public_620c8f7
#define public_620c947 _public_620c947
#define public_620c963 _public_620c963

PROC_DECLARE(0x620c870, internal_620c870, public_620c870);
extern "C" NAKED register_t __cdecl internal_620c870()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6247979 @0x620c872*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6247979
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+0x30]
        lea ecx, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x28], 0
        call public_6209f00
        mov edi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        sub edi, ebp
        sar edi, 3
        mov ecx, eax
        lea ebx, ds:[eax+1]
        sub ecx, edi
        mov ebp, 1
        lea eax, ds:[ebx+1]
        mov dword ptr ss : [esp+0x14], ebx
        lea edx, ds:[ecx*8+8]
        mov ecx, dword ptr ds : [esi+0x10]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], edx
        jle public_620c8f7
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_624bdc0]
        call public_6246188
        cmp eax, ebp
        jle public_620c8ed
        mov ebp, eax
        public_620c8ed : nop
        add ebx, ebp
        mov ecx, esi
        push ebx
        call public_620a5c0
        public_620c8f7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea eax, ds:[ecx+edi*8]
        mov dword ptr ss : [esp+0x14], eax
        push eax
        add eax, 8
        push eax
        call dword ptr ds : [public_624b060]
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        inc edx
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x14], eax
        mov esi, dword ptr ss : [esp+0x38]
        mov byte ptr ss : [esp+0x24], 1
        test eax, eax
        je public_620c947
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], esi
        test esi, esi
        je public_620c947
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        public_620c947 : nop
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        test esi, esi
        mov dword ptr ds : [edi], eax
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_620c963
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+8]
        public_620c963 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x620c870)
    }
}

#undef public_620c8ed
#undef public_620c8f7
#undef public_620c947
#undef public_620c963
