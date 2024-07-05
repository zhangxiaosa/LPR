#include <stdint.h>

typedef short b;
typedef int c;
typedef unsigned short e;
typedef unsigned f;

c g;
c h;

f fn4(c p1, e p2, e p3, f p4, e p5) {
    b ak[8];
    for (p2 = 0; p2 <= 7; p2 += 1) {
        for (p4 = 0; p4 <= 7; p4 += 1) {
            // Unrolled iterations
            p4 = 0;  // Iteration 1
            if (ak[p3])
                break;

            p4 = 1;  // Iteration 2
            if (ak[p3])
                break;

            p4 = 2;  // Iteration 3
            if (ak[p3])
                break;

            p4 = 3;  // Iteration 4
            if (ak[p3])
                break;

            p4 = 4;  // Iteration 5
            if (ak[p3])
                break;

            p4 = 5;  // Iteration 6
            if (ak[p3])
                break;

            p4 = 6;  // Iteration 7
            if (ak[p3])
                break;

            p4 = 7;  // Iteration 8
            if (ak[p3])
                break;
        }
    }
    return g;
}

c fn5() {
    f o = 0x5A683F60L;
    c ad = -7L;
    if (fn4(ad, 4294967287UL, ad, g, g))
        ;
    return o;
}

int main() {
    fn5();
}