#include <stdio.h>

short int fn2(short int p1, int p2) { return p1; }

short int fn3(short int p1, short int p2) { return p2; }

unsigned p;
unsigned u;
unsigned v[1][4];

int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d_ = 2;
  for (; u < 51; ++u) {
    d_ = fn2(v[0][3] = fn3(4, d_), 3) + 0x9EE7F9D1C772505BLL;
  }
  return 3;
}

short int fn11() {
  fn10(6, 255UL, 1, 0);
  return 0;
}

int main() {
  int j_;
  fn11();
  for (j_ = 0; j_ < 4; j_++) {
    p = v[0][j_];
  }
  printf("checksum = %Xu\n", p);
  return 0;
}