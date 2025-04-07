#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1970);

#define public_6be1987 _public_6be1987
#define public_6be1992 _public_6be1992
#define public_6be199f _public_6be199f
#define public_6be19b0 _public_6be19b0
#define public_6be19bc _public_6be19bc
#define public_6be19c5 _public_6be19c5

PROC_DECLARE(0x6be1970, internal_6be1970, public_6be1970);
extern "C" NAKED register_t __cdecl internal_6be1970()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [edx+0x15]
        test al, al
        jne public_6be199f
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6be1992
        public_6be1987 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6be1987
        public_6be1992 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        public_6be199f : nop
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6be19bc
        lea esp, ss:[esp]
        public_6be19b0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6be19b0
        public_6be19bc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6be19c5
        mov dword ptr ds : [ecx], eax
        public_6be19c5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6be1970)
    }
}

#undef public_6be1987
#undef public_6be1992
#undef public_6be199f
#undef public_6be19b0
#undef public_6be19bc
#undef public_6be19c5
