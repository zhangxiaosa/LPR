#include <stdio.h>

long v;
short w;
short ac = 1L;

unsigned fn6(unsigned p1, unsigned p2) {
    return p1 - p2;
}

int main() {
    unsigned p2;

    for (w = 3; w > 0; w--) {
        unsigned an = 250UL;
        short ao = 0xBCD1L;

        if ((ao - (fn6(1L, an) - 0xECl)) - ac & 1UL)
            v = 1;
    }

    printf("checksum = %lX\n", v);
    return 0;
}