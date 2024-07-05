#include <stdio.h>

short fn2(short p1, short p2) {
    return p1 && p2 ? p1 : p1 % p2;
}

long fn3(long p1, long p2) {
    return p2;
}

char fn5(char p1, int p2) {
    return p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
    return p2;
}

unsigned fn7(unsigned p1, unsigned p2) {
    return p1;
}

long long fn8(long p1, long long p2) {
    return p1 + p2;
}

unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ap;
int aq;

long fn12() {
    int au[5][2][10];
    for (ak = 0;;) {
        for (ah = 0; ah <= 3; ah += 1) {
            if (w >= (fn7(4UL, fn6(aq, fn5(ai, au[4][1][5] = fn8(~1, ak) && 0x57L))) > 2)) {
                ag[3] = au[4][1][5];
            }
        }
        return 0;
    }
}

int main() {
    fn12();
    printf("checksum = %X\n", 0);
    return 0;
}
