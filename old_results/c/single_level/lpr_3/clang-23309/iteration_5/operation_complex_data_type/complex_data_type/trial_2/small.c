#include<stdio.h>

int fn2(int p1, int p2) {
    int result = p1 - p2;
    return result;
}

long fn3(long p1, long p2) {
    long result = p1 - p2;
    return result;
}

unsigned char fn4(unsigned p1, unsigned p2) {
    unsigned char result = (unsigned char)p1;
    return result;
}

unsigned fn5(unsigned p1, unsigned p2) {
    return p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
    unsigned result = p1 - p2;
    return result;
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

    for (w = 3; w; w -= 1) {
        if (an = 250UL) {
            unsigned p2 = fn5(p, ac) || (an = w) == 0x294A85636008822DLL;
            if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
                v = 1UL;
        }
    }

    return aj;
}

int main() {
    fn11(2L, ac, t, 1);
    fn9(v, "g_170", 0);
    printf("checksum = %X\n", p);
    return 0;
}
