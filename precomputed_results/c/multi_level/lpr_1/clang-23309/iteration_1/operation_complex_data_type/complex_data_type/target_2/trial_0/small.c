#include <stdio.h>

unsigned int fn6(unsigned int p1, unsigned int p2) {
    return p1 - p2;
}

unsigned int p;
unsigned int u;
long int v;
short int w;
short int ac = (short int)1;

int main() {
    long int am = (long int)1;
    int an;

    for (w = 3; w != 0; w -= 1) {
        if ((an = (unsigned long)250) != 0) {
            u = (unsigned int)ac || (an = w) == (unsigned long long)0x294A85636008822D;
            short int ao = (short int)0xBCD1;

            if ((((ao - (unsigned int)(fn6(am, an) - (long int)0xEC))) - u) & (unsigned long)1) {
                v = (unsigned long int)1;
            }
        }
    }

    p = (unsigned int)v;
    printf("checksum = %u\n", p);

    return 0;
}