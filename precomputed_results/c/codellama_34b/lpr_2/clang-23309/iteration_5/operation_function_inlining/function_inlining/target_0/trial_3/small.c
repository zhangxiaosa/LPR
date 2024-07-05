
<SYS>

#include <stdio.h>

int main() {
    short an;
    short ao;
    int t;
    int temp;
    int v_int;

    an = 0x294A;
    ao = 0xBCD1;
    t = an || (an = 0);
    temp = ao - (1 - an);
    v_int = temp - t;
    printf("checksum = %d\n", v_int);
    return 0;
}

</SYS>
