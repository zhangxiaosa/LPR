
#include <stdio.h>

typedef unsigned char u_char;
typedef short s_short;

void fn1(s_short p1, int p2) { printf("checksum = %X\n", p1); }

s_short fn2(s_short p1, s_short p2) { return p1 - p2; }

s_short fn3(s_short p1, s_short p2) { return p1 - p2; }

s_short fn5(s_short p1, s_short p2) { return p2; }

s_short fn6(s_short p1, s_short p2) { return p1 - p2; }

s_short p;

void fn9(s_short p1, char *p2, int p3) { p = p1; }

s_short t;
u_char u;
s_short v;
u_char w;
s_short ab;
u_char ac = 1L;
s_short p13(void) {
    int p1 = 1;
    int p2 = (p1 << 16) - (p1 & 1);
    return p2;
}

u_char fn10(int p1, int p2) {
    int p3 = (p1 << 16) - (p1 & 1);
    return p3;
}

u_char fn11(u_char p1, int p2, int p3, int p4) {
    int p5 = (p3 << 16) - (p3 & 1);
    return p5;
}

u_char fn12(int p1, int p2, u_char p3, int p4, int p5) {
    int p6 = (p2 << 16) - (p2 & 1);
    return p6;
}

int main() {
    int ap = 0;
    s_short p1 = p13();
    fn9(p1, "g_170", ap);
    fn1(p, ap);
    return 0;
}
