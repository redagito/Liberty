#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66204b0);

PROC_DECLARE(0x66204b0, internal_66204b0, public_66204b0);
extern "C" NAKED register_t __cdecl internal_66204b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, ecx
        push edi
        mov ecx, 0xB
        mov dword ptr ds : [edx+4], eax
        xor eax, eax
        lea edi, ds:[edx+8]
        rep stosd
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+0x10], 0x80000000
        mov dword ptr ds : [edx+0x14], 1
        mov dword ptr ds : [edx+0x1C], 3
        mov dword ptr ds : [edx+0x20], 0x8000080
        mov dword ptr ds : [edx+0xC], ecx
        mov dword ptr ds : [edx], 0x34
        mov dword ptr ds : [edx+0x30], 0xFFFFFFFF
        mov eax, edx
        pop edi
        ret 8
        UNREACHABLE_TRAP(0x66204b0)
    }
}
