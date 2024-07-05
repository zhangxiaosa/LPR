
#include <stdio.h>

int fn2(int p1, int p2) {
    return p1 - p2;
}

int main() {
    short an;
    short ao;
    an = 0x294A;
    ao = 0xBCD1;
    int t;
    t = fn2(ao - (1 - an), t);
    if (t & 1) {
        v_int = 1;
    }
    printf("checksum = %d\n", v_int);
    return 0;
}
