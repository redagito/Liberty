#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bda7b _public_5bda7b

PROC_DECLARE(0x5bda70, internal_5bda70, public_5bda70);
/* CHUNK of public_4cd2e0 */
extern "C" NAKED register_t __cdecl internal_5bda70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5bda7b : nop
        mov eax, offset public_5f7f18
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bda70)
        ASM_EXPORT_ENTRY_SINGLE(0x5bda7b, public_5bda7b)
    }
}

#undef public_5bda7b

#pragma init_seg(compiler)
extern "C" void const* const public_5bda7b = __AsmFindLabelExport(&internal_5bda70, 0x5bda7b);
