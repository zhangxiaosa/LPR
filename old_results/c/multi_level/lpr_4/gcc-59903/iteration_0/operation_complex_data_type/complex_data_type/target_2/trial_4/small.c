#include <stdio.h>

char fn1(unsigned p1, int p2) {
    return p1 > p2 ? p1 : p1 << p2;
}

int main() {}

// Decomposed struct i
signed j;
signed k;
int l;

// Decomposed unsigned array m
unsigned m[4];

// Decomposed struct i array n
struct i {
    signed j;
    signed k;
    int l;
} n[2];

struct i fn2(int p1, signed p2_j, signed p2_k, unsigned p3, short p4) {
    signed v_j = 0x15L;
    signed v_k = -5L;
    int w;
    int a;

    if (p4 ^ v_k) {
        // do nothing
    } else {
        v_j = n[1].j;
        v_k = n[1].k;
        v_l = n[1].l;
    }

    for (; w; w += 1) {
        for (p3 = 0; p3 <= 39; ++p3) {
            for (p2_j = 0; p2_j <= 2; p2_j += 1) {
                n[0].j = v_j;
                n[0].k = v_k;
                n[0].l = v_l;
                v_l = m[p2_j];

                struct i struct_i;
                if (!n[0].j) {
                    // do nothing
                } else {
                    w = fn1(n[0].l, 2) && p2_k;
                    for (; a; a += 1) {
                        n[0] = struct_i;
                    }
                }
            }
        }
    }

    struct i result;
    result.j = p2_j;
    result.k = p2_k;
    result.l = v_l;

    return result;
}

unsigned fn3(unsigned p1) {
    unsigned char q[7][7];
    signed r_j;
    signed r_k;
    int r_l;
    unsigned s;

    struct i r;
    r.j = r_j;
    r.k = r_k;
    r.l = r_l;

    if (fn2(p1, r.j, r.k, s, q[0][0]), p1) {
        // do nothing
    }

    return p1;
}