#include <stdio.h>

unsigned fn1(unsigned p2) {
    return p2;
}

struct m {
    signed n : 18;
    signed o : 1;
};

unsigned r;
static signed s = -5L;
unsigned t;

int main() {
    struct m ad = {1957};
    unsigned ad_n = ad.n; // Decomposed variable for ad.n
    signed ad_o = ad.o; // Decomposed variable for ad.o
    
    ad_o = fn1(5);
    signed ae = ad_o;
    ad_o = ad_o;
    r = t % (~s / ae);
    ad_o;
}
