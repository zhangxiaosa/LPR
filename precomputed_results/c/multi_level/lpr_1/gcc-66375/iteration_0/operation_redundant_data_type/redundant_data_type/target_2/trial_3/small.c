#include <stdio.h>

int d_;

char fn2(short p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned p;
unsigned u;
unsigned v[1][4];

int fn10(int p1, unsigned p2, unsigned p3) {
  for (; u < 51U; ++u) {
    int i;
    d_ = fn2(v[0][3] = fn3(4L, d_), 3);
  }
  return 3;
}

short fn11() {
  fn10(6L, 255UL);
  return 0L;
}

int main() {
  unsigned p;
  unsigned u;
  unsigned v[1][4];

  fn11();
  for (int j_ = 0; j_ < 4; j_++)
    p = (unsigned)v[0][j_];

  return 0;
}