#include <stdio.h>

static int p_i;
static long p_j;
static unsigned p_k;

static int p5_i;
static long p5_j;
static unsigned p5_k;

struct original_data_type {
    int i;
    long j;
    unsigned k;
};

static struct original_data_type fn1(unsigned p1, short p2, int p5_i, long p5_j, unsigned p5_k) {
    p5_k;
w:
    goto w;
}

unsigned fn2() {
    struct original_data_type p;
    fn1(0, 0, p.i, p.j, p.k);
    for (;;) {
        struct original_data_type r;
        p.i = r.i = p.i;
        p.j = r.j = p.j;
        p.k = r.k = p.k;
    }
}

int main() {
    return 0;
}