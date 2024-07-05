#include <stdio.h>

unsigned fn1(unsigned p1, int p2) {
    return (unsigned)p2;
}

unsigned v;
unsigned t;
unsigned af;

int main() {
    struct {
        signed n : 18;
        signed o : 1;
    } ad = {1957};

    ad.o = fn1(v, 5);
    af = t;

    return 0;
}
