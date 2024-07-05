#include<stdio.h>

int fn4(int p1, int _) {
    return _;
}

int s;
unsigned w;
int ad[][5][7] = {{8}, 8};
int af;
int main() {
    for (w = 1;;) {
        for (; af;)
            ;

        // Unrolled loop iterations
        ad[1][w][af] = fn4(1, 4294967295);
        af -= 1;
        ad[1][w][af] = fn4(1, 4294967295);
        af -= 1;
        ad[1][w][af] = fn4(1, 4294967295);
        af -= 1;
        // ... continue unrolling as desired

        break;
    }
    s ^= ad[1][1][0];
    printf("checksum = %X\n", s);
    return 0;
}
