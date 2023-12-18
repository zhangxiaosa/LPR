#include <stdio.h>

int fn2(int p1, int p2) {
    return p1 && p2 ? p1 : p1 % p2;
}

int fn5(int p1, int p2) {
    return 0x41AEA787L;
}

unsigned int fn6(unsigned int p1, unsigned int p2) {
    return 0xDC6F3D13L;
}

long long fn8(long p1, long long p2) {
    return p1 + p2;
}

unsigned int f;
unsigned int w = 0xDC6F3D13L;
unsigned int ag3;
int ah;
int ai;
long ak;
unsigned int al;
int am = 0x41AEA787L;
int ao;
unsigned int ap;
int aq;

void optimizeAg() {
    unsigned int au[5][2][10];
    for (ak = 0;;) {
        for (ah = 0; ah <= 3; ah += 1) {
            unsigned int temp = fn8(~(fn2(ap, 1L) != 0), ak);
            unsigned int temp2 = fn5(ai, (au[4][1][5] = temp) && 0x57L);
            if (w >= fn6(aq, temp2) > 2) {
                f = am;
                ag3 = au[4][1][5];
            } else {
                ao = au[4][1][5];
            }
        }
        return al;
    }
}

int main() {
    optimizeAg();
    printf("checksum = %X\n", f);
    return 0;
}