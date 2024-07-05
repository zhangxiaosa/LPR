short fn4(p1) { return p1; }

short t;
short v;
short ac = 1;

int main() {
  short an;
  if (an = 250) {
    t = ac || (an = 2) == 0x294A85636008822LL;
    if (0xBCD1LL - fn4(1 - (int)an) - t & 1U)
      v = 1;
  }
  printf("checksum = %hx\n", v);
  return 0;
}