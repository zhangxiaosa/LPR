#include <stdio.h>

unsigned fn1(unsigned p1) {
    return p1;
}

int r;
static signed s = -5L;
unsigned t;
int u;

int main() {
    struct {
        signed n : 18;
        signed o : 1;
    } ad = {1957};

    ad.o = 5;
    signed ae = 5;
    ad.o = 0;
    r = t % (~-5L / 5);

    // ad.o is not used, so it can be removed

    return 0;
}