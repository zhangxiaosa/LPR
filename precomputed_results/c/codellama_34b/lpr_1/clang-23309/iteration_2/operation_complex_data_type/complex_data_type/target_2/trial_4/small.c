
#include <stdio.h>

int main() {
    unsigned v = 0;

    for (unsigned char w = 3; w; w--) {
        if (1 || (1 == 0x294A85636008822D))
            v = 1;
    }

    printf("checksum = %X\n", v);
    return 0;
}
