
#include <stdio.h>

int main() {
    short v = 0;
    short w = 0;
    unsigned char ac = 1;
    unsigned char fn10(short, short);

    // Inline fn2
    short fn2(short p1, short p2) {
        return p1 - p2;
    }

    // Inline fn3
    short fn3(short p1, short p2) {
        return p1 - p2;
    }

    fn10(0, 0);
    v = fn2(0xBCD1, 1 - fn3(0xBCD1, 1));
    printf("checksum = %X\n", v);
    return 0;
}
