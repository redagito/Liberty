#include "Freelancer-PCH.h"


#define public_540330 _public_540330
#define public_540367 _public_540367
#define public_5404e0 _public_5404e0
#define public_540517 _public_540517
#define public_540690 _public_540690
#define public_5406c7 _public_5406c7

PROC_DECLARE(0x540300, internal_540300, public_540300);
extern "C" NAKED register_t __cdecl internal_540300()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        mov eax, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        push esi
        lea esi, ds:[ecx+8]
        push edi
        lea edx, ds:[eax+8]
        mov edi, esi
        lea ecx, ds:[edx+8]
        sub edi, edx
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x10], 3
        mov edi, edi
        public_540330 : nop
        add edi, ecx
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], ebx
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], edi
        mov ecx, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ss : [esp+0x10]
        add ecx, 0xC
        dec edi
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xC], ecx
        jne public_540330
        lea ecx, ds:[edx+0x30]
        mov dword ptr ss : [esp+0x10], 3
        public_540367 : nop
        mov ebx, dword ptr ds : [ecx+edi]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [ecx+edi+4]
        mov dword ptr ds : [ecx+4], ebx
        mov ebx, dword ptr ss : [esp+0x10]
        add ecx, 8
        dec ebx
        mov dword ptr ss : [esp+0x10], ebx
        jne public_540367
        lea ecx, ds:[esi+0x48]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x48]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x54]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x54]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x60]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x60]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x6C]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x6C]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x78]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x78]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x84]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x84]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x90]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x90]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x9C]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x9C]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0xA8]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0xA8]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ds : [esi+0xB4]
        mov dword ptr ds : [edx+0xB4], ecx
        mov ecx, dword ptr ds : [esi+0xB8]
        mov dword ptr ds : [edx+0xB8], ecx
        mov ecx, dword ptr ds : [esi+0xBC]
        mov dword ptr ds : [edx+0xBC], ecx
        mov ecx, dword ptr ds : [esi+0xC0]
        mov dword ptr ds : [edx+0xC0], ecx
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [edx+0xC4], ecx
        mov ecx, dword ptr ds : [esi+0xC8]
        mov dword ptr ds : [edx+0xC8], ecx
        mov ecx, dword ptr ds : [esi+0xCC]
        mov dword ptr ds : [edx+0xCC], ecx
        mov edx, dword ptr ss : [ebp+8]
        lea esi, ds:[edx+0xD8]
        lea edx, ds:[eax+0xD8]
        mov edi, esi
        lea ecx, ds:[edx+8]
        sub edi, edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], 3
        lea esp, ss:[esp]
        public_5404e0 : nop
        add edi, ecx
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], ebx
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], edi
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        add ecx, 0xC
        dec edi
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], ecx
        jne public_5404e0
        lea ecx, ds:[edx+0x30]
        mov dword ptr ss : [esp+0x14], 3
        public_540517 : nop
        mov ebx, dword ptr ds : [ecx+edi]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [ecx+edi+4]
        mov dword ptr ds : [ecx+4], ebx
        mov ebx, dword ptr ss : [esp+0x14]
        add ecx, 8
        dec ebx
        mov dword ptr ss : [esp+0x14], ebx
        jne public_540517
        lea ecx, ds:[esi+0x48]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x48]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x54]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x54]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x60]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x60]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x6C]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x6C]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x78]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x78]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x84]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x84]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x90]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x90]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x9C]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x9C]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0xA8]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0xA8]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ds : [esi+0xB4]
        mov dword ptr ds : [edx+0xB4], ecx
        mov ecx, dword ptr ds : [esi+0xB8]
        mov dword ptr ds : [edx+0xB8], ecx
        mov ecx, dword ptr ds : [esi+0xBC]
        mov dword ptr ds : [edx+0xBC], ecx
        mov ecx, dword ptr ds : [esi+0xC0]
        mov dword ptr ds : [edx+0xC0], ecx
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [edx+0xC4], ecx
        mov ecx, dword ptr ds : [esi+0xC8]
        mov dword ptr ds : [edx+0xC8], ecx
        mov ecx, dword ptr ds : [esi+0xCC]
        mov dword ptr ds : [edx+0xCC], ecx
        mov edx, dword ptr ss : [ebp+8]
        lea esi, ds:[edx+0x1A8]
        lea edx, ds:[eax+0x1A8]
        mov edi, esi
        lea ecx, ds:[edx+8]
        sub edi, edx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0xC], edi
        mov dword ptr ss : [esp+0x10], 3
        lea esp, ss:[esp]
        public_540690 : nop
        add edi, ecx
        mov ebx, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], ebx
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+8], edi
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        add ecx, 0xC
        dec edi
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], ecx
        jne public_540690
        lea ecx, ds:[edx+0x30]
        mov dword ptr ss : [esp+0x14], 3
        public_5406c7 : nop
        mov ebx, dword ptr ds : [ecx+edi]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [ecx+edi+4]
        mov dword ptr ds : [ecx+4], ebx
        mov ebx, dword ptr ss : [esp+0x14]
        add ecx, 8
        dec ebx
        mov dword ptr ss : [esp+0x14], ebx
        jne public_5406c7
        lea ecx, ds:[esi+0x48]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x48]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x54]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x54]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x60]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x60]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x6C]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x6C]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x78]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x78]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x84]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x84]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x90]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x90]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0x9C]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0x9C]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        lea ecx, ds:[esi+0xA8]
        mov ebx, dword ptr ds : [ecx]
        lea edi, ds:[edx+0xA8]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+8], ecx
        mov ecx, dword ptr ds : [esi+0xB4]
        mov dword ptr ds : [edx+0xB4], ecx
        mov ecx, dword ptr ds : [esi+0xB8]
        mov dword ptr ds : [edx+0xB8], ecx
        mov ecx, dword ptr ds : [esi+0xBC]
        mov dword ptr ds : [edx+0xBC], ecx
        mov ecx, dword ptr ds : [esi+0xC0]
        mov dword ptr ds : [edx+0xC0], ecx
        mov ecx, dword ptr ds : [esi+0xC4]
        mov dword ptr ds : [edx+0xC4], ecx
        mov ecx, dword ptr ds : [esi+0xC8]
        mov dword ptr ds : [edx+0xC8], ecx
        mov ecx, dword ptr ds : [esi+0xCC]
        mov dword ptr ds : [edx+0xCC], ecx
        mov ecx, dword ptr ss : [ebp+8]
        lea edx, ds:[ecx+0x278]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x278]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x284]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x284]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x290]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x290]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        lea edx, ds:[ecx+0x29C]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x29C]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+0xC], edx
        lea edx, ds:[ecx+0x2AC]
        mov edi, dword ptr ds : [edx]
        lea esi, ds:[eax+0x2AC]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        mov edx, dword ptr ds : [ecx+0x2B8]
        mov dword ptr ds : [eax+0x2B8], edx
        mov edx, dword ptr ds : [ecx+0x2C0]
        mov dword ptr ds : [eax+0x2C0], edx
        mov edx, dword ptr ds : [ecx+0x2C4]
        mov dword ptr ds : [eax+0x2C4], edx
        mov edx, dword ptr ds : [ecx+0x2C8]
        mov dword ptr ds : [eax+0x2C8], edx
        mov edx, dword ptr ds : [ecx+0x2CC]
        mov dword ptr ds : [eax+0x2CC], edx
        mov edx, dword ptr ds : [ecx+0x2D0]
        mov dword ptr ds : [eax+0x2D0], edx
        mov edx, dword ptr ds : [ecx+0x2D4]
        mov dword ptr ds : [eax+0x2D4], edx
        mov edx, dword ptr ds : [ecx+0x2D8]
        mov dword ptr ds : [eax+0x2D8], edx
        mov edx, dword ptr ds : [ecx+0x2DC]
        pop edi
        mov dword ptr ds : [eax+0x2DC], edx
        mov cl, byte ptr ds : [ecx+0x2E0]
        pop esi
        mov byte ptr ds : [eax+0x2E0], cl
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x540300)
    }
}

#undef public_540330
#undef public_540367
#undef public_5404e0
#undef public_540517
#undef public_540690
#undef public_5406c7
