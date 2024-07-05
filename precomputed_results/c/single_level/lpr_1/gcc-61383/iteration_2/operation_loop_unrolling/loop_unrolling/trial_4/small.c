#include <stdio.h>

signed int fn1(signed int p1, signed int p2) {
    return p2 == 0 ? p1 : p1 % p2;
}

short int fn2(short int p1, int p2) {
    return p1;
}

int fn3(int p1, int p2) {
    return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned int n;
signed int o;
static unsigned int p = 0x01B28DB7L;

int main() {
    int ab;
    signed int ac = 0xE3L;

    // Unrolled loop
    if (0x4F92L < fn2(p | (ab = fn1(o, o)), 6))
        ;
    else {
        if (o > ac) {
            if (ab)
                break;
        }
    }

    if (0x4F92L < fn2(p | (ab = fn1(n = fn3(n, 3), o)), 6))
        ;
    else {
        if (o > ac) {
            if (ab)
                break;
        }
    }

    if (0x4F92L < fn2(p | (ab = fn1(n = fn3(n, 3), o)), 6))
        ;
    else {
        if (o > ac) {
            if (ab)
                break;
        }
    }
    // Repeat the above block 9 more times

    return 0;
}
