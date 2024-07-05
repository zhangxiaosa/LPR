
#include <stdio.h>

int main() {
    short a = 3;
    int b = 5;
    long c = 7;
    unsigned d = 11;
    unsigned e = 13;
    unsigned f = 17;
    unsigned g = 19;
    struct h {
        signed i;
        long j;
        unsigned k;
    } p;
    p.i = 23;
    p.j = 29;
    p.k = 31;

    b = 37;
    c = 41;
    d = 43;
    e = 47;
    f = 53;
    g = 59;

    p.i = a + b;
    p.j = c + d;
    p.k = e + f;

    printf("%d, %ld, %u\n", p.i, p.j, p.k);

    return 0;
}
