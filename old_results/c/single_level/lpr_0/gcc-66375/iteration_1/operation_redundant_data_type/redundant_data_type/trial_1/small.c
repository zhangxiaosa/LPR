void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }
char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
unsigned int fn4(unsigned int p1, unsigned int p2) { return p1 + p2; }
unsigned int p;
void fn5(p1) { p = p1; }
void fn6(p1) { fn5(p1); }
unsigned int t;
unsigned int u;
unsigned int v_00;
unsigned int fn8(char, int);
unsigned int fn9(unsigned int, unsigned int, int, unsigned int, int);
int fn10(int, unsigned int, unsigned int, int);
short fn11() {
  char a = 0xFBL;
  int b = 0L;
  fn8(t, a);
  return b;
}
unsigned int fn8(char p1, int p2) {
  fn9(p2, p2, t, 18446744073709551613UL, t);
  return p1;
}
unsigned int fn9(unsigned int p1, unsigned int p2, int p3, unsigned int p4, int p5) {
  fn10(6, 255UL, 1, p1);
  return p2;
}
int fn10(int p1, unsigned int p2, unsigned int p3, int p4) {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned int e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn4(fn2(v_00 = fn3(4L, d), 3), e[0]);
  }
  return 3;
}
int main() {
  int f = 0;
  fn11();
  fn6(v_00);
  fn1(p, f);
  return 0;
}