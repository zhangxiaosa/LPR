
#include <stdio.h>

int fn2(int p1_int, int p2_int) {
    return p1_int - p2_int;
}

int k;
int l;
volatile int m[5][8];

int fn3(p1_int) {
    int o;
    for (;;) {
        for (k = 0; k >= -27; k = k - 6)
            for (l = 0; l < 5; l++)
                p1_int = fn2(o, p1_int);
        p1_int || m[2][5];
    }
}

int main() {
    int p1_int = 0;
    int p2_int = 0;
    int o = 0;
    for (k = 0; k < 5; k++) {
        for (l = 0; l < 8; l++) {
            p1_int = fn2(o, p1_int);
            m[k][l] = p1_int;
        }
    }
    printf("Final value of m: ");
    for (k = 0; k < 5; k++) {
        for (l = 0; l < 8; l++) {
            printf("%d ", m[k][l]);
        }
        printf("\n");
    }
    return 0;
}
