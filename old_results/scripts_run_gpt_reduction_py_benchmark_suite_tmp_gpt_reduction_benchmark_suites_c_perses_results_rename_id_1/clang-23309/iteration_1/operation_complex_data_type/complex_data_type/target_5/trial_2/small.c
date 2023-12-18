#include <stdio.h>

unsigned subtract(unsigned p1, unsigned p2) {
    return p1 - p2;
}

int main() {
    unsigned p;
    unsigned v = 0;
    unsigned an = 250;

    for (int w = 3; w; w--) {
        unsigned u = (v || (an = w) == 0x294A85636008822D);

        if (((0xBCD1 - (subtract(1, an) - 0xEC)) - u) & 1) {
            v = 1;
        }
    }

    p = v;
    printf("checksum = %u\n", p);

    return 0;
}