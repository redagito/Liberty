#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bee240);

#define public_6bee257 _public_6bee257
#define public_6bee272 _public_6bee272
#define public_6bee287 _public_6bee287

PROC_DECLARE(0x6bee240, internal_6bee240, public_6bee240);
extern "C" NAKED register_t __cdecl internal_6bee240()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [edx]
        push esi
        mov esi, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+8]
        cmp esi, dword ptr ds : [ecx+8]
        je public_6bee257
        mov dword ptr ds : [esi+4], edx
        public_6bee257 : nop
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov ecx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [ecx+4]
        jne public_6bee272
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6bee272 : nop
        mov ecx, dword ptr ds : [edx+4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6bee287
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        public_6bee287 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bee240)
    }
}

#undef public_6bee257
#undef public_6bee272
#undef public_6bee287
