#include <stdio.h>

int main() {
    int i;
    long j;
    int k;
    unsigned p1;
    int p5_i;
    long p5_j;
    int p5_k;
    unsigned result;

    struct h {
        int i;
        long j;
        int k;
    };

    static struct h fn1(unsigned p1, int p5_i, long p5_j, int p5_k) {
        // Removed p5.k; as it does nothing
        while (1) {
            // Infinite loop
        }
    }

    unsigned fn2() {
        int p_i;
        long p_j;
        int p_k;
        struct h p;
        int r_i;
        long r_j;
        int r_k;

        fn1(3, p.i, p.j, p.k);
        while (1) {
            // Infinite loop
            p_i = r_i = p_i;
            p_j = r_j = p_j;
            p_k = r_k = p_k;
        }
        return result;
    }

    result = fn2();

    return 0;
}