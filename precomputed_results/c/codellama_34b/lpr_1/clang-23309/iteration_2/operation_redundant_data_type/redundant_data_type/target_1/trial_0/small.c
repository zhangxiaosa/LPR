
#include <stdio.h>

int main() {
    unsigned int v = 0;
    unsigned char w = 0;
    unsigned int ac = 1;
    unsigned char fn10(unsigned short, unsigned short);
    unsigned char fn13() {
        fn10(0, 0);
        return 1;
    }
    unsigned char fn10(unsigned short p1, unsigned short p2) {
        unsigned short an = 0;
        for (w = 3; w; w--) {
            an = 250;
            p2 = ac || (an = w) == 0x294A85636008822D;
            if (fn2(fn3(0xBCD1, 1 - an), p2) & 1)
                v = 1;
        }
        return 3;
    }
    printf("checksum = %X\n", v);
    return 0;
}
