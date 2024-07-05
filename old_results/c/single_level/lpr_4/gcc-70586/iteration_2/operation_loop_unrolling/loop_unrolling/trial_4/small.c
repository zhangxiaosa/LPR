#include <stdio.h>

unsigned fn2(unsigned p1, unsigned p2) {
    return p1 - p2;
}

unsigned i;

unsigned fn3(unsigned p1) {
    short m = 0x809C;
    printf("l_1179=%d\n", 0);
    p1 = fn2(0x60781BCD >= m ^ 4294967287UL, 0xE576516E);
    if (i)
        printf("%d\n", 0);
    return p1;
}

int main() {
    fn3(1);
    return 0;
}