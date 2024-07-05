
<SYS>

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    /* Declare variables */
    struct m ad;
    int ae;
    int af;
    int r;
    unsigned int t;
    int u;
    unsigned int v;

    /* Initialize variables */
    ad.n = 1957;
    ad.o = 0;
    r = 0;
    t = 0;
    u = 0;
    v = 0;

    /* Function call */
    ad.o = fn1(v, 5);

    /* Assign values to variables */
    ae = ad.o;
    af = t;
    ad.o = u;
    r = af % (~s / ae);

    /* Print output */
    printf("Memory address of ad.o: %d\n", ad.o);
    printf("Memory address of r: %d\n", r);

    return 0;
}

/* Function definition */
unsigned int fn1(unsigned int p1, int p2) {
    return p2;
}

/* Structure definition */
struct m {
    signed n : 18;
    signed o : 1;
};
</SYS>
