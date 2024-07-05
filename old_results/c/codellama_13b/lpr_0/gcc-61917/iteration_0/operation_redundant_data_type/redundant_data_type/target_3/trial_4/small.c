
#include <stdio.h>

int a;
int c;
unsigned int e;
unsigned int f;

unsigned int fn2(unsigned int p1, unsigned int p2) {
    return p1 - p2;
}

int k;
unsigned int l;
volatile unsigned int m[5][8];

unsigned int fn3(unsigned int p1) {
    a = 0x4FL;
    for (;;) {
        for (l = 0; l < 20; l++) {
            for (k = 0; k >= -27; k -= 6) {
                p1 = fn2(a, p1);
            }
        }
        p1 || m[2][5];
    }
}

int main() {
    fn3(0);
    return 0;
}
