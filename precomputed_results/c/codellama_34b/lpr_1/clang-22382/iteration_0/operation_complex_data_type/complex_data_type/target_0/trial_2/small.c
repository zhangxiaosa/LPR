
#include <stdio.h>

struct h {
    signed int i;
    long j;
    unsigned int k;
};

long l;

static struct h fn1(long p1, short p2, long p3, long p4, struct h p5) {
    p5.k;
    goto w;
}

long fn2(p1) {
    struct h p;
    int q;
    fn1(q, l, p1, 3, p);
    for (;;) {
        struct h r;
        p = r = p;
    }
}

int main() {
    return 0;
}
