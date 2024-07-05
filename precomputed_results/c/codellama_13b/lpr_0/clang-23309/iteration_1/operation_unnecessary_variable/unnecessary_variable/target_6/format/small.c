
unsigned fn2(unsigned p1, short p2) { return p1 - p2; }
unsigned fn5(short p1, short p2) { return p2; }
unsigned fn6(unsigned p1, short p2) { return p2; }
unsigned p;
void fn9(unsigned p1, char *p2) { p = p1; }
unsigned t;
int u;
unsigned v;
short w;
short ab;
short ac = 1L;
unsigned fn10(unsigned p1, short p2) {
  int an = 250UL; // an is not used in the program, so we can replace it with a constant
  p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1L;
  if (fn2(ao - (fn6(1L, an) & 1UL) << 8, p2) & 1UL)
    v = 1UL;
  return 3L;
}
unsigned fn13() {
  fn10(u, t);
  return 1UL; // return any value since ae is not used
}
int main() {
  unsigned ap = 0;
  fn13();
  fn9(v, "g_170"); // ap is not used, so we can remove it from the function
  printf("checksum = %X\n", p);
  return 0;
}
