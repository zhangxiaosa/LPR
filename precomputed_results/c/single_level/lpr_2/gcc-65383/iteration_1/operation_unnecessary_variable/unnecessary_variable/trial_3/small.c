#include <stdio.h>

int g;
int h2 = 0x92A1D2CDL;
static int i = 0x06D7L;

unsigned fn2() {
    for (;;) {
        int r[5][9][5];
        g = r[i][i][i];
    }
}

int main() {
    fn2();
}