#include <stdio.h>

unsigned int l;

signed int h_i;
long int h_j;
unsigned int h_k;

static signed int fn1_i;
static long int fn1_j;
static unsigned int fn1_k;

unsigned int fn2(unsigned int p1) {
    signed int p_i;
    long int p_j;
    unsigned int p_k;
    int q;
    fn1_i = p_i;
    fn1_j = p_j;
    fn1_k = p_k;
    for (;;) {
        signed int r_i;
        long int r_j;
        unsigned int r_k;
        p_i = r_i = p_i;
        p_j = r_j = p_j;
        p_k = r_k = p_k;
    }
}

signed int fn1(unsigned int p1, short int p2, unsigned int p3, unsigned int p4,
                signed int p_i, long int p_j, unsigned int p_k) {
    p_k;

w:
    goto w;
}

int main() {}
