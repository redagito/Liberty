#include "Alchemy-PCH.h"


#define public_621afc3 _public_621afc3
#define public_621afc5 _public_621afc5
#define public_621afe9 _public_621afe9
#define public_621afed _public_621afed
#define public_621aff2 _public_621aff2
#define public_621b002 _public_621b002
#define public_621b018 _public_621b018
#define public_621b044 _public_621b044

PROC_DECLARE(0x621afb0, internal_621afb0, public_621afb0);
extern "C" NAKED register_t __cdecl internal_621afb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624d188]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_621b002
        mov ebp, dword ptr ss : [esp+0x18]
        public_621afc3 : nop
        mov esi, ebp
        public_621afc5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_621afed
        test cl, cl
        je public_621afe9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_621afed
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_621afc5
        public_621afe9 : nop
        xor eax, eax
        jmp public_621aff2
        public_621afed : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_621aff2 : nop
        test eax, eax
        je public_621b018
        mov eax, dword ptr ds : [edi*8+public_624d190]
        inc edi
        test eax, eax
        jne public_621afc3
        public_621b002 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_621b018 : nop
        mov eax, dword ptr ds : [edi*8+public_624d18c]
        test eax, eax
        jns public_621b044
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_621b044 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x621afb0)
    }
}

#undef public_621afc3
#undef public_621afc5
#undef public_621afe9
#undef public_621afed
#undef public_621aff2
#undef public_621b002
#undef public_621b018
#undef public_621b044
