#include <stdio.h>

unsigned fn1(unsigned p2) {
    return p2;
}

struct m {
    signed int n : 18;
    signed int o : 1;
};

int main() {
    int r;
    unsigned t;
    struct m ad;

    ad.n = 1957;
    ad.o = fn1(5);
    int ae = ad.o;
    ad.o = 0;
    r = t % (4 / ae);

    return 0;
}
