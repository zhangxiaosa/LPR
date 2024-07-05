#include <stdio.h>

char fn2(char p1, int p2_int) { return p1; }

short fn3(short p1, short p2_short) { return p2_short; }

int g;
int u;
int v[1][4];

int fn10(int p1, int p2, int p3, int p4) {
  short d_ = 2;
  for (; u < 51; ++u) {
    v[0][3] = fn3(4, (short)d_);
    d_ = (short)fn2(v[0][3], 3) + 0x9EE7F9D1C772505B;
  }
  g = v[0][3];
  return 3;
}

short fn11() {
  fn10(6, 255, 1, 0);
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", g);
  return 0;
}