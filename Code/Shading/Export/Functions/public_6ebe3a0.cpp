#include "Shading-PCH.h"


#define public_6ebe3b3 _public_6ebe3b3
#define public_6ebe3b5 _public_6ebe3b5
#define public_6ebe3d9 _public_6ebe3d9
#define public_6ebe3dd _public_6ebe3dd
#define public_6ebe3e2 _public_6ebe3e2
#define public_6ebe3f2 _public_6ebe3f2
#define public_6ebe408 _public_6ebe408
#define public_6ebe437 _public_6ebe437

PROC_DECLARE(0x6ebe3a0, internal_6ebe3a0, public_6ebe3a0);
extern "C" NAKED register_t __cdecl internal_6ebe3a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed28f0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ebe3f2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ebe3b3 : nop
        mov esi, ebp
        public_6ebe3b5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ebe3dd
        test cl, cl
        je public_6ebe3d9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ebe3dd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ebe3b5
        public_6ebe3d9 : nop
        xor eax, eax
        jmp public_6ebe3e2
        public_6ebe3dd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ebe3e2 : nop
        test eax, eax
        je public_6ebe408
        mov eax, dword ptr ds : [edi*8+public_6ed28f8]
        inc edi
        test eax, eax
        jne public_6ebe3b3
        public_6ebe3f2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ebe408 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed28f4]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6ebe437
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6ebe437 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+eax]
        add esi, eax
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ebe3a0)
    }
}

#undef public_6ebe3b3
#undef public_6ebe3b5
#undef public_6ebe3d9
#undef public_6ebe3dd
#undef public_6ebe3e2
#undef public_6ebe3f2
#undef public_6ebe408
#undef public_6ebe437
