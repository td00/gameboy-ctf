
int64_t __gmon_start__ = 0;

void fun_a50();

void fun_990() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        fun_a50();
    }
    return;
}

int64_t __gmon_start__ = 0xa56;

void fun_a50() {
    goto __gmon_start__;
}

struct s0 {
    struct s0* f0;
    int64_t f8;
    struct s0* f16;
    struct s0* f24;
    struct s0* f32;
    signed char[12] pad52;
    signed char f52;
    signed char[1] pad54;
    int16_t f54;
    int16_t f56;
    int16_t f58;
    int16_t f60;
    int16_t f62;
    int16_t f64;
    signed char[2] pad68;
    int32_t f68;
    int32_t f72;
    int32_t f76;
    int32_t f80;
    int32_t f84;
    int32_t f88;
    int32_t f92;
    int32_t f96;
    signed char[228] pad328;
    int16_t f328;
    signed char[64955] pad65285;
    signed char f65285;
    signed char f65286;
    signed char f65287;
    signed char[8] pad65296;
    signed char f65296;
    signed char f65297;
    signed char f65298;
    signed char[1] pad65300;
    signed char f65300;
    signed char[1] pad65302;
    signed char f65302;
    signed char f65303;
    signed char[1] pad65305;
    signed char f65305;
    signed char f65306;
    signed char f65307;
    signed char f65308;
    signed char f65309;
    signed char[2] pad65312;
    signed char f65312;
    signed char f65313;
    signed char f65314;
    signed char f65315;
    signed char f65316;
    signed char f65317;
    signed char f65318;
    signed char[25] pad65344;
    signed char f65344;
    signed char[1] pad65346;
    signed char f65346;
    signed char f65347;
    signed char[1] pad65349;
    signed char f65349;
    signed char f65350;
    signed char f65351;
    signed char f65352;
    signed char f65353;
    signed char f65354;
    signed char f65355;
    signed char[179] pad65535;
    signed char f65535;
};

int64_t calloc = 0xa36;

struct s0* fun_a30(int64_t rdi, int32_t* rsi) {
    goto calloc;
}

int64_t strtol = 0xa66;

int32_t fun_a60(int64_t rdi) {
    goto strtol;
}

int64_t fread = 0x9e6;

int64_t fun_9e0(struct s0* rdi, int32_t* rsi, struct s0* rdx, int64_t rcx) {
    goto fread;
}

int64_t free = 0x9c6;

void fun_9c0(struct s0* rdi, int32_t* rsi, struct s0* rdx, int64_t rcx) {
    goto free;
}

int64_t printf = 0x9f6;

uint32_t fun_9f0(int64_t rdi, int32_t* rsi, ...) {
    goto printf;
}

int64_t fflush = 0xa96;

void fun_a90(int64_t rdi, int32_t* rsi, ...) {
    goto fflush;
}

int64_t setvbuf = 0xaa6;

void fun_aa0(int64_t rdi) {
    goto setvbuf;
}

int64_t select = 0xa86;

int32_t fun_a80(int64_t rdi) {
    goto select;
}

int64_t putchar = 0x9d6;

uint32_t fun_9d0(int64_t rdi) {
    goto putchar;
}

struct s1 {
    signed char[54] pad54;
    signed char f54;
};

signed char fun_31e0(struct s1* rdi, uint32_t esi, uint32_t edx, uint32_t ecx) {
    uint32_t eax5;
    int32_t r9d6;
    int32_t r8d7;
    int32_t r10d8;

    eax5 = *reinterpret_cast<unsigned char*>(&esi) - *reinterpret_cast<unsigned char*>(&edx) - *reinterpret_cast<unsigned char*>(&ecx);
    if (!*reinterpret_cast<signed char*>(&eax5)) {
        rdi->f54 = -64;
        r9d6 = -32;
        r8d7 = -16;
        r10d8 = -48;
    } else {
        rdi->f54 = 64;
        r9d6 = 96;
        r8d7 = 0x70;
        r10d8 = 80;
    }
    if (*reinterpret_cast<uint16_t*>(&eax5) > 0xff) {
        rdi->f54 = *reinterpret_cast<signed char*>(&r10d8);
        r9d6 = r8d7;
    }
    if ((esi & 15) - (edx & 15) & 16) {
        rdi->f54 = *reinterpret_cast<signed char*>(&r9d6);
    }
    if ((esi - edx & 15) - (ecx & 15) & 16) {
        rdi->f54 = *reinterpret_cast<signed char*>(&r9d6);
    }
    return *reinterpret_cast<signed char*>(&eax5);
}

int64_t __cxa_finalize = 0xac6;

void fun_ac0(int64_t rdi) {
    goto __cxa_finalize;
}

struct s2 {
    signed char[52] pad52;
    unsigned char f52;
    unsigned char f53;
    unsigned char f54;
    unsigned char f55;
    unsigned char f56;
    unsigned char f57;
    unsigned char f58;
    unsigned char f59;
    unsigned char f60;
    unsigned char f61;
    unsigned char f62;
    unsigned char f63;
    unsigned char f64;
    unsigned char f65;
    unsigned char f66;
    unsigned char f67;
};

struct s0* fun_a00(void* rdi);

struct s0* fun_3030(struct s2* rdi, struct s0* rsi, int64_t rdx, int64_t rcx) {
    void* rsp5;
    uint32_t eax6;
    uint32_t eax7;
    int64_t rax8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t eax11;
    uint32_t eax12;
    uint32_t eax13;
    uint32_t eax14;
    uint32_t eax15;
    uint32_t eax16;
    uint32_t eax17;
    uint32_t eax18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    uint32_t eax22;
    uint32_t eax23;
    uint32_t eax24;
    uint32_t eax25;
    uint32_t eax26;
    uint32_t eax27;
    uint32_t eax28;
    uint32_t eax29;
    uint32_t eax30;
    uint32_t eax31;
    uint32_t eax32;
    uint32_t eax33;
    uint32_t eax34;
    uint32_t eax35;
    uint32_t eax36;
    uint32_t eax37;
    uint32_t eax38;
    struct s0* rax39;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 16);
    eax6 = rdi->f52;
    eax7 = eax6 - 65;
    if (*reinterpret_cast<unsigned char*>(&eax7) > 25) {
        *reinterpret_cast<int32_t*>(&rax8) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    } else {
        eax9 = rdi->f53;
        eax10 = eax9 - 65;
        if (*reinterpret_cast<unsigned char*>(&eax10) > 25) {
            *reinterpret_cast<int32_t*>(&rax8) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        } else {
            eax11 = rdi->f54;
            eax12 = eax11 - 65;
            if (*reinterpret_cast<unsigned char*>(&eax12) > 25) {
                *reinterpret_cast<int32_t*>(&rax8) = 2;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
            } else {
                eax13 = rdi->f55;
                eax14 = eax13 - 65;
                if (*reinterpret_cast<unsigned char*>(&eax14) > 25) {
                    *reinterpret_cast<int32_t*>(&rax8) = 3;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                } else {
                    eax15 = rdi->f56;
                    eax16 = eax15 - 65;
                    if (*reinterpret_cast<unsigned char*>(&eax16) > 25) {
                        *reinterpret_cast<int32_t*>(&rax8) = 4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                    } else {
                        eax17 = rdi->f57;
                        eax18 = eax17 - 65;
                        if (*reinterpret_cast<unsigned char*>(&eax18) > 25) {
                            *reinterpret_cast<int32_t*>(&rax8) = 5;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                        } else {
                            eax19 = rdi->f58;
                            eax20 = eax19 - 65;
                            if (*reinterpret_cast<unsigned char*>(&eax20) > 25) {
                                *reinterpret_cast<int32_t*>(&rax8) = 6;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                            } else {
                                eax21 = rdi->f59;
                                eax22 = eax21 - 65;
                                if (*reinterpret_cast<unsigned char*>(&eax22) > 25) {
                                    *reinterpret_cast<int32_t*>(&rax8) = 7;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                                } else {
                                    eax23 = rdi->f60;
                                    eax24 = eax23 - 65;
                                    if (*reinterpret_cast<unsigned char*>(&eax24) > 25) {
                                        *reinterpret_cast<int32_t*>(&rax8) = 8;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                                    } else {
                                        eax25 = rdi->f61;
                                        eax26 = eax25 - 65;
                                        if (*reinterpret_cast<unsigned char*>(&eax26) > 25) {
                                            *reinterpret_cast<int32_t*>(&rax8) = 9;
                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                                        } else {
                                            eax27 = rdi->f62;
                                            eax28 = eax27 - 65;
                                            if (*reinterpret_cast<unsigned char*>(&eax28) > 25) {
                                                *reinterpret_cast<int32_t*>(&rax8) = 10;
                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                                            } else {
                                                eax29 = rdi->f63;
                                                eax30 = eax29 - 65;
                                                if (*reinterpret_cast<unsigned char*>(&eax30) > 25) {
                                                    *reinterpret_cast<int32_t*>(&rax8) = 11;
                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                                                } else {
                                                    eax31 = rdi->f64;
                                                    eax32 = eax31 - 65;
                                                    if (*reinterpret_cast<unsigned char*>(&eax32) > 25) {
                                                        *reinterpret_cast<int32_t*>(&rax8) = 12;
                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                                                    } else {
                                                        eax33 = rdi->f65;
                                                        eax34 = eax33 - 65;
                                                        if (*reinterpret_cast<unsigned char*>(&eax34) > 25) {
                                                            *reinterpret_cast<int32_t*>(&rax8) = 13;
                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                                                        } else {
                                                            eax35 = rdi->f66;
                                                            eax36 = eax35 - 65;
                                                            if (*reinterpret_cast<unsigned char*>(&eax36) > 25) {
                                                                *reinterpret_cast<int32_t*>(&rax8) = 14;
                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                                                            } else {
                                                                eax37 = rdi->f67;
                                                                eax38 = eax37 - 65;
                                                                if (*reinterpret_cast<unsigned char*>(&eax38) > 25) {
                                                                    *reinterpret_cast<int32_t*>(&rax8) = 15;
                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
                                                                } else {
                                                                    addr_315f_33:
                                                                    rax39 = fun_a00(rsp5);
                                                                    return rax39;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp5) + rax8) = 0;
    goto addr_315f_33;
}

int64_t __strdup = 0xa06;

struct s0* fun_a00(void* rdi) {
    goto __strdup;
}

int64_t exit = 0xab6;

void fun_ab0(int64_t rdi, int32_t* rsi, struct s0* rdx, int64_t rcx) {
    goto exit;
}

int64_t memcpy = 0xa76;

void fun_a70(struct s0* rdi, struct s0* rsi, int64_t rdx, int64_t rcx) {
    goto memcpy;
}

int64_t fprintf = 0xa46;

void fun_a40(int64_t rdi, int32_t* rsi, struct s0* rdx, int64_t rcx) {
    goto fprintf;
}

int64_t usleep = 0xad6;

void fun_ad0(int64_t rdi) {
    goto usleep;
}

int64_t read = 0xa16;

int64_t fun_a10() {
    goto read;
}

int64_t _ITM_deregisterTMCloneTable = 0;

int64_t fun_2f30(int64_t rdi) {
    int64_t rax2;

    rax2 = 7;
    if (1 || (rax2 = _ITM_deregisterTMCloneTable, rax2 == 0)) {
        return rax2;
    } else {
        goto rax2;
    }
}

int64_t __libc_start_main = 0xa26;

void fun_a20(int64_t rdi, int64_t rsi, void* rdx, int64_t rcx, int64_t r8, int64_t r9, void** a7, int64_t a8) {
    goto __libc_start_main;
}

void fun_32e4() {
    return;
}

struct s3 {
    unsigned char f0;
    unsigned char f1;
};

struct s4 {
    unsigned char f0;
    signed char[38911] pad38912;
    unsigned char f38912;
    signed char[1023] pad39936;
    unsigned char f39936;
    signed char[25347] pad65284;
    signed char f65284;
    unsigned char f65285;
    signed char[1] pad65287;
    unsigned char f65287;
    signed char[7] pad65295;
    unsigned char f65295;
    signed char[48] pad65344;
    unsigned char f65344;
    unsigned char f65345;
    signed char[2] pad65348;
    unsigned char f65348;
    unsigned char f65349;
    unsigned char f65350;
    unsigned char f65351;
    unsigned char f65352;
    unsigned char f65353;
    signed char[181] pad65535;
    unsigned char f65535;
};

struct s5 {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char f3;
    signed char f4;
    signed char f5;
    signed char f6;
};

struct s6 {
    signed char[24] pad24;
    int64_t f24;
};

struct s7 {
    signed char[24] pad24;
    int64_t f24;
};

struct s8 {
    signed char[32] pad32;
    int64_t f32;
};

struct s9 {
    int64_t f0;
    signed char[144] pad152;
    int64_t f152;
};

struct s10 {
    signed char[8] pad8;
    struct s9* f8;
};

struct s11 {
    int64_t f0;
    signed char[144] pad152;
    int64_t f152;
};

struct s12 {
    signed char[92] pad92;
    int32_t f92;
};

struct s13 {
    signed char[92] pad92;
    int32_t f92;
};

struct s14 {
    signed char[92] pad92;
    int32_t f92;
};

struct s15 {
    signed char[96] pad96;
    int32_t f96;
};

struct s16 {
    signed char[96] pad96;
    uint32_t f96;
};

struct s17 {
    signed char[96] pad96;
    int32_t f96;
};

struct s18 {
    signed char[76] pad76;
    int32_t f76;
};

struct s19 {
    signed char f0;
    unsigned char f1;
    signed char[158] pad160;
    unsigned char f160;
    unsigned char f161;
    signed char[158] pad320;
    unsigned char f320;
    unsigned char f321;
};

struct s20 {
    signed char[32] pad32;
    int64_t f32;
};

signed char g203c69 = 0;

signed char g203c6a = 0;

signed char g203c6c = 0;

signed char g203c6b = 0;

int64_t* stdout = reinterpret_cast<int64_t*>(0);

struct s21 {
    signed char[76] pad76;
    int32_t f76;
};

struct s22 {
    signed char[52] pad52;
    signed char f52;
};

struct s23 {
    signed char[52] pad52;
    unsigned char f52;
};

struct s24 {
    signed char[52] pad52;
    unsigned char f52;
};

struct s25 {
    signed char[66] pad66;
    unsigned char f66;
};

struct s26 {
    signed char[66] pad66;
    unsigned char f66;
};

struct s27 {
    signed char[66] pad66;
    unsigned char f66;
};

struct s28 {
    signed char[66] pad66;
    unsigned char f66;
};

struct s29 {
    signed char[68] pad68;
    int32_t f68;
};

struct s30 {
    signed char[84] pad84;
    uint32_t f84;
};

struct s31 {
    signed char[84] pad84;
    uint32_t f84;
};

struct s32 {
    signed char[66] pad66;
    signed char f66;
};

struct s33 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s34 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s35 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s36 {
    signed char[64] pad64;
    int16_t f64;
};

struct s37 {
    signed char[66] pad66;
    signed char f66;
};

struct s38 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s39 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s40 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s41 {
    signed char[64] pad64;
    int16_t f64;
};

struct s42 {
    signed char[66] pad66;
    signed char f66;
};

struct s43 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s44 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s45 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s46 {
    signed char[64] pad64;
    int16_t f64;
};

struct s47 {
    signed char[66] pad66;
    signed char f66;
};

struct s48 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s49 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s50 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s51 {
    signed char[64] pad64;
    int16_t f64;
};

struct s52 {
    signed char[84] pad84;
    uint32_t f84;
};

struct s53 {
    signed char[66] pad66;
    signed char f66;
};

struct s54 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s55 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s56 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s57 {
    signed char[84] pad84;
    uint32_t f84;
};

struct s58 {
    signed char[64] pad64;
    int16_t f64;
};

struct s59 {
    signed char[68] pad68;
    int32_t f68;
};

struct s60 {
    signed char[88] pad88;
    int32_t f88;
};

struct s61 {
    signed char[88] pad88;
    int32_t f88;
};

struct s62 {
    signed char[88] pad88;
    int32_t f88;
};

struct s63 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s64 {
    unsigned char f0;
    unsigned char f1;
};

struct s65 {
    signed char[76] pad76;
    int32_t f76;
};

struct s66 {
    signed char[58] pad58;
    uint16_t f58;
};

struct s67 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s68 {
    signed char[56] pad56;
    uint16_t f56;
};

struct s69 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s70 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s71 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s72 {
    signed char[60] pad60;
    int16_t f60;
};

struct s73 {
    signed char[60] pad60;
    int16_t f60;
};

struct s74 {
    signed char[60] pad60;
    int16_t f60;
};

struct s75 {
    signed char[60] pad60;
    int16_t f60;
};

struct s76 {
    signed char[64] pad64;
    int16_t f64;
};

struct s77 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s78 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s79 {
    signed char[54] pad54;
    signed char f54;
};

struct s80 {
    signed char[54] pad54;
    signed char f54;
};

struct s81 {
    signed char[54] pad54;
    signed char f54;
};

struct s82 {
    signed char[64] pad64;
    int16_t f64;
};

struct s83 {
    signed char[64] pad64;
    int16_t f64;
};

struct s84 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s85 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s86 {
    signed char[54] pad54;
    signed char f54;
};

struct s87 {
    signed char[54] pad54;
    signed char f54;
};

struct s88 {
    signed char[54] pad54;
    signed char f54;
};

struct s89 {
    signed char[64] pad64;
    int16_t f64;
};

struct s90 {
    signed char[64] pad64;
    int16_t f64;
};

struct s91 {
    signed char[64] pad64;
    int16_t f64;
};

struct s92 {
    signed char[64] pad64;
    int16_t f64;
};

struct s93 {
    signed char[64] pad64;
    int16_t f64;
};

struct s94 {
    signed char[64] pad64;
    int16_t f64;
};

struct s95 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s96 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s97 {
    signed char[54] pad54;
    signed char f54;
};

struct s98 {
    signed char[54] pad54;
    signed char f54;
};

struct s99 {
    signed char[54] pad54;
    signed char f54;
};

struct s100 {
    signed char[60] pad60;
    int16_t f60;
};

struct s101 {
    signed char[64] pad64;
    int16_t f64;
};

struct s102 {
    signed char[64] pad64;
    int16_t f64;
};

struct s103 {
    signed char[64] pad64;
    int16_t f64;
};

struct s104 {
    signed char[64] pad64;
    int16_t f64;
};

struct s105 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s106 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s107 {
    signed char[64] pad64;
    int16_t f64;
};

struct s108 {
    signed char[64] pad64;
    int16_t f64;
};

struct s109 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s110 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s111 {
    signed char[54] pad54;
    signed char f54;
};

struct s112 {
    signed char[54] pad54;
    signed char f54;
};

struct s113 {
    signed char[54] pad54;
    signed char f54;
};

struct s114 {
    signed char[54] pad54;
    signed char f54;
};

struct s115 {
    signed char[64] pad64;
    int16_t f64;
};

struct s116 {
    signed char[64] pad64;
    int16_t f64;
};

struct s117 {
    signed char[55] pad55;
    signed char f55;
};

struct s118 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s119 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s120 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s121 {
    signed char[54] pad54;
    signed char f54;
};

struct s122 {
    signed char[54] pad54;
    signed char f54;
};

struct s123 {
    signed char[54] pad54;
    signed char f54;
};

struct s124 {
    signed char[54] pad54;
    signed char f54;
};

struct s125 {
    signed char[54] pad54;
    signed char f54;
};

struct s126 {
    signed char[64] pad64;
    int16_t f64;
};

struct s127 {
    signed char[64] pad64;
    int16_t f64;
};

struct s128 {
    signed char[55] pad55;
    signed char f55;
};

struct s129 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s130 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s131 {
    signed char[64] pad64;
    int16_t f64;
};

struct s132 {
    signed char[64] pad64;
    int16_t f64;
};

struct s133 {
    signed char[55] pad55;
    signed char f55;
};

struct s134 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s135 {
    signed char[64] pad64;
    int16_t f64;
};

struct s136 {
    signed char[64] pad64;
    int16_t f64;
};

struct s137 {
    signed char[55] pad55;
    signed char f55;
};

struct s138 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s139 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s140 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s141 {
    signed char[64] pad64;
    int16_t f64;
};

struct s142 {
    signed char[64] pad64;
    int16_t f64;
};

struct s143 {
    signed char[55] pad55;
    signed char f55;
};

struct s144 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s145 {
    signed char[64] pad64;
    int16_t f64;
};

struct s146 {
    signed char[64] pad64;
    int16_t f64;
};

struct s147 {
    signed char[55] pad55;
    signed char f55;
};

struct s148 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s149 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s150 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s151 {
    signed char[55] pad55;
    signed char f55;
};

struct s152 {
    signed char[54] pad54;
    signed char f54;
};

struct s153 {
    signed char[64] pad64;
    int16_t f64;
};

struct s154 {
    signed char[64] pad64;
    int16_t f64;
};

struct s155 {
    signed char[54] pad54;
    signed char f54;
};

struct s156 {
    signed char[64] pad64;
    int16_t f64;
};

struct s157 {
    signed char[64] pad64;
    int16_t f64;
};

struct s158 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s159 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s160 {
    signed char[55] pad55;
    signed char f55;
};

struct s161 {
    signed char[54] pad54;
    signed char f54;
};

struct s162 {
    signed char[64] pad64;
    int16_t f64;
};

struct s163 {
    signed char[64] pad64;
    int16_t f64;
};

struct s164 {
    signed char[54] pad54;
    signed char f54;
};

struct s165 {
    signed char[64] pad64;
    int16_t f64;
};

struct s166 {
    signed char[64] pad64;
    int16_t f64;
};

struct s167 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s168 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s169 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s170 {
    signed char[55] pad55;
    signed char f55;
};

struct s171 {
    signed char[54] pad54;
    signed char f54;
};

struct s172 {
    signed char[64] pad64;
    int16_t f64;
};

struct s173 {
    signed char[64] pad64;
    int16_t f64;
};

struct s174 {
    signed char[54] pad54;
    signed char f54;
};

struct s175 {
    signed char[64] pad64;
    int16_t f64;
};

struct s176 {
    signed char[64] pad64;
    int16_t f64;
};

struct s177 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s178 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s179 {
    signed char[55] pad55;
    signed char f55;
};

struct s180 {
    signed char[54] pad54;
    signed char f54;
};

struct s181 {
    signed char[64] pad64;
    int16_t f64;
};

struct s182 {
    signed char[64] pad64;
    int16_t f64;
};

struct s183 {
    signed char[54] pad54;
    signed char f54;
};

struct s184 {
    signed char[64] pad64;
    int16_t f64;
};

struct s185 {
    signed char[64] pad64;
    int16_t f64;
};

struct s186 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s187 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s188 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s189 {
    signed char[55] pad55;
    signed char f55;
};

struct s190 {
    signed char[54] pad54;
    signed char f54;
};

struct s191 {
    signed char[64] pad64;
    int16_t f64;
};

struct s192 {
    signed char[64] pad64;
    int16_t f64;
};

struct s193 {
    signed char[54] pad54;
    signed char f54;
};

struct s194 {
    signed char[64] pad64;
    int16_t f64;
};

struct s195 {
    signed char[64] pad64;
    int16_t f64;
};

struct s196 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s197 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s198 {
    signed char[55] pad55;
    signed char f55;
};

struct s199 {
    signed char[54] pad54;
    signed char f54;
};

struct s200 {
    signed char[64] pad64;
    int16_t f64;
};

struct s201 {
    signed char[64] pad64;
    int16_t f64;
};

struct s202 {
    signed char[54] pad54;
    signed char f54;
};

struct s203 {
    signed char[64] pad64;
    int16_t f64;
};

struct s204 {
    signed char[64] pad64;
    int16_t f64;
};

struct s205 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s206 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s207 {
    signed char[64] pad64;
    int16_t f64;
};

struct s208 {
    signed char[64] pad64;
    int16_t f64;
};

struct s209 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s210 {
    signed char[64] pad64;
    int16_t f64;
};

struct s211 {
    signed char[64] pad64;
    int16_t f64;
};

struct s212 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s213 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s214 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s215 {
    signed char[64] pad64;
    int16_t f64;
};

struct s216 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s217 {
    signed char[54] pad54;
    int16_t f54;
};

struct s218 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s219 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s220 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s221 {
    signed char[64] pad64;
    int16_t f64;
};

struct s222 {
    signed char[64] pad64;
    int16_t f64;
};

struct s223 {
    signed char[62] pad62;
    int16_t f62;
};

struct s224 {
    signed char[54] pad54;
    uint16_t f54;
};

struct s225 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s226 {
    signed char[64] pad64;
    int16_t f64;
};

struct s227 {
    signed char[64] pad64;
    int16_t f64;
};

struct s228 {
    signed char[64] pad64;
    int16_t f64;
};

struct s229 {
    signed char[64] pad64;
    int16_t f64;
};

struct s230 {
    signed char[84] pad84;
    int32_t f84;
};

struct s231 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s232 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s233 {
    signed char[64] pad64;
    int16_t f64;
};

struct s234 {
    signed char[64] pad64;
    int16_t f64;
};

struct s235 {
    signed char[40] pad40;
    signed char f40;
};

struct s236 {
    signed char[41] pad41;
    signed char f41;
};

struct s237 {
    signed char[43] pad43;
    unsigned char f43;
};

struct s238 {
    signed char[42] pad42;
    signed char f42;
};

struct s239 {
    signed char[44] pad44;
    signed char f44;
};

struct s240 {
    signed char[45] pad45;
    signed char f45;
};

struct s241 {
    signed char[47] pad47;
    unsigned char f47;
};

struct s242 {
    signed char[46] pad46;
    signed char f46;
};

struct s243 {
    signed char[48] pad48;
    signed char f48;
};

struct s244 {
    signed char[49] pad49;
    signed char f49;
};

struct s245 {
    signed char[51] pad51;
    unsigned char f51;
};

struct s246 {
    signed char[50] pad50;
    signed char f50;
};

void fun_11af() {
    int32_t* v1;
    int32_t* rsi2;
    int64_t v3;
    int64_t r9_4;
    int64_t rax5;
    uint32_t eax6;
    struct s3* rax7;
    struct s4* rax8;
    uint32_t esi9;
    struct s5* rcx10;
    int64_t rdi11;
    struct s6* rbx12;
    struct s5* rsi13;
    uint32_t edx14;
    int64_t rdx15;
    uint32_t edx16;
    int64_t rbx17;
    uint32_t edx18;
    int64_t rdx19;
    uint32_t edx20;
    int64_t rbx21;
    uint32_t edx22;
    int64_t rdx23;
    uint32_t edx24;
    int64_t rbx25;
    uint32_t edx26;
    int64_t rdx27;
    uint32_t edx28;
    int64_t rbx29;
    uint32_t edx30;
    int64_t rdx31;
    uint32_t edx32;
    int64_t rbx33;
    uint32_t edx34;
    int64_t rdx35;
    uint32_t edx36;
    int64_t rbx37;
    uint32_t edx38;
    int64_t rdx39;
    uint32_t edx40;
    int64_t rbx41;
    uint32_t edx42;
    int64_t rdx43;
    uint32_t edx44;
    int64_t rbx45;
    unsigned char* r8_46;
    int64_t r9_47;
    int64_t r11_48;
    unsigned char* r14_49;
    int64_t rdx50;
    uint32_t r10d51;
    uint64_t rdi52;
    int64_t* rbx53;
    uint64_t rcx54;
    uint32_t eax55;
    int32_t edx56;
    uint32_t r8d57;
    struct s7* rbx58;
    signed char* rdx59;
    struct s8* rbx60;
    struct s4* rdx61;
    struct s4** rbx62;
    int64_t rcx63;
    struct s9* rax64;
    struct s10* rbx65;
    int64_t rsi66;
    void* rsi67;
    struct s11* rdx68;
    int32_t* rdi69;
    void* rax70;
    int64_t rcx71;
    int64_t* rbx72;
    struct s4** rbx73;
    int32_t eax74;
    struct s12* rbx75;
    struct s13* rbx76;
    struct s14* rbx77;
    struct s4** rbx78;
    uint32_t eax79;
    uint32_t eax80;
    uint32_t ecx81;
    uint32_t eax82;
    struct s15* rbx83;
    struct s16* rbx84;
    struct s17* rbx85;
    int64_t rax86;
    int32_t ecx87;
    uint32_t edx88;
    int64_t* rbx89;
    int64_t* rbx90;
    int1_t pf91;
    int1_t zf92;
    struct s18* rbx93;
    int32_t r12d94;
    int32_t tmp32_95;
    int64_t rax96;
    int32_t eax97;
    int64_t* rbx98;
    int64_t r14_99;
    uint32_t eax100;
    int64_t r15_101;
    struct s19* rcx102;
    struct s20* rbx103;
    uint32_t edx104;
    uint32_t eax105;
    uint32_t eax106;
    uint1_t cf107;
    uint32_t eax108;
    uint32_t eax109;
    uint32_t eax110;
    int64_t* rax111;
    struct s21* rbx112;
    int64_t rdi113;
    struct s22* rbx114;
    int64_t r14_115;
    int32_t r13d116;
    int64_t rcx117;
    int32_t* rdi118;
    int32_t eax119;
    int32_t* v120;
    int64_t rax121;
    unsigned char v122;
    int64_t* rbx123;
    int64_t rcx124;
    int64_t* rbx125;
    uint32_t edx126;
    uint32_t eax127;
    struct s23* rbx128;
    int64_t* rbx129;
    uint32_t eax130;
    struct s24* rbx131;
    uint32_t eax132;
    uint32_t eax133;
    struct s25* rbx134;
    uint32_t eax135;
    struct s26* rbx136;
    struct s27* rbx137;
    struct s28* rbx138;
    struct s4* rdi139;
    struct s4** rbx140;
    uint32_t ecx141;
    struct s29* rbx142;
    uint32_t eax143;
    struct s30* rbx144;
    struct s31* rbx145;
    struct s32* rbx146;
    uint32_t ecx147;
    struct s33* rbx148;
    struct s4** rbx149;
    uint32_t eax150;
    struct s34* rbx151;
    struct s35* rbx152;
    void* rax153;
    struct s36* rbx154;
    struct s37* rbx155;
    uint32_t ecx156;
    struct s38* rbx157;
    struct s4** rbx158;
    uint32_t eax159;
    struct s39* rbx160;
    struct s40* rbx161;
    void* rax162;
    struct s41* rbx163;
    struct s42* rbx164;
    uint32_t ecx165;
    struct s43* rbx166;
    struct s4** rbx167;
    uint32_t eax168;
    struct s44* rbx169;
    struct s45* rbx170;
    void* rax171;
    struct s46* rbx172;
    struct s47* rbx173;
    uint32_t ecx174;
    struct s48* rbx175;
    struct s4** rbx176;
    uint32_t eax177;
    struct s49* rbx178;
    struct s50* rbx179;
    void* rax180;
    struct s51* rbx181;
    struct s52* rbx182;
    struct s53* rbx183;
    uint32_t ecx184;
    struct s54* rbx185;
    struct s4** rbx186;
    uint32_t eax187;
    struct s55* rbx188;
    struct s56* rbx189;
    void* rax190;
    struct s57* rbx191;
    struct s58* rbx192;
    struct s59* rbx193;
    int32_t eax194;
    struct s60* rbx195;
    struct s61* rbx196;
    struct s62* rbx197;
    struct s4** rbx198;
    struct s4** rbx199;
    void* r8_200;
    struct s63* rbx201;
    void* rax202;
    struct s64* r8_203;
    uint32_t eax204;
    uint32_t eax205;
    int64_t* rbx206;
    uint32_t eax207;
    int64_t rax208;
    int64_t* rbx209;
    struct s65* rbx210;
    int64_t* rbx211;
    int64_t rax212;
    int64_t* rbx213;
    int64_t* rbx214;
    struct s4** rbx215;
    int64_t* rbx216;
    int64_t* rbx217;
    int64_t rax218;
    int64_t* rbx219;
    uint32_t edx220;
    int64_t* rbx221;
    uint32_t edx222;
    struct s4** rbx223;
    uint32_t eax224;
    struct s4** rbx225;
    struct s4** rbx226;
    uint32_t ecx227;
    uint16_t* r8_228;
    struct s66* rbx229;
    uint32_t ecx230;
    struct s67* rbx231;
    struct s68* rbx232;
    uint32_t edx233;
    struct s69* rbx234;
    void* rax235;
    struct s70* rbx236;
    struct s4** rbx237;
    void* rsi238;
    struct s71* rbx239;
    struct s72* rbx240;
    struct s73* rbx241;
    struct s74* rbx242;
    struct s75* rbx243;
    uint32_t eax244;
    int32_t ecx245;
    struct s76* rbx246;
    int32_t edx247;
    void* rax248;
    struct s77* rbx249;
    unsigned char* rdi250;
    void* rdi251;
    void* rbx252;
    int64_t rcx253;
    int32_t eax254;
    uint32_t eax255;
    struct s78* rbx256;
    struct s79* rbx257;
    struct s80* rbx258;
    uint32_t eax259;
    struct s81* rbx260;
    struct s82* rbx261;
    struct s83* rbx262;
    struct s4** rbx263;
    int32_t edx264;
    void* rax265;
    struct s84* rbx266;
    unsigned char* rdi267;
    void* rdi268;
    void* rbx269;
    int64_t rcx270;
    int32_t eax271;
    struct s85* rbx272;
    uint32_t eax273;
    struct s86* rbx274;
    uint32_t r8d275;
    struct s87* rbx276;
    uint32_t eax277;
    struct s88* rbx278;
    struct s89* rbx279;
    struct s90* rbx280;
    struct s4** rbx281;
    uint32_t r9d282;
    int32_t* rax283;
    uint32_t ecx284;
    uint64_t rax285;
    int64_t rax286;
    int64_t rax287;
    int64_t rbx288;
    struct s91* rbx289;
    struct s92* rbx290;
    uint64_t rax291;
    int64_t rax292;
    int64_t rax293;
    int64_t rbx294;
    int64_t rbx295;
    struct s93* rbx296;
    struct s94* rbx297;
    uint32_t esi298;
    struct s95* rbx299;
    uint64_t rax300;
    int64_t rax301;
    int64_t rax302;
    uint32_t eax303;
    int64_t rbx304;
    uint32_t eax305;
    struct s96* rbx306;
    struct s97* rbx307;
    struct s98* rbx308;
    uint32_t ecx309;
    uint32_t eax310;
    struct s99* rbx311;
    struct s100* rbx312;
    struct s101* rbx313;
    struct s102* rbx314;
    uint64_t rax315;
    int64_t rax316;
    int64_t rax317;
    int64_t rbx318;
    int64_t rbx319;
    struct s103* rbx320;
    struct s104* rbx321;
    uint32_t eax322;
    uint32_t r8d323;
    int32_t ecx324;
    int64_t rax325;
    void* rax326;
    struct s105* rbx327;
    unsigned char* rax328;
    void* rax329;
    void* rbx330;
    void* rdx331;
    struct s106* rbx332;
    signed char* rdi333;
    void* rdi334;
    void* rbx335;
    uint32_t eax336;
    struct s107* rbx337;
    struct s108* rbx338;
    struct s4** rbx339;
    uint32_t eax340;
    int64_t rcx341;
    void* rcx342;
    struct s109* rbx343;
    unsigned char* rdi344;
    void* rdi345;
    void* rbx346;
    uint32_t r9d347;
    uint32_t edi348;
    struct s110* rbx349;
    struct s111* rbx350;
    uint32_t edi351;
    uint32_t r9d352;
    struct s112* rbx353;
    struct s113* rbx354;
    uint32_t eax355;
    struct s114* rbx356;
    int32_t ecx357;
    struct s115* rbx358;
    struct s116* rbx359;
    struct s117* rbx360;
    int64_t rax361;
    void* rax362;
    struct s118* rbx363;
    unsigned char* rdi364;
    void* rdi365;
    void* rbx366;
    uint32_t ecx367;
    struct s119* rbx368;
    uint32_t r9d369;
    uint32_t eax370;
    struct s120* rbx371;
    struct s121* rbx372;
    uint32_t ecx373;
    uint32_t edi374;
    uint32_t r10d375;
    uint32_t eax376;
    struct s122* rbx377;
    struct s123* rbx378;
    struct s124* rbx379;
    uint32_t eax380;
    struct s125* rbx381;
    int32_t ecx382;
    struct s126* rbx383;
    struct s127* rbx384;
    struct s128* rbx385;
    uint32_t esi386;
    int64_t rax387;
    void* rax388;
    struct s129* rbx389;
    struct s130* rbx390;
    uint32_t edx391;
    struct s1* rbx392;
    signed char al393;
    struct s131* rbx394;
    struct s132* rbx395;
    struct s133* rbx396;
    struct s4** rbx397;
    struct s134* rbx398;
    int64_t rax399;
    uint32_t edx400;
    int64_t rbx401;
    struct s1* rbx402;
    signed char al403;
    struct s135* rbx404;
    struct s136* rbx405;
    struct s137* rbx406;
    struct s4** rbx407;
    uint32_t ecx408;
    struct s138* rbx409;
    uint32_t esi410;
    int64_t rax411;
    uint32_t ecx412;
    void* rax413;
    struct s139* rbx414;
    struct s140* rbx415;
    uint32_t edx416;
    struct s1* rbx417;
    signed char al418;
    struct s141* rbx419;
    struct s142* rbx420;
    struct s143* rbx421;
    struct s4** rbx422;
    struct s144* rbx423;
    int64_t rax424;
    uint32_t edx425;
    int64_t rbx426;
    struct s1* rbx427;
    signed char al428;
    struct s145* rbx429;
    struct s146* rbx430;
    struct s147* rbx431;
    struct s4** rbx432;
    int64_t rax433;
    void* rax434;
    struct s148* rbx435;
    uint32_t eax436;
    struct s149* rbx437;
    struct s150* rbx438;
    struct s151* rbx439;
    struct s152* rbx440;
    struct s153* rbx441;
    struct s154* rbx442;
    struct s155* rbx443;
    struct s156* rbx444;
    struct s157* rbx445;
    int64_t rax446;
    uint32_t eax447;
    int64_t rbx448;
    struct s158* rbx449;
    struct s159* rbx450;
    struct s160* rbx451;
    struct s161* rbx452;
    struct s162* rbx453;
    struct s163* rbx454;
    struct s164* rbx455;
    struct s165* rbx456;
    struct s166* rbx457;
    int64_t rax458;
    void* rax459;
    struct s167* rbx460;
    uint32_t eax461;
    struct s168* rbx462;
    struct s169* rbx463;
    struct s170* rbx464;
    struct s171* rbx465;
    struct s172* rbx466;
    struct s173* rbx467;
    struct s174* rbx468;
    struct s175* rbx469;
    struct s176* rbx470;
    int64_t rax471;
    uint32_t eax472;
    int64_t rbx473;
    struct s177* rbx474;
    struct s178* rbx475;
    struct s179* rbx476;
    struct s180* rbx477;
    struct s181* rbx478;
    struct s182* rbx479;
    struct s183* rbx480;
    struct s184* rbx481;
    struct s185* rbx482;
    int64_t rax483;
    void* rax484;
    struct s186* rbx485;
    uint32_t eax486;
    struct s187* rbx487;
    struct s188* rbx488;
    struct s189* rbx489;
    struct s190* rbx490;
    struct s191* rbx491;
    struct s192* rbx492;
    struct s193* rbx493;
    struct s194* rbx494;
    struct s195* rbx495;
    int64_t rax496;
    uint32_t eax497;
    int64_t rbx498;
    struct s196* rbx499;
    struct s197* rbx500;
    struct s198* rbx501;
    struct s199* rbx502;
    struct s200* rbx503;
    struct s201* rbx504;
    struct s202* rbx505;
    struct s203* rbx506;
    struct s204* rbx507;
    uint32_t esi508;
    int64_t rax509;
    void* rax510;
    struct s205* rbx511;
    struct s206* rbx512;
    uint32_t edx513;
    struct s1* rbx514;
    struct s207* rbx515;
    struct s208* rbx516;
    struct s4** rbx517;
    struct s209* rbx518;
    int64_t rax519;
    uint32_t edx520;
    int64_t rbx521;
    struct s1* rbx522;
    struct s210* rbx523;
    struct s211* rbx524;
    struct s4** rbx525;
    int64_t rax526;
    struct s212* rbx527;
    int32_t ecx528;
    uint32_t eax529;
    struct s213* rbx530;
    struct s214* rbx531;
    void* rax532;
    struct s215* rbx533;
    void* rcx534;
    struct s216* rbx535;
    int32_t eax536;
    void* rax537;
    uint32_t ecx538;
    struct s217* rbx539;
    struct s218* rbx540;
    struct s219* rbx541;
    uint32_t ecx542;
    int64_t rax543;
    int64_t rbx544;
    struct s220* rbx545;
    uint32_t eax546;
    struct s221* rbx547;
    struct s222* rbx548;
    struct s223* rbx549;
    uint16_t* rcx550;
    struct s224* rbx551;
    int32_t eax552;
    uint32_t edx553;
    int32_t eax554;
    void* rax555;
    struct s225* rbx556;
    struct s226* rbx557;
    struct s227* rbx558;
    struct s4** rbx559;
    int64_t rax560;
    int64_t rbx561;
    struct s228* rbx562;
    struct s229* rbx563;
    struct s4** rbx564;
    struct s230* rbx565;
    uint32_t eax566;
    struct s231* rbx567;
    struct s232* rbx568;
    uint32_t ecx569;
    void* rax570;
    struct s233* rbx571;
    struct s234* rbx572;
    int64_t rcx573;
    int64_t rbx574;
    uint32_t eax575;
    uint32_t ecx576;
    struct s235* rbx577;
    int32_t ecx578;
    struct s236* rbx579;
    struct s237* rbx580;
    int32_t ecx581;
    struct s238* rbx582;
    uint32_t eax583;
    uint32_t ecx584;
    struct s239* rbx585;
    int32_t ecx586;
    struct s240* rbx587;
    struct s241* rbx588;
    int32_t ecx589;
    struct s242* rbx590;
    uint32_t eax591;
    uint32_t ecx592;
    struct s243* rbx593;
    int32_t ecx594;
    struct s244* rbx595;
    struct s245* rbx596;
    int32_t ecx597;
    struct s246* rbx598;
    uint32_t ecx599;
    int64_t* rbx600;
    struct s4** rbx601;
    struct s4** rbx602;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    goto addr_11b0_2;
    addr_120b_3:
    fun_9f0(0x331b, rsi2, 0x331b, rsi2);
    goto v3;
    addr_119b_4:
    *reinterpret_cast<uint32_t*>(&r9_4) = *reinterpret_cast<unsigned char*>(&rsi2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_4) + 4) = 0;
    goto 0x3340 + *reinterpret_cast<int32_t*>(0x3340 + r9_4 * 4);
    addr_1614_5:
    *reinterpret_cast<uint32_t*>(&rax5) = *reinterpret_cast<unsigned char*>(&eax6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    goto *reinterpret_cast<int32_t*>(0x373c + rax5 * 4) + 0x373c;
    while (1) {
        rax7 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rax8) + (*reinterpret_cast<signed char*>(&esi9) + reinterpret_cast<int32_t>("(< ") << 4));
        while (1) {
            rcx10 = reinterpret_cast<struct s5*>(rdi11 + rbx12->f24);
            rsi13 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rcx10) + 0x800);
            do {
                edx14 = static_cast<uint32_t>(rax7->f1) & 0xffffff80;
                *reinterpret_cast<uint32_t*>(&rdx15) = ~(edx14 - (edx14 + reinterpret_cast<uint1_t>(edx14 < edx14 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx14) < 1)))) & 2 | reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(rax7->f0))) >> 31;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
                edx16 = *reinterpret_cast<unsigned char*>(rbx17 + rdx15 + 40);
                rcx10->f0 = *reinterpret_cast<signed char*>(&edx16);
                edx18 = rax7->f0;
                *reinterpret_cast<unsigned char*>(&edx18) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx18) >> 6);
                *reinterpret_cast<uint32_t*>(&rdx19) = static_cast<uint32_t>(rax7->f1) >> 5 & 2 | edx18 & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
                edx20 = *reinterpret_cast<unsigned char*>(rbx21 + rdx19 + 40);
                rcx10->f1 = *reinterpret_cast<signed char*>(&edx20);
                edx22 = rax7->f0;
                *reinterpret_cast<unsigned char*>(&edx22) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx22) >> 5);
                *reinterpret_cast<uint32_t*>(&rdx23) = static_cast<uint32_t>(rax7->f1) >> 4 & 2 | edx22 & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = 0;
                edx24 = *reinterpret_cast<unsigned char*>(rbx25 + rdx23 + 40);
                rcx10->f2 = *reinterpret_cast<signed char*>(&edx24);
                edx26 = rax7->f0;
                *reinterpret_cast<unsigned char*>(&edx26) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx26) >> 4);
                *reinterpret_cast<uint32_t*>(&rdx27) = static_cast<uint32_t>(rax7->f1) >> 3 & 2 | edx26 & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = 0;
                edx28 = *reinterpret_cast<unsigned char*>(rbx29 + rdx27 + 40);
                rcx10->f3 = *reinterpret_cast<signed char*>(&edx28);
                edx30 = rax7->f0;
                *reinterpret_cast<unsigned char*>(&edx30) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx30) >> 3);
                *reinterpret_cast<uint32_t*>(&rdx31) = static_cast<uint32_t>(rax7->f1) >> 2 & 2 | edx30 & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = 0;
                edx32 = *reinterpret_cast<unsigned char*>(rbx33 + rdx31 + 40);
                rcx10->f4 = *reinterpret_cast<signed char*>(&edx32);
                edx34 = rax7->f0;
                *reinterpret_cast<unsigned char*>(&edx34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx34) >> 2);
                *reinterpret_cast<uint32_t*>(&rdx35) = static_cast<uint32_t>(rax7->f1) >> 1 & 2 | edx34 & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = 0;
                edx36 = *reinterpret_cast<unsigned char*>(rbx37 + rdx35 + 40);
                rcx10->f5 = *reinterpret_cast<signed char*>(&edx36);
                edx38 = rax7->f0;
                *reinterpret_cast<unsigned char*>(&edx38) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx38) >> 1);
                *reinterpret_cast<uint32_t*>(&rdx39) = static_cast<uint32_t>(rax7->f1) & 2 | edx38 & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = 0;
                edx40 = *reinterpret_cast<unsigned char*>(rbx41 + rdx39 + 40);
                rcx10->f6 = *reinterpret_cast<signed char*>(&edx40);
                edx42 = rax7->f1;
                rcx10 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rcx10) + 0x100);
                ++rax7;
                *reinterpret_cast<uint32_t*>(&rdx43) = edx42 + edx42 & 2 | static_cast<uint32_t>(rax7->f0) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx43) + 4) = 0;
                edx44 = *reinterpret_cast<unsigned char*>(rbx45 + rdx43 + 40);
                *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx10) - 0xf9) = *reinterpret_cast<signed char*>(&edx44);
            } while (rcx10 != rsi13);
            rdi11 = rdi11 + 8;
            ++r8_46;
            if (rdi11 == r9_47) {
                r11_48 = r11_48 + 0x800;
                r14_49 = r14_49 + 32;
                if (r11_48 == 0x10000) {
                    *reinterpret_cast<uint32_t*>(&rdx50) = *reinterpret_cast<unsigned char*>(&r10d51);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx50) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdi52) = 0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = 0;
                    *reinterpret_cast<uint32_t*>(&rsi2) = *reinterpret_cast<unsigned char*>(*rbx53 + 0xff43);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                    rcx54 = reinterpret_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(rdx50 + rdx50 * 4) << 5));
                    eax55 = static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r10d51) + *reinterpret_cast<signed char*>(*rbx53 + 0xff42))) << 8;
                    do {
                        edx56 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rsi2) + rdi52);
                        r8d57 = *reinterpret_cast<unsigned char*>(rbx58->f24 + (*reinterpret_cast<unsigned char*>(&edx56) + eax55));
                        rdx59 = reinterpret_cast<signed char*>(rdi52 + rbx60->f32);
                        ++rdi52;
                        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rdx59) + rcx54) = *reinterpret_cast<signed char*>(&r8d57);
                    } while (rdi52 != 0xa0);
                    while (1) {
                        addr_1566_14:
                        rdx61 = *rbx62;
                        do {
                            addr_ee3_15:
                            *reinterpret_cast<uint32_t*>(&rcx63) = rdx61->f65350;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx63) + 4) = 0;
                            if (*reinterpret_cast<signed char*>(&rcx63) != -1) {
                                rax64 = rbx65->f8;
                                rsi66 = rcx63 << 8;
                                *reinterpret_cast<uint32_t*>(&rsi67) = *reinterpret_cast<uint32_t*>(&rsi66) & 0xff00;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi67) + 4) = 0;
                                rdx68 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(rdx61) + reinterpret_cast<int64_t>(rsi67));
                                rdi69 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(&rax64->pad152) & 0xfffffffffffffff8);
                                rax64->f0 = rdx68->f0;
                                rax64->f152 = rdx68->f152;
                                rax70 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax64) - reinterpret_cast<uint64_t>(rdi69));
                                rsi2 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx68) - reinterpret_cast<uint64_t>(rax70));
                                *reinterpret_cast<uint32_t*>(&rcx71) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax70) + 0xa0) >> 3;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx71) + 4) = 0;
                                while (rcx71) {
                                    --rcx71;
                                    *rdi69 = *rsi2;
                                    rdi69 = rdi69 + 2;
                                    rsi2 = rsi2 + 2;
                                }
                                *reinterpret_cast<signed char*>(*rbx72 + 0xff46) = -1;
                                rdx61 = *rbx73;
                            }
                            eax74 = rbx75->f92 + 1;
                            rbx76->f92 = eax74;
                            if (eax74 == 61) {
                                rdx61->f65284 = reinterpret_cast<signed char>(rdx61->f65284 + 1);
                                rbx77->f92 = 0;
                                rdx61 = *rbx78;
                            }
                            eax79 = rdx61->f65287;
                            if (*reinterpret_cast<unsigned char*>(&eax79) & 4) {
                                eax80 = eax79 & 3;
                                ecx81 = 15;
                                if (*reinterpret_cast<signed char*>(&eax80) != 2 && ((*reinterpret_cast<signed char*>(&ecx81) = 61, *reinterpret_cast<signed char*>(&eax80) != 3) && (*reinterpret_cast<signed char*>(&ecx81) = -12, *reinterpret_cast<signed char*>(&eax80) == 1))) {
                                    ecx81 = 4;
                                }
                                eax82 = reinterpret_cast<uint32_t>(rbx83->f96 + 1);
                                rbx84->f96 = eax82;
                                if (eax82 >= ecx81 && (rbx85->f96 = 0, *reinterpret_cast<uint32_t*>(&rax86) = rdx61->f65285, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax86) + 4) = 0, ecx87 = static_cast<int32_t>(rax86 + 1), rdx61->f65285 = *reinterpret_cast<unsigned char*>(&ecx87), *reinterpret_cast<signed char*>(&rax86) == -1)) {
                                    edx88 = *reinterpret_cast<unsigned char*>(*rbx89 + 0xff06);
                                    *reinterpret_cast<signed char*>(*rbx89 + 0xff05) = *reinterpret_cast<signed char*>(&edx88);
                                    *reinterpret_cast<unsigned char*>(*rbx90 + 0xff0f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(*rbx90 + 0xff0f) | 4);
                                }
                            }
                            pf91 = __intrinsic();
                            zf92 = rbx93->f76 == 0;
                            if (!zf92) {
                                r12d94 = tmp32_95;
                                *reinterpret_cast<uint32_t*>(&rax96) = __intrinsic() >> 3;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax96) + 4) = 0;
                                eax97 = static_cast<int32_t>(rax96 + rax96 * 4);
                                pf91 = __intrinsic();
                                zf92 = r12d94 == eax97 + eax97;
                                if (zf92 && (pf91 = __intrinsic(), zf92 = *reinterpret_cast<signed char*>(*rbx98 + 0xff40) == 0, *reinterpret_cast<signed char*>(*rbx98 + 0xff40) < 0)) {
                                    *reinterpret_cast<int32_t*>(&r14_99) = 0xa0;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_99) + 4) = 0;
                                    eax100 = fun_9f0(0x3314, rsi2);
                                    do {
                                        r15_101 = r14_99 - 0xa0;
                                        do {
                                            rcx102 = reinterpret_cast<struct s19*>(r15_101 + rbx103->f32);
                                            edx104 = 0;
                                            rsi2 = reinterpret_cast<int32_t*>(0x203c69);
                                            *reinterpret_cast<unsigned char*>(&edx104) = reinterpret_cast<uint1_t>(!!rcx102->f0);
                                            eax105 = ~(eax100 - (eax100 + reinterpret_cast<uint1_t>(eax100 < eax100 + reinterpret_cast<uint1_t>(rcx102->f160 < 1)))) & 2;
                                            eax106 = ~(eax105 - (eax105 + reinterpret_cast<uint1_t>(eax105 < eax105 + reinterpret_cast<uint1_t>(rcx102->f320 < 1)))) & 4;
                                            cf107 = reinterpret_cast<uint1_t>(rcx102->f1 < 1);
                                            g203c69 = -30;
                                            g203c6a = -96;
                                            g203c6c = 0;
                                            eax108 = ~(eax106 - (eax106 + reinterpret_cast<uint1_t>(eax106 < eax106 + cf107))) & 8;
                                            eax109 = ~(eax108 - (eax108 + reinterpret_cast<uint1_t>(eax108 < eax108 + reinterpret_cast<uint1_t>(rcx102->f161 < 1)))) & 16;
                                            r15_101 = r15_101 + 2;
                                            eax110 = (~(eax109 - (eax109 + reinterpret_cast<uint1_t>(eax109 < eax109 + reinterpret_cast<uint1_t>(rcx102->f321 < 1)))) & 32 | (edx104 | eax105 | eax106 | eax108 | eax109)) - 0x80;
                                            g203c6b = *reinterpret_cast<signed char*>(&eax110);
                                            eax100 = fun_9f0("%s", 0x203c69);
                                        } while (r15_101 != r14_99);
                                        r14_99 = r15_101 + 0x1e0;
                                        eax100 = fun_9d0(10);
                                        pf91 = __intrinsic();
                                        zf92 = r14_99 == 0x5aa0;
                                    } while (!zf92);
                                    fun_9d0(10);
                                }
                                rax111 = stdout;
                                rbx112->f76 = 0;
                                rdi113 = *rax111;
                                fun_a90(rdi113, rsi2);
                            }
                            __asm__("fild qword [rsp+0x18]");
                            __asm__("fld dword [rip+0x27d2]");
                            __asm__("fmul dword [rbx+0x48]");
                            __asm__("fxch st0, st1");
                            __asm__("fucomip st0, st1");
                            __asm__("fstp st0");
                            if (!(pf91 || !zf92)) {
                                fun_ad0(0x2710);
                                rbx114->f52 = 0;
                            }
                            *reinterpret_cast<int32_t*>(&r14_115) = r13d116;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_115) + 4) = 0;
                            if (*reinterpret_cast<int32_t*>(&r14_115) == -1) {
                                r13d116 = *reinterpret_cast<int32_t*>(&r14_115);
                            } else {
                                r13d116 = static_cast<int32_t>(r14_115 - 1);
                                if (!*reinterpret_cast<int32_t*>(&r14_115)) 
                                    goto addr_120b_3;
                            }
                            *reinterpret_cast<int32_t*>(&rcx117) = 16;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx117) + 4) = 0;
                            rdi118 = v1;
                            while (rcx117) {
                                --rcx117;
                                *rdi118 = reinterpret_cast<int32_t>(0);
                                rdi118 = rdi118 + 2;
                            }
                            rsi2 = v1;
                            eax119 = fun_a80(1);
                            if (eax119 == -1) 
                                goto addr_120b_3;
                            if (eax119) {
                                rsi2 = v120;
                                rax121 = fun_a10();
                                if (rax121 != 1) 
                                    goto addr_120b_3;
                                eax6 = v122 - 97;
                                if (*reinterpret_cast<unsigned char*>(&eax6) <= 22) 
                                    goto addr_1614_5;
                            }
                            *reinterpret_cast<unsigned char*>(*rbx123 + 0xff00) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(*rbx123 + 0xff00) | 15);
                            rcx124 = *rbx125;
                            edx126 = *reinterpret_cast<unsigned char*>(rcx124 + 0xff00);
                            if (!(*reinterpret_cast<unsigned char*>(&edx126) & 16)) {
                                eax127 = ~(static_cast<uint32_t>(rbx128->f52) & 15) & edx126;
                                *reinterpret_cast<unsigned char*>(rcx124 + 0xff00) = *reinterpret_cast<unsigned char*>(&eax127);
                                rcx124 = *rbx129;
                                edx126 = *reinterpret_cast<unsigned char*>(rcx124 + 0xff00);
                            }
                            if (!(*reinterpret_cast<unsigned char*>(&edx126) & 32)) {
                                eax130 = rbx131->f52;
                                *reinterpret_cast<unsigned char*>(&eax130) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax130) >> 4);
                                eax132 = ~eax130 & edx126;
                                *reinterpret_cast<unsigned char*>(rcx124 + 0xff00) = *reinterpret_cast<unsigned char*>(&eax132);
                            }
                            eax133 = rbx134->f66;
                            if (*reinterpret_cast<signed char*>(&eax133) < reinterpret_cast<signed char>(0)) {
                                eax135 = eax133 & 0x7f;
                                rbx136->f66 = *reinterpret_cast<unsigned char*>(&eax135);
                            } else {
                                if (*reinterpret_cast<unsigned char*>(&eax133) & 64) {
                                    eax133 = eax133 & 0xfffffffe;
                                    rbx137->f66 = *reinterpret_cast<unsigned char*>(&eax133);
                                }
                                if (*reinterpret_cast<unsigned char*>(&eax133) & 32) {
                                    eax133 = eax133 | 1;
                                }
                                eax135 = eax133 & 0xffffff9f;
                                rbx138->f66 = *reinterpret_cast<unsigned char*>(&eax135);
                            }
                            rdi139 = *rbx140;
                            ecx141 = rdi139->f65295;
                            rdx61 = rdi139;
                            *reinterpret_cast<unsigned char*>(&ecx141) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx141) & rdi139->f65535);
                            if (*reinterpret_cast<unsigned char*>(&ecx141)) {
                                rbx142->f68 = 0;
                                if (!(*reinterpret_cast<unsigned char*>(&eax135) & 1)) {
                                    eax143 = rbx144->f84;
                                    if (eax143 > 1) {
                                        addr_ead_63:
                                        rbx145->f84 = eax143 - 1;
                                        goto addr_eb3_64;
                                    } else {
                                        goto addr_1182_66;
                                    }
                                }
                                if (!(*reinterpret_cast<unsigned char*>(&ecx141) & 1)) 
                                    goto addr_e68_68;
                            } else {
                                if (!(*reinterpret_cast<unsigned char*>(&eax135) & 1)) 
                                    goto addr_ea1_70; else 
                                    goto addr_111c_71;
                            }
                            addr_11b0_2:
                            rdi139->f65295 = reinterpret_cast<unsigned char>(rdi139->f65295 & 0xfe);
                            rbx146->f66 = 0;
                            ecx147 = rbx148->f64;
                            rdi139 = *rbx149;
                            eax150 = rbx151->f62 - 2;
                            rdx61 = rdi139;
                            rbx152->f62 = *reinterpret_cast<uint16_t*>(&eax150);
                            *reinterpret_cast<uint32_t*>(&rax153) = *reinterpret_cast<uint16_t*>(&eax150);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax153) + 4) = 0;
                            *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax153)) = *reinterpret_cast<int16_t*>(&ecx147);
                            rbx154->f64 = 64;
                            goto addr_ea1_70;
                            addr_e68_68:
                            if (*reinterpret_cast<unsigned char*>(&ecx141) & 2) {
                                rdi139->f65295 = reinterpret_cast<unsigned char>(rdi139->f65295 & 0xfd);
                                rbx155->f66 = 0;
                                ecx156 = rbx157->f64;
                                rdi139 = *rbx158;
                                eax159 = rbx160->f62 - 2;
                                rdx61 = rdi139;
                                rbx161->f62 = *reinterpret_cast<uint16_t*>(&eax159);
                                *reinterpret_cast<uint32_t*>(&rax162) = *reinterpret_cast<uint16_t*>(&eax159);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax162) + 4) = 0;
                                *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax162)) = *reinterpret_cast<int16_t*>(&ecx156);
                                rbx163->f64 = 72;
                                goto addr_ea1_70;
                            }
                            addr_111c_71:
                            if (*reinterpret_cast<unsigned char*>(&ecx141) & 4) {
                                rdi139->f65295 = reinterpret_cast<unsigned char>(rdi139->f65295 & 0xfb);
                                rbx164->f66 = 0;
                                ecx165 = rbx166->f64;
                                rdi139 = *rbx167;
                                eax168 = rbx169->f62 - 2;
                                rdx61 = rdi139;
                                rbx170->f62 = *reinterpret_cast<uint16_t*>(&eax168);
                                *reinterpret_cast<uint32_t*>(&rax171) = *reinterpret_cast<uint16_t*>(&eax168);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax171) + 4) = 0;
                                *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax171)) = *reinterpret_cast<int16_t*>(&ecx165);
                                rbx172->f64 = 80;
                                goto addr_ea1_70;
                            }
                            if (*reinterpret_cast<unsigned char*>(&ecx141) & 8) {
                                rdi139->f65295 = reinterpret_cast<unsigned char>(rdi139->f65295 & 0xf7);
                                rbx173->f66 = 0;
                                ecx174 = rbx175->f64;
                                rdi139 = *rbx176;
                                eax177 = rbx178->f62 - 2;
                                rdx61 = rdi139;
                                rbx179->f62 = *reinterpret_cast<uint16_t*>(&eax177);
                                *reinterpret_cast<uint32_t*>(&rax180) = *reinterpret_cast<uint16_t*>(&eax177);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax180) + 4) = 0;
                                *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax180)) = *reinterpret_cast<int16_t*>(&ecx174);
                                rbx181->f64 = 88;
                                goto addr_ea1_70;
                            }
                            if (!(ecx141 & 16)) {
                                addr_ea1_70:
                                eax143 = rbx182->f84;
                                if (eax143 > 1) 
                                    goto addr_ead_63;
                            } else {
                                rdi139->f65295 = reinterpret_cast<unsigned char>(rdi139->f65295 & 0xef);
                                rbx183->f66 = 0;
                                ecx184 = rbx185->f64;
                                rdi139 = *rbx186;
                                eax187 = rbx188->f62 - 2;
                                rdx61 = rdi139;
                                rbx189->f62 = *reinterpret_cast<uint16_t*>(&eax187);
                                *reinterpret_cast<uint32_t*>(&rax190) = *reinterpret_cast<uint16_t*>(&eax187);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax190) + 4) = 0;
                                *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax190)) = *reinterpret_cast<int16_t*>(&ecx184);
                                eax143 = rbx191->f84;
                                rbx192->f64 = 96;
                                if (eax143 > 1) 
                                    goto addr_ead_63;
                            }
                            if (rbx193->f68) {
                                addr_eb3_64:
                                eax194 = rbx195->f88 + 1;
                                rbx196->f88 = eax194;
                                if (eax194 == 0x6d) {
                                    rbx197->f88 = 0;
                                } else {
                                    if (eax194) {
                                        if (eax194 != 19) {
                                            if (eax194 != 60) 
                                                goto addr_ee3_15;
                                            if (rdx61->f65348 > 0x8f) 
                                                goto addr_ee3_15;
                                            rdx61->f65345 = reinterpret_cast<unsigned char>(rdx61->f65345 & 0xfc);
                                            rdx61 = *rbx198;
                                            if (!(rdx61->f65345 & 8)) 
                                                goto addr_ee3_15;
                                            rdx61->f65295 = reinterpret_cast<unsigned char>(rdx61->f65295 | 2);
                                            rdx61 = *rbx199;
                                            goto addr_ee3_15;
                                        } else {
                                            if (rdx61->f65348 <= 0x8f) 
                                                break; else 
                                                goto addr_ee3_15;
                                        }
                                    }
                                }
                            } else {
                                addr_1182_66:
                                *reinterpret_cast<uint32_t*>(&r8_200) = rbx201->f64;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_200) + 4) = 0;
                                rax202 = r8_200;
                                r8_203 = reinterpret_cast<struct s64*>(reinterpret_cast<int64_t>(r8_200) + reinterpret_cast<int64_t>(rdi139));
                                *reinterpret_cast<uint32_t*>(&rsi2) = r8_203->f0;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                if (*reinterpret_cast<unsigned char*>(&rsi2) > 0xfe) 
                                    goto addr_2d06_87; else 
                                    goto addr_119b_4;
                            }
                            eax204 = rdx61->f65348;
                            if (*reinterpret_cast<unsigned char*>(&eax204) > 0x8f) {
                                eax205 = eax204 + 1;
                                rdx61->f65348 = *reinterpret_cast<unsigned char*>(&eax205);
                                if (*reinterpret_cast<unsigned char*>(&eax205) != 0x9a) 
                                    goto addr_1566_14;
                                *reinterpret_cast<signed char*>(*rbx206 + 0xff44) = 0;
                            } else {
                                eax207 = eax204 + 1;
                                rdx61->f65348 = *reinterpret_cast<unsigned char*>(&eax207);
                                if (*reinterpret_cast<unsigned char*>(&eax207) == 0x90) {
                                    rax208 = *rbx209;
                                    rbx210->f76 = 1;
                                    *reinterpret_cast<unsigned char*>(rax208 + 0xff41) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax208 + 0xff41) & 0xfc);
                                    *reinterpret_cast<unsigned char*>(*rbx211 + 0xff41) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(*rbx211 + 0xff41) | 1);
                                    rax212 = *rbx213;
                                    if (*reinterpret_cast<unsigned char*>(rax212 + 0xff41) & 16) {
                                        *reinterpret_cast<unsigned char*>(rax212 + 0xff0f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax212 + 0xff0f) | 2);
                                        rax212 = *rbx214;
                                    }
                                    *reinterpret_cast<unsigned char*>(rax212 + 0xff0f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax212 + 0xff0f) | 1);
                                    rdx61 = *rbx215;
                                    goto addr_ee3_15;
                                }
                            }
                            *reinterpret_cast<unsigned char*>(*rbx216 + 0xff41) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(*rbx216 + 0xff41) & 0xfc);
                            *reinterpret_cast<unsigned char*>(*rbx217 + 0xff41) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(*rbx217 + 0xff41) | 2);
                            rax218 = *rbx219;
                            edx220 = *reinterpret_cast<unsigned char*>(rax218 + 0xff41);
                            if (*reinterpret_cast<unsigned char*>(&edx220) & 32) {
                                *reinterpret_cast<unsigned char*>(rax218 + 0xff0f) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rax218 + 0xff0f) | 2);
                                rax218 = *rbx221;
                                edx220 = *reinterpret_cast<unsigned char*>(rax218 + 0xff41);
                            }
                            edx222 = edx220 & 0xfffffffb;
                            *reinterpret_cast<unsigned char*>(rax218 + 0xff41) = *reinterpret_cast<unsigned char*>(&edx222);
                            rdx61 = *rbx223;
                            eax224 = rdx61->f65349;
                            if (rdx61->f65348 == *reinterpret_cast<unsigned char*>(&eax224) && (rdx61->f65345 = reinterpret_cast<unsigned char>(rdx61->f65345 | 4), rdx61 = *rbx225, !!(rdx61->f65345 & 64))) {
                                rdx61->f65295 = reinterpret_cast<unsigned char>(rdx61->f65295 | 2);
                                rdx61 = *rbx226;
                                continue;
                            }
                            addr_2d06_87:
                            ecx227 = *reinterpret_cast<uint32_t*>(&rsi2) & 0xffffffc7;
                            if (*reinterpret_cast<signed char*>(&ecx227) == 2) {
                                r8_228 = &rbx229->f58;
                                ecx230 = *reinterpret_cast<uint32_t*>(&rsi2) & 48;
                                if (*reinterpret_cast<unsigned char*>(&ecx230) != 16) {
                                    if (*reinterpret_cast<unsigned char*>(&ecx230) > 16) {
                                        if (*reinterpret_cast<unsigned char*>(&ecx230) == 32 || *reinterpret_cast<unsigned char*>(&ecx230) == 48) {
                                            r8_228 = &rbx231->f60;
                                        } else {
                                            addr_2e52_103:
                                            *reinterpret_cast<int32_t*>(&r8_228) = 0;
                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_228) + 4) = 0;
                                        }
                                    } else {
                                        r8_228 = &rbx232->f56;
                                        if (*reinterpret_cast<unsigned char*>(&ecx230)) 
                                            goto addr_2e52_103;
                                    }
                                }
                                *reinterpret_cast<uint32_t*>(&rsi2) = *reinterpret_cast<uint32_t*>(&rsi2) & 8;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                if (!*reinterpret_cast<uint32_t*>(&rsi2)) {
                                    edx233 = rbx234->f55;
                                    *reinterpret_cast<uint32_t*>(&rax235) = *r8_228;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax235) + 4) = 0;
                                    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax235)) = *reinterpret_cast<signed char*>(&edx233);
                                    *reinterpret_cast<uint32_t*>(&rax202) = rbx236->f64;
                                    rdx61 = *rbx237;
                                } else {
                                    *reinterpret_cast<uint32_t*>(&rsi238) = *r8_228;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi238) + 4) = 0;
                                    *reinterpret_cast<uint32_t*>(&rsi2) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rsi238));
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                    rbx239->f55 = *reinterpret_cast<unsigned char*>(&rsi2);
                                }
                                if (*reinterpret_cast<unsigned char*>(&ecx230) == 32) {
                                    rbx240->f60 = reinterpret_cast<int16_t>(rbx241->f60 + 1);
                                } else {
                                    if (*reinterpret_cast<unsigned char*>(&ecx230) == 48) {
                                        rbx242->f60 = reinterpret_cast<int16_t>(rbx243->f60 - 1);
                                    }
                                }
                                eax244 = *reinterpret_cast<uint32_t*>(&rax202) + 1;
                                ecx245 = 2;
                                rbx246->f64 = *reinterpret_cast<int16_t*>(&eax244);
                            } else {
                                if (*reinterpret_cast<signed char*>(&ecx227) == 4) {
                                    edx247 = reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rsi2) & 56) >> 3;
                                    if (edx247 == 6) {
                                        *reinterpret_cast<uint32_t*>(&rax248) = rbx249->f60;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax248) + 4) = 0;
                                        rdi250 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax248));
                                    } else {
                                        *reinterpret_cast<int32_t*>(&rdi251) = *reinterpret_cast<int32_t*>(0x37c0 + edx247 * 4);
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi251) + 4) = 0;
                                        rdi250 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi251) + reinterpret_cast<int64_t>(rbx252));
                                    }
                                    *reinterpret_cast<uint32_t*>(&rcx253) = *rdi250;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx253) + 4) = 0;
                                    eax254 = static_cast<int32_t>(rcx253 + 1);
                                    *rdi250 = *reinterpret_cast<unsigned char*>(&eax254);
                                    eax255 = static_cast<uint32_t>(rbx256->f54) & 31;
                                    rbx257->f54 = *reinterpret_cast<signed char*>(&eax255);
                                    *reinterpret_cast<uint32_t*>(&rsi2) = *rdi250;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                    if (!*reinterpret_cast<unsigned char*>(&rsi2)) {
                                        eax255 = eax255 | 0xffffff80;
                                        rbx258->f54 = *reinterpret_cast<signed char*>(&eax255);
                                        *reinterpret_cast<uint32_t*>(&rsi2) = *rdi250;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                    }
                                    if ((*reinterpret_cast<uint32_t*>(&rcx253) ^ *reinterpret_cast<uint32_t*>(&rsi2)) & 0xf0) {
                                        eax259 = eax255 | 32;
                                        rbx260->f54 = *reinterpret_cast<signed char*>(&eax259);
                                    }
                                    rbx261->f64 = reinterpret_cast<int16_t>(rbx262->f64 + 1);
                                    rdx61 = *rbx263;
                                    if (edx247 == 6) {
                                        ecx245 = 3;
                                    } else {
                                        ecx245 = 1;
                                    }
                                } else {
                                    if (*reinterpret_cast<signed char*>(&ecx227) == 5) {
                                        edx264 = reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rsi2) & 56) >> 3;
                                        if (edx264 == 6) {
                                            *reinterpret_cast<uint32_t*>(&rax265) = rbx266->f60;
                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax265) + 4) = 0;
                                            rdi267 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax265));
                                        } else {
                                            *reinterpret_cast<int32_t*>(&rdi268) = *reinterpret_cast<int32_t*>(0x37c0 + edx264 * 4);
                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi268) + 4) = 0;
                                            rdi267 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi268) + reinterpret_cast<int64_t>(rbx269));
                                        }
                                        *reinterpret_cast<uint32_t*>(&rcx270) = *rdi267;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx270) + 4) = 0;
                                        eax271 = static_cast<int32_t>(rcx270 - 1);
                                        *rdi267 = *reinterpret_cast<unsigned char*>(&eax271);
                                        *reinterpret_cast<uint32_t*>(&rsi2) = static_cast<uint32_t>(rbx272->f54) & 31;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                        eax273 = *reinterpret_cast<uint32_t*>(&rsi2) | 64;
                                        rbx274->f54 = *reinterpret_cast<signed char*>(&eax273);
                                        r8d275 = *rdi267;
                                        if (!*reinterpret_cast<signed char*>(&r8d275)) {
                                            eax273 = *reinterpret_cast<uint32_t*>(&rsi2) | 0xffffffc0;
                                            rbx276->f54 = *reinterpret_cast<signed char*>(&eax273);
                                            r8d275 = *rdi267;
                                        }
                                        if ((*reinterpret_cast<uint32_t*>(&rcx270) ^ r8d275) & 0xf0) {
                                            eax277 = eax273 | 32;
                                            rbx278->f54 = *reinterpret_cast<signed char*>(&eax277);
                                        }
                                        rbx279->f64 = reinterpret_cast<int16_t>(rbx280->f64 + 1);
                                        rdx61 = *rbx281;
                                        if (edx264 == 6) {
                                            ecx245 = 3;
                                        } else {
                                            ecx245 = 1;
                                        }
                                    } else {
                                        if (*reinterpret_cast<signed char*>(&ecx227) != 6) {
                                            r9d282 = *reinterpret_cast<uint32_t*>(&rsi2) & 0xffffffcf;
                                            if (*reinterpret_cast<signed char*>(&r9d282) == 1) {
                                                rax283 = rsi2;
                                                rsi2 = reinterpret_cast<int32_t*>(0x37a0);
                                                ecx284 = r8_203->f1;
                                                rax285 = reinterpret_cast<uint64_t>(rax283) >> 4;
                                                *reinterpret_cast<uint32_t*>(&rax286) = *reinterpret_cast<uint32_t*>(&rax285) & 3;
                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax286) + 4) = 0;
                                                *reinterpret_cast<int32_t*>(&rax287) = *reinterpret_cast<int32_t*>(0x37a0 + rax286 * 4);
                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax287) + 4) = 0;
                                                *reinterpret_cast<int16_t*>(rbx288 + rax287) = *reinterpret_cast<int16_t*>(&ecx284);
                                                ecx245 = 3;
                                                rbx289->f64 = reinterpret_cast<int16_t>(rbx290->f64 + 3);
                                            } else {
                                                if (*reinterpret_cast<signed char*>(&r9d282) == 3) {
                                                    rax291 = reinterpret_cast<uint64_t>(rsi2) >> 4;
                                                    *reinterpret_cast<uint32_t*>(&rax292) = *reinterpret_cast<uint32_t*>(&rax291) & 3;
                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax292) + 4) = 0;
                                                    *reinterpret_cast<int32_t*>(&rax293) = *reinterpret_cast<int32_t*>(0x37a0 + rax292 * 4);
                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax293) + 4) = 0;
                                                    ecx245 = 2;
                                                    *reinterpret_cast<int16_t*>(rbx294 + rax293) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(rbx295 + rax293) + 1);
                                                    rbx296->f64 = reinterpret_cast<int16_t>(rbx297->f64 + 1);
                                                } else {
                                                    if (*reinterpret_cast<signed char*>(&r9d282) == 9) {
                                                        esi298 = rbx299->f60;
                                                        rax300 = reinterpret_cast<uint64_t>(rsi2) >> 4;
                                                        *reinterpret_cast<uint32_t*>(&rax301) = *reinterpret_cast<uint32_t*>(&rax300) & 3;
                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax301) + 4) = 0;
                                                        *reinterpret_cast<int32_t*>(&rax302) = *reinterpret_cast<int32_t*>(0x37a0 + rax301 * 4);
                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax302) + 4) = 0;
                                                        eax303 = *reinterpret_cast<uint16_t*>(rbx304 + rax302);
                                                        *reinterpret_cast<uint32_t*>(&rsi2) = esi298 + eax303;
                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                        eax305 = static_cast<uint32_t>(rbx306->f54) & 0xffffff8f;
                                                        rbx307->f54 = *reinterpret_cast<signed char*>(&eax305);
                                                        if (*reinterpret_cast<int32_t*>(&rsi2) > reinterpret_cast<int32_t>(0xffff)) {
                                                            eax305 = eax305 | 16;
                                                            rbx308->f54 = *reinterpret_cast<signed char*>(&eax305);
                                                        }
                                                        ecx309 = (eax303 & 0xfff) + (esi298 & 0xfff);
                                                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&ecx309) + 1) & 16) {
                                                            eax310 = eax305 | 32;
                                                            rbx311->f54 = *reinterpret_cast<signed char*>(&eax310);
                                                        }
                                                        rbx312->f60 = *reinterpret_cast<int16_t*>(&rsi2);
                                                        rbx313->f64 = reinterpret_cast<int16_t>(rbx314->f64 + 1);
                                                        ecx245 = 2;
                                                    } else {
                                                        if (*reinterpret_cast<signed char*>(&r9d282) == 11) {
                                                            rax315 = reinterpret_cast<uint64_t>(rsi2) >> 4;
                                                            *reinterpret_cast<uint32_t*>(&rax316) = *reinterpret_cast<uint32_t*>(&rax315) & 3;
                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax316) + 4) = 0;
                                                            *reinterpret_cast<int32_t*>(&rax317) = *reinterpret_cast<int32_t*>(0x37a0 + rax316 * 4);
                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax317) + 4) = 0;
                                                            ecx245 = 2;
                                                            *reinterpret_cast<int16_t*>(rbx318 + rax317) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(rbx319 + rax317) - 1);
                                                            rbx320->f64 = reinterpret_cast<int16_t>(rbx321->f64 + 1);
                                                        } else {
                                                            eax322 = *reinterpret_cast<uint32_t*>(&rsi2) & 0xffffffc0;
                                                            if (*reinterpret_cast<signed char*>(&eax322) == 64) {
                                                                r8d323 = *reinterpret_cast<uint32_t*>(&rsi2) & 7;
                                                                ecx324 = reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rsi2) & 56) >> 3;
                                                                *reinterpret_cast<uint32_t*>(&rax325) = *reinterpret_cast<unsigned char*>(&r8d323);
                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax325) + 4) = 0;
                                                                if (*reinterpret_cast<unsigned char*>(&r8d323) == 6) {
                                                                    *reinterpret_cast<uint32_t*>(&rax326) = rbx327->f60;
                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax326) + 4) = 0;
                                                                    rax328 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax326) + reinterpret_cast<int64_t>(rdi139));
                                                                } else {
                                                                    *reinterpret_cast<int32_t*>(&rax329) = *reinterpret_cast<int32_t*>(0x37c0 + rax325 * 4);
                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax329) + 4) = 0;
                                                                    rax328 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rax329) + reinterpret_cast<int64_t>(rbx330));
                                                                }
                                                                if (ecx324 == 6) {
                                                                    *reinterpret_cast<uint32_t*>(&rdx331) = rbx332->f60;
                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx331) + 4) = 0;
                                                                    rdi333 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rdx331));
                                                                } else {
                                                                    rsi2 = reinterpret_cast<int32_t*>(static_cast<int64_t>(ecx324));
                                                                    *reinterpret_cast<int32_t*>(&rdi334) = *reinterpret_cast<int32_t*>(0x37c0 + reinterpret_cast<uint64_t>(rsi2) * 4);
                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi334) + 4) = 0;
                                                                    rdi333 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi334) + reinterpret_cast<int64_t>(rbx335));
                                                                }
                                                                eax336 = *rax328;
                                                                *rdi333 = *reinterpret_cast<signed char*>(&eax336);
                                                                rbx337->f64 = reinterpret_cast<int16_t>(rbx338->f64 + 1);
                                                                rdx61 = *rbx339;
                                                                if (ecx324 == 6 || (ecx245 = 1, *reinterpret_cast<unsigned char*>(&r8d323) == 6)) {
                                                                    ecx245 = 2;
                                                                }
                                                            } else {
                                                                eax340 = *reinterpret_cast<uint32_t*>(&rsi2) & 0xfffffff8;
                                                                if (*reinterpret_cast<signed char*>(&eax340) == 0x80) {
                                                                    *reinterpret_cast<uint32_t*>(&rsi2) = *reinterpret_cast<uint32_t*>(&rsi2) & 7;
                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                    *reinterpret_cast<uint32_t*>(&rcx341) = *reinterpret_cast<unsigned char*>(&rsi2);
                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx341) + 4) = 0;
                                                                    if (*reinterpret_cast<unsigned char*>(&rsi2) == 6) {
                                                                        *reinterpret_cast<uint32_t*>(&rcx342) = rbx343->f60;
                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx342) + 4) = 0;
                                                                        rdi344 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rcx342));
                                                                    } else {
                                                                        *reinterpret_cast<int32_t*>(&rdi345) = *reinterpret_cast<int32_t*>(0x37c0 + rcx341 * 4);
                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi345) + 4) = 0;
                                                                        rdi344 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi345) + reinterpret_cast<int64_t>(rbx346));
                                                                    }
                                                                    r9d347 = *rdi344;
                                                                    edi348 = rbx349->f55;
                                                                    rbx350->f54 = 0;
                                                                    edi351 = edi348 + r9d347;
                                                                    if (*reinterpret_cast<signed char*>(&edi351)) {
                                                                        r9d352 = 16;
                                                                        eax340 = 0;
                                                                    } else {
                                                                        rbx353->f54 = 0x80;
                                                                        r9d352 = 0xffffff90;
                                                                    }
                                                                    if (*reinterpret_cast<uint16_t*>(&edi351) > 0xff) {
                                                                        rbx354->f54 = *reinterpret_cast<signed char*>(&r9d352);
                                                                        eax340 = r9d352;
                                                                    }
                                                                    if ((r9d347 & 15) + (edi348 & 15) & 16) {
                                                                        eax355 = eax340 | 32;
                                                                        rbx356->f54 = *reinterpret_cast<signed char*>(&eax355);
                                                                    }
                                                                    ecx357 = 0;
                                                                    rbx358->f64 = reinterpret_cast<int16_t>(rbx359->f64 + 1);
                                                                    *reinterpret_cast<unsigned char*>(&ecx357) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rsi2) == 6);
                                                                    rbx360->f55 = *reinterpret_cast<signed char*>(&edi351);
                                                                    ecx245 = ecx357 + 1;
                                                                } else {
                                                                    if (*reinterpret_cast<signed char*>(&eax340) == 0x88) {
                                                                        *reinterpret_cast<uint32_t*>(&rsi2) = *reinterpret_cast<uint32_t*>(&rsi2) & 7;
                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                        *reinterpret_cast<uint32_t*>(&rax361) = *reinterpret_cast<unsigned char*>(&rsi2);
                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax361) + 4) = 0;
                                                                        if (*reinterpret_cast<unsigned char*>(&rsi2) == 6) {
                                                                            *reinterpret_cast<uint32_t*>(&rax362) = rbx363->f60;
                                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax362) + 4) = 0;
                                                                            rdi364 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax362));
                                                                        } else {
                                                                            *reinterpret_cast<int32_t*>(&rdi365) = *reinterpret_cast<int32_t*>(0x37c0 + rax361 * 4);
                                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi365) + 4) = 0;
                                                                            rdi364 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi365) + reinterpret_cast<int64_t>(rbx366));
                                                                        }
                                                                        ecx367 = rbx368->f54;
                                                                        r9d369 = *rdi364;
                                                                        eax370 = rbx371->f55;
                                                                        rbx372->f54 = 0;
                                                                        *reinterpret_cast<unsigned char*>(&ecx367) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx367) >> 4);
                                                                        ecx373 = ecx367 & 1;
                                                                        edi374 = *reinterpret_cast<unsigned char*>(&r9d369) + (eax370 + *reinterpret_cast<unsigned char*>(&ecx373));
                                                                        if (*reinterpret_cast<signed char*>(&edi374)) {
                                                                            r10d375 = 16;
                                                                            eax376 = 0;
                                                                        } else {
                                                                            rbx377->f54 = 0x80;
                                                                            r10d375 = 0xffffff90;
                                                                            eax376 = 0xffffff80;
                                                                        }
                                                                        if (*reinterpret_cast<uint16_t*>(&edi374) > 0xff) {
                                                                            rbx378->f54 = *reinterpret_cast<signed char*>(&r10d375);
                                                                            eax376 = r10d375;
                                                                        }
                                                                        if ((r9d369 & 15) + (eax370 & 15) & 16) {
                                                                            eax376 = eax376 | 32;
                                                                            rbx379->f54 = *reinterpret_cast<signed char*>(&eax376);
                                                                        }
                                                                        if (ecx373 + (eax370 + r9d369 & 15) & 16) {
                                                                            eax380 = eax376 | 32;
                                                                            rbx381->f54 = *reinterpret_cast<signed char*>(&eax380);
                                                                        }
                                                                        ecx382 = 0;
                                                                        rbx383->f64 = reinterpret_cast<int16_t>(rbx384->f64 + 1);
                                                                        *reinterpret_cast<unsigned char*>(&ecx382) = reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&rsi2) == 6);
                                                                        rbx385->f55 = *reinterpret_cast<signed char*>(&edi374);
                                                                        ecx245 = ecx382 + 1;
                                                                    } else {
                                                                        if (*reinterpret_cast<signed char*>(&eax340) == 0x90) {
                                                                            esi386 = *reinterpret_cast<uint32_t*>(&rsi2) & 7;
                                                                            *reinterpret_cast<uint32_t*>(&rax387) = *reinterpret_cast<unsigned char*>(&esi386);
                                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax387) + 4) = 0;
                                                                            if (*reinterpret_cast<unsigned char*>(&esi386) == 6) {
                                                                                *reinterpret_cast<uint32_t*>(&rax388) = rbx389->f60;
                                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax388) + 4) = 0;
                                                                                *reinterpret_cast<uint32_t*>(&rsi2) = rbx390->f55;
                                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                                edx391 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax388));
                                                                                al393 = fun_31e0(rbx392, *reinterpret_cast<uint32_t*>(&rsi2), edx391, 0);
                                                                                rbx394->f64 = reinterpret_cast<int16_t>(rbx395->f64 + 1);
                                                                                rbx396->f55 = al393;
                                                                                ecx245 = 2;
                                                                                rdx61 = *rbx397;
                                                                            } else {
                                                                                *reinterpret_cast<uint32_t*>(&rsi2) = rbx398->f55;
                                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                                *reinterpret_cast<int32_t*>(&rax399) = *reinterpret_cast<int32_t*>(0x37c0 + rax387 * 4);
                                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax399) + 4) = 0;
                                                                                edx400 = *reinterpret_cast<unsigned char*>(rbx401 + rax399);
                                                                                al403 = fun_31e0(rbx402, *reinterpret_cast<uint32_t*>(&rsi2), edx400, 0);
                                                                                rbx404->f64 = reinterpret_cast<int16_t>(rbx405->f64 + 1);
                                                                                rbx406->f55 = al403;
                                                                                ecx245 = 1;
                                                                                rdx61 = *rbx407;
                                                                            }
                                                                        } else {
                                                                            if (*reinterpret_cast<signed char*>(&eax340) == 0x98) {
                                                                                ecx408 = rbx409->f54;
                                                                                esi410 = *reinterpret_cast<uint32_t*>(&rsi2) & 7;
                                                                                *reinterpret_cast<uint32_t*>(&rax411) = *reinterpret_cast<unsigned char*>(&esi410);
                                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax411) + 4) = 0;
                                                                                *reinterpret_cast<unsigned char*>(&ecx408) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx408) >> 4);
                                                                                ecx412 = ecx408 & 1;
                                                                                if (*reinterpret_cast<unsigned char*>(&esi410) == 6) {
                                                                                    *reinterpret_cast<uint32_t*>(&rax413) = rbx414->f60;
                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax413) + 4) = 0;
                                                                                    *reinterpret_cast<uint32_t*>(&rsi2) = rbx415->f55;
                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                                    edx416 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax413));
                                                                                    al418 = fun_31e0(rbx417, *reinterpret_cast<uint32_t*>(&rsi2), edx416, ecx412);
                                                                                    rbx419->f64 = reinterpret_cast<int16_t>(rbx420->f64 + 1);
                                                                                    rbx421->f55 = al418;
                                                                                    ecx245 = 2;
                                                                                    rdx61 = *rbx422;
                                                                                } else {
                                                                                    *reinterpret_cast<uint32_t*>(&rsi2) = rbx423->f55;
                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                                    *reinterpret_cast<int32_t*>(&rax424) = *reinterpret_cast<int32_t*>(0x37c0 + rax411 * 4);
                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax424) + 4) = 0;
                                                                                    edx425 = *reinterpret_cast<unsigned char*>(rbx426 + rax424);
                                                                                    al428 = fun_31e0(rbx427, *reinterpret_cast<uint32_t*>(&rsi2), edx425, ecx412);
                                                                                    rbx429->f64 = reinterpret_cast<int16_t>(rbx430->f64 + 1);
                                                                                    rbx431->f55 = al428;
                                                                                    ecx245 = 1;
                                                                                    rdx61 = *rbx432;
                                                                                }
                                                                            } else {
                                                                                if (*reinterpret_cast<signed char*>(&eax340) == -96) {
                                                                                    *reinterpret_cast<uint32_t*>(&rsi2) = *reinterpret_cast<uint32_t*>(&rsi2) & 7;
                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                                    *reinterpret_cast<uint32_t*>(&rax433) = *reinterpret_cast<unsigned char*>(&rsi2);
                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax433) + 4) = 0;
                                                                                    if (*reinterpret_cast<unsigned char*>(&rsi2) == 6) {
                                                                                        *reinterpret_cast<uint32_t*>(&rax434) = rbx435->f60;
                                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax434) + 4) = 0;
                                                                                        eax436 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax434));
                                                                                        rbx437->f55 = reinterpret_cast<unsigned char>(rbx438->f55 & *reinterpret_cast<unsigned char*>(&eax436));
                                                                                        if (rbx439->f55) {
                                                                                            rbx440->f54 = 32;
                                                                                            rbx441->f64 = reinterpret_cast<int16_t>(rbx442->f64 + 1);
                                                                                            ecx245 = 2;
                                                                                        } else {
                                                                                            rbx443->f54 = -96;
                                                                                            rbx444->f64 = reinterpret_cast<int16_t>(rbx445->f64 + 1);
                                                                                            ecx245 = 2;
                                                                                        }
                                                                                    } else {
                                                                                        *reinterpret_cast<int32_t*>(&rax446) = *reinterpret_cast<int32_t*>(0x37c0 + rax433 * 4);
                                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax446) + 4) = 0;
                                                                                        eax447 = *reinterpret_cast<unsigned char*>(rbx448 + rax446);
                                                                                        rbx449->f55 = reinterpret_cast<unsigned char>(rbx450->f55 & *reinterpret_cast<unsigned char*>(&eax447));
                                                                                        if (rbx451->f55) {
                                                                                            rbx452->f54 = 32;
                                                                                            rbx453->f64 = reinterpret_cast<int16_t>(rbx454->f64 + 1);
                                                                                            ecx245 = 1;
                                                                                        } else {
                                                                                            rbx455->f54 = -96;
                                                                                            rbx456->f64 = reinterpret_cast<int16_t>(rbx457->f64 + 1);
                                                                                            ecx245 = 1;
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (*reinterpret_cast<signed char*>(&eax340) == -88) {
                                                                                        *reinterpret_cast<uint32_t*>(&rsi2) = *reinterpret_cast<uint32_t*>(&rsi2) & 7;
                                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                                        *reinterpret_cast<uint32_t*>(&rax458) = *reinterpret_cast<unsigned char*>(&rsi2);
                                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax458) + 4) = 0;
                                                                                        if (*reinterpret_cast<unsigned char*>(&rsi2) == 6) {
                                                                                            *reinterpret_cast<uint32_t*>(&rax459) = rbx460->f60;
                                                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax459) + 4) = 0;
                                                                                            eax461 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax459));
                                                                                            rbx462->f55 = reinterpret_cast<unsigned char>(rbx463->f55 ^ *reinterpret_cast<unsigned char*>(&eax461));
                                                                                            if (rbx464->f55) {
                                                                                                rbx465->f54 = 0;
                                                                                                rbx466->f64 = reinterpret_cast<int16_t>(rbx467->f64 + 1);
                                                                                                ecx245 = 2;
                                                                                            } else {
                                                                                                rbx468->f54 = 0x80;
                                                                                                rbx469->f64 = reinterpret_cast<int16_t>(rbx470->f64 + 1);
                                                                                                ecx245 = 2;
                                                                                            }
                                                                                        } else {
                                                                                            *reinterpret_cast<int32_t*>(&rax471) = *reinterpret_cast<int32_t*>(0x37c0 + rax458 * 4);
                                                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax471) + 4) = 0;
                                                                                            eax472 = *reinterpret_cast<unsigned char*>(rbx473 + rax471);
                                                                                            rbx474->f55 = reinterpret_cast<unsigned char>(rbx475->f55 ^ *reinterpret_cast<unsigned char*>(&eax472));
                                                                                            if (rbx476->f55) {
                                                                                                rbx477->f54 = 0;
                                                                                                rbx478->f64 = reinterpret_cast<int16_t>(rbx479->f64 + 1);
                                                                                                ecx245 = 1;
                                                                                            } else {
                                                                                                rbx480->f54 = 0x80;
                                                                                                rbx481->f64 = reinterpret_cast<int16_t>(rbx482->f64 + 1);
                                                                                                ecx245 = 1;
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (*reinterpret_cast<signed char*>(&eax340) == -80) {
                                                                                            *reinterpret_cast<uint32_t*>(&rsi2) = *reinterpret_cast<uint32_t*>(&rsi2) & 7;
                                                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                                            *reinterpret_cast<uint32_t*>(&rax483) = *reinterpret_cast<unsigned char*>(&rsi2);
                                                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax483) + 4) = 0;
                                                                                            if (*reinterpret_cast<unsigned char*>(&rsi2) == 6) {
                                                                                                *reinterpret_cast<uint32_t*>(&rax484) = rbx485->f60;
                                                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax484) + 4) = 0;
                                                                                                eax486 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax484));
                                                                                                rbx487->f55 = reinterpret_cast<unsigned char>(rbx488->f55 | *reinterpret_cast<unsigned char*>(&eax486));
                                                                                                if (rbx489->f55) {
                                                                                                    rbx490->f54 = 0;
                                                                                                    rbx491->f64 = reinterpret_cast<int16_t>(rbx492->f64 + 1);
                                                                                                    ecx245 = 2;
                                                                                                } else {
                                                                                                    rbx493->f54 = 0x80;
                                                                                                    rbx494->f64 = reinterpret_cast<int16_t>(rbx495->f64 + 1);
                                                                                                    ecx245 = 2;
                                                                                                }
                                                                                            } else {
                                                                                                *reinterpret_cast<int32_t*>(&rax496) = *reinterpret_cast<int32_t*>(0x37c0 + rax483 * 4);
                                                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax496) + 4) = 0;
                                                                                                eax497 = *reinterpret_cast<unsigned char*>(rbx498 + rax496);
                                                                                                rbx499->f55 = reinterpret_cast<unsigned char>(rbx500->f55 | *reinterpret_cast<unsigned char*>(&eax497));
                                                                                                if (rbx501->f55) {
                                                                                                    rbx502->f54 = 0;
                                                                                                    rbx503->f64 = reinterpret_cast<int16_t>(rbx504->f64 + 1);
                                                                                                    ecx245 = 1;
                                                                                                } else {
                                                                                                    rbx505->f54 = 0x80;
                                                                                                    rbx506->f64 = reinterpret_cast<int16_t>(rbx507->f64 + 1);
                                                                                                    ecx245 = 1;
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (*reinterpret_cast<signed char*>(&eax340) == -72) {
                                                                                                esi508 = *reinterpret_cast<uint32_t*>(&rsi2) & 7;
                                                                                                *reinterpret_cast<uint32_t*>(&rax509) = *reinterpret_cast<unsigned char*>(&esi508);
                                                                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax509) + 4) = 0;
                                                                                                if (*reinterpret_cast<unsigned char*>(&esi508) == 6) {
                                                                                                    *reinterpret_cast<uint32_t*>(&rax510) = rbx511->f60;
                                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax510) + 4) = 0;
                                                                                                    *reinterpret_cast<uint32_t*>(&rsi2) = rbx512->f55;
                                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                                                    edx513 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax510));
                                                                                                    fun_31e0(rbx514, *reinterpret_cast<uint32_t*>(&rsi2), edx513, 0);
                                                                                                    rbx515->f64 = reinterpret_cast<int16_t>(rbx516->f64 + 1);
                                                                                                    rdx61 = *rbx517;
                                                                                                    ecx245 = 2;
                                                                                                } else {
                                                                                                    *reinterpret_cast<uint32_t*>(&rsi2) = rbx518->f55;
                                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                                                    *reinterpret_cast<int32_t*>(&rax519) = *reinterpret_cast<int32_t*>(0x37c0 + rax509 * 4);
                                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax519) + 4) = 0;
                                                                                                    edx520 = *reinterpret_cast<unsigned char*>(rbx521 + rax519);
                                                                                                    fun_31e0(rbx522, *reinterpret_cast<uint32_t*>(&rsi2), edx520, 0);
                                                                                                    rbx523->f64 = reinterpret_cast<int16_t>(rbx524->f64 + 1);
                                                                                                    rdx61 = *rbx525;
                                                                                                    ecx245 = 1;
                                                                                                }
                                                                                            } else {
                                                                                                if (*reinterpret_cast<signed char*>(&ecx227) == -57) {
                                                                                                    *reinterpret_cast<uint32_t*>(&rax526) = rbx527->f64;
                                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax526) + 4) = 0;
                                                                                                    *reinterpret_cast<uint32_t*>(&rsi2) = *reinterpret_cast<uint32_t*>(&rsi2) & 56;
                                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
                                                                                                    ecx528 = static_cast<int32_t>(rax526 + 1);
                                                                                                    eax529 = rbx530->f62 - 2;
                                                                                                    rbx531->f62 = *reinterpret_cast<uint16_t*>(&eax529);
                                                                                                    *reinterpret_cast<uint32_t*>(&rax532) = *reinterpret_cast<uint16_t*>(&eax529);
                                                                                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax532) + 4) = 0;
                                                                                                    *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax532)) = *reinterpret_cast<int16_t*>(&ecx528);
                                                                                                    rbx533->f64 = *reinterpret_cast<int16_t*>(&rsi2);
                                                                                                    ecx245 = 4;
                                                                                                } else {
                                                                                                    if (*reinterpret_cast<signed char*>(&r9d282) == -63) {
                                                                                                        *reinterpret_cast<uint32_t*>(&rcx534) = rbx535->f62;
                                                                                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx534) + 4) = 0;
                                                                                                        eax536 = reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rsi2) & 48) >> 4;
                                                                                                        if (eax536 == 3) {
                                                                                                            rax537 = rcx534;
                                                                                                            ecx538 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rcx534));
                                                                                                            rbx539->f54 = *reinterpret_cast<int16_t*>(&ecx538);
                                                                                                            rbx540->f54 = reinterpret_cast<unsigned char>(rbx541->f54 & 0xf0);
                                                                                                        } else {
                                                                                                            rsi2 = reinterpret_cast<int32_t*>(0x37a0);
                                                                                                            ecx542 = *reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rcx534));
                                                                                                            *reinterpret_cast<int32_t*>(&rax543) = *reinterpret_cast<int32_t*>(0x37a0 + eax536 * 4);
                                                                                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax543) + 4) = 0;
                                                                                                            *reinterpret_cast<int16_t*>(rbx544 + rax543) = *reinterpret_cast<int16_t*>(&ecx542);
                                                                                                            *reinterpret_cast<uint32_t*>(&rax537) = rbx545->f62;
                                                                                                        }
                                                                                                        eax546 = *reinterpret_cast<uint32_t*>(&rax537) + 2;
                                                                                                        rbx547->f64 = reinterpret_cast<int16_t>(rbx548->f64 + 1);
                                                                                                        ecx245 = 4;
                                                                                                        rbx549->f62 = *reinterpret_cast<int16_t*>(&eax546);
                                                                                                    } else {
                                                                                                        if (*reinterpret_cast<signed char*>(&r9d282) != -59) 
                                                                                                            goto addr_120b_3;
                                                                                                        rcx550 = &rbx551->f54;
                                                                                                        eax552 = reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rsi2) & 48) >> 4;
                                                                                                        if (eax552 == 3) 
                                                                                                            goto addr_2115_228; else 
                                                                                                            goto addr_2106_229;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            edx553 = r8_203->f1;
                                            eax554 = reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rsi2) & 56) >> 3;
                                            if (eax554 == 6) {
                                                *reinterpret_cast<uint32_t*>(&rax555) = rbx556->f60;
                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax555) + 4) = 0;
                                                ecx245 = 3;
                                                *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax555)) = *reinterpret_cast<signed char*>(&edx553);
                                                rbx557->f64 = reinterpret_cast<int16_t>(rbx558->f64 + 2);
                                                rdx61 = *rbx559;
                                            } else {
                                                *reinterpret_cast<int32_t*>(&rax560) = *reinterpret_cast<int32_t*>(0x37c0 + eax554 * 4);
                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax560) + 4) = 0;
                                                ecx245 = 2;
                                                *reinterpret_cast<signed char*>(rbx561 + rax560) = *reinterpret_cast<signed char*>(&edx553);
                                                rbx562->f64 = reinterpret_cast<int16_t>(rbx563->f64 + 2);
                                                rdx61 = *rbx564;
                                            }
                                        }
                                    }
                                }
                            }
                            addr_18b8_233:
                            rbx565->f84 = ecx245;
                            goto addr_eb3_64;
                            addr_2115_228:
                            eax566 = rbx567->f62 - 2;
                            rbx568->f62 = *reinterpret_cast<uint16_t*>(&eax566);
                            ecx569 = *rcx550;
                            *reinterpret_cast<uint32_t*>(&rax570) = *reinterpret_cast<uint16_t*>(&eax566);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax570) + 4) = 0;
                            *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rdi139) + reinterpret_cast<int64_t>(rax570)) = *reinterpret_cast<int16_t*>(&ecx569);
                            ecx245 = 4;
                            rbx571->f64 = reinterpret_cast<int16_t>(rbx572->f64 + 1);
                            goto addr_18b8_233;
                            addr_2106_229:
                            *reinterpret_cast<int32_t*>(&rcx573) = *reinterpret_cast<int32_t*>(0x37a0 + eax552 * 4);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx573) + 4) = 0;
                            rcx550 = reinterpret_cast<uint16_t*>(rcx573 + rbx574);
                            goto addr_2115_228;
                            eax575 = rdx61->f65351;
                            ecx576 = eax575 & 3;
                            rbx577->f40 = *reinterpret_cast<signed char*>(&ecx576);
                            ecx578 = reinterpret_cast<int32_t>(eax575 & 12) >> 2;
                            rbx579->f41 = *reinterpret_cast<signed char*>(&ecx578);
                            rbx580->f43 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax575) >> 6);
                            ecx581 = reinterpret_cast<int32_t>(eax575 & 48) >> 4;
                            rbx582->f42 = *reinterpret_cast<signed char*>(&ecx581);
                            eax583 = rdx61->f65352;
                            ecx584 = eax583 & 3;
                            rbx585->f44 = *reinterpret_cast<signed char*>(&ecx584);
                            ecx586 = reinterpret_cast<int32_t>(eax583 & 12) >> 2;
                            rbx587->f45 = *reinterpret_cast<signed char*>(&ecx586);
                            rbx588->f47 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax583) >> 6);
                            ecx589 = reinterpret_cast<int32_t>(eax583 & 48) >> 4;
                            rbx590->f46 = *reinterpret_cast<signed char*>(&ecx589);
                            eax591 = rdx61->f65353;
                            ecx592 = eax591 & 3;
                            rbx593->f48 = *reinterpret_cast<signed char*>(&ecx592);
                            ecx594 = reinterpret_cast<int32_t>(eax591 & 12) >> 2;
                            rbx595->f49 = *reinterpret_cast<signed char*>(&ecx594);
                            rbx596->f51 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax591) >> 6);
                            ecx597 = reinterpret_cast<int32_t>(eax591 & 48) >> 4;
                            rbx598->f50 = *reinterpret_cast<signed char*>(&ecx597);
                            ecx599 = rdx61->f65344;
                            r10d51 = rdx61->f65348;
                        } while (!(*reinterpret_cast<unsigned char*>(&ecx599) & 1));
                        break;
                        rdx61->f65345 = reinterpret_cast<unsigned char>(rdx61->f65345 & 0xfc);
                        *reinterpret_cast<unsigned char*>(*rbx600 + 0xff41) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(*rbx600 + 0xff41) | 3);
                    }
                    r14_49 = &rdx61->f38912;
                    if (!(*reinterpret_cast<unsigned char*>(&ecx599) & 8)) 
                        goto addr_1355_237;
                } else {
                    rdx61 = *rbx601;
                    ecx599 = rdx61->f65344;
                    goto addr_1358_239;
                }
            } else {
                rax8 = *rbx602;
                esi9 = *r8_46;
                if (static_cast<uint32_t>(rax8->f65344) & 16) 
                    goto addr_1378_241; else 
                    break;
            }
            r14_49 = &rdx61->f39936;
            addr_1355_237:
            *reinterpret_cast<int32_t*>(&r11_48) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_48) + 4) = 0;
            addr_1358_239:
            r8_46 = r14_49;
            r9_47 = r11_48 + 0x100;
            rdi11 = r11_48;
            rax8 = rdx61;
            esi9 = *r8_46;
            if (!(ecx599 & 16)) 
                break;
            addr_1378_241:
            rax7 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rax8) + reinterpret_cast<int32_t>(*reinterpret_cast<unsigned char*>(&esi9) + 0x800 << 4));
        }
    }
}

struct s247 {
    signed char[52] pad52;
    unsigned char f52;
};

struct s248 {
    signed char[52] pad52;
    unsigned char f52;
};

void fun_1663() {
    struct s247* rbx1;
    struct s248* rbx2;

    rbx1->f52 = reinterpret_cast<unsigned char>(rbx2->f52 | 4);
    goto 0x108b;
}

struct s249 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s250 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s251 {
    signed char[54] pad54;
    signed char f54;
};

struct s252 {
    signed char[54] pad54;
    signed char f54;
};

struct s253 {
    signed char[54] pad54;
    signed char f54;
};

struct s254 {
    signed char[54] pad54;
    signed char f54;
};

struct s255 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1879() {
    uint32_t r8d1;
    struct s249* r8_2;
    uint32_t edi3;
    struct s250* rbx4;
    struct s251* rbx5;
    uint16_t di6;
    int32_t r8d7;
    struct s252* rbx8;
    struct s253* rbx9;
    struct s254* rbx10;
    int32_t eax11;
    int32_t eax12;
    struct s255* rbx13;

    r8d1 = r8_2->f1;
    edi3 = rbx4->f55;
    rbx5->f54 = 64;
    di6 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&edi3) - *reinterpret_cast<int16_t*>(&r8d1));
    if (di6) {
        r8d7 = 96;
        if (di6 > 0xff) {
            rbx8->f54 = 80;
            r8d7 = 0x70;
        }
    } else {
        rbx9->f54 = -64;
        r8d7 = -32;
    }
    if ((edi3 & 15) - (r8d1 & 15) & 16) {
        rbx10->f54 = *reinterpret_cast<signed char*>(&r8d7);
    }
    eax11 = eax12 + 2;
    rbx13->f64 = *reinterpret_cast<int16_t*>(&eax11);
}

struct s256 {
    signed char[66] pad66;
    unsigned char f66;
};

struct s257 {
    signed char[66] pad66;
    unsigned char f66;
};

struct s258 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_18d9() {
    int32_t eax1;
    int32_t eax2;
    struct s256* rbx3;
    struct s257* rbx4;
    struct s258* rbx5;

    eax1 = eax2 + 1;
    rbx3->f66 = reinterpret_cast<unsigned char>(rbx4->f66 | 0xa0);
    rbx5->f64 = *reinterpret_cast<int16_t*>(&eax1);
    goto 0x18b8;
}

struct s259 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s260 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s261 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s262 {
    signed char[64] pad64;
    int16_t f64;
};

struct s263 {
    signed char[54] pad54;
    signed char f54;
};

void fun_1981() {
    uint32_t ecx1;
    struct s259* r8_2;
    struct s260* rbx3;
    struct s261* rbx4;
    int32_t eax5;
    int32_t eax6;
    uint32_t ecx7;
    struct s262* rbx8;
    struct s263* rbx9;

    ecx1 = r8_2->f1;
    *reinterpret_cast<unsigned char*>(&ecx1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx1) | rbx3->f55);
    rbx4->f55 = *reinterpret_cast<unsigned char*>(&ecx1);
    eax5 = eax6 + 2;
    ecx7 = ecx1 - (ecx1 + reinterpret_cast<uint1_t>(ecx1 < ecx1 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ecx1) < 1))) & 0xffffff80;
    rbx8->f64 = *reinterpret_cast<int16_t*>(&eax5);
    rbx9->f54 = *reinterpret_cast<signed char*>(&ecx7);
    goto 0x18b8;
}

struct s264 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s265 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s266 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s267 {
    signed char[64] pad64;
    int16_t f64;
};

struct s268 {
    signed char[54] pad54;
    signed char f54;
};

void fun_1adb() {
    uint32_t ecx1;
    struct s264* r8_2;
    struct s265* rbx3;
    struct s266* rbx4;
    int32_t eax5;
    int32_t eax6;
    struct s267* rbx7;
    uint32_t ecx8;
    struct s268* rbx9;

    ecx1 = r8_2->f1;
    *reinterpret_cast<unsigned char*>(&ecx1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx1) & rbx3->f55);
    rbx4->f55 = *reinterpret_cast<unsigned char*>(&ecx1);
    eax5 = eax6 + 2;
    rbx7->f64 = *reinterpret_cast<int16_t*>(&eax5);
    ecx8 = (ecx1 - (ecx1 + reinterpret_cast<uint1_t>(ecx1 < ecx1 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ecx1) < 1))) & 0xffffff80) + 32;
    rbx9->f54 = *reinterpret_cast<signed char*>(&ecx8);
    goto 0x18b8;
}

struct s269 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s270 {
    signed char[64] pad64;
    int16_t f64;
};

struct s271 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s272 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1cbf() {
    struct s269* rbx1;
    int32_t eax2;
    int32_t eax3;
    struct s270* rbx4;
    uint32_t eax5;
    struct s271* r8_6;
    struct s272* rbx7;

    if (!(rbx1->f54 & 16)) {
        eax2 = eax3 + 3;
        rbx4->f64 = *reinterpret_cast<int16_t*>(&eax2);
        goto 0x18b8;
    } else {
        eax5 = r8_6->f1;
        rbx7->f64 = *reinterpret_cast<int16_t*>(&eax5);
        goto 0x18b8;
    }
}

struct s273 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s274 {
    signed char[66] pad66;
    signed char f66;
};

struct s275 {
    signed char[62] pad62;
    int16_t f62;
};

struct s276 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1cdc(int64_t rdi) {
    int64_t rcx2;
    struct s273* rbx3;
    int64_t rax4;
    uint32_t ecx5;
    struct s274* rbx6;
    int32_t eax7;
    struct s275* rbx8;
    struct s276* rbx9;

    *reinterpret_cast<uint32_t*>(&rcx2) = rbx3->f62;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    rax4 = rcx2;
    ecx5 = *reinterpret_cast<uint16_t*>(rdi + rcx2);
    rbx6->f66 = 1;
    eax7 = *reinterpret_cast<int32_t*>(&rax4) + 2;
    rbx8->f62 = *reinterpret_cast<int16_t*>(&eax7);
    rbx9->f64 = *reinterpret_cast<int16_t*>(&ecx5);
    goto 0x18b8;
}

struct s277 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s278 {
    signed char[64] pad64;
    int16_t f64;
};

struct s279 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s280 {
    signed char[62] pad62;
    int16_t f62;
};

struct s281 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1da7(int64_t rdi) {
    struct s277* rbx2;
    int32_t eax3;
    int32_t eax4;
    struct s278* rbx5;
    int64_t rcx6;
    struct s279* rbx7;
    int64_t rax8;
    uint32_t ecx9;
    int32_t eax10;
    struct s280* rbx11;
    struct s281* rbx12;

    if (!(rbx2->f54 & 16)) {
        eax3 = eax4 + 1;
        rbx5->f64 = *reinterpret_cast<int16_t*>(&eax3);
        goto 0x18b8;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx6) = rbx7->f62;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
        rax8 = rcx6;
        ecx9 = *reinterpret_cast<uint16_t*>(rdi + rcx6);
        eax10 = *reinterpret_cast<int32_t*>(&rax8) + 2;
        rbx11->f62 = *reinterpret_cast<int16_t*>(&eax10);
        rbx12->f64 = *reinterpret_cast<int16_t*>(&ecx9);
        goto 0x18b8;
    }
}

struct s282 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s283 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s284 {
    signed char[62] pad62;
    int16_t f62;
};

struct s285 {
    signed char[64] pad64;
    int16_t f64;
};

struct s286 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1e06(int64_t rdi) {
    struct s282* rbx2;
    int64_t rcx3;
    struct s283* rbx4;
    int64_t rax5;
    uint32_t ecx6;
    int32_t eax7;
    struct s284* rbx8;
    struct s285* rbx9;
    int32_t eax10;
    int32_t eax11;
    struct s286* rbx12;

    if (!(rbx2->f54 & 16)) {
        *reinterpret_cast<uint32_t*>(&rcx3) = rbx4->f62;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
        rax5 = rcx3;
        ecx6 = *reinterpret_cast<uint16_t*>(rdi + rcx3);
        eax7 = *reinterpret_cast<int32_t*>(&rax5) + 2;
        rbx8->f62 = *reinterpret_cast<int16_t*>(&eax7);
        rbx9->f64 = *reinterpret_cast<int16_t*>(&ecx6);
        goto 0x18b8;
    } else {
        eax10 = eax11 + 1;
        rbx12->f64 = *reinterpret_cast<int16_t*>(&eax10);
        goto 0x18b8;
    }
}

struct s287 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s288 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s289 {
    signed char[54] pad54;
    signed char f54;
};

struct s290 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s291 {
    signed char[54] pad54;
    signed char f54;
};

struct s292 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s293 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s294 {
    signed char[54] pad54;
    signed char f54;
};

struct s295 {
    signed char[54] pad54;
    signed char f54;
};

struct s296 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s297 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s298 {
    signed char[54] pad54;
    signed char f54;
};

struct s299 {
    signed char[54] pad54;
    signed char f54;
};

struct s300 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s301 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s302 {
    signed char[54] pad54;
    signed char f54;
};

struct s303 {
    signed char[54] pad54;
    signed char f54;
};

struct s304 {
    signed char[64] pad64;
    uint16_t f64;
};

struct s305 {
    signed char[54] pad54;
    signed char f54;
};

struct s306 {
    signed char[64] pad64;
    int16_t f64;
};

struct s307 {
    signed char[54] pad54;
    signed char f54;
};

struct s308 {
    signed char[54] pad54;
    signed char f54;
};

struct s309 {
    signed char[64] pad64;
    uint16_t f64;
};

void fun_1f51(int64_t rdi, int32_t esi, uint32_t edx) {
    uint32_t r14d4;
    struct s287* r8_5;
    uint32_t r15d6;
    int64_t rcx7;
    int64_t r10_8;
    struct s288* rbx9;
    unsigned char* r10_10;
    int64_t r10_11;
    int64_t rbx12;
    int64_t r9_13;
    int32_t ecx14;
    uint32_t r11d15;
    uint32_t ecx16;
    uint32_t ecx17;
    uint32_t eax18;
    uint32_t edx19;
    uint32_t eax20;
    struct s289* rbx21;
    uint32_t eax22;
    struct s290* rbx23;
    struct s291* rbx24;
    struct s292* rbx25;
    uint32_t eax26;
    struct s293* rbx27;
    uint32_t edx28;
    uint32_t eax29;
    uint32_t edx30;
    struct s294* rbx31;
    struct s295* rbx32;
    struct s296* rbx33;
    uint32_t eax34;
    uint32_t edx35;
    struct s297* rbx36;
    uint32_t edx37;
    uint32_t edx38;
    uint32_t eax39;
    int32_t eax40;
    int32_t eax41;
    uint32_t eax42;
    int32_t eax43;
    uint32_t edx44;
    struct s298* rbx45;
    uint32_t eax46;
    int32_t eax47;
    int32_t eax48;
    uint32_t eax49;
    int32_t eax50;
    struct s299* rbx51;
    struct s300* rbx52;
    uint32_t r14d53;
    uint32_t esi54;
    struct s301* rbx55;
    uint32_t edi56;
    struct s302* rbx57;
    uint32_t esi58;
    struct s303* rbx59;
    uint32_t r9d60;
    struct s304* rbx61;
    uint32_t r9d62;
    uint32_t edx63;
    int32_t eax64;
    int32_t eax65;
    uint32_t eax66;
    int32_t eax67;
    struct s305* rbx68;
    uint32_t eax69;
    struct s306* rbx70;
    uint32_t edx71;
    struct s307* rbx72;
    struct s308* rbx73;
    struct s309* rbx74;

    r14d4 = r8_5->f1;
    r15d6 = r14d4 & 7;
    *reinterpret_cast<uint32_t*>(&rcx7) = *reinterpret_cast<unsigned char*>(&r15d6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    if (*reinterpret_cast<unsigned char*>(&r15d6) == 6) {
        *reinterpret_cast<uint32_t*>(&r10_8) = rbx9->f60;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_8) + 4) = 0;
        r10_10 = reinterpret_cast<unsigned char*>(r10_8 + rdi);
    } else {
        *reinterpret_cast<int32_t*>(&r10_11) = *reinterpret_cast<int32_t*>(0x37c0 + rcx7 * 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_11) + 4) = 0;
        r10_10 = reinterpret_cast<unsigned char*>(r10_11 + rbx12);
    }
    *reinterpret_cast<uint32_t*>(&r9_13) = *r10_10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_13) + 4) = 0;
    ecx14 = reinterpret_cast<int32_t>(r14d4 & 56) >> 3;
    r11d15 = r14d4 & 0xf8;
    if (r11d15) {
        if (*reinterpret_cast<signed char*>(&r11d15) == 8) {
            ecx16 = *reinterpret_cast<uint32_t*>(&r9_13);
            *reinterpret_cast<unsigned char*>(&r9_13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9_13) >> 1);
            ecx17 = ecx16 & 1;
            eax18 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ecx17)) << 7 | *reinterpret_cast<uint32_t*>(&r9_13);
            *r10_10 = *reinterpret_cast<unsigned char*>(&eax18);
            edx19 = (edx - (edx + reinterpret_cast<uint1_t>(edx < edx + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax18) < 1))) & 0xffffff80) + 16;
            eax20 = eax18 - (eax18 + reinterpret_cast<uint1_t>(eax18 < eax18 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax18) < 1))) & 0xffffff80;
            rbx21->f54 = *reinterpret_cast<signed char*>(&eax20);
            if (!*reinterpret_cast<unsigned char*>(&ecx17)) {
                addr_1fe9_7:
                eax22 = rbx23->f64;
            } else {
                rbx24->f54 = *reinterpret_cast<signed char*>(&edx19);
                eax22 = rbx25->f64;
            }
        } else {
            if (*reinterpret_cast<signed char*>(&r11d15) == 16) {
                eax26 = rbx27->f54;
                edx28 = static_cast<uint32_t>(r9_13 + r9_13);
                *reinterpret_cast<unsigned char*>(&eax26) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax26) >> 4);
                eax29 = eax26 & 1 | edx28;
                *r10_10 = *reinterpret_cast<unsigned char*>(&eax29);
                edx30 = edx28 - (edx28 + reinterpret_cast<uint1_t>(edx28 < edx28 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&eax29) < 1))) & 0xffffff80;
                if (!*reinterpret_cast<unsigned char*>(&eax29)) {
                    r11d15 = 0xffffff90;
                }
                rbx31->f54 = *reinterpret_cast<signed char*>(&edx30);
                if (*reinterpret_cast<signed char*>(&r9_13) >= reinterpret_cast<signed char>(0)) 
                    goto addr_1fe9_7;
                rbx32->f54 = *reinterpret_cast<signed char*>(&r11d15);
                eax22 = rbx33->f64;
            } else {
                if (*reinterpret_cast<signed char*>(&r11d15) == 24) {
                    eax34 = *reinterpret_cast<uint32_t*>(&r9_13);
                    *reinterpret_cast<unsigned char*>(&eax34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax34) >> 1);
                    edx35 = static_cast<uint32_t>(rbx36->f54) & 16;
                    edx37 = ~(edx35 - (edx35 + reinterpret_cast<uint1_t>(edx35 < edx35 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx35) < 1)))) & 0xffffff80 | eax34;
                    goto addr_2715_16;
                } else {
                    if (*reinterpret_cast<signed char*>(&r11d15) == 32) {
                        edx38 = static_cast<uint32_t>(r9_13 + r9_13);
                        *r10_10 = *reinterpret_cast<unsigned char*>(&edx38);
                        eax39 = (eax40 - (eax41 + reinterpret_cast<uint1_t>(eax42 < eax43 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx38) < 1))) & 0xffffff80) + 16;
                        edx44 = edx38 - (edx38 + reinterpret_cast<uint1_t>(edx38 < edx38 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx38) < 1))) & 0xffffff80;
                        rbx45->f54 = *reinterpret_cast<signed char*>(&edx44);
                        if (*reinterpret_cast<signed char*>(&r9_13) >= reinterpret_cast<signed char>(0)) {
                            goto addr_1fe9_7;
                        }
                    } else {
                        if (*reinterpret_cast<signed char*>(&r11d15) == 40) {
                            eax34 = *reinterpret_cast<uint32_t*>(&r9_13);
                            *reinterpret_cast<unsigned char*>(&eax34) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax34) >> 1);
                            edx37 = *reinterpret_cast<uint32_t*>(&r9_13) & 0xffffff80 | eax34;
                            goto addr_2715_16;
                        } else {
                            if (*reinterpret_cast<signed char*>(&r11d15) == 48) {
                                __asm__("rol r9b, 0x4");
                                *r10_10 = *reinterpret_cast<unsigned char*>(&r9_13);
                                eax46 = eax47 - (eax48 + reinterpret_cast<uint1_t>(eax49 < eax50 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&r9_13) < 1))) & 0xffffff80;
                                rbx51->f54 = *reinterpret_cast<signed char*>(&eax46);
                                eax22 = rbx52->f64;
                            } else {
                                if (*reinterpret_cast<signed char*>(&r11d15) == 56) {
                                    edx37 = *reinterpret_cast<uint32_t*>(&r9_13);
                                    *reinterpret_cast<unsigned char*>(&edx37) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx37) >> 1);
                                    goto addr_2715_16;
                                } else {
                                    r14d53 = r14d4 & 0xffffffc0;
                                    if (*reinterpret_cast<signed char*>(&r14d53) == 64) {
                                        esi54 = static_cast<uint32_t>(rbx55->f54) & 63;
                                        edi56 = esi54 | 32;
                                        rbx57->f54 = *reinterpret_cast<signed char*>(&edi56);
                                        if (!static_cast<int1_t>(*reinterpret_cast<uint32_t*>(&r9_13) >> ecx14)) {
                                            esi58 = esi54 | 0xffffffa0;
                                            rbx59->f54 = *reinterpret_cast<signed char*>(&esi58);
                                        }
                                    } else {
                                        if (*reinterpret_cast<signed char*>(&r14d53) == 0x80) {
                                            r9d60 = *reinterpret_cast<uint32_t*>(&r9_13) & reinterpret_cast<uint32_t>(~(1 << *reinterpret_cast<unsigned char*>(&ecx14)));
                                            *r10_10 = *reinterpret_cast<unsigned char*>(&r9d60);
                                            eax22 = rbx61->f64;
                                        } else {
                                            if (*reinterpret_cast<signed char*>(&r14d53) == -64) {
                                                r9d62 = *reinterpret_cast<uint32_t*>(&r9_13) | 1 << *reinterpret_cast<unsigned char*>(&ecx14);
                                                *r10_10 = *reinterpret_cast<unsigned char*>(&r9d62);
                                                goto addr_1fe9_7;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        edx63 = *reinterpret_cast<uint32_t*>(&r9_13);
        __asm__("rol dl, 1");
        *r10_10 = *reinterpret_cast<unsigned char*>(&edx63);
        eax39 = (eax64 - (eax65 + reinterpret_cast<uint1_t>(eax66 < eax67 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx63) < 1))) & 0xffffff80) + 16;
        if (!*reinterpret_cast<unsigned char*>(&edx63)) {
            r11d15 = 0xffffff80;
        }
        rbx68->f54 = *reinterpret_cast<signed char*>(&r11d15);
        if (*reinterpret_cast<signed char*>(&r9_13) >= reinterpret_cast<signed char>(0)) 
            goto addr_1fe9_7; else 
            goto addr_1fb9_37;
    }
    addr_1fc3_38:
    eax69 = eax22 + 2;
    rbx70->f64 = *reinterpret_cast<int16_t*>(&eax69);
    goto 0x18b8;
    addr_2715_16:
    *r10_10 = *reinterpret_cast<unsigned char*>(&edx37);
    eax39 = (eax34 - (eax34 + reinterpret_cast<uint1_t>(eax34 < eax34 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx37) < 1))) & 0xffffff80) + 16;
    edx71 = edx37 - (edx37 + reinterpret_cast<uint1_t>(edx37 < edx37 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edx37) < 1))) & 0xffffff80;
    rbx72->f54 = *reinterpret_cast<signed char*>(&edx71);
    if (!(*reinterpret_cast<uint32_t*>(&r9_13) & 1)) 
        goto addr_1fe9_7;
    addr_1fb9_37:
    rbx73->f54 = *reinterpret_cast<signed char*>(&eax39);
    eax22 = rbx74->f64;
    goto addr_1fc3_38;
}

struct s310 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s311 {
    signed char[62] pad62;
    int16_t f62;
};

struct s312 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_28a7(int64_t rdi) {
    int64_t rcx2;
    struct s310* rbx3;
    int64_t rax4;
    uint32_t ecx5;
    int32_t eax6;
    struct s311* rbx7;
    struct s312* rbx8;

    *reinterpret_cast<uint32_t*>(&rcx2) = rbx3->f62;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    rax4 = rcx2;
    ecx5 = *reinterpret_cast<uint16_t*>(rdi + rcx2);
    eax6 = *reinterpret_cast<int32_t*>(&rax4) + 2;
    rbx7->f62 = *reinterpret_cast<int16_t*>(&eax6);
    rbx8->f64 = *reinterpret_cast<int16_t*>(&ecx5);
    goto 0x18b8;
}

struct s313 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s314 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s315 {
    signed char[54] pad54;
    signed char f54;
};

struct s316 {
    signed char[54] pad54;
    signed char f54;
};

struct s317 {
    signed char[54] pad54;
    signed char f54;
};

struct s318 {
    signed char[54] pad54;
    signed char f54;
};

struct s319 {
    signed char[55] pad55;
    signed char f55;
};

struct s320 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_28f1() {
    uint32_t edi1;
    struct s313* r8_2;
    uint32_t esi3;
    struct s314* rbx4;
    struct s315* rbx5;
    uint32_t esi6;
    uint32_t r9d7;
    uint32_t edi8;
    struct s316* rbx9;
    struct s317* rbx10;
    uint32_t edi11;
    struct s318* rbx12;
    int32_t eax13;
    int32_t eax14;
    struct s319* rbx15;
    struct s320* rbx16;

    edi1 = r8_2->f1;
    esi3 = rbx4->f55;
    rbx5->f54 = 0;
    esi6 = esi3 + edi1;
    if (*reinterpret_cast<signed char*>(&esi6)) {
        r9d7 = 16;
        edi8 = 0;
    } else {
        rbx9->f54 = 0x80;
        r9d7 = 0xffffff90;
        edi8 = 0xffffff80;
    }
    if (*reinterpret_cast<uint16_t*>(&esi6) > 0xff) {
        rbx10->f54 = *reinterpret_cast<signed char*>(&r9d7);
        edi8 = r9d7;
    }
    if ((edi1 & 15) + (esi3 & 15) & 16) {
        edi11 = edi8 | 32;
        rbx12->f54 = *reinterpret_cast<signed char*>(&edi11);
    }
    eax13 = eax14 + 2;
    rbx15->f55 = *reinterpret_cast<signed char*>(&esi6);
    rbx16->f64 = *reinterpret_cast<int16_t*>(&eax13);
    goto 0x18b8;
}

struct s321 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s322 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_29b7() {
    uint32_t eax1;
    struct s321* r8_2;
    struct s322* rbx3;

    eax1 = r8_2->f1;
    rbx3->f64 = *reinterpret_cast<int16_t*>(&eax1);
    goto 0x18b8;
}

struct s323 {
    signed char[54] pad54;
    signed char f54;
};

struct s324 {
    signed char[64] pad64;
    int16_t f64;
};

struct s325 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s326 {
    signed char[62] pad62;
    int16_t f62;
};

struct s327 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_29e3(int64_t rdi) {
    struct s323* rbx2;
    int32_t eax3;
    int32_t eax4;
    struct s324* rbx5;
    int64_t rcx6;
    struct s325* rbx7;
    int64_t rax8;
    uint32_t ecx9;
    int32_t eax10;
    struct s326* rbx11;
    struct s327* rbx12;

    if (rbx2->f54 < 0) {
        eax3 = eax4 + 1;
        rbx5->f64 = *reinterpret_cast<int16_t*>(&eax3);
        goto 0x18b8;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx6) = rbx7->f62;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
        rax8 = rcx6;
        ecx9 = *reinterpret_cast<uint16_t*>(rdi + rcx6);
        eax10 = *reinterpret_cast<int32_t*>(&rax8) + 2;
        rbx11->f62 = *reinterpret_cast<int16_t*>(&eax10);
        rbx12->f64 = *reinterpret_cast<int16_t*>(&ecx9);
        goto 0x18b8;
    }
}

struct s328 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s329 {
    signed char[64] pad64;
    int16_t f64;
};

struct s330 {
    signed char[1] pad1;
    signed char f1;
};

struct s331 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2a6e() {
    int32_t eax1;
    int32_t eax2;
    int1_t zf3;
    struct s328* rbx4;
    int32_t ecx5;
    struct s329* rbx6;
    struct s330* r8_7;
    int32_t eax8;
    struct s331* rbx9;

    eax1 = eax2 + 2;
    zf3 = (rbx4->f54 & 16) == 0;
    ecx5 = 2;
    rbx6->f64 = *reinterpret_cast<int16_t*>(&eax1);
    if (zf3) 
        goto 0x18b8;
    *reinterpret_cast<int16_t*>(&ecx5) = r8_7->f1;
    eax8 = eax1 + ecx5;
    rbx9->f64 = *reinterpret_cast<int16_t*>(&eax8);
    goto 0x18b8;
}

struct s332 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s333 {
    signed char[64] pad64;
    int16_t f64;
};

struct s334 {
    signed char[54] pad54;
    signed char f54;
};

void fun_2a9a() {
    uint32_t ecx1;
    struct s332* rbx2;
    int32_t eax3;
    int32_t eax4;
    struct s333* rbx5;
    uint32_t ecx6;
    struct s334* rbx7;

    ecx1 = rbx2->f54;
    eax3 = eax4 + 1;
    rbx5->f64 = *reinterpret_cast<int16_t*>(&eax3);
    ecx6 = ecx1 & 0xffffff9f | 16;
    rbx7->f54 = *reinterpret_cast<signed char*>(&ecx6);
    goto 0x18b8;
}

struct s335 {
    signed char[55] pad55;
    signed char f55;
};

struct s336 {
    signed char[55] pad55;
    signed char f55;
};

struct s337 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s338 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s339 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2ae4() {
    int32_t eax1;
    int32_t eax2;
    struct s335* rbx3;
    struct s336* rbx4;
    struct s337* rbx5;
    struct s338* rbx6;
    struct s339* rbx7;

    eax1 = eax2 + 1;
    rbx3->f55 = reinterpret_cast<signed char>(~rbx4->f55);
    rbx5->f54 = reinterpret_cast<unsigned char>(rbx6->f54 | 96);
    rbx7->f64 = *reinterpret_cast<int16_t*>(&eax1);
    goto 0x18b8;
}

struct s340 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s341 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s342 {
    signed char[55] pad55;
    signed char f55;
};

struct s343 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s344 {
    signed char[55] pad55;
    signed char f55;
};

struct s345 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s346 {
    signed char[55] pad55;
    signed char f55;
};

struct s347 {
    signed char[54] pad54;
    signed char f54;
};

struct s348 {
    signed char[54] pad54;
    signed char f54;
};

struct s349 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2b28(int64_t rdi) {
    uint32_t ecx2;
    struct s340* rbx3;
    uint32_t edx4;
    struct s341* rbx5;
    int32_t esi6;
    int32_t r8d7;
    uint32_t r9d8;
    uint32_t edx9;
    struct s342* rbx10;
    int64_t rsi11;
    struct s343* rbx12;
    struct s344* rbx13;
    struct s345* rbx14;
    struct s346* rbx15;
    uint32_t ecx16;
    struct s347* rbx17;
    uint32_t ecx18;
    struct s348* rbx19;
    int32_t eax20;
    int32_t eax21;
    struct s349* rbx22;

    ecx2 = rbx3->f54;
    if (!(*reinterpret_cast<unsigned char*>(&ecx2) & 64)) {
        edx4 = rbx5->f55;
        if (*reinterpret_cast<unsigned char*>(&edx4) > 0x99 || *reinterpret_cast<unsigned char*>(&ecx2) & 16) {
            ecx2 = ecx2 | 16;
            esi6 = 0x66;
            r8d7 = 96;
        } else {
            esi6 = 6;
            r8d7 = 0;
        }
        r9d8 = edx4 & 15;
        if (*reinterpret_cast<unsigned char*>(&r9d8) <= 9 && !(*reinterpret_cast<unsigned char*>(&ecx2) & 32)) {
            esi6 = r8d7;
        }
        edx9 = edx4 + esi6;
        rbx10->f55 = *reinterpret_cast<signed char*>(&edx9);
    } else {
        if (*reinterpret_cast<unsigned char*>(&ecx2) & 32) {
            *reinterpret_cast<uint32_t*>(&rsi11) = rbx12->f55;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = 0;
            edx9 = static_cast<uint32_t>(rsi11 - 6);
            rbx13->f55 = *reinterpret_cast<signed char*>(&edx9);
        } else {
            edx9 = rbx14->f55;
        }
        if (*reinterpret_cast<unsigned char*>(&ecx2) & 16) {
            edx9 = edx9 - 96;
            rbx15->f55 = *reinterpret_cast<signed char*>(&edx9);
        }
    }
    ecx16 = ecx2 & 95;
    rbx17->f54 = *reinterpret_cast<signed char*>(&ecx16);
    if (!*reinterpret_cast<signed char*>(&edx9)) {
        ecx18 = ecx16 | 0xffffff80;
        rbx19->f54 = *reinterpret_cast<signed char*>(&ecx18);
    }
    eax20 = eax21 + 1;
    rbx22->f64 = *reinterpret_cast<int16_t*>(&eax20);
    goto 0x18b8;
}

struct s350 {
    signed char[54] pad54;
    signed char f54;
};

struct s351 {
    signed char[64] pad64;
    int16_t f64;
};

struct s352 {
    signed char[1] pad1;
    signed char f1;
};

struct s353 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2bb0() {
    int32_t eax1;
    int32_t eax2;
    int1_t sf3;
    struct s350* rbx4;
    int32_t ecx5;
    struct s351* rbx6;
    struct s352* r8_7;
    int32_t eax8;
    struct s353* rbx9;

    eax1 = eax2 + 2;
    sf3 = rbx4->f54 < 0;
    ecx5 = 2;
    rbx6->f64 = *reinterpret_cast<int16_t*>(&eax1);
    if (sf3) 
        goto 0x18b8;
    *reinterpret_cast<int16_t*>(&ecx5) = r8_7->f1;
    eax8 = eax1 + ecx5;
    rbx9->f64 = *reinterpret_cast<int16_t*>(&eax8);
    goto 0x18b8;
}

struct s354 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s355 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s356 {
    signed char[64] pad64;
    int16_t f64;
};

struct s357 {
    signed char[55] pad55;
    signed char f55;
};

struct s358 {
    signed char[54] pad54;
    signed char f54;
};

void fun_2bdc() {
    uint32_t ecx1;
    struct s354* rbx2;
    uint32_t edi3;
    struct s355* rbx4;
    uint32_t esi5;
    int32_t eax6;
    int32_t eax7;
    struct s356* rbx8;
    uint32_t ecx9;
    struct s357* rbx10;
    uint32_t ecx11;
    struct s358* rbx12;

    ecx1 = rbx2->f55;
    edi3 = static_cast<uint32_t>(rbx4->f54) & 16;
    esi5 = ecx1 & 1;
    *reinterpret_cast<unsigned char*>(&ecx1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx1) >> 1);
    eax6 = eax7 + 1;
    rbx8->f64 = *reinterpret_cast<int16_t*>(&eax6);
    ecx9 = ecx1 | ~(edi3 - (edi3 + reinterpret_cast<uint1_t>(edi3 < edi3 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&edi3) < 1)))) & 0xffffff80;
    rbx10->f55 = *reinterpret_cast<signed char*>(&ecx9);
    ecx11 = -esi5 & 16;
    rbx12->f54 = *reinterpret_cast<signed char*>(&ecx11);
    goto 0x18b8;
}

void fun_2fa7() {
    int64_t v1;

    goto v1;
}

int64_t _Jv_RegisterClasses = 0;

int64_t _ITM_registerTMCloneTable = 0;

void fun_3012() {
    int64_t rax1;
    int64_t rax2;

    rax1 = _Jv_RegisterClasses;
    if (rax1) {
        rax1();
    }
    if (1) 
        goto 0x2fb0;
    rax2 = _ITM_registerTMCloneTable;
    if (!rax2) 
        goto 0x2fb0;
    goto rax2;
}

void fun_32e0() {
    return;
}

int64_t g203bc0 = 0;

void fun_a56() {
    goto g203bc0;
}

void fun_a36() {
    goto 0x9b0;
}

void fun_a66() {
    goto 0x9b0;
}

void fun_9e6() {
    goto 0x9b0;
}

void fun_9c6() {
    goto 0x9b0;
}

void fun_9f6() {
    goto 0x9b0;
}

void fun_a96() {
    goto 0x9b0;
}

void fun_aa6() {
    goto 0x9b0;
}

void fun_a86() {
    goto 0x9b0;
}

struct s359 {
    signed char[52] pad52;
    unsigned char f52;
};

struct s360 {
    signed char[52] pad52;
    unsigned char f52;
};

void fun_166c() {
    struct s359* rbx1;
    struct s360* rbx2;

    rbx1->f52 = reinterpret_cast<unsigned char>(rbx2->f52 | 64);
    goto 0x108b;
}

void fun_9d6() {
    goto 0x9b0;
}

struct s361 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s362 {
    signed char[64] pad64;
    int16_t f64;
};

struct s363 {
    signed char[55] pad55;
    signed char f55;
};

void fun_18eb(int64_t rdi) {
    int64_t rcx2;
    struct s361* r8_3;
    int32_t eax4;
    int32_t eax5;
    uint32_t ecx6;
    struct s362* rbx7;
    struct s363* rbx8;

    *reinterpret_cast<uint32_t*>(&rcx2) = r8_3->f1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    eax4 = eax5 + 3;
    ecx6 = *reinterpret_cast<unsigned char*>(rdi + rcx2);
    rbx7->f64 = *reinterpret_cast<int16_t*>(&eax4);
    rbx8->f55 = *reinterpret_cast<signed char*>(&ecx6);
    goto 0x18b8;
}

struct s364 {
    signed char[66] pad66;
    unsigned char f66;
};

struct s365 {
    signed char[66] pad66;
    unsigned char f66;
};

struct s366 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_19a8() {
    int32_t eax1;
    int32_t eax2;
    struct s364* rbx3;
    struct s365* rbx4;
    struct s366* rbx5;

    eax1 = eax2 + 1;
    rbx3->f66 = reinterpret_cast<unsigned char>(rbx4->f66 | 0xc0);
    rbx5->f64 = *reinterpret_cast<int16_t*>(&eax1);
    goto 0x18b8;
}

struct s367 {
    signed char[56] pad56;
    unsigned char f56;
};

struct s368 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s369 {
    signed char[64] pad64;
    int16_t f64;
};

struct s370 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1b05(int64_t rdi) {
    int64_t rax2;
    struct s367* rbx3;
    uint32_t edx4;
    struct s368* rbx5;
    struct s369* rbx6;
    struct s370* rbx7;

    *reinterpret_cast<uint32_t*>(&rax2) = rbx3->f56;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    edx4 = rbx5->f55;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax2) + 1) = 0xff;
    *reinterpret_cast<signed char*>(rdi + rax2) = *reinterpret_cast<signed char*>(&edx4);
    rbx6->f64 = reinterpret_cast<int16_t>(rbx7->f64 + 1);
    goto 0x18b8;
}

struct s371 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s372 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s373 {
    signed char[54] pad54;
    signed char f54;
};

struct s374 {
    signed char[54] pad54;
    signed char f54;
};

struct s375 {
    signed char[54] pad54;
    signed char f54;
};

struct s376 {
    signed char[54] pad54;
    signed char f54;
};

struct s377 {
    signed char[55] pad55;
    signed char f55;
};

struct s378 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1d00() {
    uint32_t edi1;
    struct s371* r8_2;
    uint32_t esi3;
    struct s372* rbx4;
    struct s373* rbx5;
    uint16_t si6;
    uint32_t r9d7;
    uint32_t edi8;
    struct s374* rbx9;
    struct s375* rbx10;
    uint32_t edi11;
    struct s376* rbx12;
    int32_t eax13;
    int32_t eax14;
    struct s377* rbx15;
    struct s378* rbx16;

    edi1 = r8_2->f1;
    esi3 = rbx4->f55;
    rbx5->f54 = 64;
    si6 = reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&esi3) - *reinterpret_cast<int16_t*>(&edi1));
    if (si6) {
        r9d7 = 80;
        edi8 = 64;
    } else {
        rbx9->f54 = -64;
        r9d7 = 0xffffffd0;
        edi8 = 0xffffffc0;
    }
    if (si6 > 0xff) {
        rbx10->f54 = *reinterpret_cast<signed char*>(&r9d7);
        edi8 = r9d7;
    }
    if ((esi3 & 15) - (edi1 & 15) & 16) {
        edi11 = edi8 | 32;
        rbx12->f54 = *reinterpret_cast<signed char*>(&edi11);
    }
    eax13 = eax14 + 2;
    rbx15->f55 = *reinterpret_cast<signed char*>(&si6);
    rbx16->f64 = *reinterpret_cast<int16_t*>(&eax13);
    goto 0x18b8;
}

struct s379 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s380 {
    signed char[64] pad64;
    int16_t f64;
};

struct s381 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s382 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s383 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s384 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1d6c(int64_t rdi) {
    int32_t eax2;
    int32_t eax3;
    int1_t zf4;
    struct s379* rbx5;
    struct s380* rbx6;
    uint32_t esi7;
    struct s381* r8_8;
    uint32_t ecx9;
    struct s382* rbx10;
    struct s383* rbx11;
    int64_t rcx12;
    struct s384* rbx13;

    eax2 = eax3 + 3;
    zf4 = (rbx5->f54 & 16) == 0;
    rbx6->f64 = *reinterpret_cast<int16_t*>(&eax2);
    if (!zf4) 
        goto 0x18b8;
    esi7 = r8_8->f1;
    ecx9 = rbx10->f62 - 2;
    rbx11->f62 = *reinterpret_cast<uint16_t*>(&ecx9);
    *reinterpret_cast<uint32_t*>(&rcx12) = *reinterpret_cast<uint16_t*>(&ecx9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
    *reinterpret_cast<int16_t*>(rdi + rcx12) = *reinterpret_cast<int16_t*>(&eax2);
    rbx13->f64 = *reinterpret_cast<int16_t*>(&esi7);
    goto 0x18b8;
}

struct s385 {
    signed char[54] pad54;
    signed char f54;
};

struct s386 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s387 {
    signed char[64] pad64;
    int16_t f64;
};

struct s388 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2890() {
    struct s385* rbx1;
    uint32_t eax2;
    struct s386* r8_3;
    struct s387* rbx4;
    int32_t eax5;
    int32_t eax6;
    struct s388* rbx7;

    if (rbx1->f54 < 0) {
        eax2 = r8_3->f1;
        rbx4->f64 = *reinterpret_cast<int16_t*>(&eax2);
        goto 0x18b8;
    } else {
        eax5 = eax6 + 3;
        rbx7->f64 = *reinterpret_cast<int16_t*>(&eax5);
        goto 0x18b8;
    }
}

struct s389 {
    signed char[54] pad54;
    signed char f54;
};

struct s390 {
    signed char[64] pad64;
    int16_t f64;
};

struct s391 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s392 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_29ca() {
    struct s389* rbx1;
    int32_t eax2;
    int32_t eax3;
    struct s390* rbx4;
    uint32_t eax5;
    struct s391* r8_6;
    struct s392* rbx7;

    if (rbx1->f54 < 0) {
        eax2 = eax3 + 3;
        rbx4->f64 = *reinterpret_cast<int16_t*>(&eax2);
        goto 0x18b8;
    } else {
        eax5 = r8_6->f1;
        rbx7->f64 = *reinterpret_cast<int16_t*>(&eax5);
        goto 0x18b8;
    }
}

struct s393 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s394 {
    signed char[64] pad64;
    int16_t f64;
};

struct s395 {
    signed char[1] pad1;
    signed char f1;
};

struct s396 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2ab8() {
    int32_t eax1;
    int32_t eax2;
    int1_t zf3;
    struct s393* rbx4;
    int32_t ecx5;
    struct s394* rbx6;
    struct s395* r8_7;
    int32_t eax8;
    struct s396* rbx9;

    eax1 = eax2 + 2;
    zf3 = (rbx4->f54 & 16) == 0;
    ecx5 = 2;
    rbx6->f64 = *reinterpret_cast<int16_t*>(&eax1);
    if (!zf3) 
        goto 0x18b8;
    *reinterpret_cast<int16_t*>(&ecx5) = r8_7->f1;
    eax8 = eax1 + ecx5;
    rbx9->f64 = *reinterpret_cast<int16_t*>(&eax8);
    goto 0x18b8;
}

struct s397 {
    signed char[54] pad54;
    signed char f54;
};

struct s398 {
    signed char[64] pad64;
    int16_t f64;
};

struct s399 {
    signed char[1] pad1;
    signed char f1;
};

struct s400 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2afc() {
    int32_t eax1;
    int32_t eax2;
    int1_t sf3;
    struct s397* rbx4;
    int32_t ecx5;
    struct s398* rbx6;
    struct s399* r8_7;
    int32_t eax8;
    struct s400* rbx9;

    eax1 = eax2 + 2;
    sf3 = rbx4->f54 < 0;
    ecx5 = 2;
    rbx6->f64 = *reinterpret_cast<int16_t*>(&eax1);
    if (!sf3) 
        goto 0x18b8;
    *reinterpret_cast<int16_t*>(&ecx5) = r8_7->f1;
    eax8 = eax1 + ecx5;
    rbx9->f64 = *reinterpret_cast<int16_t*>(&eax8);
    goto 0x18b8;
}

struct s401 {
    signed char[64] pad64;
    int16_t f64;
};

struct s402 {
    signed char[1] pad1;
    signed char f1;
};

struct s403 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2c26() {
    int32_t eax1;
    int32_t eax2;
    struct s401* rbx3;
    int32_t ecx4;
    struct s402* r8_5;
    int32_t eax6;
    struct s403* rbx7;

    eax1 = eax2 + 2;
    rbx3->f64 = *reinterpret_cast<int16_t*>(&eax1);
    *reinterpret_cast<int16_t*>(&ecx4) = r8_5->f1;
    eax6 = eax1 + ecx4;
    rbx7->f64 = *reinterpret_cast<int16_t*>(&eax6);
    goto 0x18b8;
}

struct s404 {
    signed char[8] pad8;
    int64_t f8;
};

void fun_ae0(int32_t edi, struct s404* rsi);

void fun_3270(int32_t edi, int64_t rsi, int64_t rdx);

void fun_2f00() {
    void* rsp1;
    int64_t rdx2;
    int64_t rax3;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    fun_a20(fun_ae0, __return_address(), rsp1, fun_3270, fun_32e0, rdx2, (reinterpret_cast<uint64_t>(rsp1) & 0xfffffffffffffff0) - 8 - 8, rax3);
    __asm__("hlt ");
}

signed char __bss_start = 0;

int64_t __cxa_finalize = 0;

int64_t g203c60 = 0x203c60;

int64_t fun_2fc0() {
    int1_t zf1;
    int1_t zf2;
    int64_t rdi3;
    int64_t rax4;

    zf1 = __bss_start == 0;
    if (zf1) {
        zf2 = __cxa_finalize == 0;
        if (!zf2) {
            rdi3 = g203c60;
            fun_ac0(rdi3);
        }
        rax4 = fun_2f30(rdi3);
        __bss_start = 1;
    }
    return rax4;
}

int64_t g203998 = 0;

void fun_3000() {
    int1_t zf1;

    zf1 = g203998 == 0;
    if (!zf1) 
        goto 0x3018; else 
        goto "???";
}

void fun_ac6() {
    goto 0x9b0;
}

void fun_a06() {
    goto 0x9b0;
}

void fun_ab6() {
    goto 0x9b0;
}

void fun_a76() {
    goto 0x9b0;
}

void fun_a46() {
    goto 0x9b0;
}

void fun_ad6() {
    goto 0x9b0;
}

void fun_a16() {
    goto 0x9b0;
}

struct s405 {
    signed char[52] pad52;
    unsigned char f52;
};

struct s406 {
    signed char[52] pad52;
    unsigned char f52;
};

void fun_1675() {
    struct s405* rbx1;
    struct s406* rbx2;

    rbx1->f52 = reinterpret_cast<unsigned char>(rbx2->f52 | 8);
    goto 0x108b;
}

struct s407 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s408 {
    signed char[64] pad64;
    int16_t f64;
};

struct s409 {
    signed char[62] pad62;
    int16_t f62;
};

void fun_1905() {
    uint32_t ecx1;
    struct s407* rbx2;
    int32_t eax3;
    int32_t eax4;
    struct s408* rbx5;
    struct s409* rbx6;

    ecx1 = rbx2->f60;
    eax3 = eax4 + 1;
    rbx5->f64 = *reinterpret_cast<int16_t*>(&eax3);
    rbx6->f62 = *reinterpret_cast<int16_t*>(&ecx1);
    goto 0x18b8;
}

struct s410 {
    signed char[56] pad56;
    unsigned char f56;
};

struct s411 {
    signed char[64] pad64;
    int16_t f64;
};

struct s412 {
    signed char[55] pad55;
    signed char f55;
};

void fun_19bd(int64_t rdi) {
    int64_t rcx2;
    struct s410* rbx3;
    int32_t eax4;
    int32_t eax5;
    uint32_t ecx6;
    struct s411* rbx7;
    struct s412* rbx8;

    *reinterpret_cast<uint32_t*>(&rcx2) = rbx3->f56;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    eax4 = eax5 + 1;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx2) + 1) = 0xff;
    ecx6 = *reinterpret_cast<unsigned char*>(rdi + rcx2);
    rbx7->f64 = *reinterpret_cast<int16_t*>(&eax4);
    rbx8->f55 = *reinterpret_cast<signed char*>(&ecx6);
    goto 0x18b8;
}

struct s413 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s414 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s415 {
    signed char[64] pad64;
    int16_t f64;
};

struct s416 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1b25(int64_t rdi) {
    int64_t rax2;
    struct s413* r8_3;
    uint32_t edx4;
    struct s414* rbx5;
    struct s415* rbx6;
    struct s416* rbx7;

    *reinterpret_cast<uint32_t*>(&rax2) = r8_3->f1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    edx4 = rbx5->f55;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax2) + 1) = 0xff;
    *reinterpret_cast<signed char*>(rdi + rax2) = *reinterpret_cast<signed char*>(&edx4);
    rbx6->f64 = reinterpret_cast<int16_t>(rbx7->f64 + 2);
    goto 0x18b8;
}

struct s417 {
    signed char[56] pad56;
    unsigned char f56;
};

struct s418 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s419 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s420 {
    signed char[54] pad54;
    signed char f54;
};

struct s421 {
    signed char[54] pad54;
    signed char f54;
};

struct s422 {
    signed char[54] pad54;
    signed char f54;
};

struct s423 {
    signed char[54] pad54;
    signed char f54;
};

struct s424 {
    signed char[54] pad54;
    signed char f54;
};

struct s425 {
    signed char[64] pad64;
    int16_t f64;
};

struct s426 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1be4(int64_t rdi) {
    int64_t rax2;
    struct s417* rbx3;
    uint32_t esi4;
    struct s418* rbx5;
    uint32_t edx6;
    struct s419* rbx7;
    unsigned char* rdi8;
    uint32_t esi9;
    uint32_t ecx10;
    struct s420* rbx11;
    uint32_t ecx12;
    uint32_t r9d13;
    uint32_t edx14;
    struct s421* rbx15;
    struct s422* rbx16;
    struct s423* rbx17;
    uint32_t eax18;
    uint32_t eax19;
    struct s424* rbx20;
    struct s425* rbx21;
    struct s426* rbx22;

    *reinterpret_cast<uint32_t*>(&rax2) = rbx3->f56;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    esi4 = rbx5->f54;
    edx6 = rbx7->f55;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rax2) + 1) = 0xff;
    *reinterpret_cast<unsigned char*>(&esi4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&esi4) >> 4);
    rdi8 = reinterpret_cast<unsigned char*>(rdi + rax2);
    esi9 = esi4 & 1;
    ecx10 = *rdi8;
    rbx11->f54 = 64;
    ecx12 = ecx10 - edx6 - *reinterpret_cast<unsigned char*>(&esi9);
    if (*reinterpret_cast<unsigned char*>(&ecx12)) {
        r9d13 = 80;
        edx14 = 64;
    } else {
        rbx15->f54 = -64;
        r9d13 = 0xffffffd0;
        edx14 = 0xffffffc0;
    }
    if (*reinterpret_cast<uint16_t*>(&ecx12) > 0xff) {
        rbx16->f54 = *reinterpret_cast<signed char*>(&r9d13);
        edx14 = r9d13;
    }
    if ((ecx10 & 15) - (edx6 & 15) & 16) {
        edx14 = edx14 | 32;
        rbx17->f54 = *reinterpret_cast<signed char*>(&edx14);
    }
    eax18 = (ecx10 - edx6 & 15) - esi9;
    if (*reinterpret_cast<unsigned char*>(&eax18) & 16) {
        eax19 = edx14 | 32;
        rbx20->f54 = *reinterpret_cast<signed char*>(&eax19);
    }
    *rdi8 = *reinterpret_cast<unsigned char*>(&ecx12);
    rbx21->f64 = reinterpret_cast<int16_t>(rbx22->f64 + 1);
    goto 0x18b8;
}

struct s427 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s428 {
    signed char[64] pad64;
    int16_t f64;
};

struct s429 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s430 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s431 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s432 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1c84(int64_t rdi) {
    int32_t eax2;
    int32_t eax3;
    int1_t zf4;
    struct s427* rbx5;
    struct s428* rbx6;
    uint32_t esi7;
    struct s429* r8_8;
    uint32_t ecx9;
    struct s430* rbx10;
    struct s431* rbx11;
    int64_t rcx12;
    struct s432* rbx13;

    eax2 = eax3 + 3;
    zf4 = (rbx5->f54 & 16) == 0;
    rbx6->f64 = *reinterpret_cast<int16_t*>(&eax2);
    if (zf4) 
        goto 0x18b8;
    esi7 = r8_8->f1;
    ecx9 = rbx10->f62 - 2;
    rbx11->f62 = *reinterpret_cast<uint16_t*>(&ecx9);
    *reinterpret_cast<uint32_t*>(&rcx12) = *reinterpret_cast<uint16_t*>(&ecx9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
    *reinterpret_cast<int16_t*>(rdi + rcx12) = *reinterpret_cast<int16_t*>(&eax2);
    rbx13->f64 = *reinterpret_cast<int16_t*>(&esi7);
    goto 0x18b8;
}

struct s433 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s434 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s435 {
    signed char[64] pad64;
    int16_t f64;
};

struct s436 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1def() {
    struct s433* rbx1;
    uint32_t eax2;
    struct s434* r8_3;
    struct s435* rbx4;
    int32_t eax5;
    int32_t eax6;
    struct s436* rbx7;

    if (!(rbx1->f54 & 16)) {
        eax2 = r8_3->f1;
        rbx4->f64 = *reinterpret_cast<int16_t*>(&eax2);
        goto 0x18b8;
    } else {
        eax5 = eax6 + 3;
        rbx7->f64 = *reinterpret_cast<int16_t*>(&eax5);
        goto 0x18b8;
    }
}

struct s437 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s438 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s439 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s440 {
    signed char[54] pad54;
    signed char f54;
};

struct s441 {
    signed char[54] pad54;
    signed char f54;
};

struct s442 {
    signed char[54] pad54;
    signed char f54;
};

struct s443 {
    signed char[54] pad54;
    signed char f54;
};

struct s444 {
    signed char[54] pad54;
    signed char f54;
};

struct s445 {
    signed char[55] pad55;
    signed char f55;
};

struct s446 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1e50() {
    uint32_t esi1;
    struct s437* rbx2;
    uint32_t r9d3;
    struct s438* r8_4;
    uint32_t ecx5;
    struct s439* rbx6;
    struct s440* rbx7;
    uint32_t esi8;
    uint32_t edi9;
    uint32_t r10d10;
    uint32_t ecx11;
    struct s441* rbx12;
    struct s442* rbx13;
    struct s443* rbx14;
    uint32_t ecx15;
    struct s444* rbx16;
    int32_t eax17;
    int32_t eax18;
    struct s445* rbx19;
    struct s446* rbx20;

    esi1 = rbx2->f54;
    r9d3 = r8_4->f1;
    ecx5 = rbx6->f55;
    rbx7->f54 = 0;
    *reinterpret_cast<unsigned char*>(&esi1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&esi1) >> 4);
    esi8 = esi1 & 1;
    edi9 = *reinterpret_cast<unsigned char*>(&r9d3) + (ecx5 + *reinterpret_cast<unsigned char*>(&esi8));
    if (*reinterpret_cast<signed char*>(&edi9)) {
        r10d10 = 16;
        ecx11 = 0;
    } else {
        rbx12->f54 = 0x80;
        r10d10 = 0xffffff90;
        ecx11 = 0xffffff80;
    }
    if (*reinterpret_cast<uint16_t*>(&edi9) > 0xff) {
        rbx13->f54 = *reinterpret_cast<signed char*>(&r10d10);
        ecx11 = r10d10;
    }
    if ((r9d3 & 15) + (ecx5 & 15) & 16) {
        ecx11 = ecx11 | 32;
        rbx14->f54 = *reinterpret_cast<signed char*>(&ecx11);
    }
    if (esi8 + (ecx5 + r9d3 & 15) & 16) {
        ecx15 = ecx11 | 32;
        rbx16->f54 = *reinterpret_cast<signed char*>(&ecx15);
    }
    eax17 = eax18 + 2;
    rbx19->f55 = *reinterpret_cast<signed char*>(&edi9);
    rbx20->f64 = *reinterpret_cast<int16_t*>(&eax17);
    goto 0x18b8;
}

struct s447 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s448 {
    signed char[64] pad64;
    int16_t f64;
};

struct s449 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s450 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s451 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1eea(int64_t rdi) {
    uint32_t ecx2;
    struct s447* rbx3;
    int32_t eax4;
    int32_t eax5;
    struct s448* rbx6;
    uint32_t esi7;
    struct s449* r8_8;
    uint32_t ecx9;
    struct s450* rbx10;
    int64_t rcx11;
    struct s451* rbx12;

    ecx2 = rbx3->f62;
    eax4 = eax5 + 3;
    rbx6->f64 = *reinterpret_cast<int16_t*>(&eax4);
    esi7 = r8_8->f1;
    ecx9 = ecx2 - 2;
    rbx10->f62 = *reinterpret_cast<uint16_t*>(&ecx9);
    *reinterpret_cast<uint32_t*>(&rcx11) = *reinterpret_cast<uint16_t*>(&ecx9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
    *reinterpret_cast<int16_t*>(rdi + rcx11) = *reinterpret_cast<int16_t*>(&eax4);
    rbx12->f64 = *reinterpret_cast<int16_t*>(&esi7);
    goto 0x18b8;
}

void fun_3270(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t r15d4;
    int64_t r14_5;
    int64_t r13_6;
    int64_t rbx7;
    int64_t rdi8;

    r15d4 = edi;
    r14_5 = rsi;
    r13_6 = rdx;
    *reinterpret_cast<int32_t*>(&rbx7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
    fun_990();
    if (!0) {
        do {
            *reinterpret_cast<int32_t*>(&rdi8) = r15d4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
            *reinterpret_cast<int64_t*>(0x203988 + rbx7 * 8)(rdi8, r14_5, r13_6);
            ++rbx7;
        } while (rbx7 != 1);
    }
    return;
}

struct s452 {
    signed char[54] pad54;
    signed char f54;
};

struct s453 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s454 {
    signed char[62] pad62;
    int16_t f62;
};

struct s455 {
    signed char[64] pad64;
    int16_t f64;
};

struct s456 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_28da(int64_t rdi) {
    struct s452* rbx2;
    int64_t rcx3;
    struct s453* rbx4;
    int64_t rax5;
    uint32_t ecx6;
    int32_t eax7;
    struct s454* rbx8;
    struct s455* rbx9;
    int32_t eax10;
    int32_t eax11;
    struct s456* rbx12;

    if (rbx2->f54 < 0) {
        *reinterpret_cast<uint32_t*>(&rcx3) = rbx4->f62;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = 0;
        rax5 = rcx3;
        ecx6 = *reinterpret_cast<uint16_t*>(rdi + rcx3);
        eax7 = *reinterpret_cast<int32_t*>(&rax5) + 2;
        rbx8->f62 = *reinterpret_cast<int16_t*>(&eax7);
        rbx9->f64 = *reinterpret_cast<int16_t*>(&ecx6);
        goto 0x18b8;
    } else {
        eax10 = eax11 + 1;
        rbx12->f64 = *reinterpret_cast<int16_t*>(&eax10);
        goto 0x18b8;
    }
}

struct s457 {
    signed char[54] pad54;
    signed char f54;
};

struct s458 {
    signed char[64] pad64;
    int16_t f64;
};

struct s459 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s460 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s461 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s462 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_297c(int64_t rdi) {
    int32_t eax2;
    int32_t eax3;
    int1_t sf4;
    struct s457* rbx5;
    struct s458* rbx6;
    uint32_t esi7;
    struct s459* r8_8;
    uint32_t ecx9;
    struct s460* rbx10;
    struct s461* rbx11;
    int64_t rcx12;
    struct s462* rbx13;

    eax2 = eax3 + 3;
    sf4 = rbx5->f54 < 0;
    rbx6->f64 = *reinterpret_cast<int16_t*>(&eax2);
    if (sf4) 
        goto 0x18b8;
    esi7 = r8_8->f1;
    ecx9 = rbx10->f62 - 2;
    rbx11->f62 = *reinterpret_cast<uint16_t*>(&ecx9);
    *reinterpret_cast<uint32_t*>(&rcx12) = *reinterpret_cast<uint16_t*>(&ecx9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
    *reinterpret_cast<int16_t*>(rdi + rcx12) = *reinterpret_cast<int16_t*>(&eax2);
    rbx13->f64 = *reinterpret_cast<int16_t*>(&esi7);
    goto 0x18b8;
}

struct s463 {
    signed char[68] pad68;
    int32_t f68;
};

struct s464 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2a2b() {
    int32_t eax1;
    int32_t eax2;
    struct s463* rbx3;
    struct s464* rbx4;

    eax1 = eax2 + 1;
    rbx3->f68 = 1;
    rbx4->f64 = *reinterpret_cast<int16_t*>(&eax1);
    goto 0x18b8;
}

struct s465 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s466 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s467 {
    signed char[64] pad64;
    int16_t f64;
};

struct s468 {
    signed char[54] pad54;
    signed char f54;
};

struct s469 {
    signed char[55] pad55;
    signed char f55;
};

void fun_2c43() {
    int64_t rcx1;
    struct s465* rbx2;
    uint32_t esi3;
    struct s466* rbx4;
    int32_t eax5;
    int32_t eax6;
    struct s467* rbx7;
    uint32_t edi8;
    uint32_t ecx9;
    uint32_t esi10;
    struct s468* rbx11;
    struct s469* rbx12;

    *reinterpret_cast<uint32_t*>(&rcx1) = rbx2->f55;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    esi3 = rbx4->f54;
    eax5 = eax6 + 1;
    rbx7->f64 = *reinterpret_cast<int16_t*>(&eax5);
    edi8 = static_cast<uint32_t>(rcx1 + rcx1);
    *reinterpret_cast<unsigned char*>(&esi3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&esi3) >> 4);
    *reinterpret_cast<signed char*>(&rcx1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rcx1) >> 7);
    ecx9 = *reinterpret_cast<uint32_t*>(&rcx1) & 16;
    esi10 = esi3 & 1 | edi8;
    rbx11->f54 = *reinterpret_cast<signed char*>(&ecx9);
    rbx12->f55 = *reinterpret_cast<signed char*>(&esi10);
    goto 0x18b8;
}

int64_t* stdin = reinterpret_cast<int64_t*>(0);

int64_t* stderr = reinterpret_cast<int64_t*>(0);

void fun_ae0(int32_t edi, struct s404* rsi) {
    int32_t* rsi3;
    struct s0* rax4;
    struct s0* rbx5;
    struct s0* rax6;
    struct s0* rbp7;
    struct s0* rax8;
    struct s0* rax9;
    struct s0* rdx10;
    int64_t rcx11;
    int64_t rdi12;
    struct s0* rax13;
    int64_t* rax14;
    int64_t rax15;
    struct s0* rdi16;
    struct s0* r12_17;
    struct s0* rax18;
    int64_t* rax19;
    int64_t rdi20;
    int64_t* rax21;
    int64_t rdi22;
    int64_t* rax23;
    int64_t rdi24;
    struct s0* rax25;

    *reinterpret_cast<int32_t*>(&rsi3) = 0x68;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
    rax4 = fun_a30(1, 0x68);
    rbx5 = rax4;
    if (rax4 && ((rax6 = fun_a30(1, 0x10002), rbp7 = rax6, rbx5->f0 = rax6, rax8 = fun_a30(1, 0x5a00), *reinterpret_cast<int32_t*>(&rsi3) = 0x10000, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0, rbx5->f32 = rax8, rax9 = fun_a30(1, 0x10000), rdx10 = rax9, rbx5->f24 = rax9, *reinterpret_cast<unsigned char*>(&rcx11) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rbp7 == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax8 == 0))), !*reinterpret_cast<unsigned char*>(&rcx11)) && rdx10)) {
        rbx5->f8 = reinterpret_cast<int64_t>(rbp7) + 0xfe00;
        if (edi > 1) {
            rdi12 = rsi->f8;
            *reinterpret_cast<int32_t*>(&rdx10) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi3) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
            fun_a60(rdi12);
        }
        fun_9f0(0x3304, rsi3);
        *reinterpret_cast<int32_t*>(&rsi3) = 0x8000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
        rax13 = fun_a30(1, 0x8000);
        rbp7 = rax13;
        if (rax13) {
            rax14 = stdin;
            *reinterpret_cast<int32_t*>(&rdx10) = 0x8000;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rsi3) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
            rcx11 = *rax14;
            rax15 = fun_9e0(rbp7, 1, 0x8000, rcx11);
            if (rax15 == 0x8000) 
                goto addr_beb_6; else 
                goto addr_bd9_7;
        }
    }
    while (1) {
        fun_ab0(1, rsi3, rdx10, rcx11);
        addr_beb_6:
        rdi16 = rbx5->f0;
        fun_a70(rdi16, rbp7, 0x8000, rcx11);
        r12_17 = rbx5->f0;
        rax18 = fun_3030(reinterpret_cast<int64_t>(r12_17) + 0x100, rbp7, 0x8000, rcx11);
        rbx5->f16 = rax18;
        rdx10 = rax18;
        rax19 = stderr;
        rsi3 = reinterpret_cast<int32_t*>(0x3309);
        rdi20 = *rax19;
        fun_a40(rdi20, 0x3309, rdx10, rcx11);
        if (!r12_17->f328) 
            break;
        addr_bd9_7:
        fun_9c0(rbp7, rsi3, rdx10, rcx11);
    }
    fun_9c0(rbp7, 0x3309, rdx10, rcx11);
    fun_9f0(0x3322, 0x3309, 0x3322, 0x3309);
    rax21 = stdout;
    rdi22 = *rax21;
    fun_a90(rdi22, 0x3309, rdi22, 0x3309);
    rax23 = stdout;
    rdi24 = *rax23;
    fun_aa0(rdi24);
    rax25 = rbx5->f0;
    rbx5->f54 = 0x1b0;
    rbx5->f56 = 19;
    rbx5->f58 = 0xd8;
    rbx5->f60 = 0x14d;
    rbx5->f62 = -2;
    rbx5->f64 = 0x100;
    rax25->f65285 = 0;
    rbx5->f0->f65286 = 0;
    rbx5->f0->f65287 = 0;
    rbx5->f0->f65296 = 0x80;
    rbx5->f0->f65297 = -65;
    rbx5->f0->f65298 = -13;
    rbx5->f0->f65300 = -65;
    rbx5->f0->f65302 = 63;
    rbx5->f0->f65303 = 0;
    rbx5->f0->f65305 = -65;
    rbx5->f0->f65306 = 0x7f;
    rbx5->f0->f65307 = -1;
    rbx5->f0->f65308 = -97;
    rbx5->f0->f65309 = -65;
    rbx5->f0->f65312 = -1;
    rbx5->f0->f65313 = 0;
    rbx5->f0->f65314 = 0;
    rbx5->f0->f65315 = -65;
    rbx5->f0->f65316 = 0x77;
    rbx5->f0->f65317 = -13;
    rbx5->f0->f65318 = -15;
    rbx5->f0->f65344 = 0x90;
    rbx5->f0->f65346 = 0;
    rbx5->f0->f65347 = 0;
    rbx5->f0->f65349 = 0;
    rbx5->f0->f65351 = -4;
    rbx5->f0->f65352 = -1;
    rbx5->f0->f65353 = -1;
    rbx5->f0->f65354 = 0;
    rbx5->f0->f65355 = 0;
    rbx5->f0->f65535 = 0;
    rbx5->f0->f65350 = -1;
    rbx5->f80 = 0;
    rbx5->f88 = 0;
    rbx5->f92 = 0;
    rbx5->f96 = 0;
    rbx5->f84 = 0;
    rbx5->f52 = 0;
    rbx5->f68 = 0;
    rbx5->f72 = 0x41000000;
    rbx5->f76 = 0;
    goto 0x1025;
}

struct s470 {
    signed char[52] pad52;
    unsigned char f52;
};

struct s471 {
    signed char[52] pad52;
    unsigned char f52;
};

void fun_167e() {
    struct s470* rbx1;
    struct s471* rbx2;

    rbx1->f52 = reinterpret_cast<unsigned char>(rbx2->f52 | 16);
    goto 0x108b;
}

struct s472 {
    signed char[1] pad1;
    signed char f1;
};

struct s473 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s474 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s475 {
    signed char[54] pad54;
    signed char f54;
};

struct s476 {
    signed char[54] pad54;
    signed char f54;
};

struct s477 {
    signed char[60] pad60;
    int16_t f60;
};

struct s478 {
    signed char[64] pad64;
    int16_t f64;
};

struct s479 {
    signed char[54] pad54;
    signed char f54;
};

void fun_191b() {
    uint32_t esi1;
    struct s472* r8_2;
    uint32_t edi3;
    struct s473* rbx4;
    uint32_t edi5;
    uint32_t ecx6;
    struct s474* rbx7;
    struct s475* rbx8;
    struct s476* rbx9;
    struct s477* rbx10;
    int32_t eax11;
    int32_t eax12;
    uint32_t ecx13;
    struct s478* rbx14;
    struct s479* rbx15;

    *reinterpret_cast<uint16_t*>(&esi1) = reinterpret_cast<uint16_t>(static_cast<int16_t>(r8_2->f1));
    edi3 = rbx4->f62;
    edi5 = edi3 + *reinterpret_cast<uint16_t*>(&esi1);
    ecx6 = static_cast<uint32_t>(rbx7->f54) & 0xffffff8f;
    rbx8->f54 = *reinterpret_cast<signed char*>(&ecx6);
    if (reinterpret_cast<int32_t>(edi5) > reinterpret_cast<int32_t>(0xffff)) {
        ecx6 = ecx6 | 16;
        rbx9->f54 = *reinterpret_cast<signed char*>(&ecx6);
    }
    rbx10->f60 = *reinterpret_cast<int16_t*>(&edi5);
    if ((esi1 & 0xfff) + (edi3 & 0xfff) & 0x1000) {
        ecx6 = ecx6 | 32;
    }
    eax11 = eax12 + 2;
    ecx13 = ecx6 & 0x7f;
    rbx14->f64 = *reinterpret_cast<int16_t*>(&eax11);
    rbx15->f54 = *reinterpret_cast<signed char*>(&ecx13);
    goto 0x18b8;
}

struct s480 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s481 {
    signed char[64] pad64;
    int16_t f64;
};

struct s482 {
    signed char[55] pad55;
    signed char f55;
};

void fun_19dc(int64_t rdi) {
    int64_t rcx2;
    struct s480* r8_3;
    int32_t eax4;
    int32_t eax5;
    uint32_t ecx6;
    struct s481* rbx7;
    struct s482* rbx8;

    *reinterpret_cast<uint32_t*>(&rcx2) = r8_3->f1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = 0;
    eax4 = eax5 + 2;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&rcx2) + 1) = 0xff;
    ecx6 = *reinterpret_cast<unsigned char*>(rdi + rcx2);
    rbx7->f64 = *reinterpret_cast<int16_t*>(&eax4);
    rbx8->f55 = *reinterpret_cast<signed char*>(&ecx6);
    goto 0x18b8;
}

struct s483 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s484 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s485 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s486 {
    signed char[54] pad54;
    signed char f54;
};

struct s487 {
    signed char[54] pad54;
    signed char f54;
};

struct s488 {
    signed char[54] pad54;
    signed char f54;
};

struct s489 {
    signed char[54] pad54;
    signed char f54;
};

struct s490 {
    signed char[54] pad54;
    signed char f54;
};

struct s491 {
    signed char[55] pad55;
    signed char f55;
};

struct s492 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1b46() {
    uint32_t r9d1;
    struct s483* rbx2;
    uint32_t esi3;
    struct s484* r8_4;
    uint32_t edi5;
    struct s485* rbx6;
    struct s486* rbx7;
    uint32_t r9d8;
    uint32_t edi9;
    uint32_t r10d10;
    uint32_t esi11;
    struct s487* rbx12;
    struct s488* rbx13;
    struct s489* rbx14;
    uint32_t esi15;
    struct s490* rbx16;
    int32_t eax17;
    int32_t eax18;
    struct s491* rbx19;
    struct s492* rbx20;

    r9d1 = rbx2->f54;
    esi3 = r8_4->f1;
    edi5 = rbx6->f55;
    rbx7->f54 = 64;
    *reinterpret_cast<unsigned char*>(&r9d1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r9d1) >> 4);
    r9d8 = r9d1 & 1;
    edi9 = edi5 - esi3 - *reinterpret_cast<unsigned char*>(&r9d8);
    if (*reinterpret_cast<signed char*>(&edi9)) {
        r10d10 = 80;
        esi11 = 64;
    } else {
        rbx12->f54 = -64;
        r10d10 = 0xffffffd0;
        esi11 = 0xffffffc0;
    }
    if (*reinterpret_cast<uint16_t*>(&edi9) > 0xff) {
        rbx13->f54 = *reinterpret_cast<signed char*>(&r10d10);
        esi11 = r10d10;
    }
    if ((edi5 & 15) - (esi3 & 15) & 16) {
        esi11 = esi11 | 32;
        rbx14->f54 = *reinterpret_cast<signed char*>(&esi11);
    }
    if ((edi5 - esi3 & 15) - r9d8 & 16) {
        esi15 = esi11 | 32;
        rbx16->f54 = *reinterpret_cast<signed char*>(&esi15);
    }
    eax17 = eax18 + 2;
    rbx19->f55 = *reinterpret_cast<signed char*>(&edi9);
    rbx20->f64 = *reinterpret_cast<int16_t*>(&eax17);
    goto 0x18b8;
}

struct s493 {
    signed char[54] pad54;
    signed char f54;
};

struct s494 {
    signed char[64] pad64;
    int16_t f64;
};

struct s495 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s496 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s497 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s498 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1f16(int64_t rdi) {
    int32_t eax2;
    int32_t eax3;
    int1_t sf4;
    struct s493* rbx5;
    struct s494* rbx6;
    uint32_t esi7;
    struct s495* r8_8;
    uint32_t ecx9;
    struct s496* rbx10;
    struct s497* rbx11;
    int64_t rcx12;
    struct s498* rbx13;

    eax2 = eax3 + 3;
    sf4 = rbx5->f54 < 0;
    rbx6->f64 = *reinterpret_cast<int16_t*>(&eax2);
    if (!sf4) 
        goto 0x18b8;
    esi7 = r8_8->f1;
    ecx9 = rbx10->f62 - 2;
    rbx11->f62 = *reinterpret_cast<uint16_t*>(&ecx9);
    *reinterpret_cast<uint32_t*>(&rcx12) = *reinterpret_cast<uint16_t*>(&ecx9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
    *reinterpret_cast<int16_t*>(rdi + rcx12) = *reinterpret_cast<int16_t*>(&eax2);
    rbx13->f64 = *reinterpret_cast<int16_t*>(&esi7);
    goto 0x18b8;
}

struct s499 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s500 {
    signed char[54] pad54;
    signed char f54;
};

struct s501 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2a43() {
    uint32_t esi1;
    struct s499* rbx2;
    uint32_t ecx3;
    int32_t eax4;
    int32_t eax5;
    struct s500* rbx6;
    struct s501* rbx7;

    esi1 = rbx2->f54;
    ecx3 = esi1 & 0xffffff9f | 16;
    if (esi1 & 16) {
        ecx3 = esi1 & 0xffffff8f;
    }
    eax4 = eax5 + 1;
    rbx6->f54 = *reinterpret_cast<signed char*>(&ecx3);
    rbx7->f64 = *reinterpret_cast<int16_t*>(&eax4);
    goto 0x18b8;
}

struct s502 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2c75() {
    int32_t eax1;
    int32_t eax2;
    struct s502* rbx3;

    eax1 = eax2 + 1;
    rbx3->f64 = *reinterpret_cast<int16_t*>(&eax1);
    goto 0x2056;
}

void fun_a26() {
    goto 0x9b0;
}

struct s503 {
    signed char[52] pad52;
    unsigned char f52;
};

struct s504 {
    signed char[52] pad52;
    unsigned char f52;
};

void fun_1687() {
    struct s503* rbx1;
    struct s504* rbx2;

    rbx1->f52 = reinterpret_cast<unsigned char>(rbx2->f52 | 0x80);
    goto 0x108b;
}

struct s505 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s506 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s507 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s508 {
    signed char[64] pad64;
    int16_t f64;
};

struct s509 {
    signed char[54] pad54;
    signed char f54;
};

void fun_19fc() {
    uint32_t ecx1;
    struct s505* r8_2;
    struct s506* rbx3;
    struct s507* rbx4;
    int32_t eax5;
    int32_t eax6;
    uint32_t ecx7;
    struct s508* rbx8;
    struct s509* rbx9;

    ecx1 = r8_2->f1;
    *reinterpret_cast<unsigned char*>(&ecx1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx1) ^ rbx3->f55);
    rbx4->f55 = *reinterpret_cast<unsigned char*>(&ecx1);
    eax5 = eax6 + 2;
    ecx7 = ecx1 - (ecx1 + reinterpret_cast<uint1_t>(ecx1 < ecx1 + reinterpret_cast<uint1_t>(*reinterpret_cast<unsigned char*>(&ecx1) < 1))) & 0xffffff80;
    rbx8->f64 = *reinterpret_cast<int16_t*>(&eax5);
    rbx9->f54 = *reinterpret_cast<signed char*>(&ecx7);
    goto 0x18b8;
}

struct s510 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s511 {
    signed char[64] pad64;
    int16_t f64;
};

struct s512 {
    signed char[54] pad54;
    signed char f54;
};

struct s513 {
    signed char[55] pad55;
    signed char f55;
};

void fun_2c81() {
    uint32_t edi1;
    struct s510* rbx2;
    int32_t eax3;
    int32_t eax4;
    struct s511* rbx5;
    uint32_t ecx6;
    uint32_t ecx7;
    uint32_t ecx8;
    uint32_t esi9;
    struct s512* rbx10;
    struct s513* rbx11;

    edi1 = rbx2->f55;
    eax3 = eax4 + 1;
    rbx5->f64 = *reinterpret_cast<int16_t*>(&eax3);
    ecx6 = edi1;
    *reinterpret_cast<unsigned char*>(&edi1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edi1) >> 1);
    ecx7 = ecx6 & 1;
    ecx8 = -ecx7 & 16;
    esi9 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&ecx7)) << 7 | edi1;
    rbx10->f54 = *reinterpret_cast<signed char*>(&ecx8);
    rbx11->f55 = *reinterpret_cast<signed char*>(&esi9);
    goto 0x18b8;
}

struct s514 {
    signed char[52] pad52;
    unsigned char f52;
};

struct s515 {
    signed char[52] pad52;
    unsigned char f52;
};

void fun_1690() {
    struct s514* rbx1;
    struct s515* rbx2;

    rbx1->f52 = reinterpret_cast<unsigned char>(rbx2->f52 | 32);
    goto 0x108b;
}

struct s516 {
    signed char[56] pad56;
    signed char f56;
};

struct s517 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s518 {
    signed char[64] pad64;
    int16_t f64;
};

struct s519 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1a23(int64_t rdi) {
    int32_t eax2;
    struct s516* rbx3;
    uint32_t edx4;
    struct s517* rbx5;
    int64_t rax6;
    struct s518* rbx7;
    struct s519* rbx8;

    eax2 = rbx3->f56;
    edx4 = rbx5->f55;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(&eax2) + 1) = 0xff;
    rax6 = eax2;
    *reinterpret_cast<unsigned char*>(rdi + rax6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(rdi + rax6) ^ *reinterpret_cast<unsigned char*>(&edx4));
    rbx7->f64 = reinterpret_cast<int16_t>(rbx8->f64 + 1);
    goto 0x18b8;
}

struct s520 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s521 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s522 {
    signed char[64] pad64;
    int16_t f64;
};

struct s523 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2cb2(int64_t rdi) {
    uint32_t ecx2;
    struct s520* rbx3;
    int64_t rax4;
    struct s521* r8_5;
    struct s522* rbx6;
    struct s523* rbx7;

    ecx2 = rbx3->f62;
    *reinterpret_cast<uint32_t*>(&rax4) = r8_5->f1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    *reinterpret_cast<int16_t*>(rdi + rax4) = *reinterpret_cast<int16_t*>(&ecx2);
    rbx6->f64 = reinterpret_cast<int16_t>(rbx7->f64 + 3);
    goto 0x18b8;
}

struct s524 {
    signed char[52] pad52;
    unsigned char f52;
};

struct s525 {
    signed char[52] pad52;
    unsigned char f52;
};

void fun_1699() {
    struct s524* rbx1;
    struct s525* rbx2;

    rbx1->f52 = reinterpret_cast<unsigned char>(rbx2->f52 | 1);
    goto 0x108b;
}

struct s526 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s527 {
    signed char[1] pad1;
    uint16_t f1;
};

struct s528 {
    signed char[64] pad64;
    int16_t f64;
};

struct s529 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1a45(int64_t rdi) {
    uint32_t edx2;
    struct s526* rbx3;
    int64_t rax4;
    struct s527* r8_5;
    struct s528* rbx6;
    struct s529* rbx7;

    edx2 = rbx3->f55;
    *reinterpret_cast<uint32_t*>(&rax4) = r8_5->f1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    *reinterpret_cast<signed char*>(rdi + rax4) = *reinterpret_cast<signed char*>(&edx2);
    rbx6->f64 = reinterpret_cast<int16_t>(rbx7->f64 + 3);
    goto 0x18b8;
}

struct s530 {
    signed char[55] pad55;
    unsigned char f55;
};

struct s531 {
    signed char[64] pad64;
    int16_t f64;
};

struct s532 {
    signed char[54] pad54;
    signed char f54;
};

struct s533 {
    signed char[55] pad55;
    signed char f55;
};

void fun_2cce() {
    uint32_t ecx1;
    struct s530* rbx2;
    int32_t eax3;
    int32_t eax4;
    struct s531* rbx5;
    uint32_t esi6;
    uint32_t ecx7;
    struct s532* rbx8;
    struct s533* rbx9;

    ecx1 = rbx2->f55;
    eax3 = eax4 + 1;
    rbx5->f64 = *reinterpret_cast<int16_t*>(&eax3);
    esi6 = ecx1;
    *reinterpret_cast<signed char*>(&ecx1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx1) >> 7);
    ecx7 = ecx1 & 16;
    __asm__("rol sil, 1");
    rbx8->f54 = *reinterpret_cast<signed char*>(&ecx7);
    rbx9->f55 = *reinterpret_cast<signed char*>(&esi6);
    goto 0x18b8;
}

struct s534 {
    signed char[52] pad52;
    unsigned char f52;
};

struct s535 {
    signed char[52] pad52;
    unsigned char f52;
};

void fun_16a2() {
    struct s534* rbx1;
    struct s535* rbx2;

    rbx1->f52 = reinterpret_cast<unsigned char>(rbx2->f52 | 2);
    goto 0x108b;
}

struct s536 {
    signed char[60] pad60;
    uint16_t f60;
};

struct s537 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_1a63() {
    uint32_t eax1;
    struct s536* rbx2;
    struct s537* rbx3;

    eax1 = rbx2->f60;
    rbx3->f64 = *reinterpret_cast<int16_t*>(&eax1);
    goto 0x18b8;
}

struct s538 {
    signed char[64] pad64;
    int16_t f64;
};

void fun_2cf5() {
    int32_t eax1;
    int32_t eax2;
    struct s538* rbx3;

    eax1 = eax2 + 1;
    rbx3->f64 = *reinterpret_cast<int16_t*>(&eax1);
    goto 0x18b8;
}

struct s539 {
    signed char[1] pad1;
    signed char f1;
};

struct s540 {
    signed char[62] pad62;
    uint16_t f62;
};

struct s541 {
    signed char[54] pad54;
    unsigned char f54;
};

struct s542 {
    signed char[54] pad54;
    signed char f54;
};

struct s543 {
    signed char[54] pad54;
    signed char f54;
};

struct s544 {
    signed char[62] pad62;
    int16_t f62;
};

struct s545 {
    signed char[64] pad64;
    int16_t f64;
};

struct s546 {
    signed char[54] pad54;
    signed char f54;
};

void fun_1a75() {
    uint32_t esi1;
    struct s539* r8_2;
    uint32_t edi3;
    struct s540* rbx4;
    uint32_t edi5;
    uint32_t ecx6;
    struct s541* rbx7;
    struct s542* rbx8;
    struct s543* rbx9;
    struct s544* rbx10;
    int32_t eax11;
    int32_t eax12;
    uint32_t ecx13;
    struct s545* rbx14;
    struct s546* rbx15;

    *reinterpret_cast<uint16_t*>(&esi1) = reinterpret_cast<uint16_t>(static_cast<int16_t>(r8_2->f1));
    edi3 = rbx4->f62;
    edi5 = edi3 + *reinterpret_cast<uint16_t*>(&esi1);
    ecx6 = static_cast<uint32_t>(rbx7->f54) & 0xffffff8f;
    rbx8->f54 = *reinterpret_cast<signed char*>(&ecx6);
    if (reinterpret_cast<int32_t>(edi5) > reinterpret_cast<int32_t>(0xffff)) {
        ecx6 = ecx6 | 16;
        rbx9->f54 = *reinterpret_cast<signed char*>(&ecx6);
    }
    rbx10->f62 = *reinterpret_cast<int16_t*>(&edi5);
    if ((esi1 & 0xfff) + (edi3 & 0xfff) & 0x1000) {
        ecx6 = ecx6 | 32;
    }
    eax11 = eax12 + 2;
    ecx13 = ecx6 & 0x7f;
    rbx14->f64 = *reinterpret_cast<int16_t*>(&eax11);
    rbx15->f54 = *reinterpret_cast<signed char*>(&ecx13);
    goto 0x18b8;
}
