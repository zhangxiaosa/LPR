#include <stdio.h>

int fn4(int p1, int _) {
    return _;
}

int s;
unsigned w;
int ad[][5][7] = {{8}, {8}, 8};
int af;

int main() {
    int i, j;

    for (i = 0; i < 2; i++)
        ;

    for (w = 1;;) {
        for (; af;)
            ;

        // Loop unrolled and optimized
        ad[1][w][af] = fn4(1, 4294967295);

        break;
    }

    for (j = 0; j < 5; j++)
        s ^= ad[i][j][0];

    printf("checksum = %X\n", s);
    return 0;
}