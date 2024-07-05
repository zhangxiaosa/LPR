
#include <stdio.h>

int main() {
    int v = 0;
    int w = 3;
    int an = 250;
    int p1 = 0xBCD1;
    int p2 = 1 - an;

    for (int i = 0; i < w; i++) {
        an = w;
        p2 = (an == 0x294A85636008822D) ? 1 : 0;
        v = fn2(fn3(p1, p2), p2);
    }

    printf("checksum = %X\n", v);
    return 0;
}

int fn2(int p1, int p2) {
    return p1 - p2;
}

int fn3(int p1, int p2) {
    return p1 - p2;
}
