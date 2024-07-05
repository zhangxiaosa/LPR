
#include <stdio.h>
#include <stdlib.h>

void fn1(unsigned long p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1 - p2; }

unsigned long fn3_clone(unsigned long p1, unsigned char p2) { return p1 - p2; }

unsigned char fn4(unsigned char p1, unsigned char p2) { return p1; }

unsigned fn5(unsigned p1, unsigned p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned long p;
void fn9(unsigned long p1, char *p2, int p3) { p = p1; }

unsigned int t;
unsigned long u;
unsigned v;
short w;
unsigned ab;
short ac = 1L;
unsigned long fn10(unsigned long p1, short p2) {
    unsigned long af = 0x2F2F6D26L;
    unsigned f ag = 248UL;
    unsigned short aj = 1UL;
    fn12(af, af, ag, aj, p1);
    return af;
}

unsigned short fn11(unsigned d p1, unsigned f p2, unsigned b p3, unsigned short p4) {
    unsigned ai = 7L;
    unsigned aj = 1UL;
    fn12(ai, ai, p1, 0, p1);
    return aj;
}

unsigned short fn12(unsigned b p1, unsigned b p2, unsigned d p3, unsigned short p4, unsigned long p5) {
    unsigned b al = 3L;
    unsigned am = 1L;
    unsigned an;
    for (w = 3; w; w -= 1) {
        if (an = 250UL) {
            p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
            short ao = 0xBCD1L;
            if (fn2(fn3_clone(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL) {
                v = 1UL;
            }
        }
    }
    return al;
}

int main() {
    int ap = 0;
    fn13();
    fn9(v, "g_170", ap);
    fn1(p, ap);
    return 0;
}
