#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd3ee0);

PROC_DECLARE(0x6bd3ee0, internal_6bd3ee0, public_6bd3ee0);
extern "C" NAKED register_t __cdecl internal_6bd3ee0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+8], cl
        mov byte ptr ds : [eax+9], cl
        mov byte ptr ds : [eax+0xA], cl
        mov byte ptr ds : [eax+0xB], cl
        mov byte ptr ds : [eax+0xC], cl
        mov byte ptr ds : [eax+0xD], cl
        mov byte ptr ds : [eax+0xE], cl
        mov byte ptr ds : [eax+0xF], cl
        mov byte ptr ds : [eax+0x10], cl
        mov byte ptr ds : [eax+0x11], cl
        mov byte ptr ds : [eax+0x12], cl
        mov byte ptr ds : [eax+0x13], cl
        mov byte ptr ds : [eax+0x14], cl
        mov byte ptr ds : [eax+0x15], cl
        ret 
        UNREACHABLE_TRAP(0x6bd3ee0)
    }
}
