#include <stdio.h>

unsigned int fn1(unsigned int p1, int p2) {
    return p2;
}

struct m {
    int n : 18;
    int o : 1;
};

int p;
unsigned int q_l;
int r;
static int s = -5L;
unsigned int t;
int u;
unsigned int v;

int fn2(int p1, struct m p2, unsigned int p3_l, unsigned int p4_l, int p5) {
    struct m ad = {1957};
    ad.o = fn1(v, 5);
    int ae;
    int af = t;
    ae = ad.o;
    ad.o = u;
    r = af % (~s / ae);
    ad.o;
}

int main() {
    struct m z;
    fn2(p, z, q_l, q_l, q_l);
}