#include <stdio.h>

unsigned int fn1(unsigned int p1, int p2) {
    return p2;
}

struct m {
    signed int n : 18;
    signed int o : 1;
};

int r;
static signed int s = -5L;
unsigned int t;

int main() {
    struct m ad = {1957};
    ad.o = fn1(5, 5);
    signed int ae;

    ae = ad.o;
    ad.o = 5;
    r = t % (5 / ae);
    ad.o;

    return 0;
}