#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int g;
int u;
int v[1][4];

int fn10(int p1, int p2, int p3, int p4) {
  int d_ = 2;
  for (; u < 51; ++u) {
    v[0][3] = fn3(4, (short)d_);
    d_ = (int)fn2(v[0][3], 3) + 4579764206456583419LL;
  }
  g = v[0][3];
  return 3;
}

short fn11() {
  fn10(6, 255UL, 1, 0);
  return 0;
}

int main() {
  fn11();
  printf("checksum = %Xu\n", g);
  return 0;
}