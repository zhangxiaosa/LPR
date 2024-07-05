char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }
unsigned p;
void fn5(p1) { p = p1; }
void fn6(p1) { fn5(p1); }
unsigned t;
unsigned u;
unsigned v_00;
unsigned fn8(char, int);
unsigned fn9(int, int, int, unsigned, int);
int fn10(int, unsigned, unsigned, int);
short fn11() {
  char a = 0xFBL;
  fn8(t, a);
  return 0L;
}
unsigned fn8(char p1, int p2) {
  fn9(p2, p2, t, 18446744073709551613UL, t);
  return p1;
}
unsigned fn9(int p1, int p2, int p3, unsigned p4, int p5) {
  fn10(6, 255UL, 1, p1);
  return p2;
}
int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    e[0] = 0x9EE7F9D1C772505BLL;
    e[1] = 0x9EE7F9D1C772505BLL;
    e[2] = 0x9EE7F9D1C772505BLL;
    e[3] = 0x9EE7F9D1C772505BLL;
    e[4] = 0x9EE7F9D1C772505BLL;
    e[5] = 0x9EE7F9D1C772505BLL;
    e[6] = 0x9EE7F9D1C772505BLL;
    e[7] = 0x9EE7F9D1C772505BLL;
    e[8] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v_00 = fn3(4L, d), 3), e[0]);
    d = fn4(fn2(v_00 = fn3(4L, d), 3), e[1]);
    d = fn4(fn2(v_00 = fn3(4L, d), 3), e[2]);
    d = fn4(fn2(v_00 = fn3(4L, d), 3), e[3]);
    d = fn4(fn2(v_00 = fn3(4L, d), 3), e[4]);
    d = fn4(fn2(v_00 = fn3(4L, d), 3), e[5]);
    d = fn4(fn2(v_00 = fn3(4L, d), 3), e[6]);
    d = fn4(fn2(v_00 = fn3(4L, d), 3), e[7]);
    d = fn4(fn2(v_00 = fn3(4L, d), 3), e[8]);
  }
  return 3;
}
int main() {
  fn11();
  fn6(v_00);
  printf("checksum = %X\n", p);
  return 0;
}