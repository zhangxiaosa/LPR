#include <stdio.h>

void fn1(unsigned p1, int p2) {
    printf("checksum = %X\n", p1);
}

int fn2(int p1, int p2) {
    return p1 - p2;
}

long fn3(long p1, long p2) {
    return p1 - p2;
}

unsigned char fn4(unsigned p1, unsigned p2) {
    return p1;
}

unsigned fn5(unsigned p1, unsigned p2) {
    return p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
    return p1 - p2;
}

unsigned p;

void fn9(unsigned p1, char *p2, int p3) {
    p = p1;
}

int t;
long v;
short w;
short ac = 1L;

unsigned fn11(unsigned p1, unsigned p2, int p3, short p4) {
    short aj = 1UL;
    long am = 1L;
    int an;
    short ao = 0xBCD1L;

    unsigned p2_1 = fn5(p, ac);
    unsigned p2_2 = fn5(p, ac);
    unsigned p2_3 = fn5(p, ac);

    an = 250UL;
    if (an == 0x294A85636008822DLL) {
        unsigned p2 = p2_1;
        if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
            v = 1UL;
    }

    an = 250UL;
    if (an == 0x294A85636008822DLL) {
        unsigned p2 = p2_2;
        if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
            v = 1UL;
    }

    an = 250UL;
    if (an == 0x294A85636008822DLL) {
        unsigned p2 = p2_3;
        if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
            v = 1UL;
    }

    return aj;
}

int main() {
    fn11(2L, ac, t, 1);
    fn9(v, "g_170", 0);
    fn1(p, 0);
    return 0;
}