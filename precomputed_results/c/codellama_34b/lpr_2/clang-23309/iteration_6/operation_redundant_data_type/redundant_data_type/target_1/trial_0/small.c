
#include <stdio.h>

int main() {
    short an = 0x294A;
    unsigned ac = 1;
    int temp = 0xBCD1 - (1 - an);
    int v_int = temp - ac & 1;
    printf("checksum = %d\n", v_int);
    return 0;
}
