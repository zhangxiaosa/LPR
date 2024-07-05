
#include <stdio.h>

short fn2(short p1, short p2) {
    return p1 - p2;
}

int fn3(int p1, int p2) {
    return p1 - p2;
}

long fn4(long p1, long p2) {
    return p1;
}

unsigned char fn5(unsigned char p1, unsigned char p2) {
    return p2;
}

unsigned short fn6(unsigned short p1, unsigned short p2) {
    return p1 - p2;
}

unsigned short p;

void fn7(unsigned short p1) {
    p = p1;
}

void fn9(unsigned long gp1, char* p2, int p3) {
    fn7(gp1);
}

int t;
unsigned short u;
long v;
short w;
unsigned short ab;
short ac = 1;

short fn10(unsigned short p1, short p2) {
    short af = 0x2F2F6D26;
    short ag = 248;
    fn11(2, ag, p2, 1);
    return af;
}

short fn11(long p1, short p2, short p3, short p4) {
    int ai = 7;
    short aj = 1;
    fn12(ai, ai, p1, 0, p1);
    return aj;
}

short fn12(short p1, short p2, long p3, short p4, unsigned long p5) {
    short al = 3;
    int am = 1;
    short an;
    for (w = 3; w; w -= 1) {
        if (an = 250) {
            p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
            short ao = 0xBCD1;
            if (fn2(fn3(ao, fn4(fn6(am, an), 0xE)), p2) & 1)
                v = 1;
        }
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
