
#include <stdio.h>

int g;
long h0 = 0x92A1D2CDL;
static long i = 0x06D7L;

int fn2() {
    int q = 0xC3L;
    int r[5][9][5];
    if (h0)
        return q;
    g = r[i][i][i];
    for (int j = 0; j < 5; j++) {
        for (int k = 0; k < 9; k++) {
            for (int l = 0; l < 5; l++) {
                g = r[j][k][l];
            }
        }
    }
    return q;
}

int main() {
    fn2();
    return 0;
}
