
unsigned v;
short w;
short ac = 1;
unsigned fn10(unsigned p1, short p2) {
  int an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1;
  v = (ao - (fn6_optimized(1, an) & 1) << 8) & 1;
  return v;
}

unsigned fn13() {
  fn10(v, 0);
  return 1;
}

int main() {
  fn13();
  return 0;
}
