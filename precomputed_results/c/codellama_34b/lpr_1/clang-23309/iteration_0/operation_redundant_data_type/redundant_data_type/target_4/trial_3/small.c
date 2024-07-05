
#include <stdio.h>

typedef unsigned int u_int;
typedef int s_int;

void fn1(s_int p1, int p2) {
    printf("checksum = %d\n", p1);
}

s_int fn2(s_int p1, s_int p2) {
    return p1 - p2;
}

s_int fn3(s_int p1, s_int p2) {
    return p1 - p2;
}

u_int fn4(u_int p1, u_int p2) {
    return p1;
}

s_int fn5(s_int p1, s_int p2) {
    return p2;
}

s_int fn6(s_int p1, s_int p2) {
    return p1 - p2;
}

s_int p;

void fn9(s_int p1, char *p2, int p3) {
    p = p1;
}

s_int t;
u_int u;
s_int v;
u_int w;
s_int ab;
u_int ac = 1;

u_int fn10(s_int p1, s_int p2) {
    s_int af = 0x2F2F6D26;
    u_int ag = 248;
    fn11(2, ag, p2, 1);
    return af;
}

u_int fn11(u_int p1, s_int p2, s_int p3, s_int p4) {
    s_int ai = 7;
    s_int aj = 1;
    fn12(ai, ai, p1, 0, p1);
    return aj;
}

u_int fn12(s_int p1, s_int p2, u_int p3, s_int p4, s_int p5) {
    s_int al = 3;
    s_int am = 1;
    s_int an;
    for (w = 3; w; w -= 1) {
        an = 250;
        p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
        s_int ao = 0xBCD1;
        if (fn2(fn3(ao, fn4(fn6(am, an), 0xEC)), p2) & 1)
            v = 1;
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
