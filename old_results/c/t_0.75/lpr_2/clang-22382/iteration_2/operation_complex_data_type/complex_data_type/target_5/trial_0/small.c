#include <stdio.h>

int main() {
    int i;
    long j;
    int k;
    unsigned p1;
    short p2;
    unsigned p3;
    unsigned p4;
    int p5_i;
    long p5_j;
    int p5_k;
    unsigned p;
    struct h r;

    // Function definitions

    static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
        p5.k;
    w:
        goto w;
    }

    unsigned fn2(p1) {
        struct h p;
        fn1(0, 0, p1, 3, p);
        for (;;) {
            p = r = p;
        }
    }

    return 0;
}