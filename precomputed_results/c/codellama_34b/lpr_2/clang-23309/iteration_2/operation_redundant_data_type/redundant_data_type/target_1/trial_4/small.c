
#define LONG_CONSTANT 0x294A85636008822DLL
#define UNSIGNED_CONSTANT 0xECL
#define SHORT_CONSTANT 0xBCD1L

int fn2(int p1, int p2) {
    return p1 - p2;
}

unsigned char fn4(unsigned p1, unsigned p2) {
    return p1;
}

int main() {
    int p = 0;
    int t = 0;
    int v = 0;
    short w = 0;
    unsigned int ac = 1;

    for (w = 3; w; w -= 1) {
        short an = 250;
        t = ac || (an = w) == LONG_CONSTANT;
        short ao = SHORT_CONSTANT;
        if (fn2(ao - fn4(1 - an, UNSIGNED_CONSTANT), t) & 1)
            v = 1;
    }

    p = v;
    printf("checksum = %d\n", p);
    return 0;
}
