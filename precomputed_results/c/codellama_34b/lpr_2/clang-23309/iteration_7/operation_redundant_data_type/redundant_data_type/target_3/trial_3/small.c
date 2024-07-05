
unsigned int t;
unsigned int v_int;
unsigned int ac = 1;
unsigned int an = 0x294A;
unsigned int ao = 0xBCD1;

int main() {
    t = ac || (an = 0);
    unsigned int temp = ao - (1 - an);
    v_int = temp - t & 1;
    printf("checksum = %d\n", v_int);
    return 0;
}
