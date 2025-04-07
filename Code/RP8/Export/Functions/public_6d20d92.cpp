#include "RP8-PCH.h"


#define public_6d20e20 _public_6d20e20
#define public_6d20e4f _public_6d20e4f
#define public_6d2102e _public_6d2102e
#define public_6d21030 _public_6d21030
#define public_6d2105d _public_6d2105d
#define public_6d210d9 _public_6d210d9

PROC_DECLARE(0x6d20d92, internal_6d20d92, public_6d20d92);
extern "C" NAKED register_t __cdecl internal_6d20d92()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x2C]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x38]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ds : [eax+0x40]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [edx+0x4C]
        mov ecx, dword ptr ss : [ebp+0x14]
        lea edx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp+0x14]
        imul eax, 0x24
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, eax
        mov edx, dword ptr ss : [ebp+0x18]
        imul edx, 0x24
        lea eax, ds:[ecx+edx-0x6C]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        imul ecx, 0x24
        mov edx, dword ptr ss : [ebp+8]
        add edx, ecx
        mov dword ptr ss : [ebp-0x18], edx
        jmp public_6d20e4f
        public_6d20e20 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x90
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp-8]
        add eax, 0x10
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x1C], ecx
        public_6d20e4f : nop
        mov edx, dword ptr ss : [ebp-0x18]
        cmp edx, dword ptr ss : [ebp-0x28]
        jae public_6d2102e
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0xC
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+ecx*4]
        mov dword ptr ds : [edx+0x18], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+eax*8]
        mov eax, dword ptr ds : [ecx+eax*8+4]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx+0x1C], edx
        mov dword ptr ds : [ecx+0x20], eax
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 0x24
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [edx+4]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 0x30
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ds : [edx+eax*4]
        mov dword ptr ds : [ecx+0x3C], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+edx*8]
        mov edx, dword ptr ds : [eax+edx*8+4]
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [eax+0x40], ecx
        mov dword ptr ds : [eax+0x44], edx
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx+8]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x48
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [ecx+8]
        imul edx, 0xC
        mov eax, dword ptr ss : [ebp-0xC]
        add eax, edx
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x54
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ds : [ecx+edx*4]
        mov dword ptr ds : [eax+0x60], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+ecx*8]
        mov ecx, dword ptr ds : [edx+ecx*8+4]
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+0x64], eax
        mov dword ptr ds : [edx+0x68], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+0xC]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x6C
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        imul ecx, 0xC
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, ecx
        mov eax, dword ptr ss : [ebp-0x18]
        add eax, 0x78
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax+ecx*4]
        mov dword ptr ds : [edx+0x84], ecx
        mov edx, dword ptr ss : [ebp-0x1C]
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+eax*8]
        mov eax, dword ptr ds : [ecx+eax*8+4]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx+0x88], edx
        mov dword ptr ds : [ecx+0x8C], eax
        jmp public_6d20e20
        public_6d2102e : nop
        jmp public_6d2105d
        public_6d21030 : nop
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 0x24
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 4
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x24]
        add ecx, 4
        mov dword ptr ss : [ebp-0x24], ecx
        mov edx, dword ptr ss : [ebp-8]
        add edx, 4
        mov dword ptr ss : [ebp-8], edx
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 4
        mov dword ptr ss : [ebp-0x1C], eax
        public_6d2105d : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        add ecx, 0x6C
        cmp dword ptr ss : [ebp-0x18], ecx
        jae public_6d210d9
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [edx]
        imul eax, 0xC
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, eax
        mov edx, dword ptr ss : [ebp-0x18]
        add edx, 0xC
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ds : [edx+eax*4]
        mov dword ptr ds : [ecx+0x18], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+edx*8]
        mov edx, dword ptr ds : [eax+edx*8+4]
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], edx
        jmp public_6d21030
        public_6d210d9 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d20d92)
    }
}

#undef public_6d20e20
#undef public_6d20e4f
#undef public_6d2102e
#undef public_6d21030
#undef public_6d2105d
#undef public_6d210d9
