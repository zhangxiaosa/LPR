
#include <stdio.h>

struct h {
    int i;
    long j;
    int k;
};

int l;

static struct h fn1(int p1, short p2, int p3, int p4, struct h p5) {
    p5.k;
    return p5;
}

int fn2(p1) {
    struct h p;
    p = fn1(p1, l, p1, 3, p);
    for (;;) {
        struct h r;
        r = p;
    }
}

int main() {
    struct h p;
    p = fn2(0);
    printf("%d\n", p.k);
    return 0;
}
