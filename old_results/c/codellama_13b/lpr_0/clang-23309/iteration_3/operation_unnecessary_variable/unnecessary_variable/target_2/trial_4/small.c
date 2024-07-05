
unsigned an = 250;
unsigned v;
short w;
short ac = 1;

unsigned fn10(short p2) {
    p2 = ac || (an = w) == 0x294A85636008822D;
    v = (short)0xBCD1 - (fn6(1, an) & 1) << 8;
    return v;
}

int main() {
    unsigned an = 250;
    unsigned v;
    short w;
    short ac = 1;
    unsigned p2 = ac || (an = w) == 0x294A85636008822D;
    v = (short)0xBCD1 - (fn6(1, an) & 1) << 8;
    printf("checksum = %X\n", v);
    return 0;
}
