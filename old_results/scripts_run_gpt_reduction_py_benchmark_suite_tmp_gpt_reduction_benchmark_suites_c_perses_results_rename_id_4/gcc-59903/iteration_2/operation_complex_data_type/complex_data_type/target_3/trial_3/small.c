#include <stdio.h>

unsigned int m[4];

int n_j[2];
int n_k[2];
int n_l[2];

char fn1(unsigned int p1, int p2) {
    return p1 > p2 ? p1 : p1 << p2;
}

int fn2(int p1, int p2_j, int p2_k, int p2_l, unsigned int p3, short p4) {
    int v_j = 21;
    int v_k = -5;
    int v_l = 0;
    int w = 0;
    int a = 0;

    if (p4 ^ v_k) {
        // do nothing
    } else {
        n_j[1] = v_j;
        n_k[1] = v_k;
        n_l[1] = v_l;
    }

    for (; w; w += 1) {
        for (p3 = 0; p3 <= 39; ++p3) {
            for (p2_j = 0; p2_j <= 2; p2_j += 1) {
                n_j[0] = v_j;
                n_k[0] = v_k;
                n_l[0] = m[p2_j];

                if (!n_j[0]) {
                    // do nothing
                } else {
                    w = fn1(n_l[0], 2) && p2_k;

                    for (; a; a += 1) {
                        n_j[0] = v_j;
                        n_k[0] = v_k;
                        n_l[0] = m[p2_j];
                    }
                }
            }
        }
    }

    return p2_j;
}

unsigned int fn3(int p1) {
    unsigned int q[7][7];

    if (fn2(p1, n_j[0], n_k[0], n_l[0], 0, q[0][0])) {
        // do nothing
    }

    return p1;
}

int main() {
    return 0;
}