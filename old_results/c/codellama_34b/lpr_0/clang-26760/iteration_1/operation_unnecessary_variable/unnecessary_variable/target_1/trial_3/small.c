
#include <stdio.h>

int main() {
    unsigned int k = 0x24F96B7BL;
    int n = k;
    while (n) {
        k = k >> 1;
        n = n - 1;
    }
    printf("k = %d\n", k);
    return 0;
}
