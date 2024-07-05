typedef char a;
typedef short c;
typedef int d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;
void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }
char fn2(char p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
unsigned int fn4(unsigned int p1, unsigned int p2) { return p1 + p2; }
unsigned int p;
void fn5(char p1) { p = p1; }
void fn6(char p1) { fn5(p1); }
void fn7(unsigned int p1, char *p2, int p3) { fn6(p1); }
unsigned int t;
unsigned int u;
unsigned int v[1][4];
unsigned int fn8(char, int);
short fn11() {
  char a = 0xFBL;
  int b = 0L;
  fn8(t, a);
  return b;
}
unsigned int fn8(char p1, int p2) {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned int e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    v[0][3] = fn3(4L, d);
    d = fn2(v[0][3], 3);
    d = fn4(d, e[0]);
  }
  return p1;
}
int main() {
  int i, j;
  int f = 0;
  fn11();
  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      fn7(v[i][j], "g_1729[i][j]", f);
  fn1(p, f);
  return 0;
}