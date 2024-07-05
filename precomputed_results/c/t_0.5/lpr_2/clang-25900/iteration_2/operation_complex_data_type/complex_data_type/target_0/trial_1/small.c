#include <stdio.h>

unsigned fn1(unsigned p2) {
    return p2;
}

int main() {
    struct m {
        signed n : 18;
        signed o : 1;
    };

    unsigned r;
    static signed s = -5L;
    unsigned t;

    struct m ad;
    ad.o = fn1(5);

    signed ae = ad.o;

    r = t % (~s / ae);

    return 0;
}