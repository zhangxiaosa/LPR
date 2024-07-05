char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }
int p;
void fn5(p1) { p = p1; }
void fn6(p1) { fn5(p1); }
int t;
unsigned u;
int v_0_3;
int fn8(char, int);
int fn9(int, int, int, int, int);
int fn10(int, int, int, int);
short fn11() {
  char a = 0xFBL;
  fn8(t, a);
  return 0;
}
int fn8(char p1, int p2) {
  fn9(p2, p2, t, 18446744073709551613UL, t);
  return p1;
}
int fn9(int p1, int p2, int p3, int p4, int p5) {
  int c = 255UL;
  fn10(6, c, 1, p1);
  return p2;
}
int fn10(int p1, int p2, int p3, int p4) {
  int d = 2L;
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
  printf("checksum = %X\n", p);
  return 0;
}