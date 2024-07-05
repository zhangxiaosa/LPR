#include <stdio.h>

unsigned fn1(unsigned p1, int p2) {
    return (unsigned)p2;
}

struct m {
    int n;
    int o;
};

int r;
static int s = -5;
unsigned t;
int u;

int main() {
    struct m ad;
    ad.n = 1957;
    ad.o = fn1(t, 5);
    
    int ae = ad.o;
    unsigned af = t;
    
    ad.o = u;
    r = af % (~s / ae);
    
    return 0;
}