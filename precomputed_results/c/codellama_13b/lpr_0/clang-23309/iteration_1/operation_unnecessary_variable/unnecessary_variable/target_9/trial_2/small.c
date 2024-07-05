
unsigned fn2(unsigned p1, short p2) { return p1 - p2; }
unsigned fn5(short p1, short p2) { return p2; }
unsigned fn6(unsigned p1, short p2) { return p2; }
unsigned p;
void fn9(unsigned p1, char *p2) { p = p1; }
unsigned ab = 1L;
unsigned ac = 1L;
unsigned fn10(unsigned p1, short p2) {
  int an = 250UL;
  p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1L;
  p = (fn2(ao - (fn6(1L, an) & 1UL) << 8, p2) & 1UL) ? 1UL : 3L;
  return p;
}
unsigned fn13() {
  fn10(v, v);
  return 1UL;
}
int main() {
  fn13();
  fn9(v, "g_170");
  printf("checksum = %X\n", p);
  return 0;
}
