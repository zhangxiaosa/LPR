
<SYS>

#include <stdio.h>

int main() {
    unsigned int ac = 1;
    short int an = 0x294A;
    short int ao = 0xBCD1;
    int temp = ao - (1 - an);
    int v_int = temp - (ac || (an = 0)) & 1;
    printf("checksum = %d\n", v_int);
    return 0;
}

</SYS>
