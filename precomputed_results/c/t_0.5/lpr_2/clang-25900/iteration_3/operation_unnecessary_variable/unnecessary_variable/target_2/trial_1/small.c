#include <stdio.h>

unsigned fn1(unsigned p2) {
    return p2;
}

struct m {
    signed n : 18;
    signed o : 1;
};

static signed s = -5L;
unsigned t;

int main() {
    struct m ad = {1957, fn1(5)};
    signed ae;
    ae = ad.o;
    ad.o = ad.o;
    ad.o;

    return 0;
}