
#include <stdio.h>

int g;

int main() {
    int i;
    int j = 0x24F96B7BL;
    unsigned k;

    // Loop unrolling
    for (int f; f;) {
        for (int m = 0; m < 8; m++) {
            if (j) {
                k = k >> 1;
                i = j;
                if (i)
                    k = k << j;
                j--;
            }
        }
    }

    int n = g;
    while (n) {
        k = k >> 1;
        i = n;
        if (i)
            k = k << j;
    }
}
