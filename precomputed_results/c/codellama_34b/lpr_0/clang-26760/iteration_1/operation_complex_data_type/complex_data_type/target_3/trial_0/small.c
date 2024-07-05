
#include <stdio.h>

int main() {
    unsigned int f = 0;
    int g = 0;
    unsigned int j = 0x24F96B7BL;
    unsigned int k = 0;

    for (f = 0; f < 10; f++) {
        for (j = 0; j < 10; j--) {
            printf("f: %u, j: %u\n", f, j);
        }
    }

    int n = g;
    while (n > 0) {
        k = k >> 1L;
        i = n;
        if (i > 0) {
            k = k << j;
        }
    }

    return 0;
}
