
#include <stdio.h>

int fn2(int p1, int p2) {
    return p1 - p2;
}

int main() {
    int ac = 1;
    short w = 0;
    short an = 0x294A;
    int ac_val = ac;
    short w_val = w;
    short an_val = an;
    int temp = ac_val || (an_val = w_val);
    int v_int = fn2(temp, temp) & 1;
    printf("checksum = %d\n", v_int);
    return 0;
}
