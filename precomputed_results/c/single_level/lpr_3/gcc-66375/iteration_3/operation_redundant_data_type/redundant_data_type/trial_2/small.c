signed char fn2(signed char p1, int p2) { return p1; }
short int fn3(short int p1, short int p2) { return p2; }
unsigned int fn4(unsigned int p1, unsigned int p2) { return p1 + p2; }
unsigned int p;
void fn5(p1) { p = p1; }
void fn7(unsigned int p1, char *p2, int p3) { fn5(p1); }
unsigned int t;
unsigned int u;
unsigned int v[1][4];
unsigned int fn8(signed char, int);
unsigned int fn9(unsigned int, int, int);
int fn10(int, unsigned int, unsigned int, int);
int fn11() {
  signed char a = 0xFBL;
  int b = 0L;
  fn8(t, a);
  return b;
}
unsigned int fn8(signed char p1, int p2) {
  fn9(p2, t, t);
  return p1;
}
unsigned int fn9(unsigned int p1, int p2, int p4) {
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
    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  }
  return 3;
}
int main() {
  int i, j;
  int f = 0;
  fn11();
  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      fn7(v[i][j], "g_1729[i][j]", f);
  printf("checksum = %X\n", p);
  return 0;
}