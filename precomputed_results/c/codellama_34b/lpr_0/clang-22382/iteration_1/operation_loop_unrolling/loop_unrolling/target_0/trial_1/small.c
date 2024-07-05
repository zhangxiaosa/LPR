
#include <stdio.h>

int main() {
    struct h p;
    p.i = 1;
    p.j = 2;
    p.k = 3;
    fn1(p);
    for (;;) {
        struct h r;
        p = r = p;
    }
    return 0;
}

static struct h fn1(struct h p) {
    p.j;
    for (;;)
        ;
}

unsigned fn2() {
    struct h p;
    fn1(p);
    for (;;) {
        struct h r;
        p = r = p;
    }
}
