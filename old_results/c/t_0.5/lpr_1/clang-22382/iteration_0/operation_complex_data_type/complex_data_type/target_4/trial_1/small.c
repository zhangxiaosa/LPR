#include <stdio.h>

signed int h_i;
long h_j;
unsigned int h_k;

unsigned int l;

unsigned int fn1_p1;
short fn1_p2;
unsigned int fn1_p3;
unsigned int fn1_p4;
signed int fn1_p5_i;
long fn1_p5_j;
unsigned int fn1_p5_k;

unsigned int fn2_p1;
signed int fn2_q;
signed int fn2_p_i;
long fn2_p_j;
unsigned int fn2_p_k;

unsigned int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, signed int p5_i, long p5_j, unsigned int p5_k);

unsigned int fn2(unsigned int p1) {
    signed int p_i;
    long p_j;
    unsigned int p_k;
    fn1_p1 = fn2_q;
    fn1_p2 = l;
    fn1_p3 = p1;
    fn1_p4 = 3;
    fn1_p5_i = fn2_p_i;
    fn1_p5_j = fn2_p_j;
    fn1_p5_k = fn2_p_k;
    for (;;) {
        signed int r_i;
        long r_j;
        unsigned int r_k;
        fn2_p_i = r_i = fn2_p_i;
        fn2_p_j = r_j = fn2_p_j;
        fn2_p_k = r_k = fn2_p_k;
    }
}

unsigned int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, signed int p5_i, long p5_j, unsigned int p5_k) {
    p5_k;
w:
    goto w;
}

int main() {
    return 0;
}