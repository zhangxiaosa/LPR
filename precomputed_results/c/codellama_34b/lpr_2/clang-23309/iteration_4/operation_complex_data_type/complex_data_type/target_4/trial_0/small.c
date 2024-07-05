
#include <stdio.h>

int fn2(int p1, int p2) {
    return p1 - p2;
}

int main() {
    short an = 0x294A;
    short ao = 0xBCD1;
    short w = 0;
    unsigned short ac = 1;
    short t = ac || (an = w);
    if (fn2(ao - (1 - an), t) & 1) {
        int v_int = 1;
        printf("checksum = %d\n", v_int);
    }
    return 0;
}
