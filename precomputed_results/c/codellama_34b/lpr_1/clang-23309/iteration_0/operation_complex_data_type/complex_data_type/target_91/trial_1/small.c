
#include <stdio.h>

void fn1(short p1, short p2) {
    printf("checksum = %X\n", p1);
}

short fn10(short p1, short p2) {
    short af = 0x2F2F6D26;
    unsigned char ag = 248;
    fn11(2, ag, p2, 1);
    return af;
}

unsigned char fn11(unsigned char p1, short p2, short p3, short p4) {
    short ai = 7;
    short aj = 1;
    short al = 3;
    short am = 1;
    short an;
    unsigned char au;

    // Unroll the loop 4 times
    for (int w = 3; w > 0; w--) {
        an = 250;
        p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
        short ao = 0xBCD1;
        if (fn2(fn3(ao, fn6(am, an)), p2) & 1)
            v = 1;
    }
    return al;
}

int main() {
    short p = fn10(u, t);
    fn1(p, 0);
    return 0;
}
