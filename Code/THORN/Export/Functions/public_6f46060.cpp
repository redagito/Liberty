#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46060);

#define public_6f4606f _public_6f4606f
#define public_6f46071 _public_6f46071
#define public_6f460c0 _public_6f460c0
#define public_6f460c7 _public_6f460c7

PROC_DECLARE(0x6f46060, internal_6f46060, public_6f46060);
extern "C" NAKED register_t __cdecl internal_6f46060()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        test ebx, ebx
        push esi
        push edi
        je public_6f4606f
        lea eax, ds:[ebx+0x28]
        jmp public_6f46071
        public_6f4606f : nop
        xor eax, eax
        public_6f46071 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        mov esi, ebp
        push eax
        rep movsd
        call public_6f438c0
        mov ecx, 5
        mov dword ptr ds : [ebx+0x28], ecx
        mov eax, dword ptr ss : [ebp]
        add esp, 0x30
        cmp eax, ecx
        jne public_6f460c0
        mov eax, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x54], eax
        add ebp, 0x30
        mov eax, dword ptr ss : [ebp]
        lea edx, ds:[ebx+0x58]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+8], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edx+0xC], eax
        jmp public_6f460c7
        public_6f460c0 : nop
        mov dword ptr ds : [ebx+0x54], 0
        public_6f460c7 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov edx, dword ptr ds : [ebx+0x44]
        mov dword ptr ds : [ebx+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x40]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        add ecx, eax
        mov eax, dword ptr ds : [ebx+0x48]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x1C], ecx
        mov dword ptr ds : [ebx+0x14], edx
        mov dword ptr ds : [ebx+0x18], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f46060)
    }
}

#undef public_6f4606f
#undef public_6f46071
#undef public_6f460c0
#undef public_6f460c7
