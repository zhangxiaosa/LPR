#include <stdio.h>

int fn2(int p1, long p2) {
    return p1 && p2 ? p1 : p1 % p2;
}

int v;
unsigned w = 0xDC6F3D13L;
long ag[4];
int ah;
long ak;
int al;
int ao;
int ap;

int main() {
    long au_0;
    for (ak = 0;;) {
        for (ah = 0; ah <= 3; ah += 1) {
            au_0 = (~(ap % 1 != 0) && ak) && 0x57;
            if (w) {
                v = 0x41AEA787L;
                ag[3] = (long)au_0;
            } else
                ao = au_0;
        }
        return al;
    }
    printf("checksum = %ld\n", v);
    return 0;
}