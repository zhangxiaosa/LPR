
#include <stdio.h>

struct h {
    long j;
    int k;
};

static struct h fn1(struct h p5) {
    p5.j;
    for (;;)
        ;
}

unsigned fn2() {
    struct h p;
    fn1(p);
    for (;;) {
        p = p;
    }
}

int main() {
    struct h p;
    fn1(p);
    for (;;) {
        p = p;
    }
    return 0;
}
