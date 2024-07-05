
#include <stdio.h>

int main() {
    unsigned int f = 0;
    int g = 0;
    int i = 0;
    int j = 0x24F96B7BL;
    unsigned int k = 0;

    for (f = 0; f < 0x24F96B7BL; f++) {
        for (j = 0; j < 0x24F96B7BL; j++) {
            if (j == 0) {
                k = k << 1;
            }
            else {
                k = k >> 1;
            }
        }
    }

    g = k;

    return 0;
}
