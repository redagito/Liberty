#include "Server-PCH.h"


#define public_6d5560d _public_6d5560d

PROC_DECLARE(0x6d555c0, internal_6d555c0, public_6d555c0);
extern "C" NAKED register_t __cdecl internal_6d555c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d5560d
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d5560d
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        push edi
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        pop edi
        je public_6d5560d
        mov eax, dword ptr ss : [esp+0xC]
        imul ecx, 0x418
        mov edx, dword ptr ds : [ecx+esi-0xE4]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop esi
        ret 
        public_6d5560d : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d555c0)
    }
}

#undef public_6d5560d
