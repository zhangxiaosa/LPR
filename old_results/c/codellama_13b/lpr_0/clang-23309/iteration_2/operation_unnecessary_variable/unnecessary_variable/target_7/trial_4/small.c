
unsigned fn10(unsigned p1, short p2) {
  int an = 250;
  p2 = 0;
  short ao = 0xBCD1;
  return fn2_optimized(ao - (fn6_optimized(1, an) & 1) << 8, p2) & 1;
}
unsigned fn13() {
  return 1;
}
int main() {
  fn13();
  printf("checksum = %X\n", 0);
  return 0;
}
