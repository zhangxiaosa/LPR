
#include <stdio.h>

typedef unsigned long int d;

long fn3(long p1, long p2) {
    return p1 - p2;
}

int main() {
    unsigned p = 0;
    unsigned v = 0;
    short w = 3;

    while (w) {
        int an = 250UL;
        if (v || (an = w)) {
            short ao = 48873;
            if (fn3(ao, an) - v & 1UL)
                v = 1UL;
        }
        w--;
    }

    p = v;

    printf("checksum = %X\n", p);

    return 0;
}
