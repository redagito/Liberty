#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d89047 _public_6d89047
#define public_6d89058 _public_6d89058
#define public_6d8907e _public_6d8907e
#define public_6d890a7 _public_6d890a7
#define public_6d890b4 _public_6d890b4
#define public_6d890f3 _public_6d890f3

PROC_DECLARE(0x6d88fc0, internal_6d88fc0, public_6d88fc0);
extern "C" NAKED register_t __cdecl internal_6d88fc0()
{
    __asm
    {
        sub esp, 0x38
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push 0x4F
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d890f3
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [ecx+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+0x24], ecx
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edx+0x28], eax
        mov edx, dword ptr ss : [esp+0x50]
        push ebx
        push esi
        push edi
        mov ecx, 0xD
        lea esi, ss:[esp+0x5C]
        lea edi, ss:[esp+0x14]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[ecx+0x2C]
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x64]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [esp+0x8C]
        mov dword ptr ds : [eax+0xC], ecx
        xor ecx, ecx
        test edx, edx
        mov dword ptr ds : [eax+0x30], edx
        jle public_6d89058
        lea edx, ds:[eax+0x10]
        public_6d89047 : nop
        mov esi, dword ptr ss : [esp+ecx*4+0x24]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+0x30]
        inc ecx
        add edx, 4
        cmp ecx, esi
        jl public_6d89047
        public_6d89058 : nop
        mov eax, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0x60], eax
        mov eax, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+0x64]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6d8907e
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d8907e : nop
        mov ebx, dword ptr ss : [esp+0x98]
        lea ecx, ds:[ebx*4]
        push ecx
        call public_6db1f8a
        mov dword ptr ds : [esi], eax
        add esp, 4
        xor eax, eax
        test ebx, ebx
        mov byte ptr ds : [edi+0x68], bl
        jle public_6d890b4
        mov ecx, dword ptr ss : [esp+0x94]
        public_6d890a7 : nop
        mov edi, dword ptr ds : [ecx+eax*4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+eax*4], edi
        inc eax
        cmp eax, ebx
        jl public_6d890a7
        public_6d890b4 : nop
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0x9C]
        mov dword ptr ds : [eax+0x6C], ecx
        mov edx, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ss : [esp+0xA4]
        fstp dword ptr ds : [edx+0x70]
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x74], cl
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [ebp]
        push eax
        push ecx
        mov ecx, ebp
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebx
        public_6d890f3 : nop
        pop ebp
        add esp, 0x38
        ret 0x5C
        UNREACHABLE_TRAP(0x6d88fc0)
    }
}

#undef public_6d89047
#undef public_6d89058
#undef public_6d8907e
#undef public_6d890a7
#undef public_6d890b4
#undef public_6d890f3
