#include <stdio.h>

unsigned f;
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
char an;
int ao;
unsigned ap;
int aq;

long fn12() {
    char as = 4UL;
    short at = 1L;
    int au_4_1_5;
    for (ak = 0;;) {
        for (ah = 0; ah <= 3; ah += 1) {
            unsigned fn7_res = as;
            unsigned fn6_res = ap;
            unsigned fn5_res = p2;
            unsigned fn8_res = (~fn4(fn3(aj, p1) != 0, p2), ak) && 0x57L;
            unsigned result = fn7_res >= fn6_res ? fn7_res : ((fn6_res > 2) ? fn8_res : ao);
            if (w >= result) {
                v = am;
                ag[3] = au_4_1_5;
            } else {
                ao = au_4_1_5;
            }
        }
        return al;
    }
}

int main() {
    int av = 0;
    fn12();
    f = v;
    printf("checksum = %X\n", f);
    return 0;
}
