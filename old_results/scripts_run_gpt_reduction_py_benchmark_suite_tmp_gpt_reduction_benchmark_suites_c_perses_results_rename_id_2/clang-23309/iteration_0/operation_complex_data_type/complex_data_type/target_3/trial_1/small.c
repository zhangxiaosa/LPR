#include <stdio.h>

unsigned int fn5(unsigned int p1, unsigned int p2) {
    return p2;
}

unsigned int fn6(unsigned int p1, unsigned int p2) {
    return p1 - p2;
}

unsigned int p;
int t;
long v;
short w;
unsigned int ab;
short ac_value = 1;

int fn13() {
    int an = 0;

    for (w = 3; w; w -= 1) {
        if (an == 250) {
            t = fn5(ab, ac_value) || (an = w) == 0x294A85636008822DL;
            short ao = 0xBCD1;

            if (((ao - (fn6(1, an) - 0xECL)) - t) & 1)
                v = 1;
        }
    }

    return 1;
}

int main() {
    fn13();
    p = v;
    printf("checksum = %X\n", p);
    return 0;
}