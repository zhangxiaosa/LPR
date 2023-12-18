#include <stdio.h>

int fn2(int p1, long p2) {
    int result;
    if(p1 && p2)
        result = p1;
    else
        result = p1 % p2;
    return result;
}

long long fn8(long p1, long long p2) {
    return p1 + p2;
}

int main() {
    int v;
    int w = 0xDC6F3D13L;
    long long ag[4];
    int ah;
    long ak;
    int al;
    int ao;
    int ap;
    
    long au_0;
    ak = 0;

    while (1) {
        for (ah = 0; ah <= 3; ah += 1) {
            au_0 = ~(fn2(ap, 1) != 0) & ak & 0x57;
            if (w != 0) {
                v = 0x41AEA787L;
                ag[3] = au_0;
            }
            else {
                ao = au_0;
            }
        }
        break;
    }
    
    printf("checksum = %d\n", v);
    return 0;
}