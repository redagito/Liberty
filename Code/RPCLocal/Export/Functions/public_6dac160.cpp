#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac160, internal_6dac160, public_6dac160);
extern "C" NAKED register_t __cdecl internal_6dac160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db641c]
        mov dword ptr ds : [public_6dbc270], eax
        ret 
        UNREACHABLE_TRAP(0x6dac160)
    }
}
