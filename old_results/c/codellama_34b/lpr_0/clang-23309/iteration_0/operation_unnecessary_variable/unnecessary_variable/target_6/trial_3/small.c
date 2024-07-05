
#include <stdio.h>
#include <stdint.h>

typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

int fn2(int p1, int p2) {
    return p1 - p2;
}

long fn3(long p1, long p2) {
    return p1 - p2;
}

d fn4(d p1, d p2) {
    return p1;
}

f fn5(f p1, f p2) {
    return p2;
}

f fn6(f p1, f p2) {
    return p2 - p1;
}

f p;

void fn9(g p1, char *p2, int p3) {
    p = p1;
}

unsigned u;
long v;
short w = 3;
f ab;
short ac = 1L;
d fn10(g, e);
d fn11(d, f, int, e);
short fn12(int, int, d, short, g);

int fn13() {
    fn10(u, 248UL);
    return 2UL;
}

d fn10(g p1, e p2) {
    fn11(2L, 248UL, p2, 1);
    return 0x2F2F6D26L;
}

d fn11(d p1, f p2, int p3, e p4) {
    e an = 1UL;
    fn12(7L, 7L, p1, 0, p1);
    return an;
}

short fn12(int p1, int p2, d p3, short p4, g p5) {
    int an;
    while (w) {
        if (an = 250UL) {
            p2 = fn5(248UL, ac) || (an = w) == 0x294A85636008822DLL;
            if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
                v = 1UL;
        }
        w--;
    }
    return 0;
}

int main() {
    fn13();
    fn9(v, "g_170", 0);
    printf("checksum = %X\n", p);
    return 0;
}
