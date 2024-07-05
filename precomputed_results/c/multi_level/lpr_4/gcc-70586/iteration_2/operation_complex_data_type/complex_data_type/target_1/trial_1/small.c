
#include <stdio.h>

int main() {
    unsigned p1 = (0x60781BCD >= 0x809C ^ 4294967287UL) - 0xE576516E;
    printf("l_1179=%u\n", p1);
    return 0;
}