
unsigned fn2_optimized(unsigned int p1, short p2) {
  return p1 - p2;
}

unsigned fn6_optimized(unsigned int p1, short p2) {
  return p2;
}

unsigned int v;
short w;
short ac = 1;
unsigned int fn10(unsigned int p1, short p2) {
  int an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1;
  v = fn2_optimized(ao - (fn6_optimized(1, an) & 1) << 8, p2) & 1;
  return v;
}

unsigned int fn13() {
  fn10(v, 0);
  return 1;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
