
#include <stdio.h>

void fn3(int p1, int p2) {
    return p1 - p2;
}

void fn6(unsigned int p1, unsigned int p2) {
    return p2 - p1;
}

int main() {
    unsigned int p = 0;
    unsigned int v = 0;
    short w = 3;

    while (w) {
        int an = 250;
        if (p || (an = w)) {
            short ao = 48873;
            if (fn3(ao, fn6(1, an)) - p & 1)
                v = 1;
        }
        w--;
    }
    p = v;
    printf("checksum = %X\n", p);
    return 0;
}
