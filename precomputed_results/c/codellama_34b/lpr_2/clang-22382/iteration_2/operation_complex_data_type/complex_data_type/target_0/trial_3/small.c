
#include <stdio.h>

struct h {
    long i;
    long j;
    long k;
};

static struct h fn1(long p1, long p4, long p5_i, long p5_j, long p5_k) {
    p5_k;
    goto w;
}

long fn2(long p1) {
    long p_i;
    long p_j;
    long p_k;
    fn1(p1, 3, p_i, p_j, p_k);
    for (;;) {
        struct h r;
        r.i = p_i;
        r.j = p_j;
        r.k = p_k;
    }
}

int main() {}
