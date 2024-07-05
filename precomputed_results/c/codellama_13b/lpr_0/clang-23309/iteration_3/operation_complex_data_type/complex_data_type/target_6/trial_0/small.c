
unsigned fn2(unsigned p1, short p2) { return p1 - p2; }
unsigned fn6(unsigned p1, short p2) { return p2; }

unsigned fn10() {
  unsigned int v = 1;
  short int w = 1;
  unsigned int an = 250;
  unsigned int p2 = ac || w == 0x294A85636008822D;
  v = fn2((short int)0xBCD1 - 1 << 8, p2) & 1;
  return v;
}

unsigned fn13() {
  fn10();
  return 1;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
