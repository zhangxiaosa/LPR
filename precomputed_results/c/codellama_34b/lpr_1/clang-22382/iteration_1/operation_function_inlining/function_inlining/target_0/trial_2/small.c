
#include <stdio.h>

struct h {
    signed i;
    long j;
    unsigned k;
};

static struct h fn1(struct h p5) {
    p5.k;
    goto w;
w:
    return p5;
}

long fn2() {
    struct h p;
    fn1(p);
    for (;;) {
        struct h r;
        p = r = p;
    }
}

int main() {
    return 0;
}

