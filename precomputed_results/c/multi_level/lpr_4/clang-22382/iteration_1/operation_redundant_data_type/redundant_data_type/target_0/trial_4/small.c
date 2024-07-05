struct h {
    signed int i;
    long j;
    unsigned int k;
};

static struct h fn1(unsigned int p3, struct h p5) {
    p5.k;
    while (1) {
    }
}

unsigned int fn2() {
    struct h p;
    int q;
    fn1(q, p);
    while (1) {
        struct h r;
        p = r = p;
    }
}

int main() {}
