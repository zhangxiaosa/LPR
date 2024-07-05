#include <stdio.h>

unsigned fn1(unsigned p1, int p2) {
    return (unsigned)p2;
}

struct m {
    int n;
    int o;
};

int r;
unsigned t;

int main() {
    struct m ad;
    ad.n = 1957;
    ad.o = fn1(0, 5);
    signed int ae = ad.o;
    ad.o = 0;
    r = t % (5 / ae);
    ad.o;
}
