#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1500);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9768);
CLANG_FORWARD_PROC_SYMBOL(public_6ad99d1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c54);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c80);
CLANG_FORWARD_JUMP_SYMBOL(public_6ad9cd0);

PROC_DECLARE(0x6ad9768, internal_6ad9768, public_6ad9768);
extern "C" NAKED register_t __cdecl internal_6ad9768()
{
    __asm
    {
        mov eax, public_6ad9cd0
        call public_6ad9c54
        push ecx
        push ecx
        push ebx
        push esi
        lea eax, ss:[ebp-0x10]
        push edi
        mov esi, ecx
        push eax
        mov dword ptr ss : [ebp-0x14], esi
        mov dword ptr ss : [ebp-0x10], offset public_6ada1d0
        call public_6ad9c80
        mov ebx, dword ptr ss : [ebp+8]
        and dword ptr ss : [ebp-4], 0
        lea edi, ds:[esi+0xC]
        push 0
        mov al, byte ptr ds : [ebx]
        mov ecx, edi
        mov byte ptr ds : [edi], al
        call public_6ac1500
        push dword ptr ds : [public_6adb180]
        mov ecx, edi
        push 0
        push ebx
        call public_6ad99d1
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [esi], offset public_6adb174
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        leave 
        ret 4
        UNREACHABLE_TRAP(0x6ad9768)
    }
}
