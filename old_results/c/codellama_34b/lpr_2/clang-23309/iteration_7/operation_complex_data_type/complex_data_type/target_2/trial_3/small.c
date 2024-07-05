
#include <stdio.h>

int main() {
    unsigned int ac = 1;
    short an = 0x294A;
    short ao = 0xBCD1;

    // Calculate the checksum
    int tmp1 = ac || (an = 0);
    int tmp2 = ao - (1 - an);
    int tmp3 = tmp2 - tmp1 & 1;
    int v_int = tmp3;

    // Print the checksum
    printf("checksum = %d\n", v_int);

    return 0;
}
