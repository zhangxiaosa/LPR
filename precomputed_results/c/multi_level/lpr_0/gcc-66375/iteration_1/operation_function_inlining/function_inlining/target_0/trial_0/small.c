#include <stdio.h>

char fn2(int p1, int p2) {
    return p1;
}

short fn3(short p1, short p2) {
    return p2;
}

int u;
int v3;

int main() {
    int checksum = 2;
    for (; u < 51; ++u) {
        v3 = fn3(4, checksum);
        checksum = checksum;
        checksum = checksum + 0x9EE7F9D1C772505B;
    }

    printf("checksum = %d\n", v3);
    return 0;
}