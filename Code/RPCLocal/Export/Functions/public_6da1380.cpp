#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);

PROC_DECLARE(0x6da1380, internal_6da1380, public_6da1380);
extern "C" NAKED register_t __cdecl internal_6da1380()
{
    __asm
    {
        push ebx
        xor edx, edx
        mov dx, word ptr ds : [ecx+0xC]
        xor ebx, ebx
        mov bh, byte ptr ds : [ecx+0xE]
        mov ecx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        and edx, 0xFFF
        add eax, 2
        or edx, ebx
        mov word ptr ds : [eax-2], dx
        mov dword ptr ds : [ecx], 2
        mov dword ptr ds : [esi], eax
        pop esi
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6da1380)
    }
}
