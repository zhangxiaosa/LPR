struct original_data_type {
    signed i;
    long j;
    unsigned k;
};

static void fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                signed i, unsigned k) {

w:
    goto w;
}

unsigned fn2(unsigned p1) {
    signed i;
    unsigned k;
    int q;
    fn1(p1, l, 3, p, i, k);
    for (;;) {
        signed i;
        unsigned k;
        p = r = p;
    }
}
