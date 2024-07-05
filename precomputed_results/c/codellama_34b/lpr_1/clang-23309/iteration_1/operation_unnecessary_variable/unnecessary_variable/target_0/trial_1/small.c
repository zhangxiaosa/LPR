
#include <stdio.h>

int fn2(int p1, int p2) {
    return p1 - p2;
}

int fn3(int p1, int p2) {
    return p1 - p2;
}

int main() {
    int v = 1;
    int w = 3;
    int an;
    int al;
    for (an = 250; an > 0; an--) {
        if (fn2(fn3(0xBCD1, 1 - an), an) & 1) {
            v = 1;
        }
    }
    printf("checksum = %X\n", v);
    return 0;
}
