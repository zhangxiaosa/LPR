#include <stdio.h>

long fn1(long p1, long p2) {
    return p1 - p2;
}

unsigned fn2(unsigned p1, unsigned p2) {
    return p1;
}

unsigned e;
long f;
short g;
short a = 1;

int main() {
    for (g = 3; g; g -= 1) {
        unsigned c;
        if (c == 250UL) {
            c = g;
            if ((fn1(0xBCD1, 1 - c) - a) & 1UL) {
                f = 1UL;
            }
        }
    }
    e = f;

    printf("checksum = %X\n", e);
    return 0;
}
