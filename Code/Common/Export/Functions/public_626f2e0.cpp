#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f01f0);

PROC_DECLARE(0x626f2e0, internal_626f2e0, public_626f2e0);
extern "C" NAKED register_t __cdecl internal_626f2e0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f01f0
        mov eax, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], eax
        mov cl, byte ptr ds : [edi+0x60]
        mov byte ptr ds : [esi+0x60], cl
        mov edx, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [esi+0x64], edx
        mov eax, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x68], eax
        mov cl, byte ptr ds : [edi+0x6C]
        mov dword ptr ds : [esi], offset public_6399870
        mov byte ptr ds : [esi+0x6C], cl
        mov edx, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], edx
        mov eax, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], eax
        mov cl, byte ptr ds : [edi+0x78]
        mov byte ptr ds : [esi+0x78], cl
        mov dl, byte ptr ds : [edi+0x79]
        mov byte ptr ds : [esi+0x79], dl
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ds : [esi], offset public_6399cbc
        mov ecx, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], ecx
        mov edx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], edx
        mov eax, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], eax
        mov ecx, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], ecx
        mov edx, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], edx
        mov eax, dword ptr ds : [edi+0x94]
        mov dword ptr ds : [esi+0x94], eax
        mov ecx, dword ptr ds : [edi+0x98]
        mov dword ptr ds : [esi+0x98], ecx
        mov edx, dword ptr ds : [edi+0x9C]
        mov dword ptr ds : [esi+0x9C], edx
        mov eax, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], eax
        mov ecx, dword ptr ds : [edi+0xA4]
        mov dword ptr ds : [esi+0xA4], ecx
        mov edx, dword ptr ds : [edi+0xA8]
        mov dword ptr ds : [esi+0xA8], edx
        mov al, byte ptr ds : [edi+0xAC]
        mov byte ptr ds : [esi+0xAC], al
        pop edi
        mov dword ptr ds : [esi], offset public_6399ce8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626f2e0)
    }
}
