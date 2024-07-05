#include <stdio.h>

short fn2(short p1, unsigned int p2) { return p1; }

unsigned int fn3(short p1, short p2) { return p2; }

unsigned int p;
unsigned int u;
unsigned int v[1][4];

unsigned int fn10(unsigned int p1, int p2, int p3, unsigned int p4) {
  for (; u < 51U; ++u) {
    unsigned int e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BUL;
    v[0][3] = fn3(4L, v[0][3]);
  }
  return 3;
}

short fn11() {
  fn10(6UL, 255UL, 1, 0UL);
  return 0L;
}

int main() {
  unsigned int j_;
  fn11();
  for (j_ = 0; j_ < 4; j_++)
    p = v[0][j_];
  printf("checksum = %Xu\n", p);
  return 0;
}