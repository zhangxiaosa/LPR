#include <stdio.h>

short fn3(short p1, short p2) {
    return p2;
}

unsigned p;
unsigned u;
unsigned v_0_3;
unsigned e_0;

int main() {
    int d = 2L;

    for (; u < 51; ++u) {
        e_0 = 0x9EE7F9D1C772505B;
        d = (v_0_3 = fn3(4L, d)) + e_0;
    }

    p = v_0_3;
    printf("checksum = %X\n", p);
    return 0;
}