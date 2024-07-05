
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }

int main() {
    short an;
    short w;
    unsigned ac = 1;
    int temp;
    int v_int;

    w = 0;
    an = 0x294A;
    temp = an - (1 - an);
    v_int = fn2(temp, t) & 1;
    printf("checksum = %d\n", v_int);

    return 0;
}
