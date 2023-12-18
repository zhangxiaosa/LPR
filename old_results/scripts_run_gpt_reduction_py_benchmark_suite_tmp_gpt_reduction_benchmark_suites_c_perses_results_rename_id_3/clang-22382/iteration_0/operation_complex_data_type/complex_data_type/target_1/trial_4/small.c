unsigned int l;

static unsigned int fn1(unsigned int p1, short int p2, unsigned int p3, unsigned int p4) {
    w:
    goto w;
}

unsigned int fn2(unsigned int p1) {
    unsigned int p;
    int q;
    fn1(q, l, p1, 3);
    for (;;) {
        struct h r;
        // Removed the assignment of p = r
    }
}

int main() {}
