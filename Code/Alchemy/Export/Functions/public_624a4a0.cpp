#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a4ab _public_624a4ab
#define public_624a4b3 _public_624a4b3

PROC_DECLARE(0x624a4a0, internal_624a4a0, public_624a4a0);
/* CHUNK of public_623ca40 */
extern "C" NAKED register_t __cdecl internal_624a4a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a4ab : nop
        mov ecx, dword ptr ss : [ebp+8]
        jmp public_620b710
        public_624a4b3 : nop
        mov eax, offset public_6253510
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a4a0)
        ASM_EXPORT_ENTRY_FIRST(0x624a4ab, public_624a4ab)
        ASM_EXPORT_ENTRY_LAST(0x624a4b3, public_624a4b3)
    }
}

#undef public_624a4ab
#undef public_624a4b3

#pragma init_seg(compiler)
extern "C" void const* const public_624a4ab = __AsmFindLabelExport(&internal_624a4a0, 0x624a4ab);
extern "C" void const* const public_624a4b3 = __AsmFindLabelExport(&internal_624a4a0, 0x624a4b3);
