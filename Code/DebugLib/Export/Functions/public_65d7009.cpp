#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7009);
CLANG_FORWARD_PROC_SYMBOL(public_65d866f);

PROC_DECLARE(0x65d7009, internal_65d7009, public_65d7009);
extern "C" NAKED register_t __cdecl internal_65d7009()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 4
        push ebx
        push esi
        push edi
        cld 
        mov dword ptr ss : [ebp-4], eax
        xor eax, eax
        push eax
        push eax
        push eax
        push dword ptr ss : [ebp-4]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_65d866f
        add esp, 0x20
        mov dword ptr ss : [ebp+0x14], eax
        pop edi
        pop esi
        pop ebx
        mov eax, dword ptr ss : [ebp+0x14]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65d7009)
    }
}
