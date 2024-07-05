#include <stdio.h>

short fn2(short p1, int p2) { return p1; }

int fn3(int p1, int p2) { return p2; }

unsigned p;
unsigned u;
unsigned v[1][4];

short fn10(int p1, unsigned p2, unsigned p3, int p4) {
  short d_ = 2;
  for (; u < 51; ++u) {
    short e[9];
    short i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505B;
    d_ = fn2(v[0][3] = fn3(4, d_), 3) + e[0];
  }
  return 3;
}

short fn11() {
  fn10(6, 255UL, 1, 0);
  return 0;
}

int main() {
  int j_;
  fn11();
  for (j_ = 0; j_ < 4; j_++)
    p = v[0][j_];
  printf("checksum = %Xu\n", p);
  return 0;
}