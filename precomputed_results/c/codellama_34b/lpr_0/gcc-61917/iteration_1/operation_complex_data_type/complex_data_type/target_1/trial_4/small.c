
#include <stdio.h>

int main() {
    int k;
    int l;
    volatile int m[5][8];
    int p1 = &m[2][5];
    fn3(p1);
}

int fn3(int *p1) {
    int o;
    for (;;) {
        for (; l; l++) {
            for (k = 0; k >= -27; k = k - 6) {
                p1 = o - p1;
            }
        }
    }
}
