
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
u_char u;
short v;
u_char w;
short ab;
u_char ac = 1;
u_char fn10(short, short);
u_char fn11(u_char, short, short, short);

short fn13() {
    return 1;
}

u_char fn10(short p1, short p2) {
    return p1 - p2;
}

u_char fn11(u_char p1, short p2, short p3, short p4) {
    short ao = 0xBCD1;
    u_char al = 3;

    for (w = 3; w; w--) {
        short an = 250;
        u_char p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
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
