unsigned p;
int t;
long v;
short w;
short ac_value = 1;
int main() {
    int an = 250; // Constant propagation
    for (w = 3; w; w -= 1)
        if (an) {
            t = ac_value || (w == 0x294A85636008822DL); // Copy propagation
            short ao = 0xBCD1;
            if ((ao - (fn6(1, an) - 0xECL)) - t & 1)
                v = 1;
        }
    p = v;
    printf("checksum = %X\n", p);
    return 0;
}