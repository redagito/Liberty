#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5b437 _public_6b5b437
#define public_6b5b44e _public_6b5b44e
#define public_6b5b460 _public_6b5b460
#define public_6b5b48b _public_6b5b48b
#define public_6b5b4be _public_6b5b4be

PROC_DECLARE(0x6b5b3f0, internal_6b5b3f0, public_6b5b3f0);
extern "C" NAKED register_t __cdecl internal_6b5b3f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5b437
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5b437 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5b44e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5b44e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5b460
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5b460 : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x20]
        fstp dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5b48b
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b5b48b : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6b4ecd0
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov edi, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6b5b4be
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5b4be : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b5b3f0)
    }
}

#undef public_6b5b437
#undef public_6b5b44e
#undef public_6b5b460
#undef public_6b5b48b
#undef public_6b5b4be
