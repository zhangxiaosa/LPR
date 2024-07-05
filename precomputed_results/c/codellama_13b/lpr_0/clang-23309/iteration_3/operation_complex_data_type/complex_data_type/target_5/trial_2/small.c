
unsigned fn2(unsigned p1_low, unsigned p1_high, short p2_low, short p2_high) {
  return p1_low - p2_low;
}

unsigned fn6(unsigned p1_low, unsigned p1_high, short p2_low, short p2_high) {
  return p2_low;
}

unsigned v;
short w;
short ac = 1;
unsigned fn10(unsigned p1_low, unsigned p1_high, short p2_low, short p2_high) {
  unsigned an = 250;
  p2_low = ac || (an = w) == 0x294A85636008822D;
  v = fn2(p1_low, p1_high, p2_low, p2_high) & 1;
  return v;
}

unsigned fn13() {
  fn10(v, 0, 0, 0);
  return 1;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
