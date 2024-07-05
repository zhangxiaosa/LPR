
unsigned ac = 1;
int main() {
    short an = 0x294A;
    short ao = 0xBCD1;
    int tmp2 = ao - (1 - an);
    int tmp3 = tmp2 - 1 & 1;
    int v_int = tmp3;
    printf("checksum = %d\n", v_int);
    return 0;
}
