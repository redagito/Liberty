#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6960);
CLANG_FORWARD_PROC_SYMBOL(public_6f1de30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1de40 _public_6f1de40
#define public_6f1de70 _public_6f1de70

PROC_DECLARE(0x6f1de30, internal_6f1de30, public_6f1de30);
extern "C" NAKED register_t __cdecl internal_6f1de30()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6f1de70
        push esi
        public_6f1de40 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_6ec6960
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+8], ecx
        jne public_6f1de40
        pop esi
        public_6f1de70 : nop
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6fa8fe0
        add esp, 4
        pop edi
        xor eax, eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f1de30)
    }
}

#undef public_6f1de40
#undef public_6f1de70
