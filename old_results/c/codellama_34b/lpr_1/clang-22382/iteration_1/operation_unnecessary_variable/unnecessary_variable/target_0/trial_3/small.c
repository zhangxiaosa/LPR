
#include <stdio.h>

struct h {
    signed i;
    long j;
    unsigned k;
};

static struct h fn1(struct h p) {
    p.k;
}

long fn2() {
    struct h p;
    fn1(p);
    for (;;) {
        p = p;
    }
}

int main() {
    return 0;
}
