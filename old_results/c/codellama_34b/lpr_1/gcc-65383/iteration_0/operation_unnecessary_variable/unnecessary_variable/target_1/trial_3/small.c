
<SYS>

#include <stdio.h>

int main() {
    int g;
    long h0 = 0x92A1D2CDL;
    static long i = 0x06D7L;
    int q = 0xC3L;
    int r[5][9][5];

    // Optimized out using constant propagation
    // int fn2() {
    //     for (;;) {
    //         if (h0)
    //             return q;
    //         g = r[i][i][i];
    //     }
    // }
    // fn2();

    // Optimized out using copy propagation
    g = q;
}

