#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6381e50);
CLANG_FORWARD_PROC_SYMBOL(public_6384720);
CLANG_FORWARD_PROC_SYMBOL(public_6384780);

#define public_6384754 _public_6384754

PROC_DECLARE(0x6384720, internal_6384720, public_6384720);
extern "C" NAKED register_t __cdecl internal_6384720()
{
    __asm
    {
        mov eax, dword ptr ds : [public_658b25c]
        test eax, eax
        jne public_6384754
        mov eax, dword ptr ds : [public_658b24c]
        mov ecx, dword ptr ds : [public_658b254]
        mov edx, dword ptr ds : [public_658b258]
        push eax
        push ecx
        push edx
        call public_6381e50
        add esp, 0xC
        mov dword ptr ds : [public_658b258], eax
        mov dword ptr ds : [public_658b25c], 1
        public_6384754 : nop
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_658b24c]
        mov edx, dword ptr ds : [public_658b254]
        push eax
        mov eax, dword ptr ds : [public_658b258]
        push ecx
        push edx
        push eax
        call public_6384780
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6384720)
    }
}

#undef public_6384754
