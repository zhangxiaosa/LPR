#include <stdio.h>

int fn2(int p1, long long p2) {
    return p1 && p2 ? p1 : p1 % p2;
}

long fn8(long p1, long long p2) {
    return p1 + p2;
}

int v;
long long w = 0xDC6F3D13LL;
long ag[4];
int ah;
long ak;
int ap;

int fn12() {
    long long au_0;
    
    for (ak = 0;;) {
        for (ah = 0; ah <= 3; ah += 1) {
            au_0 = fn8(~(fn2(ap, 1) != 0), ak) && 0x57LL;
            
            if (w != 0) {
                v = 0x41AEA787LL;
                ag[3] = au_0;
            } else {
                ag[3] = au_0;
            }
        }
        return 0;
    }
}

int main() {
    fn12();
    printf("checksum = %lld\n", v);
    return 0;
}