
#include <stdio.h>

int fn2(int p1, int p2) {
    return p1 - p2;
}

int main() {
    int t;
    int v_int;
    short w;
    unsigned short an;
    unsigned short ao;
    int temp;

    w = 0;
    an = 0x294A;
    t = an || (an = w);
    ao = 0xBCD1;
    temp = ao - (1 - an);
    v_int = fn2(temp, t) & 1;
    printf("checksum = %d\n", v_int);
    return 0;
}
