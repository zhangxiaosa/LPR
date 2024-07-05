#include <iostream>

unsigned int fn1(unsigned int p2) {
    return p2;
}

struct m {
    int n;
    int o;
};

unsigned int r;
static int s = -5;

int main() {
    struct m ad = {1957, fn1(5)};
    int ae;
    ae = ad.o;
    ad.o = ad.o;
    r = 4 % (~s / ae);
    ad.o;
}