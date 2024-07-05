#include <stdint.h>
#include <stdio.h>

int fn2(int p1, int p2) {
    return p1 && p2 ? p1 : p1 % p2;
}

long fn8(int p1, long p2) {
    return p1 + p2;
}

int v;
int w = 0xDC6F3D13;
long ag3;
int ah;
int ak;
int ap;
int ap32;

int fn12() {
    int au_0;
    for (ak = 0;;) {
        for (ah = 0; ah <= 3; ah++) {
            au_0 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
            if (w) {
                v = 0x41AEA787;
                ag3 = au_0;
            } else
                ag3 = au_0;
        }
        return 0;
    }
}

int main() {
    fn12();
    printf("checksum = %d\n", v);
    return 0;
}