
unsigned fn2(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned p;
void fn9(unsigned p1, char *p2, unsigned p3) { p = p1; }
unsigned t;
unsigned u;
unsigned v;
unsigned w;
unsigned ab;
unsigned ac = 1UL;
unsigned fn10(unsigned, unsigned);
unsigned fn13() {
  unsigned ae = 1UL;
  fn10(u, t);
  return ae;
}
unsigned fn10(unsigned p1, unsigned p2) {
  unsigned am = 1UL;
  unsigned an;
  an = 250UL;
  p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
  unsigned ao = 0xBCD1L;
  if (fn2(ao - (fn6(am, an) & 1UL) << 8, p2) & 1UL)
    v = 1UL;
  return 3UL;
}
int main() {
  unsigned ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
