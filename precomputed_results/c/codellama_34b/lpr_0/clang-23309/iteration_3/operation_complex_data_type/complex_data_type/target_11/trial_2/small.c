
<SYS>

#include <stdio.h>

int main() {
    int p1 = 7;
    int p2 = 7;
    int p3 = 248;
    int p4 = 0;
    int an = 250;
    int ao = 48873;
    int v = fn12(p1, p2, p3, p4);
    printf("checksum = %X\n", v);
    return 0;
}

int fn12(int p1, int p2, int p3, int p4) {
    int w = 3;
    int an = 250;
    int ao = 48873;
    while (w) {
        if (p2 || (an = w)) {
            if (fn3(ao, fn6(1, an)) - p2 & 1)
                v = 1;
        }
        w--;
    }
    return v;
}

int fn3(int p1, int p2) {
    return p1 - p2;
}

int fn6(int p1, int p2) {
    return p2 - p1;
}
