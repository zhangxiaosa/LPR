
#include <stdio.h>

int main() {
    int t;
    int v_int;
    unsigned ac = 1;
    short an = 0x294A;
    t = ac || (an = 0);
    short ao = 0xBCD1;
    int temp = ao - an + 1;
    v_int = temp - t & 1;
    printf("checksum = %d\n", v_int);
    return 0;
}
