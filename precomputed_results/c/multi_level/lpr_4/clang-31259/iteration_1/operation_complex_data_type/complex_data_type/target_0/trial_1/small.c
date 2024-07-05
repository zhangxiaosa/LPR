#include <stdio.h>

int ad_0_0_0 = 8;
int ad_1_0_0 = 8;
int ad_2_0_0 = 8;
int ad_2_0_1 = 0x98;

int s = 0;
int u = 0;
int v = 0;
static int w = 254;
short ae = 0;
int af = 0;

int fn3(int p1, int p2) {
    return 1;
}

int fn4(int p1, int p2) {
    return 1 % p2;
}

int fn9() {
    int ai_0 = 8;
    int ai_1 = 8;
    int i = 0;
    ai[0] = ai_0;
    ai[1] = ai_1;

    for (w = 1;;) {
        for (; i < 5; i += 2);
        for (af = 6; af >= 0; af -= 1) {
            int p1 = 1;
            int p2 = u--;
            int fn3_result = fn3(p1, p2);
            int fn4_result = fn4(fn3_result, 4294967295);
            v = ai[0] ^= ad[w + 1][w][af] = fn4_result;
        }
        return ae;
    }
}

int main() {
    int j = 0;
    fn9();

    for (j = 0; j < 5; j++)
        s = s ^ ad_2_j_0;

    printf("s_unrolled_iter_1 = %X\n", s);
    return 0;
}