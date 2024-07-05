#include <stdio.h>

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

a fn2(a p1, a p2) { return p1; }
c fn4(c p1, c p2) { return p1 % p2; }

f s;

void fn8(f p1, char *p2, int p3) { s = s ^ p1; }

d u;
c v;
static d w = 254U;
a ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
b ae;
c af;

int main() {
    int i, j, k;
    int aj = 0;

    e ah = 3U;
    c ai[2];
    int l;

    for (l = 0; l < 2; l++)
        ai[l] = 8;

    for (w = 1;;) {
        for (; l < 5; l++)
            ;

        for (af = 6; af >= 0; af -= 1) {
            v = ai[0] ^= ad[w + 1][w][af] = 1 % 4294967295U;
        }

        ae = 6;
        return 0;
    }

    for (i = 0; i < 7; i++)
        for (j = 0; j < 5; j++)
            for (k = 0; k < 7; k++)
                s = s ^ ad[i][j][k];

    printf("checksum = %X\n", s);
    return 0;
}