#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0e6f _public_5c0e6f

PROC_DECLARE(0x5c0e60, internal_5c0e60, public_5c0e60);
/* CHUNK of public_543b40 */
extern "C" NAKED register_t __cdecl internal_5c0e60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x8C]
        push eax
        call dword ptr ds : [public_5c69b0]
        pop ecx
        ret 
        public_5c0e6f : nop
        mov eax, offset public_5fb0f8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0e60)
        ASM_EXPORT_ENTRY_SINGLE(0x5c0e6f, public_5c0e6f)
    }
}

#undef public_5c0e6f

#pragma init_seg(compiler)
extern "C" void const* const public_5c0e6f = __AsmFindLabelExport(&internal_5c0e60, 0x5c0e6f);
