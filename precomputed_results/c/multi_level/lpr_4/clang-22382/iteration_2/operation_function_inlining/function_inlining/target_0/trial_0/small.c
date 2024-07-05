struct h {
    int i;
    long j;
    int k;
};

unsigned fn2() {
    struct h p;
    p.k;
    while (1) {
        struct h r;
        p = r = p;
    }
}

int main() {}
