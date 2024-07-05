
#include <stdio.h>

int main() {
    int t;
    int v_int;
    unsigned ac = 1;

    // Decompose the variable 'an' into 'a' and 'n'
    short a = 0x294A;
    short n = 0xBCD1;

    // Decompose the expression 'ac || (an = 0)' into 'ac || (a = 0)' and 'n = 0'
    if (ac || (a = 0)) {
        n = 0;
    }

    // Decompose the expression 'ao - (1 - an)' into 'ao - (1 - a)' and 'n - 1'
    int temp = ao - (1 - a);
    temp -= n - 1;

    // Decompose the expression 'v_int = temp - t & 1' into 'v_int = temp - t' and 'v_int &= 1'
    v_int = temp - t;
    v_int &= 1;

    printf("checksum = %d\n", v_int);
    return 0;
}
