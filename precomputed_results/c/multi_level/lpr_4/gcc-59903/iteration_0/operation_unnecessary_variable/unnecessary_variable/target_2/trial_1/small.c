char fn1(unsigned p1, int p2) {
    return p1 > p2 ? p1 : p1 << p2;
}

struct i {
    int j;
    int k;
    int l;
};

unsigned m[4];
struct i fn2(int p1, struct i p2, unsigned p3, short p4) {
    struct i v = {0x15L, -5L};
    int w;
    int a;
    if (p4 ^ v.k)
        ;
    else
        v = {0x15L, -5L};
    for (; w; w += 1)
        for (p3 = 0; p3 <= 39; ++p3)
            for (p2.j = 0; p2.j <= 2; p2.j += 1) {
                v.l = m[p2.j];
                if (!v.j)
                    ;
                else {
                    w = fn1(v.l, 2) && p2.k;
                }
            }
    return p2;
}

unsigned fn3(p1) {
    struct i r;
    unsigned s;
    if (fn2(p1, r, s, 0), p1)
        ;
    return p1;
}

int main() {
}
