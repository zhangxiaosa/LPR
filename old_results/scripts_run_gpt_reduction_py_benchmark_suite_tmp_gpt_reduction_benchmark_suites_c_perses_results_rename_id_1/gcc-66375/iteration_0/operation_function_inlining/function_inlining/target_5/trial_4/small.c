#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

void fn5(int p1) { p = p1; }

void fn6(int p1) { fn5(p1); }

void fn7(int p1, char *p2, int p3) { fn5(p1); }

int f;
int v[1][4];
int p;

int fn9(int p1, int p2, int p3, int p4, int p5) {
  int c = 255;
  fn10(6, c, 1, p1);
  return p2;
}

int fn10(int p1, int p2, int p3, int p4) {
  int d = 2;
  for (; u < 51; ++u) {
    int e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505B;
    d = (fn2(v[0][3] = fn3(4, d), 3) + e[0]);
  }
  return 3;
}

int fn11() {
  char a = 0xFBL;
  fn9(0L, 0L, t, 18446744073709551613UL, t);
  return 0L;
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