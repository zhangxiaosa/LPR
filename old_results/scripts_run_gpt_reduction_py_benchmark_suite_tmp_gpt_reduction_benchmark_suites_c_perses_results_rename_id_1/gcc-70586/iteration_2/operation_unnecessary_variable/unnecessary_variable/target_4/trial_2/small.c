#include <stdio.h>

int p;
static int r = 0x2A52L;
static unsigned t[7][1];

static int fn3(int p1, int p2) {
    return p2 == 0 || (p1 && p2) ? p1 : p1 % p2;
}

static int fn7(short p1) {
    unsigned af = 0;

    for (; af <= 49; af += 8) {
        if (p1 && fn3(p1, 0xBC2AB98CL))
            ;
        else if (!r) {
            printf("l_1179=%lld\n", (long long)fn3(p1, 0xBC2AB98CL));
            break;
        }

        p1 = (0x60781BCDL >= fn3(fn3(0x809CL, p1) > 0xB5L, p1) != p1 ^ 4294967287UL) - fn3(p1, p);

        p = p1;
    }

    t[2][0] = fn3(fn3(p1, p1), 0x9CFB623FL);

    return p1;
}

int main() { 
    fn7(1);
}
