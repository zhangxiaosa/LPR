
#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef unsigned g;

int fn2(int p1, int p2) {
    return p1 - p2;
}

c fn3(c p1, c p2) {
    return p1 - p2;
}

d fn4(d p1, d p2) {
    return p1;
}

unsigned fn5(unsigned p1, unsigned p2) {
    return p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
    return p1 - p2;
}

unsigned p;
void fn9(g p1, char *p2, int p3) {
    p = p1;
}

unsigned t;
unsigned u;
c v;
a w;
unsigned ac = 1L;

unsigned fn10(g p1, short p2) {
    int af = 0x2F2F6D26L;
    d ag = 248UL;
    fn11(2L, ag, p2, 1);
    return af;
}

unsigned fn11(d p1, unsigned p2, b p3, short p4) {
    c ai = 7L;
    short aj = 1UL;
    fn12(ai, ai, p1, 0, p1);
    return aj;
}

unsigned fn12(b p1, b p2, unsigned char p3, unsigned p4, g p5) {
    int al = 3L;
    c am = 1L;
    int an;
    for (w = 3; w; w -= 1) {
        an = 250UL;
        p2 = fn5(p4, ac) || (an = w) == 0x294A85636008822DLL;
        unsigned ao = 0xBCD1L;
        if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
            v = 1UL;
    }
    return al;
}

int main() {
    int ap = 0;
    fn13();
    fn9(v, "g_170", ap);
    printf("checksum = %X\n", p);
    return 0;
}
