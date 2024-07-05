
unsigned fn10_optimized(unsigned p1, short p2) {
  int an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1;
  v = fn2_optimized(ao - (fn6_optimized(1, an) & 1) << 8, p2) & 1;
  return v;
}
unsigned fn13_optimized() {
  fn10_optimized(v, 0);
  return 1;
}
int main_optimized() {
  fn13_optimized();
  printf("checksum = %X\n", v);
  return 0;
}
