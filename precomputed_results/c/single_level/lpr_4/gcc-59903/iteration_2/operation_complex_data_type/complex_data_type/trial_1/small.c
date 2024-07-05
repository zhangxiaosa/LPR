typedef unsigned char d;
typedef unsigned e;

d fn1(d p1, int p2) {
    return p1 > p2 ? p1 : p1 << p2;
}

signed n_0_j[2];
signed n_0_k[2];
int n_0_l[2];

struct i {
    signed j;
    signed k;
    int l;
};

e m[4];

signed r_j;
signed r_k;
int r_l;

struct i n[2];

signed p2_j;
signed p2_k;
int p2_l;

e fn2(int, signed, e, short);

d fn3(p1) {
    d q[7][7];
    signed r;
    e s;
    if (fn2(p1, r, s, q[0][0]), p1)
        ;
    return p1;
}

signed fn2(int p1, signed p2_j, e p3, short p4) {
    signed v_j = 0x15L;
    signed v_k = -5L;
    int v_l;
    int w;
    int a;
    if (p4 ^ v_k)
        ;
    else
        v_j = n_0_j[1];
    for (; w; w += 1)
        for (p3 = 0; p3 <= 39; ++p3)
            for (p2_j = 0; p2_j <= 2; p2_j += 1) {
                n_0_j[0] = v_j;
                v_l = m[p2_j];
                signed b_j;
                signed b_k;
                int b_l;
                if (!n_0_j[0])
                    ;
                else {
                    w = fn1(v_l, 2) && p2_k;
                    for (; a; a += 1)
                        n_0_j[0] = b_j;
                }
            }
    signed p2;
    return p2;
}

int main() {
}
