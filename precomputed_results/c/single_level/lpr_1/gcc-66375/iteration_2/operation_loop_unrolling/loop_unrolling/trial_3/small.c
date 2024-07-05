char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }
unsigned p;
void fn5(p1) { p = p1; }
void fn6(p1) { fn5(p1); }
unsigned t;
unsigned u;
unsigned v_0_3;
unsigned fn9(unsigned, unsigned, int, unsigned, int);
int fn10(int, unsigned, unsigned, int);
short fn11() {
  fn9(0xFBL, 0xFBL, t, 18446744073709551613UL, t);
  return 0;
}
unsigned fn9(unsigned p1, unsigned p2, int p3, unsigned p4, int p5) {
  unsigned c = 255UL;
  fn10(6, c, 1, p1);
  return p2;
}
int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d = 2L;
  for (; u < 45; u += 9) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[1]);
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[2]);
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[3]);
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[4]);
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[5]);
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[6]);
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[7]);
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[8]);
  }
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
  }
  return 3;
}
int main() {
  fn11();
  fn6(v_0_3);
  printf("checksum = %%X\n", p);
  return 0;
}