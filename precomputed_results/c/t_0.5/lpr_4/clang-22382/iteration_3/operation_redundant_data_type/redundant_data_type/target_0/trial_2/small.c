static int fn1(unsigned p1, int p5_i) {
    int p5_i = p5_i;
w:
    goto w;
}

unsigned fn2() {
    int p;
    int r;
    fn1(0, p);
    for (;;) {
        p = r = p;
    }
}

int main() {}
