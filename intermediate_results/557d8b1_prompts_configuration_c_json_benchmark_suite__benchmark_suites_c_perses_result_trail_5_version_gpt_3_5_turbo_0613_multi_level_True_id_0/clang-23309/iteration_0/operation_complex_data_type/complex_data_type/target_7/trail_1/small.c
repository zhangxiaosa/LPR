unsigned fn1(unsigned p1, unsigned p2) {
    return p1 - p2;
}

unsigned fn2(unsigned p1, unsigned p2) {
    return p1;
}

unsigned e;
unsigned long f;
short g;
short a = 1;

int main() {
    short h = 0;
    unsigned long b = 1;
    int c;

    for (g = 3; g; g -= 1) {
        if (c == 250UL) {
            h = a || (c == 0x294A85636008822LL);
            if (fn1(0xBCD1, fn2(1 - c, 0xECL)) - h & 1UL)
                f = 1UL;
        }
    }

    e = f;

    printf("checksum = %X\n", e);

    return 0;
}