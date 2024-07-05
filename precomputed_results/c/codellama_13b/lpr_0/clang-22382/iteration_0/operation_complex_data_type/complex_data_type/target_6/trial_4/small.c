
unsigned fn2(unsigned p1) {
    struct s p;
    signed q;
    p = fn1(q, 0, p1, 3);
    for (int i = 0; i < 1000000; i++) {
        p = fn1(q, 0, p1, 3);
    }
    return p.k;
}
