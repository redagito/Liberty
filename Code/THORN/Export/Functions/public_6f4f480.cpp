#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f480);

#define public_6f4f4bb _public_6f4f4bb

PROC_DECLARE(0x6f4f480, internal_6f4f480, public_6f4f480);
extern "C" NAKED register_t __cdecl internal_6f4f480()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x10]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        cmp dword ptr ds : [eax], eax
        pop esi
        jne public_6f4f4bb
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x58]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [public_6f61e28]
        mov dword ptr ds : [ecx+0x58], eax
        public_6f4f4bb : nop
        ret 
        UNREACHABLE_TRAP(0x6f4f480)
    }
}

#undef public_6f4f4bb
