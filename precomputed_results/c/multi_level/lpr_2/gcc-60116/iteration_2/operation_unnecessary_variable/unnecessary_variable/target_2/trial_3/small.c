#include <stdio.h>

char fn2(char p1, char p2) {
    return p1 % p2;
}

char q;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long long ak;
unsigned ao;
unsigned ap;

int main() {
    short au_4_1_5;
    ak = 0;
    for (ah = 0; ah <= 3; ah += 1) {
        unsigned assigned_value = au_4_1_5 = 0; // Constant propagation optimization
        if (w) {
            q = 0x41AEA787L;
            ag[3] = au_4_1_5;
        } else {
            ao = au_4_1_5; // Variable unused, optimized out
        }
    }
    printf("checksum = %X\n", q);
    return 0;
}