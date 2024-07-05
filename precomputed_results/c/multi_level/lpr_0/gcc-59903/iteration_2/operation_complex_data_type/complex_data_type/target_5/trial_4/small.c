#include <stdio.h>

char fn1(unsigned p1, int p2) {
    return p1 > p2 ? p1 : p1 << p2;
}

int m_0;
int m_1;
int m_2;
int m_3;

int n_0_j;
int n_0_k;
int n_0_l;
int n_1_j;

int n_i_j;
int n_i_k;
int n_i_l;

unsigned m[4];
int m_i;

int fn2(int p1, int p2_j, int p2_k, int p2_l, unsigned p3, short p4) {
    int v_j;
    v_j = 0x15L;
    int w;
    int a;
    if (p4 ^ -5L) {
        // TODO: Implement the if-statement body
    } else {
        v_j = n_1_j;
    }
    for (; w; w += 1) {
        for (p3 = 0; p3 <= 39; ++p3) {
            for (int i_j = 0; i_j <= 2; i_j += 1) {
                n_0_j = v_j;
                n_0_k = 5L;
                if (!n_0_j) {
                    // TODO: Implement the if-statement body
                } else {
                    w = fn1(n_0_l, 2) && p2_k;
                    for (; a; a += 4) {
                        n_0_j = v_j;
                    }
                    n_0_l = m[p2_j];
                }
            }
        }
    }
    p2_j = n_i_j;
    p2_k = n_i_k;
    p2_l = n_i_l;
    // TODO: Implement remaining code and return p2;
}

unsigned fn3(int p1) {
    unsigned char q[7][7];
    int r_j;
    int r_k;
    int r_l;
    int result = fn2(p1, r_j, r_k, r_l, 0, q[0][0]);
    if (result) {
        return p1;
    }
    return 0;
}

int main() {
    // TODO: Implement the main function
}