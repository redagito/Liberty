#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f465a0);

#define public_6f465b6 _public_6f465b6
#define public_6f465c1 _public_6f465c1
#define public_6f465c5 _public_6f465c5
#define public_6f465d0 _public_6f465d0
#define public_6f465dc _public_6f465dc
#define public_6f465e5 _public_6f465e5

PROC_DECLARE(0x6f465a0, internal_6f465a0, public_6f465a0);
extern "C" NAKED register_t __cdecl internal_6f465a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+8]
        push ebx
        mov bl, byte ptr ds : [edx+0x71]
        test bl, bl
        jne public_6f465c5
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        jne public_6f465c1
        public_6f465b6 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        je public_6f465b6
        public_6f465c1 : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_6f465c5 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        jne public_6f465dc
        nop 
        public_6f465d0 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax+8]
        je public_6f465d0
        public_6f465dc : nop
        mov edx, dword ptr ds : [ecx]
        cmp dword ptr ds : [edx+8], eax
        je public_6f465e5
        mov dword ptr ds : [ecx], eax
        public_6f465e5 : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f465a0)
    }
}

#undef public_6f465b6
#undef public_6f465c1
#undef public_6f465c5
#undef public_6f465d0
#undef public_6f465dc
#undef public_6f465e5
