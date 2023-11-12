#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }

f p;
b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

d fn11(d p1, f p2, b p3, e p4) {
    c ai = 7L;
    e aj = 1UL;

    for (w = 3; w; w -= 1) {
        if ((an = 250UL)) {
            t = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
            a ao = 0xBCD1L;
            if ((fn3(ao, fn4(am - an, 0xECL)) - t) & 1UL)
                v = 1UL;
        }
    }

    return w;
}

b fn13() {
    e ae = 1UL;

    {
        b af = 0x2F2F6D26L;
        d ag = 248UL;

        {
            c ai = 7L;
            e aj = 1UL;

            for (w = 3; w; w -= 1) {
                if ((an = 250UL)) {
                    t = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
                    a ao = 0xBCD1L;
                    if ((fn3(ao, fn4(am - an, 0xECL)) - t) & 1UL)
                        v = 1UL;
                }
            }
        }

        return af;
    }
}

int main() {
    int ap = 0;
    e ae = 1UL;

    {
        b af = 0x2F2F6D26L;
        d ag = 248UL;

        {
            c ai = 7L;
            e aj = 1UL;

            for (w = 3; w; w -= 1) {
                if ((an = 250UL)) {
                    t = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
                    a ao = 0xBCD1L;
                    if ((fn3(ao, fn4(am - an, 0xECL)) - t) & 1UL)
                        v = 1UL;
                }
            }
        }
    }

    p = v;
    printf("checksum = %X\n", p);
    return 0;
}