#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226a30);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6226a74 _public_6226a74
#define public_6226a85 _public_6226a85
#define public_6226a8e _public_6226a8e
#define public_6226a97 _public_6226a97
#define public_6226aaf _public_6226aaf
#define public_6226ac6 _public_6226ac6
#define public_6226adb _public_6226adb

PROC_DECLARE(0x6226a30, internal_6226a30, public_6226a30);
extern "C" NAKED register_t __cdecl internal_6226a30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6226aaf
        mov edx, dword ptr ds : [ebx+0x3C]
        cmp esi, edx
        je public_6226adb
        push edi
        mov edi, esi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [ebx+0x44]
        not ecx
        dec ecx
        cmp ecx, eax
        mov dword ptr ds : [ebx+0x40], ecx
        jl public_6226a97
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6226a74
        test edx, edx
        je public_6226a74
        push edx
        call public_62460e0
        add esp, 4
        public_6226a74 : nop
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x38], 1
        inc eax
        jne public_6226a85
        xor eax, eax
        jmp public_6226a8e
        public_6226a85 : nop
        push eax
        call public_624612c
        add esp, 4
        public_6226a8e : nop
        mov dword ptr ds : [ebx+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x40]
        mov dword ptr ds : [ebx+0x44], eax
        public_6226a97 : nop
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edi, dword ptr ds : [ebx+0x3C]
        inc ecx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        jmp public_6226adb
        public_6226aaf : nop
        mov eax, dword ptr ds : [ebx+0x38]
        test eax, eax
        je public_6226ac6
        mov eax, dword ptr ds : [ebx+0x3C]
        test eax, eax
        je public_6226ac6
        push eax
        call public_62460e0
        add esp, 4
        public_6226ac6 : nop
        mov dword ptr ds : [ebx+0x3C], 0
        mov dword ptr ds : [ebx+0x44], 0
        mov dword ptr ds : [ebx+0x40], 0
        public_6226adb : nop
        mov eax, dword ptr ds : [ebx+0x3C]
        push eax
        call public_623ef70
        add esp, 4
        mov dword ptr ds : [ebx+0x30], eax
        xor eax, eax
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6226a30)
    }
}

#undef public_6226a74
#undef public_6226a85
#undef public_6226a8e
#undef public_6226a97
#undef public_6226aaf
#undef public_6226ac6
#undef public_6226adb
