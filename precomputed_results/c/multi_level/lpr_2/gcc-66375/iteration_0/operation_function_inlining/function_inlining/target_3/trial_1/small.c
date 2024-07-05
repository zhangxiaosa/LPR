#include <stdio.h>

typedef short c;
typedef int d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

c fn3(c p1, c p2) { return p2; }
g fn4(g p1, g p2) { return p1 + p2; }

f p;
void fn5(g p1) { p = p1; }
void fn6(g p1) { fn5(p1); }
void fn7(g p1, char *p2, int p3) { fn6(p1); }

f t;
g u;
g v[1][4];

e fn8(char, int);
g fn9(unsigned, unsigned, int, unsigned, int);

c fn11() {
  char a = 0xFBL;
  int b = 0L;
  fn8(t, a);
  return b;
}

e fn8(char p1, int p2) {
  fn9(p2, p2, t, 18446744073709551613UL, t);
  return p1;
}

g fn9(unsigned p1, unsigned p2, int p3, unsigned p4, int p5) {
  e c = 255UL;
  int d = 2L;
  for (; u < 51; ++u) {
    g e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn4(v[0][3] = fn3(4L, d), e[0]);
  }
  return p2;
}

int main() {
  int i, j;
  int f = 0;
  fn11();
  for (i = 0; i < 1; i++)
    for (j = 0; j < 4; j++)
      fn6(v[i][j]);
  printf("checksum = %X\n", p);
  return 0;
}