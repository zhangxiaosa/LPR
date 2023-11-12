unsigned fn2(unsigned p1, unsigned p2) { return p1; }

long f;
short g;
short a = 1;

int main() {
    int c;
    long checksum = f;

    // Iteration 1
    g = 3;
    if (c = 250UL) {
        a || (c = g);
        short d = 0xBCD1;
        if (fn1(d, fn2(1 - c, 0xECL)) - a & 1UL)
            f = 1UL;
    }

    // Iteration 2
    g = 2;
    if (c = 250UL) {
        a || (c = g);
        short d = 0xBCD1;
        if (fn1(d, fn2(1 - c, 0xECL)) - a & 1UL)
            f = 1UL;
    }

    // Iteration 3
    g = 1;
    if (c = 250UL) {
        a || (c = g);
        short d = 0xBCD1;
        if (fn1(d, fn2(1 - c, 0xECL)) - a & 1UL)
            f = 1UL;
    }

    printf("checksum = %lX\n", checksum);
    return 0;
}