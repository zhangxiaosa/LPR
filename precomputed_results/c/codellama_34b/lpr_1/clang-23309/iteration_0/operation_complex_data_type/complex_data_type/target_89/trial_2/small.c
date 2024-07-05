
#include <stdio.h>

void fn1(short p1, int p2) {
    printf("checksum = %X\n", p1);
}

short fn2(short p1, short p2) {
    return p1 - p2;
}

short fn3(short p1, short p2) {
    return p1 - p2;
}

short fn5(short p1, short p2) {
    return p2;
}

short fn6(short p1, short p2) {
    return p1 - p2;
}

short p;

void fn9(short p1) {
    p = p1;
}

short t;
unsigned char u;
short v;
unsigned char w;
short ab;
unsigned char ac = 1;

int main() {
    fn1(p, 0);
    return 0;
}
