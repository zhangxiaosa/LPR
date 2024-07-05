
#include <stdio.h>

unsigned p1[3] = {0};
unsigned ap[3] = {0};
unsigned v[3] = {0};
short w[3] = {0};
short ab[3] = {0};
short ac[3] = {1};
unsigned am[3] = {0};
unsigned an[3] = {0};
unsigned ao[3] = {0};
unsigned ae[3] = {0};

unsigned fn2(unsigned p1, short p2) {
    return p1 - p2;
}

unsigned fn5(short p1, short p2) {
    return p2;
}

unsigned fn6(unsigned p1, short p2) {
    return p2;
}

void fn9(unsigned p1, char *p2, unsigned p3) {
    p = p1;
}

unsigned fn10(unsigned p1, short p2) {
    int am = 1;
    int an;
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(ao - (fn6(am, an) & 1) << 8, p2) & 1)
        v = 1;
    return 3;
}

int main() {
    unsigned ap[3] = {0};
    fn13();
    fn9(v, "g_170", ap);
    printf("checksum = %X\n", p);
    return 0;
}
