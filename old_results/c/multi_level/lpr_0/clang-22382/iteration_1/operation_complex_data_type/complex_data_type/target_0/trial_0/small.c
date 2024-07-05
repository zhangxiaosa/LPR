struct original_data_type {
    int i;
    long j;
    unsigned k;
};

static struct original_data_type fn1(unsigned p1, short p2, int p5_i, long p5_j, unsigned p5_k) {
    p5_k;
w:
    goto w;
}

unsigned fn2() {
    int p_i;
    long p_j;
    unsigned p_k;
    struct original_data_type p;

    fn1(0, 0, p.i, p.j, p.k);

    for (;;) {
        int r_i;
        long r_j;
        unsigned r_k;
        struct original_data_type r;
        p_i = r_i = p.i;
        p_j = r_j = p.j;
        p_k = r_k = p.k;
    }
}

int main() {}
