#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a708 _public_6c0a708

PROC_DECLARE(0x6c0a700, internal_6c0a700, public_6c0a700);
/* CHUNK of public_6be5900 */
extern "C" NAKED register_t __cdecl internal_6c0a700()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6bebe40
        public_6c0a708 : nop
        mov eax, offset public_6c0edb4
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a700)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a708, public_6c0a708)
    }
}

#undef public_6c0a708

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a708 = __AsmFindLabelExport(&internal_6c0a700, 0x6c0a708);
