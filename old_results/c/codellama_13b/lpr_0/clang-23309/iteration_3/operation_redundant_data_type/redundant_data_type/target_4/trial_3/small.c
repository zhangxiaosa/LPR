
unsigned fn2(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p2; }

unsigned v;
unsigned w;
unsigned ac = 1;
unsigned fn10(unsigned p1, unsigned p2) {
  unsigned an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  unsigned ao = 0xBCD1;
  v = fn2(ao - (fn6(1, an) & 1) << 8, p2) & 1;
  return v;
}

unsigned fn13() {
  fn10(v, 0);
  return 1;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
