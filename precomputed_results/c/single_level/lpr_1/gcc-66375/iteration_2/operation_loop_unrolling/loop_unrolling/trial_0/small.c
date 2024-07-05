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
  unsigned e[9];
  int i;
  for (i = 0; i < 9; i++)
    e[i] = 0x9EE7F9D1C772505BLL;
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
  for (u = 1; u < 51; ++u) {
    unsigned e_loop[9];
    int i_loop;
    for (i_loop = 0; i_loop < 9; i_loop++)
      e_loop[i_loop] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e_loop[0]);
  }
  return 3;
}
int main() {
  fn11();
  fn6(v_0_3);
  printf("checksum = %X\n", p);
  return 0;
}