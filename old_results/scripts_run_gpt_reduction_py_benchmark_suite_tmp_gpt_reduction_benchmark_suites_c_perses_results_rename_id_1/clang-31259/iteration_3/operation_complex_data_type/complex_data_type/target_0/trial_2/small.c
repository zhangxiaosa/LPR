#include <stdio.h>
#include <stdbool.h>

int fn4(int p1, int p2) {
    return p2 % p1;
}

unsigned u;
int v;

int ad_dim1_0[][5][7] = {{8}, {8}, {{8}, 0x98}};

int af;

int fn2(int p1, int p2) {
    return p1;
}

int optimized_fn9() {
    int j;
    for (unsigned w = 1;;) {
        for (int af = 6; af >= 0; af -= 1)
            v = ad_dim1_0[w + 1][w][af][0] = fn4(1, fn2(3, u--));
        return 0;
    }
}

int main() {
    optimized_fn9();
    printf("checksum = %x\n", ad_dim1_0[2][1][0][0]);
    return 0;
}