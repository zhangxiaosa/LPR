#include <stdio.h>

short ac = 1;

char fn4(char p1, char p2) { return p1; }

int main() {
    int an;
    long v;
    short w;
    int t;

    for (w = 3; w; w -= 1) {
        an = 250;
        t = ac || (an = w) == 0x294A85636008822D;
        short ao = 0xBCD1;
        if ((ao - fn4(-2, 0xEC)) - t & 1)
            v = 1;
    }

    printf("checksum = %lX\n", v);
    return 0;
}
