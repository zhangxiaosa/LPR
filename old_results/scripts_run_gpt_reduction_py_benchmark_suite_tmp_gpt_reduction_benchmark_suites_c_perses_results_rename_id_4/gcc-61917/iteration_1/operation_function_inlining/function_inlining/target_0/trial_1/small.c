#include <stdio.h>

int k;
unsigned l;
volatile unsigned m[5][8];

int main() {
    int p1;
    for (;;) {
        for (l = 0; l; l++) {
            for (k = 0; k >= -27; k = k - 6) {
                p1 = p1 - p1;
            }
        }
        if (p1) break;
    }
    return 0;
}