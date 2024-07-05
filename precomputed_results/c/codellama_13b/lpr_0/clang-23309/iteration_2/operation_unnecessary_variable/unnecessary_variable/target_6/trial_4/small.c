
unsigned fn2_optimized(unsigned p1, short p2) { return p1 - p2; }
unsigned fn5(short p1, short p2) { return p2; }
unsigned fn6_optimized(unsigned p1, short p2) { return p2; }

unsigned fn10(unsigned p1, short p2) {
  int an = 250;
  p2 = fn5(ac, ac) || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1;
  return fn2_optimized(ao - (fn6_optimized(1, an) & 1) << 8, p2) & 1;
}

unsigned fn13() {
  return fn10(0, 0);
}

int main() {
  fn13();
  printf("checksum = %X\n", 0);
  return 0;
}
