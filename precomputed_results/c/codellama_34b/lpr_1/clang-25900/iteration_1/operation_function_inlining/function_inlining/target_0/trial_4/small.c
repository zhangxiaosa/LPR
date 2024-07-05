
#include <stdio.h>

int main() {
    struct k q = {0};
    int r = 0;
    static int s = -5L;
    signed fn2(signed, struct m, struct k, struct k, int);
    signed fn4() {
        struct m z = {1957};
        z.o = 5;
        signed ae;
        int af = 0;
        ae = z.o;
        z.o = 0;
        r = af % (~s / ae);
        z.o;
    }
    signed fn2(signed p1, struct m p2, struct k p3, struct k p4, int p5) {
        struct m ad = {1957};
        ad.o = p1;
        signed ae;
        int af = 0;
        ae = ad.o;
        ad.o = 0;
        r = af % (~s / ae);
        ad.o;
    }
    fn4();
    return 0;
}
