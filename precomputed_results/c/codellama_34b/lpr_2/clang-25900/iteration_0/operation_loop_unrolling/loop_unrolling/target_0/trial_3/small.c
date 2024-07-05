
#include <iostream>

int main() {
    typedef signed a;
    typedef int c;
    typedef unsigned g;
    struct m {
        signed n : 18;
        signed o : 1;
    };
    c r;
    static a s = -5L;
    g t;
    c u;
    a fn4_inlined(p1) {
        struct m ad = {1957};
        ad.o = p1;
        a ae;
        c af = t;
        ae = ad.o;
        ad.o = u;
        r = af % (~s / ae);
        return ad.o;
    }
    int main() {
        c x, y;
        for (x = 0; x < 5; x++) {
            y = fn4_inlined(x);
        }
        return 0;
    }
}
