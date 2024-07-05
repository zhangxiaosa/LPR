
#include <stdio.h>

int fn3(int p1, int p2) {
    return p1 - p2;
}

int fn6(int p1, int p2) {
    return p2 - p1;
}

int p;
int v;
short w = 3;
short fn12(int p1, int p2, int p3, short p4) {
    int an;
    while (w) {
        an = 250;
        if (p2 || (an = w)) {
            short ao = 48873;
            if (fn3(ao, fn6(1, an)) - p2 & 1)
                v = 1;
        }
        w--;
    }
    return 0;
}

int main() {
    fn12(7, 7, 248, 0);
    p = v;
    printf("checksum = %X\n", p);
    return 0;
}
