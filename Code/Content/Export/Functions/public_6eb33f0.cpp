#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1830);
CLANG_FORWARD_PROC_SYMBOL(public_6eb33f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb341e _public_6eb341e
#define public_6eb3424 _public_6eb3424
#define public_6eb3442 _public_6eb3442
#define public_6eb3456 _public_6eb3456

PROC_DECLARE(0x6eb33f0, internal_6eb33f0, public_6eb33f0);
extern "C" NAKED register_t __cdecl internal_6eb33f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi]
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        push edi
        je public_6eb341e
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, edx
        public_6eb341e : nop
        test eax, eax
        jge public_6eb3424
        xor eax, eax
        public_6eb3424 : nop
        lea edx, ds:[eax+eax*4]
        shl edx, 3
        push edx
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6eb3456
        public_6eb3442 : nop
        push esi
        push edi
        call public_6eb1830
        add esi, 0x28
        add esp, 8
        add edi, 0x28
        cmp esi, ebx
        jne public_6eb3442
        public_6eb3456 : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb33f0)
    }
}

#undef public_6eb341e
#undef public_6eb3424
#undef public_6eb3442
#undef public_6eb3456
