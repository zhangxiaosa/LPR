#include <stdio.h>

unsigned fn1(unsigned p1, unsigned p2) {
    return p2 == 0 ? p1 : p1 % p2;
}

unsigned fn2(unsigned p1) {
    return (unsigned)p1;
}

unsigned fn3(unsigned p1, unsigned p2) {
    return (p1 & p2 & (p1 > 2147483647u - p2)) | (p1 < 0 && p2 < 0 && p1);
}

unsigned n;
unsigned o;

int main() {
    for (; n < 12; n = fn3(n, 3)) {
        unsigned ab;
        if (0x4F92u < fn2(0x01B28DB7u | (ab = fn1(o, o))))
            ;
        else if (o <= 0xE3u)
            ;
        else if (ab)
            break;
    }
    return 0;
}