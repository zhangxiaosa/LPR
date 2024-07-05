#include <stdio.h>

int main() {
    int i;
    short r = 0;
    while (r > 1L) {
        r -= 1;
        r -= 1;
        r -= 1;
        r -= 1;
        r -= 1;
        r -= 1;
        r -= 1;
        r -= 1;
        r -= 1;
        r -= 1;
    }
    printf("checksum = %X\n", r);
    return 0;
}
