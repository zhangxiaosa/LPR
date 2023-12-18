#include <stdio.h>

unsigned fn1(unsigned p2) {
    return p2;
}

struct m {
    signed int n : 18;
    signed int o : 1;
};

int r;
unsigned t;

int main() {
    struct m ad = {1957};
    ad.o = 5;
    int ae = ad.o;
    ad.o = 0;
    r = t % (4 / ae);
}
