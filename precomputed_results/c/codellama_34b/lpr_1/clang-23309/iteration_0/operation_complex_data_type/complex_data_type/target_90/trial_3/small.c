
#include <stdio.h>

void fn1(short p1, int p2) {
    printf("checksum = %X\n", p1);
}

short fn2(short p1, short p2) {
    return p1 - p2;
}

short fn3(short p1, short p2) {
    return p1 - p2;
}

short fn5(short p1, short p2) {
    return p2;
}

short fn6(short p1, short p2) {
    return p1 - p2;
}

short p;

void fn9(short p1, char *p2) {
    p = p1;
}

short t;
u_int8_t u;
short v;
u_int8_t w;
short ab;
u_int8_t ac = 1;

unsigned char fn10(short p1, short p2) {
    short af = 0x2F2F6D26;
    u_int8_t ag = 248;
    fn11(2, ag, p2, 1);
    return af;
}

unsigned char fn11(u_int8_t p1, short p2, short p3, short p4) {
    short ai = 7;
    short aj = 1;
    short al = 3;
    short am = 1;
    short an;
    u_int8_t au;

    // Unroll the loop 4 times
    for (w = 3; w; w--) {
        an = 250;
        p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
        short ao = 0xBCD1;
        if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
            v = 1;
    }
    for (w = 3; w; w--) {
        an = 250;
        p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
        short ao = 0xBCD1;
        if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
            v = 1;
    }
    for (w = 3; w; w--) {
        an = 250;
        p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
        short ao = 0xBCD1;
        if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
            v = 1;
    }
    for (w = 3; w; w--) {
        an = 250;
        p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
        short ao = 0xBCD1;
        if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
            v = 1;
    }

    return al;
}

int main() {
    fn13();
    fn9(v, "g_170");
    fn1(p, 0);
    return 0;
}
