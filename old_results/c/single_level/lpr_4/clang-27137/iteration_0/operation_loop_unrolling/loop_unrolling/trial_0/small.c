#include <stdio.h>

typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d h;

void fn2(p1) { h = p1; }

void fn3(p1) { fn2(p1); }

void fn4(e p1, char *p2, int p3) { fn3(p1); }

b o;
a p;

int main() {
    int t = 0;
    b q;
    int i;

    b r = o;
    q = r;

    c s = 1L;

    for (i = 0; i < 10; i++) {
        if (q > s)
            q -= 1;
        if (q > s)
            q -= 1;
        if (q > s)
            q -= 1;
        if (q > s)
            q -= 1;
        if (q > s)
            q -= 1;
        if (q > s)
            q -= 1;
        if (q > s)
            q -= 1;
        if (q > s)
            q -= 1;
        if (q > s)
            q -= 1;
        if (q > s)
            q -= 1;
    }

    if (p = q)
        ;

    fn4(p, "g_4689", t);

    printf("checksum = %X\n", h);

    return 0;
}