#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c18bb _public_5c18bb

PROC_DECLARE(0x5c18b0, internal_5c18b0, public_5c18b0);
/* CHUNK of public_55fd20 */
extern "C" NAKED register_t __cdecl internal_5c18b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c18bb : nop
        mov eax, offset public_5fbc7c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c18b0)
        ASM_EXPORT_ENTRY_SINGLE(0x5c18bb, public_5c18bb)
    }
}

#undef public_5c18bb

#pragma init_seg(compiler)
extern "C" void const* const public_5c18bb = __AsmFindLabelExport(&internal_5c18b0, 0x5c18bb);
