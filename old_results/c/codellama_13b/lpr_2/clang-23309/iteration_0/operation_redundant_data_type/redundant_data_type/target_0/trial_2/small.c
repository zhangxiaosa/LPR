
#include <stdio.h>

short fn2(short p1, short p2) {
    return p1 - p2;
}

short fn3(short p1, short p2) {
    return p1 - p2;
}

short fn4(short p1, short p2) {
    return p1;
}

short fn5(short p1, short p2) {
    return p2;
}

short fn6(short p1, short p2) {
    return p1 - p2;
}

short p;

void fn7(short p1) {
    p = p1;
}

void fn9(short p1, char *p2, int p3) {
    fn7(p1);
}

short t;
short u;
short v;
short w;
short ab;
short ac = 1L;

short fn10(short p1, short p2) {
    short af = 0x2F2F6D26L;
    short ag = 248UL;
    fn11(2L, ag, p2, 1);
    return af;
}

short fn11(short p1, short p2, short p3, short p4) {
    short ai = 7L;
    short aj = 1UL;
    fn12(ai, ai, p1, 0, p1);
    return aj;
}

short fn12(short p1, short p2, short p3, short p4, short p5) {
    short al = 3L;
    short am = 1L;
    short an;
    for (w = 3; w; w -= 1)
        if (an = 250UL) {
            p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
            short ao = 0xBCD1L;
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
