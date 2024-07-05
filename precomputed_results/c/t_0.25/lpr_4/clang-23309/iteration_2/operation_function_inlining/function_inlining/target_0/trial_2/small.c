#include <stdio.h>

int main() {
    int v = 0;
    short w = 0;
    short ac = 1;
    int an;

    for (w = 3; w; w -= 1) {
        if (an = 250) {
            if (!ac) {
                an = w;
            }
            if (((short)0xBCD1 - (short)(1 - an)) - ac & 1) {
                v = 1;
            }
        }
    }

    printf("checksum = %X\n", v);
    return 0;
}