#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d40);

#define public_6c09d4c _public_6c09d4c
#define public_6c09d60 _public_6c09d60

PROC_DECLARE(0x6c09d40, internal_6c09d40, public_6c09d40);
extern "C" NAKED register_t __cdecl internal_6c09d40()
{
    __asm
    {
        push ecx
        cmp eax, 0x1000
        lea ecx, ss:[esp+8]
        jb public_6c09d60
        public_6c09d4c : nop
        sub ecx, 0x1000
        sub eax, 0x1000
        test dword ptr ds : [ecx], eax
        cmp eax, 0x1000
        jae public_6c09d4c
        public_6c09d60 : nop
        sub ecx, eax
        mov eax, esp
        test dword ptr ds : [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        push eax
        ret 
        UNREACHABLE_TRAP(0x6c09d40)
    }
}

#undef public_6c09d4c
#undef public_6c09d60
