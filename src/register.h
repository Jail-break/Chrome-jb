#pragma once
#include <stdint.h>

register uint64_t rax asm("%rax");
register uint64_t rbx asm("%rbx");
register uint64_t rcx asm("%rcx");
register uint64_t rdx asm("%rdx");
register uint64_t rsi asm("%rsi");
register uint64_t rdi asm("%rdi");
register uint64_t rsp asm("%rsp");
register uint64_t rbp asm("%rbp");

register uint32_t eax asm("%eax");
register uint32_t ebx asm("%ebx");
register uint32_t ecx asm("%ecx");
register uint32_t edx asm("%edx");
register uint32_t esi asm("%esi");
register uint32_t edi asm("%edi");
register uint32_t esp asm("%esp");
register uint32_t ebp asm("%ebp");

register uint16_t ax asm("%ax");
register uint16_t bx asm("%bx");
register uint16_t cx asm("%cx");
register uint16_t dx asm("%dx");
register uint16_t si asm("%si");
register uint16_t di asm("%di");

register uint8_t ah asm("%ah");
register uint8_t bh asm("%bh");
register uint8_t bh asm("%ch");
register uint8_t dh asm("%dh");
register uint8_t al asm("%al");
register uint8_t bl asm("%bl");
register uint8_t cl asm("%cl");
register uint8_t dl asm("%dl");