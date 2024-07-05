
unsigned int fn2(unsigned int p1, short p2) {
  return p1 - p2;
}

unsigned int fn6(unsigned int p1, short p2) {
  return p2;
}

unsigned short w;
unsigned short ac = 1;

unsigned int fn10(unsigned int p2) {
  unsigned int an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  return fn2((short)0xBCD1 - (fn6(1, an) & 1) << 8, p2) & 1;
}

int main() {
  printf("checksum = %X\n", fn10(0));
  return 0;
}
