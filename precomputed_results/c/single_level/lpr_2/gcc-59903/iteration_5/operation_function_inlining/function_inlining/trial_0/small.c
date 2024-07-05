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

unsigned fn3(p1) { 
    unsigned char q[7][7];
    struct i r;
    unsigned s;
    struct i v = {0x15L, -5L};
    int w;
    int a;

    short p4 = q[0][0];
    if (p4 ^ v.k)
        ;
    else
        v = n[1];

    for (; w; w += 1) {
        for (unsigned p3 = 0; p3 <= 39; ++p3) {
            for (int p2_j = 0; p2_j <= 2; p2_j += 2) {
                n[0] = v;
                v.l = m[p2_j];
                struct i b;
                if (!n[0].j)
                    ;
                else {
                    w = p1 > v.l ? p1 : p1 << 2;
                    for (; a; a += 1)
                        n[0] = b;
                }
            }
        }
    }

    if (fn1(n[0].l, 2) && p1.k)
        ;
    return p1;
}

int main() {}