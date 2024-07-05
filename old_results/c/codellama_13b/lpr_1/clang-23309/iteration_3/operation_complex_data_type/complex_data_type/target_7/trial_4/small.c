
#include <stdio.h>

unsigned short fn6(unsigned short p1, unsigned short p2) {
    return p1 - p2;
}

unsigned short w;
unsigned short ab;
unsigned short ac = 3;

int fn13() {
    unsigned short an;
    while (w) {
        if (an == 250) {
            unsigned short p2 = fn6(ab, ac) || an == 0x294A85636008822D;
            const unsigned short ao = 0xBCD1;
            if (ao - fn6(1, an) & 1)
                w |= 1;
        }
    }
    return 3;
}

int main() {
    fn13();
    printf("checksum = %X\n", w);
    return 0;
}
