
#include <stdio.h>

int main() {
    short an = 0x294A;
    unsigned ac = 1;
    short ao = 0xBCD1;
    int temp = ao - (1 - an);
    int t = ac || (an = 0);
    int v_int = temp - t & 1;
    printf("checksum = %d\n", v_int);
    return 0;
}
