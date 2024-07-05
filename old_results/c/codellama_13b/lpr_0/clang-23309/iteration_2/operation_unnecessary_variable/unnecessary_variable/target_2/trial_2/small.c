
unsigned fn2_optimized(unsigned p1, short p2) { return p1 - p2; }
unsigned fn5(short p1, short p2) { return p2; }
unsigned fn6_optimized(unsigned p1, short p2) { return p2; }
unsigned p;
void fn9(unsigned p1, char *p2) { p = p1; }
unsigned v;
short w;
short ac = 1;
unsigned fn10(unsigned p1, short p2) {
  p2 = fn5(ac, ac) || (w) == 0x294A85636008822D;
  short ao = 0xBCD1;
  v = fn2_optimized(ao - (fn6_optimized(1, w) & 1) << 8, p2) & 1;
  return v;
}
unsigned fn13() {
  fn10(v, v);
  return 1;
}
int main() {
  fn13();
  fn9(v, "g_170");
  printf("checksum = %X\n", p);
  return 0;
}
