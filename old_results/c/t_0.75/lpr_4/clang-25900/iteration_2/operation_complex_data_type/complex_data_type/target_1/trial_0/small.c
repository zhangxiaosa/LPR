#include <stdio.h>

unsigned fn1(unsigned p2) {
    return p2;
}

int main() {
    struct {
        int n;
        int o;
    } ad;

    int r;
    unsigned t;
    signed int ae;

    ad.n = 1957;
    ad.o = fn1(5);
    ae = ad.o;
    ad.o = 5;
    r = t % (5 / ae);
    ad.o;

    return 0;
}