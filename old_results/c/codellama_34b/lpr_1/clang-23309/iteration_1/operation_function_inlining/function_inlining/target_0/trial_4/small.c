
#include <stdio.h>

short fn1(short p1, int p2) {
    printf("checksum = %X\n", p1);
}

short fn2(short p1, short p2) {
    return p1 - p2;
}

short fn3(short p1, short p2) {
    return p1 - p2;
}

short fn5(short p1, short p2) {
    return p2;
}

short fn6(short p1, short p2) {
    return p1 - p2;
}

short p;

void fn9(short p1, char *p2) {
    p = p1;
}

short v;
unsigned char w;
short ab;
unsigned ac = 1;

int main() {
    short al = 3;
    short an;
    for (w = 3; w; w--) {
        an = 250;
        p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
        if (fn2(fn3(0xBCD1, fn6(1, an)), p2) & 1)
            v = 1;
    }
    fn1(p, 0);
    return 0;
}
