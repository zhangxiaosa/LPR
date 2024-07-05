
#include <stdio.h>

int fn2(int p1, int p2) {
    return p1 - p2;
}

unsigned char fn4(unsigned p1, unsigned p2) {
    return p1;
}

int main() {
    int p = 0;
    int t = 0;
    int v = 0;
    short w = 3;
    unsigned ac = 1;
    int al = 3;
    short an = 250;
    short ao = 0xBCD1;

    for (int i = 0; i < 3; i++) {
        an = 250;
        t = ac || (an = w) == 0x294A85636008822D;
        if (fn2(ao - fn4(1 - an, 0xECL), t) & 1)
            v = 1;
    }

    p = v;
    printf("checksum = %d\n", p);
    return 0;
}
