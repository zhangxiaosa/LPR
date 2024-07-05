#include <stdio.h>

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }

unsigned p;

void fn5(p1) { p = p1; }

void fn7(unsigned p1, char *p2, int p3) { fn5(p1); }

unsigned t;

unsigned u;

unsigned v[1][4];

typedef char a;
typedef short c;
typedef int d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

e fn8(char, int);

g fn9(unsigned, unsigned, int, unsigned, int);

d fn10(int, unsigned, unsigned, int);

short fn11() {
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
  fn10(6, c, 1, p1);
  return p2;
}

d fn10(int p1, unsigned p2, unsigned p3, int p4) {
  d d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
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
  fn1(p, f);
  return 0;
}