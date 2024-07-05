#include <iostream>

char fn1(unsigned p1, int p2) {
    return p1 > p2 ? p1 : p1 << p2;
}

struct i {
    int j;
    int k;
    int l;
};

unsigned m[4];
struct i n[2];

struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
    int v_j = 0x15L;
    int v_l;
    int w;
    int a;

    if (p4 ^ -5L) {
        // TODO: Insert necessary logic for the "if" case
    } else {
        v_j = n[1].j;
    }

    for (; w; w += 1) {
        for (p3 = 0; p3 <= 39; ++p3) {
            for (p2.j = 0; p2.j <= 2; p2.j += 1) {
                n[0].j = v_j;
                n[0].l = v_l;
                v_l = m[p2.j];
                struct i b;

                if (!n[0].j) {
                    // TODO: Insert necessary logic for the "if" case
                } else {
                    w = fn1(n[0].l, 2) && p2.k;
                    for (; a; a += 1) {
                        n[0] = b;
                        // TODO: Insert necessary logic for the loop body
                    }
                }
            }
        }
    }
    return p2;
}

int main() {
    unsigned char q[7][7];
    struct i r;
    
    // Inlined code from fn3
    {
        // TODO: Insert necessary logic from fn2 here and modify the variables if needed
        int p1 = 0; // Replace with actual value for p1
        
        int v_j = 0x15L;
        int v_l;
        int w;
        int a;

        if (p4 ^ -5L) {
            // TODO: Insert necessary logic for the "if" condition
        } else {
            v_j = n[1].j;
        }

        for (; w; w += 1) {
            for (p3 = 0; p3 <= 39; ++p3) {
                for (p2.j = 0; p2.j <= 2; p2.j += 1) {
                    n[0].j = v_j;
                    n[0].l = v_l;
                    v_l = m[p2.j];
                    struct i b;

                    if (!n[0].j) {
                        // TODO: Insert necessary logic for the "if" case
                    } else {
                        w = fn1(n[0].l, 2) && p2.k;
                        for (; a; a += 1) {
                            n[0] = b;
                            // TODO: Insert necessary logic for the loop body
                        }
                    }
                }
            }
        }
        // End of inlined code from fn2
    }
    
    return 0;
}