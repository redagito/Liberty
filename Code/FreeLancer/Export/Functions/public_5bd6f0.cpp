#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd6f9 _public_5bd6f9

PROC_DECLARE(0x5bd6f0, internal_5bd6f0, public_5bd6f0);
/* CHUNK of public_4c5940 */
extern "C" NAKED register_t __cdecl internal_5bd6f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp dword ptr ds : [public_5c62a4]
        public_5bd6f9 : nop
        mov eax, offset public_5f7b08
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd6f0)
        ASM_EXPORT_ENTRY_SINGLE(0x5bd6f9, public_5bd6f9)
    }
}

#undef public_5bd6f9

#pragma init_seg(compiler)
extern "C" void const* const public_5bd6f9 = __AsmFindLabelExport(&internal_5bd6f0, 0x5bd6f9);
