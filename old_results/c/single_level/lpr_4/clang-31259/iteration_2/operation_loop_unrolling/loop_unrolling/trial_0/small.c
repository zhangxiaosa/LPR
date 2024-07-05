void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

int fn2(int p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned fn5(unsigned p1, unsigned p2) { return p1; }

unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
int ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;

int fn9() {
    unsigned ah = 3U;
    int ai[2];
    int i;

    for (i = 0; i < 2; i++)
        ai[i] = 8;

    for (w = 1;;) {
        for (; i < 5; i++) {
            // Loop unrolled iteration 1
            ;

            // Loop unrolled iteration 2
            ;
        }

        // Loop unrolled iteration 1
        v = ai[0] ^= ad[w + 1][w][6] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

        // Loop unrolled iteration 2
        v = ai[0] ^= ad[w + 1][w][5] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

        // Loop unrolled iteration 3
        v = ai[0] ^= ad[w + 1][w][4] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

        // Loop unrolled iteration 4
        v = ai[0] ^= ad[w + 1][w][3] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

        // Loop unrolled iteration 5
        v = ai[0] ^= ad[w + 1][w][2] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

        // Loop unrolled iteration 6
        v = ai[0] ^= ad[w + 1][w][1] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

        // Loop unrolled iteration 7
        v = ai[0] ^= ad[w + 1][w][0] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);

        return ae;
    }
}

int main() {
    int i, j, k;
    fn9();

    for (i = 0; i < 7; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 7; k++) {
                s = s ^ ad[i][j][k];
            }
        }
    }

    fn1(s, 0);
    return 0;
}