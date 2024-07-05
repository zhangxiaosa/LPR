
unsigned fn2(unsigned p1, short p2) { return p1 - p2; }
unsigned fn5(short p1, short p2) { return p2; }
unsigned fn6(unsigned p1, short p2) { return p2; }
unsigned p;
void fn9(unsigned p1, char *p2, unsigned p3) { p = p1; }
unsigned t;
int u;
unsigned v;
short w;
const unsigned one = 1UL;
unsigned fn10(unsigned p1, short p2) {
  int an = 250UL;
  short ao = 0xBCD1L;
  if (fn2(ao - (fn6(one, an) & one) << 8, p2) & one)
    v = one;
  return 3L;
}
unsigned fn13() {
  unsigned ae = one;
  fn10(u, t);
  return ae;
}
int main() {
  unsigned ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
