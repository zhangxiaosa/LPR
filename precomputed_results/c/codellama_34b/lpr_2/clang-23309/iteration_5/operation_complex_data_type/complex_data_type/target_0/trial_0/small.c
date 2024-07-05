
#include <stdio.h>

int fn2(int p1, int p2) {
    return p1 - p2;
}

int main() {
    short an;
    short ao;
    int t;
    int v_int;
    unsigned ac = 1;
    short w;

    an = 0x294A;
    t = ac || (an = w);
    ao = 0xBCD1;
    int temp = ao - (1 - an);
    v_int = fn2(temp, t) & 1;
    printf("checksum = %d\n", v_int);
    return 0;
}
