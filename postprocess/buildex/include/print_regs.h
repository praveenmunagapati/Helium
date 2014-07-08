switch(reg){
case DR_REG_NULL: return "null";
case DR_REG_RAX: return "rax";
case DR_REG_RCX: return "rcx";
case DR_REG_RDX: return "rdx";
case DR_REG_RBX: return "rbx";
case DR_REG_RSP: return "rsp";
case DR_REG_RBP: return "rbp";
case DR_REG_RSI: return "rsi";
case DR_REG_RDI: return "rdi";
case DR_REG_R8: return "r8";
case DR_REG_R9: return "r9";
case DR_REG_R10: return "r10";
case DR_REG_R11: return "r11";
case DR_REG_R12: return "r12";
case DR_REG_R13: return "r13";
case DR_REG_R14: return "r14";
case DR_REG_R15: return "r15";
case DR_REG_EAX: return "eax";
case DR_REG_ECX: return "ecx";
case DR_REG_EDX: return "edx";
case DR_REG_EBX: return "ebx";
case DR_REG_ESP: return "esp";
case DR_REG_EBP: return "ebp";
case DR_REG_ESI: return "esi";
case DR_REG_EDI: return "edi";
case DR_REG_R8D: return "r8d";
case DR_REG_R9D: return "r9d";
case DR_REG_R10D: return "r10d";
case DR_REG_R11D: return "r11d";
case DR_REG_R12D: return "r12d";
case DR_REG_R13D: return "r13d";
case DR_REG_R14D: return "r14d";
case DR_REG_R15D: return "r15d";
case DR_REG_AX: return "ax";
case DR_REG_CX: return "cx";
case DR_REG_DX: return "dx";
case DR_REG_BX: return "bx";
case DR_REG_SP: return "sp";
case DR_REG_BP: return "bp";
case DR_REG_SI: return "si";
case DR_REG_DI: return "di";
case DR_REG_R8W: return "r8w";
case DR_REG_R9W: return "r9w";
case DR_REG_R10W: return "r10w";
case DR_REG_R11W: return "r11w";
case DR_REG_R12W: return "r12w";
case DR_REG_R13W: return "r13w";
case DR_REG_R14W: return "r14w";
case DR_REG_R15W: return "r15w";
case DR_REG_AL: return "al";
case DR_REG_CL: return "cl";
case DR_REG_DL: return "dl";
case DR_REG_BL: return "bl";
case DR_REG_AH: return "ah";
case DR_REG_CH: return "ch";
case DR_REG_DH: return "dh";
case DR_REG_BH: return "bh";
case DR_REG_R8L: return "r8l";
case DR_REG_R9L: return "r9l";
case DR_REG_R10L: return "r10l";
case DR_REG_R11L: return "r11l";
case DR_REG_R12L: return "r12l";
case DR_REG_R13L: return "r13l";
case DR_REG_R14L: return "r14l";
case DR_REG_R15L: return "r15l";
case DR_REG_SPL: return "spl";
case DR_REG_BPL: return "bpl";
case DR_REG_SIL: return "sil";
case DR_REG_DIL: return "dil";
case DR_REG_MM0: return "mm0";
case DR_REG_MM1: return "mm1";
case DR_REG_MM2: return "mm2";
case DR_REG_MM3: return "mm3";
case DR_REG_MM4: return "mm4";
case DR_REG_MM5: return "mm5";
case DR_REG_MM6: return "mm6";
case DR_REG_MM7: return "mm7";
case DR_REG_XMM0: return "xmm0";
case DR_REG_XMM1: return "xmm1";
case DR_REG_XMM2: return "xmm2";
case DR_REG_XMM3: return "xmm3";
case DR_REG_XMM4: return "xmm4";
case DR_REG_XMM5: return "xmm5";
case DR_REG_XMM6: return "xmm6";
case DR_REG_XMM7: return "xmm7";
case DR_REG_XMM8: return "xmm8";
case DR_REG_XMM9: return "xmm9";
case DR_REG_XMM10: return "xmm10";
case DR_REG_XMM11: return "xmm11";
case DR_REG_XMM12: return "xmm12";
case DR_REG_XMM13: return "xmm13";
case DR_REG_XMM14: return "xmm14";
case DR_REG_XMM15: return "xmm15";
case DR_REG_ST0: return "st0";
case DR_REG_ST1: return "st1";
case DR_REG_ST2: return "st2";
case DR_REG_ST3: return "st3";
case DR_REG_ST4: return "st4";
case DR_REG_ST5: return "st5";
case DR_REG_ST6: return "st6";
case DR_REG_ST7: return "st7";
case DR_REG_DR0: return "dr0";
case DR_REG_DR1: return "dr1";
case DR_REG_DR2: return "dr2";
case DR_REG_DR3: return "dr3";
case DR_REG_DR4: return "dr4";
case DR_REG_DR5: return "dr5";
case DR_REG_DR6: return "dr6";
case DR_REG_DR7: return "dr7";
case DR_REG_DR8: return "dr8";
case DR_REG_DR9: return "dr9";
case DR_REG_DR10: return "dr10";
case DR_REG_DR11: return "dr11";
case DR_REG_DR12: return "dr12";
case DR_REG_DR13: return "dr13";
case DR_REG_DR14: return "dr14";
case DR_REG_DR15: return "dr15";
case DR_REG_CR0: return "cr0";
case DR_REG_CR1: return "cr1";
case DR_REG_CR2: return "cr2";
case DR_REG_CR3: return "cr3";
case DR_REG_CR4: return "cr4";
case DR_REG_CR5: return "cr5";
case DR_REG_CR6: return "cr6";
case DR_REG_CR7: return "cr7";
case DR_REG_CR8: return "cr8";
case DR_REG_CR9: return "cr9";
case DR_REG_CR10: return "cr10";
case DR_REG_CR11: return "cr11";
case DR_REG_CR12: return "cr12";
case DR_REG_CR13: return "cr13";
case DR_REG_CR14: return "cr14";
case DR_REG_CR15: return "cr15";
case DR_REG_YMM0: return "ymm0";
case DR_REG_YMM1: return "ymm1";
case DR_REG_YMM2: return "ymm2";
case DR_REG_YMM3: return "ymm3";
case DR_REG_YMM4: return "ymm4";
case DR_REG_YMM5: return "ymm5";
case DR_REG_YMM6: return "ymm6";
case DR_REG_YMM7: return "ymm7";
case DR_REG_YMM8: return "ymm8";
case DR_REG_YMM9: return "ymm9";
case DR_REG_YMM10: return "ymm10";
case DR_REG_YMM11: return "ymm11";
case DR_REG_YMM12: return "ymm12";
case DR_REG_YMM13: return "ymm13";
case DR_REG_YMM14: return "ymm14";
case DR_REG_YMM15: return "ymm15";
case DR_REG_VIRTUAL_1: return "virtual1";
case DR_REG_VIRTUAL_2: return "virtual2";
}
