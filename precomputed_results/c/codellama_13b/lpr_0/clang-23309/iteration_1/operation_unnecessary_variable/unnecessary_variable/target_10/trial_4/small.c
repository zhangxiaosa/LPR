
unsigned fn2(unsigned p1, short p2) { return p1 - p2; }
unsigned fn5(short p1, short p2) { return p2; }
unsigned fn6(unsigned p1, short p2) { return p2; }
unsigned p;
void fn9(unsigned p1, char *p2) { p = p1; }
unsigned v;
short ab;
short ac = 1L;
unsigned fn10(unsigned p1, short p2) {
  int an = 250UL; // an is not used in the program, so we can replace it with a
                  // constant
  p2 = fn5(ab, ac) || (an = 0x294A85636008822D;
  short ao = 0xBCD1L;
  v = (fn2(ao - (fn6(1L, an) & 1UL) << 8, p2) & 1UL) ? 1UL : 3L;
  return v;
}
unsigned fn13() {
  fn10(v, v);
  return 1UL; // return any value since ae is not used
}
int main() {
  fn13();
  fn9(v, "g_170"); // ap is not used, so we can remove it from the function
  printf("checksum = %X\n", p);
  return 0;
}
